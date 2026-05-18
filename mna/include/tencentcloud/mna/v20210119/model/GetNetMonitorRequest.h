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

#ifndef TENCENTCLOUD_MNA_V20210119_MODEL_GETNETMONITORREQUEST_H_
#define TENCENTCLOUD_MNA_V20210119_MODEL_GETNETMONITORREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mna
    {
        namespace V20210119
        {
            namespace Model
            {
                /**
                * GetNetMonitor请求参数结构体
                */
                class GetNetMonitorRequest : public AbstractModel
                {
                public:
                    GetNetMonitorRequest();
                    ~GetNetMonitorRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>设备id</p>
                     * @return DeviceId <p>设备id</p>
                     * 
                     */
                    std::string GetDeviceId() const;

                    /**
                     * 设置<p>设备id</p>
                     * @param _deviceId <p>设备id</p>
                     * 
                     */
                    void SetDeviceId(const std::string& _deviceId);

                    /**
                     * 判断参数 DeviceId 是否已赋值
                     * @return DeviceId 是否已赋值
                     * 
                     */
                    bool DeviceIdHasBeenSet() const;

                    /**
                     * 获取<p>开始时间</p>
                     * @return BeginTime <p>开始时间</p>
                     * 
                     */
                    int64_t GetBeginTime() const;

                    /**
                     * 设置<p>开始时间</p>
                     * @param _beginTime <p>开始时间</p>
                     * 
                     */
                    void SetBeginTime(const int64_t& _beginTime);

                    /**
                     * 判断参数 BeginTime 是否已赋值
                     * @return BeginTime 是否已赋值
                     * 
                     */
                    bool BeginTimeHasBeenSet() const;

                    /**
                     * 获取<p>结束时间</p>
                     * @return EndTime <p>结束时间</p>
                     * 
                     */
                    int64_t GetEndTime() const;

                    /**
                     * 设置<p>结束时间</p>
                     * @param _endTime <p>结束时间</p>
                     * 
                     */
                    void SetEndTime(const int64_t& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取<p>统计指标（上行速率：&quot;TxRate&quot;:bit/s，下行速率：&quot;RxRate&quot;:bit/s，丢包：&quot;Loss&quot;:%，时延：&quot;RTT&quot;:ms）</p>
                     * @return Metrics <p>统计指标（上行速率：&quot;TxRate&quot;:bit/s，下行速率：&quot;RxRate&quot;:bit/s，丢包：&quot;Loss&quot;:%，时延：&quot;RTT&quot;:ms）</p>
                     * 
                     */
                    std::string GetMetrics() const;

                    /**
                     * 设置<p>统计指标（上行速率：&quot;TxRate&quot;:bit/s，下行速率：&quot;RxRate&quot;:bit/s，丢包：&quot;Loss&quot;:%，时延：&quot;RTT&quot;:ms）</p>
                     * @param _metrics <p>统计指标（上行速率：&quot;TxRate&quot;:bit/s，下行速率：&quot;RxRate&quot;:bit/s，丢包：&quot;Loss&quot;:%，时延：&quot;RTT&quot;:ms）</p>
                     * 
                     */
                    void SetMetrics(const std::string& _metrics);

                    /**
                     * 判断参数 Metrics 是否已赋值
                     * @return Metrics 是否已赋值
                     * 
                     */
                    bool MetricsHasBeenSet() const;

                    /**
                     * 获取<p>网关类型。0：公有云网关；1：自有网关。不传默认为0。</p>
                     * @return GatewayType <p>网关类型。0：公有云网关；1：自有网关。不传默认为0。</p>
                     * 
                     */
                    int64_t GetGatewayType() const;

                    /**
                     * 设置<p>网关类型。0：公有云网关；1：自有网关。不传默认为0。</p>
                     * @param _gatewayType <p>网关类型。0：公有云网关；1：自有网关。不传默认为0。</p>
                     * 
                     */
                    void SetGatewayType(const int64_t& _gatewayType);

                    /**
                     * 判断参数 GatewayType 是否已赋值
                     * @return GatewayType 是否已赋值
                     * 
                     */
                    bool GatewayTypeHasBeenSet() const;

                private:

                    /**
                     * <p>设备id</p>
                     */
                    std::string m_deviceId;
                    bool m_deviceIdHasBeenSet;

                    /**
                     * <p>开始时间</p>
                     */
                    int64_t m_beginTime;
                    bool m_beginTimeHasBeenSet;

                    /**
                     * <p>结束时间</p>
                     */
                    int64_t m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * <p>统计指标（上行速率：&quot;TxRate&quot;:bit/s，下行速率：&quot;RxRate&quot;:bit/s，丢包：&quot;Loss&quot;:%，时延：&quot;RTT&quot;:ms）</p>
                     */
                    std::string m_metrics;
                    bool m_metricsHasBeenSet;

                    /**
                     * <p>网关类型。0：公有云网关；1：自有网关。不传默认为0。</p>
                     */
                    int64_t m_gatewayType;
                    bool m_gatewayTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MNA_V20210119_MODEL_GETNETMONITORREQUEST_H_
