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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_DESCRIBETKEEDGECLUSTERCREDENTIALRESPONSE_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_DESCRIBETKEEDGECLUSTERCREDENTIALRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tke/v20180525/model/IPAddress.h>
#include <tencentcloud/tke/v20180525/model/ClusterCredential.h>
#include <tencentcloud/tke/v20180525/model/EdgeClusterPublicLB.h>
#include <tencentcloud/tke/v20180525/model/EdgeClusterInternalLB.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
        {
            namespace Model
            {
                /**
                * DescribeTKEEdgeClusterCredential返回参数结构体
                */
                class DescribeTKEEdgeClusterCredentialResponse : public AbstractModel
                {
                public:
                    DescribeTKEEdgeClusterCredentialResponse();
                    ~DescribeTKEEdgeClusterCredentialResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取集群的接入地址信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Addresses 集群的接入地址信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<IPAddress> GetAddresses() const;

                    /**
                     * 判断参数 Addresses 是否已赋值
                     * @return Addresses 是否已赋值
                     * 
                     */
                    bool AddressesHasBeenSet() const;

                    /**
                     * 获取集群的认证信息
                     * @return Credential 集群的认证信息
                     * 
                     */
                    ClusterCredential GetCredential() const;

                    /**
                     * 判断参数 Credential 是否已赋值
                     * @return Credential 是否已赋值
                     * 
                     */
                    bool CredentialHasBeenSet() const;

                    /**
                     * 获取集群的公网访问信息
                     * @return PublicLB 集群的公网访问信息
                     * 
                     */
                    EdgeClusterPublicLB GetPublicLB() const;

                    /**
                     * 判断参数 PublicLB 是否已赋值
                     * @return PublicLB 是否已赋值
                     * 
                     */
                    bool PublicLBHasBeenSet() const;

                    /**
                     * 获取集群的内网访问信息
                     * @return InternalLB 集群的内网访问信息
                     * 
                     */
                    EdgeClusterInternalLB GetInternalLB() const;

                    /**
                     * 判断参数 InternalLB 是否已赋值
                     * @return InternalLB 是否已赋值
                     * 
                     */
                    bool InternalLBHasBeenSet() const;

                    /**
                     * 获取集群的CoreDns部署信息
                     * @return CoreDns 集群的CoreDns部署信息
                     * 
                     */
                    std::string GetCoreDns() const;

                    /**
                     * 判断参数 CoreDns 是否已赋值
                     * @return CoreDns 是否已赋值
                     * 
                     */
                    bool CoreDnsHasBeenSet() const;

                    /**
                     * 获取集群的健康检查多地域部署信息
                     * @return HealthRegion 集群的健康检查多地域部署信息
                     * 
                     */
                    std::string GetHealthRegion() const;

                    /**
                     * 判断参数 HealthRegion 是否已赋值
                     * @return HealthRegion 是否已赋值
                     * 
                     */
                    bool HealthRegionHasBeenSet() const;

                    /**
                     * 获取集群的健康检查部署信息
                     * @return Health 集群的健康检查部署信息
                     * 
                     */
                    std::string GetHealth() const;

                    /**
                     * 判断参数 Health 是否已赋值
                     * @return Health 是否已赋值
                     * 
                     */
                    bool HealthHasBeenSet() const;

                    /**
                     * 获取是否部署GridDaemon以支持headless service
                     * @return GridDaemon 是否部署GridDaemon以支持headless service
                     * 
                     */
                    std::string GetGridDaemon() const;

                    /**
                     * 判断参数 GridDaemon 是否已赋值
                     * @return GridDaemon 是否已赋值
                     * 
                     */
                    bool GridDaemonHasBeenSet() const;

                    /**
                     * 获取公网访问kins集群
                     * @return UnitCluster 公网访问kins集群
                     * 
                     */
                    std::string GetUnitCluster() const;

                    /**
                     * 判断参数 UnitCluster 是否已赋值
                     * @return UnitCluster 是否已赋值
                     * 
                     */
                    bool UnitClusterHasBeenSet() const;

                private:

                    /**
                     * 集群的接入地址信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<IPAddress> m_addresses;
                    bool m_addressesHasBeenSet;

                    /**
                     * 集群的认证信息
                     */
                    ClusterCredential m_credential;
                    bool m_credentialHasBeenSet;

                    /**
                     * 集群的公网访问信息
                     */
                    EdgeClusterPublicLB m_publicLB;
                    bool m_publicLBHasBeenSet;

                    /**
                     * 集群的内网访问信息
                     */
                    EdgeClusterInternalLB m_internalLB;
                    bool m_internalLBHasBeenSet;

                    /**
                     * 集群的CoreDns部署信息
                     */
                    std::string m_coreDns;
                    bool m_coreDnsHasBeenSet;

                    /**
                     * 集群的健康检查多地域部署信息
                     */
                    std::string m_healthRegion;
                    bool m_healthRegionHasBeenSet;

                    /**
                     * 集群的健康检查部署信息
                     */
                    std::string m_health;
                    bool m_healthHasBeenSet;

                    /**
                     * 是否部署GridDaemon以支持headless service
                     */
                    std::string m_gridDaemon;
                    bool m_gridDaemonHasBeenSet;

                    /**
                     * 公网访问kins集群
                     */
                    std::string m_unitCluster;
                    bool m_unitClusterHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_DESCRIBETKEEDGECLUSTERCREDENTIALRESPONSE_H_
