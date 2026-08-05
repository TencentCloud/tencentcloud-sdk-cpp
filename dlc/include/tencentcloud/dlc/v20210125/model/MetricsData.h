/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_METRICSDATA_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_METRICSDATA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * 监控指标数据
                */
                class MetricsData : public AbstractModel
                {
                public:
                    MetricsData();
                    ~MetricsData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>每秒请求数（QPS）</p>
                     * @return RequestsPerSecond <p>每秒请求数（QPS）</p>
                     * 
                     */
                    double GetRequestsPerSecond() const;

                    /**
                     * 设置<p>每秒请求数（QPS）</p>
                     * @param _requestsPerSecond <p>每秒请求数（QPS）</p>
                     * 
                     */
                    void SetRequestsPerSecond(const double& _requestsPerSecond);

                    /**
                     * 判断参数 RequestsPerSecond 是否已赋值
                     * @return RequestsPerSecond 是否已赋值
                     * 
                     */
                    bool RequestsPerSecondHasBeenSet() const;

                    /**
                     * 获取<p>错误率（0~1）</p>
                     * @return ErrorRate <p>错误率（0~1）</p>
                     * 
                     */
                    double GetErrorRate() const;

                    /**
                     * 设置<p>错误率（0~1）</p>
                     * @param _errorRate <p>错误率（0~1）</p>
                     * 
                     */
                    void SetErrorRate(const double& _errorRate);

                    /**
                     * 判断参数 ErrorRate 是否已赋值
                     * @return ErrorRate 是否已赋值
                     * 
                     */
                    bool ErrorRateHasBeenSet() const;

                    /**
                     * 获取<p>P95 延迟（毫秒）</p>
                     * @return P95LatencyMs <p>P95 延迟（毫秒）</p>
                     * 
                     */
                    double GetP95LatencyMs() const;

                    /**
                     * 设置<p>P95 延迟（毫秒）</p>
                     * @param _p95LatencyMs <p>P95 延迟（毫秒）</p>
                     * 
                     */
                    void SetP95LatencyMs(const double& _p95LatencyMs);

                    /**
                     * 判断参数 P95LatencyMs 是否已赋值
                     * @return P95LatencyMs 是否已赋值
                     * 
                     */
                    bool P95LatencyMsHasBeenSet() const;

                    /**
                     * 获取<p>P99 延迟（毫秒）</p>
                     * @return P99LatencyMs <p>P99 延迟（毫秒）</p>
                     * 
                     */
                    double GetP99LatencyMs() const;

                    /**
                     * 设置<p>P99 延迟（毫秒）</p>
                     * @param _p99LatencyMs <p>P99 延迟（毫秒）</p>
                     * 
                     */
                    void SetP99LatencyMs(const double& _p99LatencyMs);

                    /**
                     * 判断参数 P99LatencyMs 是否已赋值
                     * @return P99LatencyMs 是否已赋值
                     * 
                     */
                    bool P99LatencyMsHasBeenSet() const;

                    /**
                     * 获取<p>队列深度（排队中的请求数）</p>
                     * @return QueueDepth <p>队列深度（排队中的请求数）</p>
                     * 
                     */
                    double GetQueueDepth() const;

                    /**
                     * 设置<p>队列深度（排队中的请求数）</p>
                     * @param _queueDepth <p>队列深度（排队中的请求数）</p>
                     * 
                     */
                    void SetQueueDepth(const double& _queueDepth);

                    /**
                     * 判断参数 QueueDepth 是否已赋值
                     * @return QueueDepth 是否已赋值
                     * 
                     */
                    bool QueueDepthHasBeenSet() const;

                    /**
                     * 获取<p>TTFT P99 延迟（毫秒，仅 vLLM）</p>
                     * @return TimeToFirstTokenP99Ms <p>TTFT P99 延迟（毫秒，仅 vLLM）</p>
                     * 
                     */
                    double GetTimeToFirstTokenP99Ms() const;

                    /**
                     * 设置<p>TTFT P99 延迟（毫秒，仅 vLLM）</p>
                     * @param _timeToFirstTokenP99Ms <p>TTFT P99 延迟（毫秒，仅 vLLM）</p>
                     * 
                     */
                    void SetTimeToFirstTokenP99Ms(const double& _timeToFirstTokenP99Ms);

                    /**
                     * 判断参数 TimeToFirstTokenP99Ms 是否已赋值
                     * @return TimeToFirstTokenP99Ms 是否已赋值
                     * 
                     */
                    bool TimeToFirstTokenP99MsHasBeenSet() const;

                    /**
                     * 获取<p>TPOT P99 延迟（毫秒，仅 vLLM）</p>
                     * @return TimePerOutputTokenP99Ms <p>TPOT P99 延迟（毫秒，仅 vLLM）</p>
                     * 
                     */
                    double GetTimePerOutputTokenP99Ms() const;

                    /**
                     * 设置<p>TPOT P99 延迟（毫秒，仅 vLLM）</p>
                     * @param _timePerOutputTokenP99Ms <p>TPOT P99 延迟（毫秒，仅 vLLM）</p>
                     * 
                     */
                    void SetTimePerOutputTokenP99Ms(const double& _timePerOutputTokenP99Ms);

                    /**
                     * 判断参数 TimePerOutputTokenP99Ms 是否已赋值
                     * @return TimePerOutputTokenP99Ms 是否已赋值
                     * 
                     */
                    bool TimePerOutputTokenP99MsHasBeenSet() const;

                    /**
                     * 获取<p>Token 吞吐量（tokens/s，仅 vLLM）</p>
                     * @return TokenThroughput <p>Token 吞吐量（tokens/s，仅 vLLM）</p>
                     * 
                     */
                    double GetTokenThroughput() const;

                    /**
                     * 设置<p>Token 吞吐量（tokens/s，仅 vLLM）</p>
                     * @param _tokenThroughput <p>Token 吞吐量（tokens/s，仅 vLLM）</p>
                     * 
                     */
                    void SetTokenThroughput(const double& _tokenThroughput);

                    /**
                     * 判断参数 TokenThroughput 是否已赋值
                     * @return TokenThroughput 是否已赋值
                     * 
                     */
                    bool TokenThroughputHasBeenSet() const;

                    /**
                     * 获取<p>GPU 利用率（0~100，百分比）</p>
                     * @return GpuUtilization <p>GPU 利用率（0~100，百分比）</p>
                     * 
                     */
                    double GetGpuUtilization() const;

                    /**
                     * 设置<p>GPU 利用率（0~100，百分比）</p>
                     * @param _gpuUtilization <p>GPU 利用率（0~100，百分比）</p>
                     * 
                     */
                    void SetGpuUtilization(const double& _gpuUtilization);

                    /**
                     * 判断参数 GpuUtilization 是否已赋值
                     * @return GpuUtilization 是否已赋值
                     * 
                     */
                    bool GpuUtilizationHasBeenSet() const;

                    /**
                     * 获取<p>GPU 显存已用（MB）</p>
                     * @return GpuMemoryUsedMB <p>GPU 显存已用（MB）</p>
                     * 
                     */
                    double GetGpuMemoryUsedMB() const;

                    /**
                     * 设置<p>GPU 显存已用（MB）</p>
                     * @param _gpuMemoryUsedMB <p>GPU 显存已用（MB）</p>
                     * 
                     */
                    void SetGpuMemoryUsedMB(const double& _gpuMemoryUsedMB);

                    /**
                     * 判断参数 GpuMemoryUsedMB 是否已赋值
                     * @return GpuMemoryUsedMB 是否已赋值
                     * 
                     */
                    bool GpuMemoryUsedMBHasBeenSet() const;

                    /**
                     * 获取<p>GPU 显存总量（MB）</p>
                     * @return GpuMemoryTotalMB <p>GPU 显存总量（MB）</p>
                     * 
                     */
                    double GetGpuMemoryTotalMB() const;

                    /**
                     * 设置<p>GPU 显存总量（MB）</p>
                     * @param _gpuMemoryTotalMB <p>GPU 显存总量（MB）</p>
                     * 
                     */
                    void SetGpuMemoryTotalMB(const double& _gpuMemoryTotalMB);

                    /**
                     * 判断参数 GpuMemoryTotalMB 是否已赋值
                     * @return GpuMemoryTotalMB 是否已赋值
                     * 
                     */
                    bool GpuMemoryTotalMBHasBeenSet() const;

                    /**
                     * 获取<p>CPU 利用率（0~100，百分比）</p>
                     * @return CpuUtilization <p>CPU 利用率（0~100，百分比）</p>
                     * 
                     */
                    double GetCpuUtilization() const;

                    /**
                     * 设置<p>CPU 利用率（0~100，百分比）</p>
                     * @param _cpuUtilization <p>CPU 利用率（0~100，百分比）</p>
                     * 
                     */
                    void SetCpuUtilization(const double& _cpuUtilization);

                    /**
                     * 判断参数 CpuUtilization 是否已赋值
                     * @return CpuUtilization 是否已赋值
                     * 
                     */
                    bool CpuUtilizationHasBeenSet() const;

                    /**
                     * 获取<p>内存已用（字节）</p>
                     * @return MemoryUsedBytes <p>内存已用（字节）</p>
                     * 
                     */
                    double GetMemoryUsedBytes() const;

                    /**
                     * 设置<p>内存已用（字节）</p>
                     * @param _memoryUsedBytes <p>内存已用（字节）</p>
                     * 
                     */
                    void SetMemoryUsedBytes(const double& _memoryUsedBytes);

                    /**
                     * 判断参数 MemoryUsedBytes 是否已赋值
                     * @return MemoryUsedBytes 是否已赋值
                     * 
                     */
                    bool MemoryUsedBytesHasBeenSet() const;

                    /**
                     * 获取<p>内存总量（字节）</p>
                     * @return MemoryTotalBytes <p>内存总量（字节）</p>
                     * 
                     */
                    double GetMemoryTotalBytes() const;

                    /**
                     * 设置<p>内存总量（字节）</p>
                     * @param _memoryTotalBytes <p>内存总量（字节）</p>
                     * 
                     */
                    void SetMemoryTotalBytes(const double& _memoryTotalBytes);

                    /**
                     * 判断参数 MemoryTotalBytes 是否已赋值
                     * @return MemoryTotalBytes 是否已赋值
                     * 
                     */
                    bool MemoryTotalBytesHasBeenSet() const;

                    /**
                     * 获取<p>网络接收速度（MB/s）</p>
                     * @return NetworkReceiveMBPerSecond <p>网络接收速度（MB/s）</p>
                     * 
                     */
                    double GetNetworkReceiveMBPerSecond() const;

                    /**
                     * 设置<p>网络接收速度（MB/s）</p>
                     * @param _networkReceiveMBPerSecond <p>网络接收速度（MB/s）</p>
                     * 
                     */
                    void SetNetworkReceiveMBPerSecond(const double& _networkReceiveMBPerSecond);

                    /**
                     * 判断参数 NetworkReceiveMBPerSecond 是否已赋值
                     * @return NetworkReceiveMBPerSecond 是否已赋值
                     * 
                     */
                    bool NetworkReceiveMBPerSecondHasBeenSet() const;

                    /**
                     * 获取<p>网络发送速度（MB/s）</p>
                     * @return NetworkSendMBPerSecond <p>网络发送速度（MB/s）</p>
                     * 
                     */
                    double GetNetworkSendMBPerSecond() const;

                    /**
                     * 设置<p>网络发送速度（MB/s）</p>
                     * @param _networkSendMBPerSecond <p>网络发送速度（MB/s）</p>
                     * 
                     */
                    void SetNetworkSendMBPerSecond(const double& _networkSendMBPerSecond);

                    /**
                     * 判断参数 NetworkSendMBPerSecond 是否已赋值
                     * @return NetworkSendMBPerSecond 是否已赋值
                     * 
                     */
                    bool NetworkSendMBPerSecondHasBeenSet() const;

                private:

                    /**
                     * <p>每秒请求数（QPS）</p>
                     */
                    double m_requestsPerSecond;
                    bool m_requestsPerSecondHasBeenSet;

                    /**
                     * <p>错误率（0~1）</p>
                     */
                    double m_errorRate;
                    bool m_errorRateHasBeenSet;

                    /**
                     * <p>P95 延迟（毫秒）</p>
                     */
                    double m_p95LatencyMs;
                    bool m_p95LatencyMsHasBeenSet;

                    /**
                     * <p>P99 延迟（毫秒）</p>
                     */
                    double m_p99LatencyMs;
                    bool m_p99LatencyMsHasBeenSet;

                    /**
                     * <p>队列深度（排队中的请求数）</p>
                     */
                    double m_queueDepth;
                    bool m_queueDepthHasBeenSet;

                    /**
                     * <p>TTFT P99 延迟（毫秒，仅 vLLM）</p>
                     */
                    double m_timeToFirstTokenP99Ms;
                    bool m_timeToFirstTokenP99MsHasBeenSet;

                    /**
                     * <p>TPOT P99 延迟（毫秒，仅 vLLM）</p>
                     */
                    double m_timePerOutputTokenP99Ms;
                    bool m_timePerOutputTokenP99MsHasBeenSet;

                    /**
                     * <p>Token 吞吐量（tokens/s，仅 vLLM）</p>
                     */
                    double m_tokenThroughput;
                    bool m_tokenThroughputHasBeenSet;

                    /**
                     * <p>GPU 利用率（0~100，百分比）</p>
                     */
                    double m_gpuUtilization;
                    bool m_gpuUtilizationHasBeenSet;

                    /**
                     * <p>GPU 显存已用（MB）</p>
                     */
                    double m_gpuMemoryUsedMB;
                    bool m_gpuMemoryUsedMBHasBeenSet;

                    /**
                     * <p>GPU 显存总量（MB）</p>
                     */
                    double m_gpuMemoryTotalMB;
                    bool m_gpuMemoryTotalMBHasBeenSet;

                    /**
                     * <p>CPU 利用率（0~100，百分比）</p>
                     */
                    double m_cpuUtilization;
                    bool m_cpuUtilizationHasBeenSet;

                    /**
                     * <p>内存已用（字节）</p>
                     */
                    double m_memoryUsedBytes;
                    bool m_memoryUsedBytesHasBeenSet;

                    /**
                     * <p>内存总量（字节）</p>
                     */
                    double m_memoryTotalBytes;
                    bool m_memoryTotalBytesHasBeenSet;

                    /**
                     * <p>网络接收速度（MB/s）</p>
                     */
                    double m_networkReceiveMBPerSecond;
                    bool m_networkReceiveMBPerSecondHasBeenSet;

                    /**
                     * <p>网络发送速度（MB/s）</p>
                     */
                    double m_networkSendMBPerSecond;
                    bool m_networkSendMBPerSecondHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_METRICSDATA_H_
