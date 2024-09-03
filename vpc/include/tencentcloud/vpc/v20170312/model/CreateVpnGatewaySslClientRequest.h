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
                     * 获取SSL-VPN-SERVER 实例ID。
                     * @return SslVpnServerId SSL-VPN-SERVER 实例ID。
                     * 
                     */
                    std::string GetSslVpnServerId() const;

                    /**
                     * 设置SSL-VPN-SERVER 实例ID。
                     * @param _sslVpnServerId SSL-VPN-SERVER 实例ID。
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
                     * 获取SSL-VPN-CLIENT实例Name。不可和SslVpnClientNames同时使用。
                     * @return SslVpnClientName SSL-VPN-CLIENT实例Name。不可和SslVpnClientNames同时使用。
                     * 
                     */
                    std::string GetSslVpnClientName() const;

                    /**
                     * 设置SSL-VPN-CLIENT实例Name。不可和SslVpnClientNames同时使用。
                     * @param _sslVpnClientName SSL-VPN-CLIENT实例Name。不可和SslVpnClientNames同时使用。
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
                     * 获取SSL-VPN-CLIENT实例Name数字。批量创建时使用。不可和SslVpnClientName同时使用。
                     * @return SslVpnClientNames SSL-VPN-CLIENT实例Name数字。批量创建时使用。不可和SslVpnClientName同时使用。
                     * 
                     */
                    std::vector<std::string> GetSslVpnClientNames() const;

                    /**
                     * 设置SSL-VPN-CLIENT实例Name数字。批量创建时使用。不可和SslVpnClientName同时使用。
                     * @param _sslVpnClientNames SSL-VPN-CLIENT实例Name数字。批量创建时使用。不可和SslVpnClientName同时使用。
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
                     * 获取指定绑定的标签列表
                     * @return Tags 指定绑定的标签列表
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置指定绑定的标签列表
                     * @param _tags 指定绑定的标签列表
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
                     * SSL-VPN-SERVER 实例ID。
                     */
                    std::string m_sslVpnServerId;
                    bool m_sslVpnServerIdHasBeenSet;

                    /**
                     * SSL-VPN-CLIENT实例Name。不可和SslVpnClientNames同时使用。
                     */
                    std::string m_sslVpnClientName;
                    bool m_sslVpnClientNameHasBeenSet;

                    /**
                     * SSL-VPN-CLIENT实例Name数字。批量创建时使用。不可和SslVpnClientName同时使用。
                     */
                    std::vector<std::string> m_sslVpnClientNames;
                    bool m_sslVpnClientNamesHasBeenSet;

                    /**
                     * 指定绑定的标签列表
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_CREATEVPNGATEWAYSSLCLIENTREQUEST_H_
