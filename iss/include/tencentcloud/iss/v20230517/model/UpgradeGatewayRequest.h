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

#ifndef TENCENTCLOUD_ISS_V20230517_MODEL_UPGRADEGATEWAYREQUEST_H_
#define TENCENTCLOUD_ISS_V20230517_MODEL_UPGRADEGATEWAYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iss
    {
        namespace V20230517
        {
            namespace Model
            {
                /**
                * UpgradeGateway请求参数结构体
                */
                class UpgradeGatewayRequest : public AbstractModel
                {
                public:
                    UpgradeGatewayRequest();
                    ~UpgradeGatewayRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取网关索引ID（从获取网关列表ListGateways接口中获取）
                     * @return GatewayId 网关索引ID（从获取网关列表ListGateways接口中获取）
                     * 
                     */
                    std::string GetGatewayId() const;

                    /**
                     * 设置网关索引ID（从获取网关列表ListGateways接口中获取）
                     * @param _gatewayId 网关索引ID（从获取网关列表ListGateways接口中获取）
                     * 
                     */
                    void SetGatewayId(const std::string& _gatewayId);

                    /**
                     * 判断参数 GatewayId 是否已赋值
                     * @return GatewayId 是否已赋值
                     * 
                     */
                    bool GatewayIdHasBeenSet() const;

                private:

                    /**
                     * 网关索引ID（从获取网关列表ListGateways接口中获取）
                     */
                    std::string m_gatewayId;
                    bool m_gatewayIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ISS_V20230517_MODEL_UPGRADEGATEWAYREQUEST_H_
