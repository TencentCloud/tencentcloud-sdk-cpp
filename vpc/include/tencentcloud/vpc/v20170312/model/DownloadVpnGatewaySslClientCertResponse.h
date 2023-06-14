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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_DOWNLOADVPNGATEWAYSSLCLIENTCERTRESPONSE_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_DOWNLOADVPNGATEWAYSSLCLIENTCERTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vpc/v20170312/model/SslClientConfig.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * DownloadVpnGatewaySslClientCert返回参数结构体
                */
                class DownloadVpnGatewaySslClientCertResponse : public AbstractModel
                {
                public:
                    DownloadVpnGatewaySslClientCertResponse();
                    ~DownloadVpnGatewaySslClientCertResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取SSL-VPN 客户端配置。
                     * @return SslClientConfigsSet SSL-VPN 客户端配置。
                     * 
                     */
                    std::string GetSslClientConfigsSet() const;

                    /**
                     * 判断参数 SslClientConfigsSet 是否已赋值
                     * @return SslClientConfigsSet 是否已赋值
                     * 
                     */
                    bool SslClientConfigsSetHasBeenSet() const;

                    /**
                     * 获取SSL-VPN 客户端配置。
                     * @return SslClientConfig SSL-VPN 客户端配置。
                     * 
                     */
                    std::vector<SslClientConfig> GetSslClientConfig() const;

                    /**
                     * 判断参数 SslClientConfig 是否已赋值
                     * @return SslClientConfig 是否已赋值
                     * 
                     */
                    bool SslClientConfigHasBeenSet() const;

                    /**
                     * 获取是否鉴权成功 只有传入SamlToken 才生效，1为成功，0为失败。
                     * @return Authenticated 是否鉴权成功 只有传入SamlToken 才生效，1为成功，0为失败。
                     * 
                     */
                    uint64_t GetAuthenticated() const;

                    /**
                     * 判断参数 Authenticated 是否已赋值
                     * @return Authenticated 是否已赋值
                     * 
                     */
                    bool AuthenticatedHasBeenSet() const;

                private:

                    /**
                     * SSL-VPN 客户端配置。
                     */
                    std::string m_sslClientConfigsSet;
                    bool m_sslClientConfigsSetHasBeenSet;

                    /**
                     * SSL-VPN 客户端配置。
                     */
                    std::vector<SslClientConfig> m_sslClientConfig;
                    bool m_sslClientConfigHasBeenSet;

                    /**
                     * 是否鉴权成功 只有传入SamlToken 才生效，1为成功，0为失败。
                     */
                    uint64_t m_authenticated;
                    bool m_authenticatedHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_DOWNLOADVPNGATEWAYSSLCLIENTCERTRESPONSE_H_
