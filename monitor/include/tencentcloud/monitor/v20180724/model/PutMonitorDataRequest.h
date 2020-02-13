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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_PUTMONITORDATAREQUEST_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_PUTMONITORDATAREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/monitor/v20180724/model/MetricDatum.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20180724
        {
            namespace Model
            {
                /**
                * PutMonitorData请求参数结构体
                */
                class PutMonitorDataRequest : public AbstractModel
                {
                public:
                    PutMonitorDataRequest();
                    ~PutMonitorDataRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取一组指标和数据
                     * @return Metrics 一组指标和数据
                     */
                    std::vector<MetricDatum> GetMetrics() const;

                    /**
                     * 设置一组指标和数据
                     * @param Metrics 一组指标和数据
                     */
                    void SetMetrics(const std::vector<MetricDatum>& _metrics);

                    /**
                     * 判断参数 Metrics 是否已赋值
                     * @return Metrics 是否已赋值
                     */
                    bool MetricsHasBeenSet() const;

                    /**
                     * 获取上报时自行指定的 IP
                     * @return AnnounceIp 上报时自行指定的 IP
                     */
                    std::string GetAnnounceIp() const;

                    /**
                     * 设置上报时自行指定的 IP
                     * @param AnnounceIp 上报时自行指定的 IP
                     */
                    void SetAnnounceIp(const std::string& _announceIp);

                    /**
                     * 判断参数 AnnounceIp 是否已赋值
                     * @return AnnounceIp 是否已赋值
                     */
                    bool AnnounceIpHasBeenSet() const;

                    /**
                     * 获取上报时自行指定的时间戳
                     * @return AnnounceTimestamp 上报时自行指定的时间戳
                     */
                    uint64_t GetAnnounceTimestamp() const;

                    /**
                     * 设置上报时自行指定的时间戳
                     * @param AnnounceTimestamp 上报时自行指定的时间戳
                     */
                    void SetAnnounceTimestamp(const uint64_t& _announceTimestamp);

                    /**
                     * 判断参数 AnnounceTimestamp 是否已赋值
                     * @return AnnounceTimestamp 是否已赋值
                     */
                    bool AnnounceTimestampHasBeenSet() const;

                    /**
                     * 获取上报时自行指定的 IP 或 产品实例ID
                     * @return AnnounceInstance 上报时自行指定的 IP 或 产品实例ID
                     */
                    std::string GetAnnounceInstance() const;

                    /**
                     * 设置上报时自行指定的 IP 或 产品实例ID
                     * @param AnnounceInstance 上报时自行指定的 IP 或 产品实例ID
                     */
                    void SetAnnounceInstance(const std::string& _announceInstance);

                    /**
                     * 判断参数 AnnounceInstance 是否已赋值
                     * @return AnnounceInstance 是否已赋值
                     */
                    bool AnnounceInstanceHasBeenSet() const;

                private:

                    /**
                     * 一组指标和数据
                     */
                    std::vector<MetricDatum> m_metrics;
                    bool m_metricsHasBeenSet;

                    /**
                     * 上报时自行指定的 IP
                     */
                    std::string m_announceIp;
                    bool m_announceIpHasBeenSet;

                    /**
                     * 上报时自行指定的时间戳
                     */
                    uint64_t m_announceTimestamp;
                    bool m_announceTimestampHasBeenSet;

                    /**
                     * 上报时自行指定的 IP 或 产品实例ID
                     */
                    std::string m_announceInstance;
                    bool m_announceInstanceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_PUTMONITORDATAREQUEST_H_
