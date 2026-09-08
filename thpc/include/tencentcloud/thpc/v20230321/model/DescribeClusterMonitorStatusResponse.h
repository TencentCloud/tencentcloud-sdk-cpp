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

#ifndef TENCENTCLOUD_THPC_V20230321_MODEL_DESCRIBECLUSTERMONITORSTATUSRESPONSE_H_
#define TENCENTCLOUD_THPC_V20230321_MODEL_DESCRIBECLUSTERMONITORSTATUSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Thpc
    {
        namespace V20230321
        {
            namespace Model
            {
                /**
                * DescribeClusterMonitorStatus返回参数结构体
                */
                class DescribeClusterMonitorStatusResponse : public AbstractModel
                {
                public:
                    DescribeClusterMonitorStatusResponse();
                    ~DescribeClusterMonitorStatusResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>集群监控状态</p>
                     * @return MonitorStatus <p>集群监控状态</p>
                     * 
                     */
                    std::string GetMonitorStatus() const;

                    /**
                     * 判断参数 MonitorStatus 是否已赋值
                     * @return MonitorStatus 是否已赋值
                     * 
                     */
                    bool MonitorStatusHasBeenSet() const;

                    /**
                     * 获取<p>集群关联的prometheus实例ID</p>
                     * @return PrometheusId <p>集群关联的prometheus实例ID</p>
                     * 
                     */
                    std::string GetPrometheusId() const;

                    /**
                     * 判断参数 PrometheusId 是否已赋值
                     * @return PrometheusId 是否已赋值
                     * 
                     */
                    bool PrometheusIdHasBeenSet() const;

                private:

                    /**
                     * <p>集群监控状态</p>
                     */
                    std::string m_monitorStatus;
                    bool m_monitorStatusHasBeenSet;

                    /**
                     * <p>集群关联的prometheus实例ID</p>
                     */
                    std::string m_prometheusId;
                    bool m_prometheusIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_THPC_V20230321_MODEL_DESCRIBECLUSTERMONITORSTATUSRESPONSE_H_
