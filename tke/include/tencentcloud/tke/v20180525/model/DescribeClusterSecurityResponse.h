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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_DESCRIBECLUSTERSECURITYRESPONSE_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_DESCRIBECLUSTERSECURITYRESPONSE_H_

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
                * DescribeClusterSecurity返回参数结构体
                */
                class DescribeClusterSecurityResponse : public AbstractModel
                {
                public:
                    DescribeClusterSecurityResponse();
                    ~DescribeClusterSecurityResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取集群的账号名称
                     * @return UserName 集群的账号名称
                     * 
                     */
                    std::string GetUserName() const;

                    /**
                     * 判断参数 UserName 是否已赋值
                     * @return UserName 是否已赋值
                     * 
                     */
                    bool UserNameHasBeenSet() const;

                    /**
                     * 获取集群的访问密码
                     * @return Password 集群的访问密码
                     * 
                     */
                    std::string GetPassword() const;

                    /**
                     * 判断参数 Password 是否已赋值
                     * @return Password 是否已赋值
                     * 
                     */
                    bool PasswordHasBeenSet() const;

                    /**
                     * 获取集群访问CA证书
                     * @return CertificationAuthority 集群访问CA证书
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
                     * 获取集群访问的地址
                     * @return ClusterExternalEndpoint 集群访问的地址
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
                     * 获取集群访问的域名
                     * @return Domain 集群访问的域名
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 判断参数 Domain 是否已赋值
                     * @return Domain 是否已赋值
                     * 
                     */
                    bool DomainHasBeenSet() const;

                    /**
                     * 获取集群Endpoint地址
                     * @return PgwEndpoint 集群Endpoint地址
                     * 
                     */
                    std::string GetPgwEndpoint() const;

                    /**
                     * 判断参数 PgwEndpoint 是否已赋值
                     * @return PgwEndpoint 是否已赋值
                     * 
                     */
                    bool PgwEndpointHasBeenSet() const;

                    /**
                     * 获取集群访问策略组
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SecurityPolicy 集群访问策略组
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetSecurityPolicy() const;

                    /**
                     * 判断参数 SecurityPolicy 是否已赋值
                     * @return SecurityPolicy 是否已赋值
                     * 
                     */
                    bool SecurityPolicyHasBeenSet() const;

                    /**
                     * 获取集群Kubeconfig文件
                     * @return Kubeconfig 集群Kubeconfig文件
                     * 
                     */
                    std::string GetKubeconfig() const;

                    /**
                     * 判断参数 Kubeconfig 是否已赋值
                     * @return Kubeconfig 是否已赋值
                     * 
                     */
                    bool KubeconfigHasBeenSet() const;

                    /**
                     * 获取集群JnsGw的访问地址
注意：此字段可能返回 null，表示取不到有效值。
                     * @return JnsGwEndpoint 集群JnsGw的访问地址
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetJnsGwEndpoint() const;

                    /**
                     * 判断参数 JnsGwEndpoint 是否已赋值
                     * @return JnsGwEndpoint 是否已赋值
                     * 
                     */
                    bool JnsGwEndpointHasBeenSet() const;

                private:

                    /**
                     * 集群的账号名称
                     */
                    std::string m_userName;
                    bool m_userNameHasBeenSet;

                    /**
                     * 集群的访问密码
                     */
                    std::string m_password;
                    bool m_passwordHasBeenSet;

                    /**
                     * 集群访问CA证书
                     */
                    std::string m_certificationAuthority;
                    bool m_certificationAuthorityHasBeenSet;

                    /**
                     * 集群访问的地址
                     */
                    std::string m_clusterExternalEndpoint;
                    bool m_clusterExternalEndpointHasBeenSet;

                    /**
                     * 集群访问的域名
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * 集群Endpoint地址
                     */
                    std::string m_pgwEndpoint;
                    bool m_pgwEndpointHasBeenSet;

                    /**
                     * 集群访问策略组
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_securityPolicy;
                    bool m_securityPolicyHasBeenSet;

                    /**
                     * 集群Kubeconfig文件
                     */
                    std::string m_kubeconfig;
                    bool m_kubeconfigHasBeenSet;

                    /**
                     * 集群JnsGw的访问地址
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_jnsGwEndpoint;
                    bool m_jnsGwEndpointHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_DESCRIBECLUSTERSECURITYRESPONSE_H_
