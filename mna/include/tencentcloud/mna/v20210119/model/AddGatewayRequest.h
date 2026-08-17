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

#ifndef TENCENTCLOUD_MNA_V20210119_MODEL_ADDGATEWAYREQUEST_H_
#define TENCENTCLOUD_MNA_V20210119_MODEL_ADDGATEWAYREQUEST_H_

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
                * AddGateway请求参数结构体
                */
                class AddGatewayRequest : public AbstractModel
                {
                public:
                    AddGatewayRequest();
                    ~AddGatewayRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>集群 ID。可通过 GetCustomerGatewayClusterList 接口获取。</p>
                     * @return ClusterId <p>集群 ID。可通过 GetCustomerGatewayClusterList 接口获取。</p>
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置<p>集群 ID。可通过 GetCustomerGatewayClusterList 接口获取。</p>
                     * @param _clusterId <p>集群 ID。可通过 GetCustomerGatewayClusterList 接口获取。</p>
                     * 
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     * 
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取<p>网关登录用户名。最大 64 字符。</p>
                     * @return Username <p>网关登录用户名。最大 64 字符。</p>
                     * 
                     */
                    std::string GetUsername() const;

                    /**
                     * 设置<p>网关登录用户名。最大 64 字符。</p>
                     * @param _username <p>网关登录用户名。最大 64 字符。</p>
                     * 
                     */
                    void SetUsername(const std::string& _username);

                    /**
                     * 判断参数 Username 是否已赋值
                     * @return Username 是否已赋值
                     * 
                     */
                    bool UsernameHasBeenSet() const;

                    /**
                     * 获取<p>网关登录密码。最大 128 字符。</p>
                     * @return Password <p>网关登录密码。最大 128 字符。</p>
                     * 
                     */
                    std::string GetPassword() const;

                    /**
                     * 设置<p>网关登录密码。最大 128 字符。</p>
                     * @param _password <p>网关登录密码。最大 128 字符。</p>
                     * 
                     */
                    void SetPassword(const std::string& _password);

                    /**
                     * 判断参数 Password 是否已赋值
                     * @return Password 是否已赋值
                     * 
                     */
                    bool PasswordHasBeenSet() const;

                    /**
                     * 获取<p>网关内网IP。</p>
                     * @return GatewayIp <p>网关内网IP。</p>
                     * 
                     */
                    std::string GetGatewayIp() const;

                    /**
                     * 设置<p>网关内网IP。</p>
                     * @param _gatewayIp <p>网关内网IP。</p>
                     * 
                     */
                    void SetGatewayIp(const std::string& _gatewayIp);

                    /**
                     * 判断参数 GatewayIp 是否已赋值
                     * @return GatewayIp 是否已赋值
                     * 
                     */
                    bool GatewayIpHasBeenSet() const;

                    /**
                     * 获取<p>地域标识。最大 32 字符。例如 ap-guangzhou。可通过 DescribeAccessPointList 接口获取。</p>
                     * @return RegionId <p>地域标识。最大 32 字符。例如 ap-guangzhou。可通过 DescribeAccessPointList 接口获取。</p>
                     * 
                     */
                    std::string GetRegionId() const;

                    /**
                     * 设置<p>地域标识。最大 32 字符。例如 ap-guangzhou。可通过 DescribeAccessPointList 接口获取。</p>
                     * @param _regionId <p>地域标识。最大 32 字符。例如 ap-guangzhou。可通过 DescribeAccessPointList 接口获取。</p>
                     * 
                     */
                    void SetRegionId(const std::string& _regionId);

                    /**
                     * 判断参数 RegionId 是否已赋值
                     * @return RegionId 是否已赋值
                     * 
                     */
                    bool RegionIdHasBeenSet() const;

                private:

                    /**
                     * <p>集群 ID。可通过 GetCustomerGatewayClusterList 接口获取。</p>
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * <p>网关登录用户名。最大 64 字符。</p>
                     */
                    std::string m_username;
                    bool m_usernameHasBeenSet;

                    /**
                     * <p>网关登录密码。最大 128 字符。</p>
                     */
                    std::string m_password;
                    bool m_passwordHasBeenSet;

                    /**
                     * <p>网关内网IP。</p>
                     */
                    std::string m_gatewayIp;
                    bool m_gatewayIpHasBeenSet;

                    /**
                     * <p>地域标识。最大 32 字符。例如 ap-guangzhou。可通过 DescribeAccessPointList 接口获取。</p>
                     */
                    std::string m_regionId;
                    bool m_regionIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MNA_V20210119_MODEL_ADDGATEWAYREQUEST_H_
