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

#ifndef TENCENTCLOUD_MNA_V20210119_MODEL_ADDGATEWAYRESPONSE_H_
#define TENCENTCLOUD_MNA_V20210119_MODEL_ADDGATEWAYRESPONSE_H_

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
                * AddGateway返回参数结构体
                */
                class AddGatewayResponse : public AbstractModel
                {
                public:
                    AddGatewayResponse();
                    ~AddGatewayResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>网关ID。</p>
                     * @return GatewayId <p>网关ID。</p>
                     * 
                     */
                    std::string GetGatewayId() const;

                    /**
                     * 判断参数 GatewayId 是否已赋值
                     * @return GatewayId 是否已赋值
                     * 
                     */
                    bool GatewayIdHasBeenSet() const;

                    /**
                     * 获取<p>网关鉴权 Token。</p>
                     * @return Token <p>网关鉴权 Token。</p>
                     * 
                     */
                    std::string GetToken() const;

                    /**
                     * 判断参数 Token 是否已赋值
                     * @return Token 是否已赋值
                     * 
                     */
                    bool TokenHasBeenSet() const;

                    /**
                     * 获取<p>网关注册地址。</p>
                     * @return RegisterCenterUrl <p>网关注册地址。</p>
                     * 
                     */
                    std::string GetRegisterCenterUrl() const;

                    /**
                     * 判断参数 RegisterCenterUrl 是否已赋值
                     * @return RegisterCenterUrl 是否已赋值
                     * 
                     */
                    bool RegisterCenterUrlHasBeenSet() const;

                    /**
                     * 获取<p>网关上报地址。</p>
                     * @return TelemetryUrl <p>网关上报地址。</p>
                     * 
                     */
                    std::string GetTelemetryUrl() const;

                    /**
                     * 判断参数 TelemetryUrl 是否已赋值
                     * @return TelemetryUrl 是否已赋值
                     * 
                     */
                    bool TelemetryUrlHasBeenSet() const;

                private:

                    /**
                     * <p>网关ID。</p>
                     */
                    std::string m_gatewayId;
                    bool m_gatewayIdHasBeenSet;

                    /**
                     * <p>网关鉴权 Token。</p>
                     */
                    std::string m_token;
                    bool m_tokenHasBeenSet;

                    /**
                     * <p>网关注册地址。</p>
                     */
                    std::string m_registerCenterUrl;
                    bool m_registerCenterUrlHasBeenSet;

                    /**
                     * <p>网关上报地址。</p>
                     */
                    std::string m_telemetryUrl;
                    bool m_telemetryUrlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MNA_V20210119_MODEL_ADDGATEWAYRESPONSE_H_
