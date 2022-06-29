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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_CREATECLUSTERENDPOINTREQUEST_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_CREATECLUSTERENDPOINTREQUEST_H_

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
                * CreateClusterEndpoint请求参数结构体
                */
                class CreateClusterEndpointRequest : public AbstractModel
                {
                public:
                    CreateClusterEndpointRequest();
                    ~CreateClusterEndpointRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取集群ID
                     * @return ClusterId 集群ID
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置集群ID
                     * @param ClusterId 集群ID
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取集群端口所在的子网ID  (仅在开启非外网访问时需要填，必须为集群所在VPC内的子网)
                     * @return SubnetId 集群端口所在的子网ID  (仅在开启非外网访问时需要填，必须为集群所在VPC内的子网)
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置集群端口所在的子网ID  (仅在开启非外网访问时需要填，必须为集群所在VPC内的子网)
                     * @param SubnetId 集群端口所在的子网ID  (仅在开启非外网访问时需要填，必须为集群所在VPC内的子网)
                     */
                    void SetSubnetId(const std::string& _subnetId);

                    /**
                     * 判断参数 SubnetId 是否已赋值
                     * @return SubnetId 是否已赋值
                     */
                    bool SubnetIdHasBeenSet() const;

                    /**
                     * 获取是否为外网访问（TRUE 外网访问 FALSE 内网访问，默认值： FALSE）
                     * @return IsExtranet 是否为外网访问（TRUE 外网访问 FALSE 内网访问，默认值： FALSE）
                     */
                    bool GetIsExtranet() const;

                    /**
                     * 设置是否为外网访问（TRUE 外网访问 FALSE 内网访问，默认值： FALSE）
                     * @param IsExtranet 是否为外网访问（TRUE 外网访问 FALSE 内网访问，默认值： FALSE）
                     */
                    void SetIsExtranet(const bool& _isExtranet);

                    /**
                     * 判断参数 IsExtranet 是否已赋值
                     * @return IsExtranet 是否已赋值
                     */
                    bool IsExtranetHasBeenSet() const;

                    /**
                     * 获取设置域名
                     * @return Domain 设置域名
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置设置域名
                     * @param Domain 设置域名
                     */
                    void SetDomain(const std::string& _domain);

                    /**
                     * 判断参数 Domain 是否已赋值
                     * @return Domain 是否已赋值
                     */
                    bool DomainHasBeenSet() const;

                    /**
                     * 获取使用的安全组，只有外网访问需要传递
                     * @return SecurityGroup 使用的安全组，只有外网访问需要传递
                     */
                    std::string GetSecurityGroup() const;

                    /**
                     * 设置使用的安全组，只有外网访问需要传递
                     * @param SecurityGroup 使用的安全组，只有外网访问需要传递
                     */
                    void SetSecurityGroup(const std::string& _securityGroup);

                    /**
                     * 判断参数 SecurityGroup 是否已赋值
                     * @return SecurityGroup 是否已赋值
                     */
                    bool SecurityGroupHasBeenSet() const;

                    /**
                     * 获取创建lb参数，只有外网访问需要设置
                     * @return ExtensiveParameters 创建lb参数，只有外网访问需要设置
                     */
                    std::string GetExtensiveParameters() const;

                    /**
                     * 设置创建lb参数，只有外网访问需要设置
                     * @param ExtensiveParameters 创建lb参数，只有外网访问需要设置
                     */
                    void SetExtensiveParameters(const std::string& _extensiveParameters);

                    /**
                     * 判断参数 ExtensiveParameters 是否已赋值
                     * @return ExtensiveParameters 是否已赋值
                     */
                    bool ExtensiveParametersHasBeenSet() const;

                private:

                    /**
                     * 集群ID
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * 集群端口所在的子网ID  (仅在开启非外网访问时需要填，必须为集群所在VPC内的子网)
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * 是否为外网访问（TRUE 外网访问 FALSE 内网访问，默认值： FALSE）
                     */
                    bool m_isExtranet;
                    bool m_isExtranetHasBeenSet;

                    /**
                     * 设置域名
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * 使用的安全组，只有外网访问需要传递
                     */
                    std::string m_securityGroup;
                    bool m_securityGroupHasBeenSet;

                    /**
                     * 创建lb参数，只有外网访问需要设置
                     */
                    std::string m_extensiveParameters;
                    bool m_extensiveParametersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_CREATECLUSTERENDPOINTREQUEST_H_
