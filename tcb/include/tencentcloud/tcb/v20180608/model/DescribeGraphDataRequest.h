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

#ifndef TENCENTCLOUD_TCB_V20180608_MODEL_DESCRIBEGRAPHDATAREQUEST_H_
#define TENCENTCLOUD_TCB_V20180608_MODEL_DESCRIBEGRAPHDATAREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcb
    {
        namespace V20180608
        {
            namespace Model
            {
                /**
                * DescribeGraphData请求参数结构体
                */
                class DescribeGraphDataRequest : public AbstractModel
                {
                public:
                    DescribeGraphDataRequest();
                    ~DescribeGraphDataRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取环境ID
                     * @return EnvId 环境ID
                     * 
                     */
                    std::string GetEnvId() const;

                    /**
                     * 设置环境ID
                     * @param _envId 环境ID
                     * 
                     */
                    void SetEnvId(const std::string& _envId);

                    /**
                     * 判断参数 EnvId 是否已赋值
                     * @return EnvId 是否已赋值
                     * 
                     */
                    bool EnvIdHasBeenSet() const;

                    /**
                     * 获取指标名: 
StorageRead: 存储读请求次数 
StorageWrite: 存储写请求次数 
StorageCdnOriginFlux: CDN回源流量, 单位字节 
CDNFlux: CDN回源流量, 单位字节 
FunctionInvocation: 云函数调用次数 
FunctionGBs: 云函数资源使用量, 单位MB*ms 
FunctionFlux: 云函数流量, 单位千字节(KB) 
FunctionError: 云函数调用错误次数 
FunctionDuration: 云函数运行时间, 单位毫秒 
DbRead: 数据库读请求数 
DbWrite: 数据库写请求数 
DbCostTime10ms: 数据库耗时在10ms-50ms请求数 
DbCostTime50ms: 数据库耗时在50ms-100ms请求数 
DbCostTime100ms: 数据库耗时在100ms以上请求数 
TkeCpuRatio: 容器CPU占用率 
TkeMemRatio: 容器内存占用率 
TkeCpuUsed: 容器CPU使用量 
TkeMemUsed: 容器内存使用量 
TkeInvokeNum: 调用量 
FunctionConcurrentExecutions: 云函数并发执行个数
FunctionIdleProvisioned: 云函数预置并发闲置量 
FunctionConcurrencyMemoryMB: 云函数并发执行内存量 
FunctionThrottle: 云函数受限次数 
FunctionProvisionedConcurrency: 云函数预置并发 
                     * @return MetricName 指标名: 
StorageRead: 存储读请求次数 
StorageWrite: 存储写请求次数 
StorageCdnOriginFlux: CDN回源流量, 单位字节 
CDNFlux: CDN回源流量, 单位字节 
FunctionInvocation: 云函数调用次数 
FunctionGBs: 云函数资源使用量, 单位MB*ms 
FunctionFlux: 云函数流量, 单位千字节(KB) 
FunctionError: 云函数调用错误次数 
FunctionDuration: 云函数运行时间, 单位毫秒 
DbRead: 数据库读请求数 
DbWrite: 数据库写请求数 
DbCostTime10ms: 数据库耗时在10ms-50ms请求数 
DbCostTime50ms: 数据库耗时在50ms-100ms请求数 
DbCostTime100ms: 数据库耗时在100ms以上请求数 
TkeCpuRatio: 容器CPU占用率 
TkeMemRatio: 容器内存占用率 
TkeCpuUsed: 容器CPU使用量 
TkeMemUsed: 容器内存使用量 
TkeInvokeNum: 调用量 
FunctionConcurrentExecutions: 云函数并发执行个数
FunctionIdleProvisioned: 云函数预置并发闲置量 
FunctionConcurrencyMemoryMB: 云函数并发执行内存量 
FunctionThrottle: 云函数受限次数 
FunctionProvisionedConcurrency: 云函数预置并发 
                     * 
                     */
                    std::string GetMetricName() const;

                    /**
                     * 设置指标名: 
StorageRead: 存储读请求次数 
StorageWrite: 存储写请求次数 
StorageCdnOriginFlux: CDN回源流量, 单位字节 
CDNFlux: CDN回源流量, 单位字节 
FunctionInvocation: 云函数调用次数 
FunctionGBs: 云函数资源使用量, 单位MB*ms 
FunctionFlux: 云函数流量, 单位千字节(KB) 
FunctionError: 云函数调用错误次数 
FunctionDuration: 云函数运行时间, 单位毫秒 
DbRead: 数据库读请求数 
DbWrite: 数据库写请求数 
DbCostTime10ms: 数据库耗时在10ms-50ms请求数 
DbCostTime50ms: 数据库耗时在50ms-100ms请求数 
DbCostTime100ms: 数据库耗时在100ms以上请求数 
TkeCpuRatio: 容器CPU占用率 
TkeMemRatio: 容器内存占用率 
TkeCpuUsed: 容器CPU使用量 
TkeMemUsed: 容器内存使用量 
TkeInvokeNum: 调用量 
FunctionConcurrentExecutions: 云函数并发执行个数
FunctionIdleProvisioned: 云函数预置并发闲置量 
FunctionConcurrencyMemoryMB: 云函数并发执行内存量 
FunctionThrottle: 云函数受限次数 
FunctionProvisionedConcurrency: 云函数预置并发 
                     * @param _metricName 指标名: 
StorageRead: 存储读请求次数 
StorageWrite: 存储写请求次数 
StorageCdnOriginFlux: CDN回源流量, 单位字节 
CDNFlux: CDN回源流量, 单位字节 
FunctionInvocation: 云函数调用次数 
FunctionGBs: 云函数资源使用量, 单位MB*ms 
FunctionFlux: 云函数流量, 单位千字节(KB) 
FunctionError: 云函数调用错误次数 
FunctionDuration: 云函数运行时间, 单位毫秒 
DbRead: 数据库读请求数 
DbWrite: 数据库写请求数 
DbCostTime10ms: 数据库耗时在10ms-50ms请求数 
DbCostTime50ms: 数据库耗时在50ms-100ms请求数 
DbCostTime100ms: 数据库耗时在100ms以上请求数 
TkeCpuRatio: 容器CPU占用率 
TkeMemRatio: 容器内存占用率 
TkeCpuUsed: 容器CPU使用量 
TkeMemUsed: 容器内存使用量 
TkeInvokeNum: 调用量 
FunctionConcurrentExecutions: 云函数并发执行个数
FunctionIdleProvisioned: 云函数预置并发闲置量 
FunctionConcurrencyMemoryMB: 云函数并发执行内存量 
FunctionThrottle: 云函数受限次数 
FunctionProvisionedConcurrency: 云函数预置并发 
                     * 
                     */
                    void SetMetricName(const std::string& _metricName);

                    /**
                     * 判断参数 MetricName 是否已赋值
                     * @return MetricName 是否已赋值
                     * 
                     */
                    bool MetricNameHasBeenSet() const;

                    /**
                     * 获取开始时间，如2018-08-24 10:50:00, 开始时间需要早于结束时间至少五分钟(原因是因为目前统计粒度最小是5分钟).
                     * @return StartTime 开始时间，如2018-08-24 10:50:00, 开始时间需要早于结束时间至少五分钟(原因是因为目前统计粒度最小是5分钟).
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置开始时间，如2018-08-24 10:50:00, 开始时间需要早于结束时间至少五分钟(原因是因为目前统计粒度最小是5分钟).
                     * @param _startTime 开始时间，如2018-08-24 10:50:00, 开始时间需要早于结束时间至少五分钟(原因是因为目前统计粒度最小是5分钟).
                     * 
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取结束时间，如2018-08-24 10:50:00, 结束时间需要晚于开始时间至少五分钟(原因是因为目前统计粒度最小是5分钟)..
                     * @return EndTime 结束时间，如2018-08-24 10:50:00, 结束时间需要晚于开始时间至少五分钟(原因是因为目前统计粒度最小是5分钟)..
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置结束时间，如2018-08-24 10:50:00, 结束时间需要晚于开始时间至少五分钟(原因是因为目前统计粒度最小是5分钟)..
                     * @param _endTime 结束时间，如2018-08-24 10:50:00, 结束时间需要晚于开始时间至少五分钟(原因是因为目前统计粒度最小是5分钟)..
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取资源ID, 目前仅对云函数、容器托管相关的指标有意义。云函数(FunctionInvocation, FunctionGBs, FunctionFlux, FunctionError, FunctionDuration)、容器托管（服务名称）, 如果想查询某个云函数的指标则在ResourceId中传入函数名; 如果只想查询整个namespace的指标, 则留空或不传.如果想查询数据库某个集合相关信息，传入集合名称
                     * @return ResourceID 资源ID, 目前仅对云函数、容器托管相关的指标有意义。云函数(FunctionInvocation, FunctionGBs, FunctionFlux, FunctionError, FunctionDuration)、容器托管（服务名称）, 如果想查询某个云函数的指标则在ResourceId中传入函数名; 如果只想查询整个namespace的指标, 则留空或不传.如果想查询数据库某个集合相关信息，传入集合名称
                     * 
                     */
                    std::string GetResourceID() const;

                    /**
                     * 设置资源ID, 目前仅对云函数、容器托管相关的指标有意义。云函数(FunctionInvocation, FunctionGBs, FunctionFlux, FunctionError, FunctionDuration)、容器托管（服务名称）, 如果想查询某个云函数的指标则在ResourceId中传入函数名; 如果只想查询整个namespace的指标, 则留空或不传.如果想查询数据库某个集合相关信息，传入集合名称
                     * @param _resourceID 资源ID, 目前仅对云函数、容器托管相关的指标有意义。云函数(FunctionInvocation, FunctionGBs, FunctionFlux, FunctionError, FunctionDuration)、容器托管（服务名称）, 如果想查询某个云函数的指标则在ResourceId中传入函数名; 如果只想查询整个namespace的指标, 则留空或不传.如果想查询数据库某个集合相关信息，传入集合名称
                     * 
                     */
                    void SetResourceID(const std::string& _resourceID);

                    /**
                     * 判断参数 ResourceID 是否已赋值
                     * @return ResourceID 是否已赋值
                     * 
                     */
                    bool ResourceIDHasBeenSet() const;

                private:

                    /**
                     * 环境ID
                     */
                    std::string m_envId;
                    bool m_envIdHasBeenSet;

                    /**
                     * 指标名: 
StorageRead: 存储读请求次数 
StorageWrite: 存储写请求次数 
StorageCdnOriginFlux: CDN回源流量, 单位字节 
CDNFlux: CDN回源流量, 单位字节 
FunctionInvocation: 云函数调用次数 
FunctionGBs: 云函数资源使用量, 单位MB*ms 
FunctionFlux: 云函数流量, 单位千字节(KB) 
FunctionError: 云函数调用错误次数 
FunctionDuration: 云函数运行时间, 单位毫秒 
DbRead: 数据库读请求数 
DbWrite: 数据库写请求数 
DbCostTime10ms: 数据库耗时在10ms-50ms请求数 
DbCostTime50ms: 数据库耗时在50ms-100ms请求数 
DbCostTime100ms: 数据库耗时在100ms以上请求数 
TkeCpuRatio: 容器CPU占用率 
TkeMemRatio: 容器内存占用率 
TkeCpuUsed: 容器CPU使用量 
TkeMemUsed: 容器内存使用量 
TkeInvokeNum: 调用量 
FunctionConcurrentExecutions: 云函数并发执行个数
FunctionIdleProvisioned: 云函数预置并发闲置量 
FunctionConcurrencyMemoryMB: 云函数并发执行内存量 
FunctionThrottle: 云函数受限次数 
FunctionProvisionedConcurrency: 云函数预置并发 
                     */
                    std::string m_metricName;
                    bool m_metricNameHasBeenSet;

                    /**
                     * 开始时间，如2018-08-24 10:50:00, 开始时间需要早于结束时间至少五分钟(原因是因为目前统计粒度最小是5分钟).
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 结束时间，如2018-08-24 10:50:00, 结束时间需要晚于开始时间至少五分钟(原因是因为目前统计粒度最小是5分钟)..
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 资源ID, 目前仅对云函数、容器托管相关的指标有意义。云函数(FunctionInvocation, FunctionGBs, FunctionFlux, FunctionError, FunctionDuration)、容器托管（服务名称）, 如果想查询某个云函数的指标则在ResourceId中传入函数名; 如果只想查询整个namespace的指标, 则留空或不传.如果想查询数据库某个集合相关信息，传入集合名称
                     */
                    std::string m_resourceID;
                    bool m_resourceIDHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCB_V20180608_MODEL_DESCRIBEGRAPHDATAREQUEST_H_
