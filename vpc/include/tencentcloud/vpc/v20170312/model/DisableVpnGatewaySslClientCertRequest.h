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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_DISABLEVPNGATEWAYSSLCLIENTCERTREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_DISABLEVPNGATEWAYSSLCLIENTCERTREQUEST_H_

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
                * DisableVpnGatewaySslClientCert请求参数结构体
                */
                class DisableVpnGatewaySslClientCertRequest : public AbstractModel
                {
                public:
                    DisableVpnGatewaySslClientCertRequest();
                    ~DisableVpnGatewaySslClientCertRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取SSL-VPN-CLIENT 实例ID。不可和SslVpnClientIds同时使用。
                     * @return SslVpnClientId SSL-VPN-CLIENT 实例ID。不可和SslVpnClientIds同时使用。
                     * 
                     */
                    std::string GetSslVpnClientId() const;

                    /**
                     * 设置SSL-VPN-CLIENT 实例ID。不可和SslVpnClientIds同时使用。
                     * @param _sslVpnClientId SSL-VPN-CLIENT 实例ID。不可和SslVpnClientIds同时使用。
                     * 
                     */
                    void SetSslVpnClientId(const std::string& _sslVpnClientId);

                    /**
                     * 判断参数 SslVpnClientId 是否已赋值
                     * @return SslVpnClientId 是否已赋值
                     * 
                     */
                    bool SslVpnClientIdHasBeenSet() const;

                    /**
                     * 获取SSL-VPN-CLIENT 实例ID列表。批量禁用时使用。不可和SslVpnClientId同时使用。
                     * @return SslVpnClientIds SSL-VPN-CLIENT 实例ID列表。批量禁用时使用。不可和SslVpnClientId同时使用。
                     * 
                     */
                    std::vector<std::string> GetSslVpnClientIds() const;

                    /**
                     * 设置SSL-VPN-CLIENT 实例ID列表。批量禁用时使用。不可和SslVpnClientId同时使用。
                     * @param _sslVpnClientIds SSL-VPN-CLIENT 实例ID列表。批量禁用时使用。不可和SslVpnClientId同时使用。
                     * 
                     */
                    void SetSslVpnClientIds(const std::vector<std::string>& _sslVpnClientIds);

                    /**
                     * 判断参数 SslVpnClientIds 是否已赋值
                     * @return SslVpnClientIds 是否已赋值
                     * 
                     */
                    bool SslVpnClientIdsHasBeenSet() const;

                private:

                    /**
                     * SSL-VPN-CLIENT 实例ID。不可和SslVpnClientIds同时使用。
                     */
                    std::string m_sslVpnClientId;
                    bool m_sslVpnClientIdHasBeenSet;

                    /**
                     * SSL-VPN-CLIENT 实例ID列表。批量禁用时使用。不可和SslVpnClientId同时使用。
                     */
                    std::vector<std::string> m_sslVpnClientIds;
                    bool m_sslVpnClientIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_DISABLEVPNGATEWAYSSLCLIENTCERTREQUEST_H_
