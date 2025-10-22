/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include <tencentcloud/core/TencentCloud.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/cvm/v20170312/CvmClient.h>
#include <tencentcloud/cvm/v20170312/model/DescribeInstancesRequest.h>
#include <tencentcloud/cvm/v20170312/model/DescribeInstancesResponse.h>
#include <tencentcloud/cvm/v20170312/model/Instance.h>

#include <iostream>
#include <string>
#include <chrono>
#include <mutex>
#include <condition_variable>
#include <iomanip>

using namespace TencentCloud;
using namespace TencentCloud::Cvm::V20170312;
using namespace TencentCloud::Cvm::V20170312::Model;
using namespace std;

class WaitGroup
{
private:
    std::mutex m_mutex;
    std::condition_variable m_cv;
    int m_count = 0;

public:
    void Add(int delta)
    {
        std::unique_lock<std::mutex> lock(m_mutex);
        m_count += delta;
        if (m_count < 0)
        {
            m_count = 0;
        }
        lock.unlock();
        m_cv.notify_one();
    }

    void Done()
    {
        Add(-1);
    }

    void Wait()
    {
        std::unique_lock<std::mutex> lock(m_mutex);
        m_cv.wait(lock, [this]() { return m_count == 0; });
    }
};


void AsyncWithFuture()
{
    cout << "AsyncWithFuture()" << endl;

    Credential cred = Credential(
        string(getenv("TENCENTCLOUD_SECRET_ID")),
        string(getenv("TENCENTCLOUD_SECRET_KEY"))
    );
    CvmClient cvm_client(cred, "ap-guangzhou");

    DescribeInstancesRequest req = DescribeInstancesRequest();
    req.SetOffset(0);
    req.SetLimit(5);

    constexpr int parallel_reqs = 20;

    vector<CvmClient::DescribeInstancesOutcomeCallable> callables;
    for (auto i = 0; i < parallel_reqs; i++)
    {
        callables.emplace_back(cvm_client.DescribeInstancesCallable(req));
    }

    for (auto& callable : callables)
    {
        auto outcome = callable.get();

        if (!outcome.IsSuccess())
        {
            cout << outcome.GetError().PrintAll() << endl;
            return;
        }
        DescribeInstancesResponse rsp = outcome.GetResult();
        cout << "RequestId=" << rsp.GetRequestId() << "\tTotalCount=" << rsp.GetTotalCount() << endl;
    }

    cout << "AsyncWithFuture() finished" << endl;
}


void AsyncWithCallback()
{
    cout << "AsyncWithCallback()" << endl;

    Credential cred = Credential(
        string(getenv("TENCENTCLOUD_SECRET_ID")),
        string(getenv("TENCENTCLOUD_SECRET_KEY"))
    );
    CvmClient cvm_client(cred, "ap-guangzhou");

    constexpr int parallel_reqs = 20;

    WaitGroup wg;
    wg.Add(parallel_reqs);

    auto callback = [&wg](
        const CvmClient* client,
        const DescribeInstancesRequest& req,
        CvmClient::DescribeInstancesOutcome outcome,
        const shared_ptr<const AsyncCallerContext>& context
    )
    {
        if (!outcome.IsSuccess())
        {
            cout << outcome.GetError().PrintAll() << endl;
            wg.Done();
            return;
        }

        DescribeInstancesResponse rsp = outcome.GetResult();
        cout << "RequestId=" << rsp.GetRequestId() << "\tTotalCount=" << rsp.GetTotalCount() << endl;

        wg.Done();
    };

    DescribeInstancesRequest req = DescribeInstancesRequest();
    req.SetOffset(0);
    req.SetLimit(5);

    auto context_ptr = std::make_shared<AsyncCallerContext>();

    for (auto i = 0; i < parallel_reqs; i++)
    {
        cvm_client.DescribeInstancesAsync(req, callback, context_ptr);
    }

    wg.Wait();

    cout << "AsyncWithCallback() finished" << endl;
}


int main()
{
    TencentCloud::InitAPI();

    AsyncWithCallback();
    AsyncWithFuture();

    TencentCloud::ShutdownAPI();

    return 0;
}
