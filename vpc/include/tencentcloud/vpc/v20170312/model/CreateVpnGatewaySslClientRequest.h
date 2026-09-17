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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_CREATEVPNGATEWAYSSLCLIENTREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_CREATEVPNGATEWAYSSLCLIENTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vpc/v20170312/model/Tag.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * CreateVpnGatewaySslClient请求参数结构体
                */
                class CreateVpnGatewaySslClientRequest : public AbstractModel
                {
                public:
                    CreateVpnGatewaySslClientRequest();
                    ~CreateVpnGatewaySslClientRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>SSL-VPN-SERVER 实例ID。</p>
                     * @return SslVpnServerId <p>SSL-VPN-SERVER 实例ID。</p>
                     * 
                     */
                    std::string GetSslVpnServerId() const;

                    /**
                     * 设置<p>SSL-VPN-SERVER 实例ID。</p>
                     * @param _sslVpnServerId <p>SSL-VPN-SERVER 实例ID。</p>
                     * 
                     */
                    void SetSslVpnServerId(const std::string& _sslVpnServerId);

                    /**
                     * 判断参数 SslVpnServerId 是否已赋值
                     * @return SslVpnServerId 是否已赋值
                     * 
                     */
                    bool SslVpnServerIdHasBeenSet() const;

                    /**
                     * 获取<p>SSL-VPN-CLIENT实例Name。不可和SslVpnClientNames同时使用。</p>
                     * @return SslVpnClientName <p>SSL-VPN-CLIENT实例Name。不可和SslVpnClientNames同时使用。</p>
                     * 
                     */
                    std::string GetSslVpnClientName() const;

                    /**
                     * 设置<p>SSL-VPN-CLIENT实例Name。不可和SslVpnClientNames同时使用。</p>
                     * @param _sslVpnClientName <p>SSL-VPN-CLIENT实例Name。不可和SslVpnClientNames同时使用。</p>
                     * 
                     */
                    void SetSslVpnClientName(const std::string& _sslVpnClientName);

                    /**
                     * 判断参数 SslVpnClientName 是否已赋值
                     * @return SslVpnClientName 是否已赋值
                     * 
                     */
                    bool SslVpnClientNameHasBeenSet() const;

                    /**
                     * 获取<p>SSL-VPN-CLIENT实例Name数字。批量创建时使用。不可和SslVpnClientName同时使用。</p>
                     * @return SslVpnClientNames <p>SSL-VPN-CLIENT实例Name数字。批量创建时使用。不可和SslVpnClientName同时使用。</p>
                     * 
                     */
                    std::vector<std::string> GetSslVpnClientNames() const;

                    /**
                     * 设置<p>SSL-VPN-CLIENT实例Name数字。批量创建时使用。不可和SslVpnClientName同时使用。</p>
                     * @param _sslVpnClientNames <p>SSL-VPN-CLIENT实例Name数字。批量创建时使用。不可和SslVpnClientName同时使用。</p>
                     * 
                     */
                    void SetSslVpnClientNames(const std::vector<std::string>& _sslVpnClientNames);

                    /**
                     * 判断参数 SslVpnClientNames 是否已赋值
                     * @return SslVpnClientNames 是否已赋值
                     * 
                     */
                    bool SslVpnClientNamesHasBeenSet() const;

                    /**
                     * 获取<p>指定绑定的标签列表</p>
                     * @return Tags <p>指定绑定的标签列表</p>
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置<p>指定绑定的标签列表</p>
                     * @param _tags <p>指定绑定的标签列表</p>
                     * 
                     */
                    void SetTags(const std::vector<Tag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                private:

                    /**
                     * <p>SSL-VPN-SERVER 实例ID。</p>
                     */
                    std::string m_sslVpnServerId;
                    bool m_sslVpnServerIdHasBeenSet;

                    /**
                     * <p>SSL-VPN-CLIENT实例Name。不可和SslVpnClientNames同时使用。</p>
                     */
                    std::string m_sslVpnClientName;
                    bool m_sslVpnClientNameHasBeenSet;

                    /**
                     * <p>SSL-VPN-CLIENT实例Name数字。批量创建时使用。不可和SslVpnClientName同时使用。</p>
                     */
                    std::vector<std::string> m_sslVpnClientNames;
                    bool m_sslVpnClientNamesHasBeenSet;

                    /**
                     * <p>指定绑定的标签列表</p>
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_CREATEVPNGATEWAYSSLCLIENTREQUEST_H_
