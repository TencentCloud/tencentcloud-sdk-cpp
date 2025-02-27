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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_DESCRIBECLUSTERENDPOINTSRESPONSE_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_DESCRIBECLUSTERENDPOINTSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
        {
            namespace Model
            {
                /**
                * DescribeClusterEndpoints返回参数结构体
                */
                class DescribeClusterEndpointsResponse : public AbstractModel
                {
                public:
                    DescribeClusterEndpointsResponse();
                    ~DescribeClusterEndpointsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取集群APIServer的CA证书
                     * @return CertificationAuthority 集群APIServer的CA证书
                     * 
                     */
                    std::string GetCertificationAuthority() const;

                    /**
                     * 判断参数 CertificationAuthority 是否已赋值
                     * @return CertificationAuthority 是否已赋值
                     * 
                     */
                    bool CertificationAuthorityHasBeenSet() const;

                    /**
                     * 获取集群APIServer的外网访问地址
                     * @return ClusterExternalEndpoint 集群APIServer的外网访问地址
                     * 
                     */
                    std::string GetClusterExternalEndpoint() const;

                    /**
                     * 判断参数 ClusterExternalEndpoint 是否已赋值
                     * @return ClusterExternalEndpoint 是否已赋值
                     * 
                     */
                    bool ClusterExternalEndpointHasBeenSet() const;

                    /**
                     * 获取集群APIServer的内网访问地址
                     * @return ClusterIntranetEndpoint 集群APIServer的内网访问地址
                     * 
                     */
                    std::string GetClusterIntranetEndpoint() const;

                    /**
                     * 判断参数 ClusterIntranetEndpoint 是否已赋值
                     * @return ClusterIntranetEndpoint 是否已赋值
                     * 
                     */
                    bool ClusterIntranetEndpointHasBeenSet() const;

                    /**
                     * 获取集群APIServer的域名
                     * @return ClusterDomain 集群APIServer的域名
                     * 
                     */
                    std::string GetClusterDomain() const;

                    /**
                     * 判断参数 ClusterDomain 是否已赋值
                     * @return ClusterDomain 是否已赋值
                     * 
                     */
                    bool ClusterDomainHasBeenSet() const;

                    /**
                     * 获取集群APIServer的外网访问ACL列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ClusterExternalACL 集群APIServer的外网访问ACL列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetClusterExternalACL() const;

                    /**
                     * 判断参数 ClusterExternalACL 是否已赋值
                     * @return ClusterExternalACL 是否已赋值
                     * 
                     */
                    bool ClusterExternalACLHasBeenSet() const;

                    /**
                     * 获取外网域名
                     * @return ClusterExternalDomain 外网域名
                     * 
                     */
                    std::string GetClusterExternalDomain() const;

                    /**
                     * 判断参数 ClusterExternalDomain 是否已赋值
                     * @return ClusterExternalDomain 是否已赋值
                     * 
                     */
                    bool ClusterExternalDomainHasBeenSet() const;

                    /**
                     * 获取内网域名
                     * @return ClusterIntranetDomain 内网域名
                     * 
                     */
                    std::string GetClusterIntranetDomain() const;

                    /**
                     * 判断参数 ClusterIntranetDomain 是否已赋值
                     * @return ClusterIntranetDomain 是否已赋值
                     * 
                     */
                    bool ClusterIntranetDomainHasBeenSet() const;

                    /**
                     * 获取外网安全组
                     * @return SecurityGroup 外网安全组
                     * 
                     */
                    std::string GetSecurityGroup() const;

                    /**
                     * 判断参数 SecurityGroup 是否已赋值
                     * @return SecurityGroup 是否已赋值
                     * 
                     */
                    bool SecurityGroupHasBeenSet() const;

                    /**
                     * 获取内网访问所属子网
                     * @return ClusterIntranetSubnetId 内网访问所属子网
                     * 
                     */
                    std::string GetClusterIntranetSubnetId() const;

                    /**
                     * 判断参数 ClusterIntranetSubnetId 是否已赋值
                     * @return ClusterIntranetSubnetId 是否已赋值
                     * 
                     */
                    bool ClusterIntranetSubnetIdHasBeenSet() const;

                private:

                    /**
                     * 集群APIServer的CA证书
                     */
                    std::string m_certificationAuthority;
                    bool m_certificationAuthorityHasBeenSet;

                    /**
                     * 集群APIServer的外网访问地址
                     */
                    std::string m_clusterExternalEndpoint;
                    bool m_clusterExternalEndpointHasBeenSet;

                    /**
                     * 集群APIServer的内网访问地址
                     */
                    std::string m_clusterIntranetEndpoint;
                    bool m_clusterIntranetEndpointHasBeenSet;

                    /**
                     * 集群APIServer的域名
                     */
                    std::string m_clusterDomain;
                    bool m_clusterDomainHasBeenSet;

                    /**
                     * 集群APIServer的外网访问ACL列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_clusterExternalACL;
                    bool m_clusterExternalACLHasBeenSet;

                    /**
                     * 外网域名
                     */
                    std::string m_clusterExternalDomain;
                    bool m_clusterExternalDomainHasBeenSet;

                    /**
                     * 内网域名
                     */
                    std::string m_clusterIntranetDomain;
                    bool m_clusterIntranetDomainHasBeenSet;

                    /**
                     * 外网安全组
                     */
                    std::string m_securityGroup;
                    bool m_securityGroupHasBeenSet;

                    /**
                     * 内网访问所属子网
                     */
                    std::string m_clusterIntranetSubnetId;
                    bool m_clusterIntranetSubnetIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_DESCRIBECLUSTERENDPOINTSRESPONSE_H_
