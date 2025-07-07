#include <tencentcloud/core/TencentCloud.h>
#include <tencentcloud/cvm/v20170312/CvmClient.h>
#include <tencentcloud/cvm/v20170312/model/DescribeInstancesRequest.h>
#include <iostream>
#include <atomic>
#include <chrono>
#include <vector>
#include <mutex>
#include <condition_variable>
#include <algorithm>
#include <numeric>
#include <cmath>
#include <thread>

using namespace TencentCloud;
using namespace TencentCloud::Cvm::V20170312;
using namespace TencentCloud::Cvm::V20170312::Model;
using namespace std;

// ========================== 统计变量 =============================

atomic<int> completed_requests(0);
atomic<int> failed_requests(0);
vector<long> request_latencies;
mutex latency_mutex;
condition_variable cv;

// ========================== 限速器 =============================

class RateLimiter {
public:
    RateLimiter(int qps)
        : interval_ns(1000000000 / qps), last_time(chrono::steady_clock::now()) {}

    void acquire() {
        auto now = chrono::steady_clock::now();
        auto expected = last_time + interval_ns;
        if (now < expected) {
            this_thread::sleep_until(expected);
        }
        last_time = chrono::steady_clock::now();
    }

private:
    chrono::nanoseconds interval_ns;
    chrono::steady_clock::time_point last_time;
};

// ========================== 回调函数生成器 =============================

function<void(const CvmClient*, const DescribeInstancesRequest&,
              CvmClient::DescribeInstancesOutcome, shared_ptr<const AsyncCallerContext>)>
make_callback(int request_id, chrono::steady_clock::time_point start_time) {
    return [request_id, start_time](const CvmClient*, const DescribeInstancesRequest&,
                                    CvmClient::DescribeInstancesOutcome outcome,
                                    shared_ptr<const AsyncCallerContext>) {
        auto end_time = chrono::steady_clock::now();
        long latency = chrono::duration_cast<chrono::milliseconds>(end_time - start_time).count();

        {
            lock_guard<mutex> lock(latency_mutex);
            request_latencies.push_back(latency);
        }

        if (!outcome.IsSuccess()) {
            failed_requests++;
            cerr << "Request " << request_id << " failed after " << latency << "ms: "
                 << outcome.GetError().PrintAll() << endl;
        }

        int current = ++completed_requests;
        if (current % 100 == 0) {
            cout << "Completed " << current << " requests" << endl;
        }

        if (current == request_latencies.capacity()) {
            cv.notify_one(); // 通知主线程
        }
    };
}

// ========================== 延迟统计函数 =============================

void calculate_stats(double* avg, double* stddev, long* min, long* max) {
    if (request_latencies.empty()) return;

    *min = *max = request_latencies[0];
    long long sum = 0;
    double sum_sq = 0;

    for (long lat : request_latencies) {
        *min = std::min(*min, lat);
        *max = std::max(*max, lat);
        sum += lat;
        sum_sq += static_cast<double>(lat) * lat;
    }

    *avg = static_cast<double>(sum) / request_latencies.size();
    double variance = (sum_sq / request_latencies.size()) - (*avg * *avg);
    *stddev = sqrt(variance);
}

void print_stats(const chrono::steady_clock::time_point& global_start) {
    auto total_time = chrono::duration_cast<chrono::milliseconds>(
        chrono::steady_clock::now() - global_start).count();

    double avg_latency, stddev_latency;
    long min_latency, max_latency;
    calculate_stats(&avg_latency, &stddev_latency, &min_latency, &max_latency);

    cout << "\n======= Pressure Test Results =======" << endl;
    cout << "Total requests:    " << request_latencies.size() << endl;
    cout << "Successful:       " << request_latencies.size() - failed_requests << endl;
    cout << "Failed:           " << failed_requests << endl;
    cout << "Total time:       " << total_time << "ms" << endl;
    cout << "Requests/sec:     " << (request_latencies.size() * 1000.0 / total_time) << " QPS" << endl;
    cout << "Min latency:      " << min_latency << "ms" << endl;
    cout << "Avg latency:      " << avg_latency << "ms" << endl;
    cout << "Max latency:      " << max_latency << "ms" << endl;
    cout << "Latency stddev:   " << stddev_latency << "ms" << endl;
    cout << "==================================\n" << endl;
}

// ========================== 主函数 =============================

int main() {
    TencentCloud::InitAPI();
    Credential cred(getenv("TENCENTCLOUD_SECRET_ID"), getenv("TENCENTCLOUD_SECRET_KEY"));
    CvmClient client(cred, "ap-guangzhou");

    const int TOTAL_REQUESTS = 1000;
    const int QPS_LIMIT = 35;

    request_latencies.reserve(TOTAL_REQUESTS);
    cout << "Starting pressure test with " << TOTAL_REQUESTS << " async requests..." << endl;
    auto global_start = chrono::steady_clock::now();

    RateLimiter limiter(QPS_LIMIT);

    for (int i = 0; i < TOTAL_REQUESTS; ++i) {
        limiter.acquire();  // 限速

        DescribeInstancesRequest req;
        req.SetOffset(0);
        req.SetLimit(5);

        auto request_start = chrono::steady_clock::now();
        client.DescribeInstancesAsync(req, make_callback(i, request_start),
                                      make_shared<AsyncCallerContext>());
    }

    // 等待所有请求完成
    unique_lock<mutex> lock(latency_mutex);
    cv.wait(lock, [] { return completed_requests == request_latencies.capacity(); });

    print_stats(global_start);
    TencentCloud::ShutdownAPI();
    return 0;
}
