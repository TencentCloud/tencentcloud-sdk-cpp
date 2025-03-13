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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_CHECKGATEWAYFLOWMONITORRESPONSE_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_CHECKGATEWAYFLOWMONITORRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * CheckGatewayFlowMonitor返回参数结构体
                */
                class CheckGatewayFlowMonitorResponse : public AbstractModel
                {
                public:
                    CheckGatewayFlowMonitorResponse();
                    ~CheckGatewayFlowMonitorResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取网关是否启用了流控。true为启用，false未启用。
                     * @return Enabled 网关是否启用了流控。true为启用，false未启用。
                     * 
                     */
                    bool GetEnabled() const;

                    /**
                     * 判断参数 Enabled 是否已赋值
                     * @return Enabled 是否已赋值
                     * 
                     */
                    bool EnabledHasBeenSet() const;

                    /**
                     * 获取网关的带宽。
                     * @return Bandwidth 网关的带宽。
                     * 
                     */
                    uint64_t GetBandwidth() const;

                    /**
                     * 判断参数 Bandwidth 是否已赋值
                     * @return Bandwidth 是否已赋值
                     * 
                     */
                    bool BandwidthHasBeenSet() const;

                private:

                    /**
                     * 网关是否启用了流控。true为启用，false未启用。
                     */
                    bool m_enabled;
                    bool m_enabledHasBeenSet;

                    /**
                     * 网关的带宽。
                     */
                    uint64_t m_bandwidth;
                    bool m_bandwidthHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_CHECKGATEWAYFLOWMONITORRESPONSE_H_
