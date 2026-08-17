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

#ifndef TENCENTCLOUD_MNA_V20210119_MODEL_UPDATECUSTOMERGATEWAYCLUSTERREQUEST_H_
#define TENCENTCLOUD_MNA_V20210119_MODEL_UPDATECUSTOMERGATEWAYCLUSTERREQUEST_H_

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
                * UpdateCustomerGatewayCluster请求参数结构体
                */
                class UpdateCustomerGatewayClusterRequest : public AbstractModel
                {
                public:
                    UpdateCustomerGatewayClusterRequest();
                    ~UpdateCustomerGatewayClusterRequest() = default;
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
                     * 获取<p>公网访问 IP。最大 64 字符，需为合法的 IPv4 或 IPv6 地址。</p>
                     * @return PublicIp <p>公网访问 IP。最大 64 字符，需为合法的 IPv4 或 IPv6 地址。</p>
                     * 
                     */
                    std::string GetPublicIp() const;

                    /**
                     * 设置<p>公网访问 IP。最大 64 字符，需为合法的 IPv4 或 IPv6 地址。</p>
                     * @param _publicIp <p>公网访问 IP。最大 64 字符，需为合法的 IPv4 或 IPv6 地址。</p>
                     * 
                     */
                    void SetPublicIp(const std::string& _publicIp);

                    /**
                     * 判断参数 PublicIp 是否已赋值
                     * @return PublicIp 是否已赋值
                     * 
                     */
                    bool PublicIpHasBeenSet() const;

                private:

                    /**
                     * <p>集群 ID。可通过 GetCustomerGatewayClusterList 接口获取。</p>
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * <p>公网访问 IP。最大 64 字符，需为合法的 IPv4 或 IPv6 地址。</p>
                     */
                    std::string m_publicIp;
                    bool m_publicIpHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MNA_V20210119_MODEL_UPDATECUSTOMERGATEWAYCLUSTERREQUEST_H_
