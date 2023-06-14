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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_ADDVPCCNISUBNETSREQUEST_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_ADDVPCCNISUBNETSREQUEST_H_

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
                * AddVpcCniSubnets请求参数结构体
                */
                class AddVpcCniSubnetsRequest : public AbstractModel
                {
                public:
                    AddVpcCniSubnetsRequest();
                    ~AddVpcCniSubnetsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取集群ID
                     * @return ClusterId 集群ID
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置集群ID
                     * @param _clusterId 集群ID
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
                     * 获取为集群容器网络增加的子网列表
                     * @return SubnetIds 为集群容器网络增加的子网列表
                     * 
                     */
                    std::vector<std::string> GetSubnetIds() const;

                    /**
                     * 设置为集群容器网络增加的子网列表
                     * @param _subnetIds 为集群容器网络增加的子网列表
                     * 
                     */
                    void SetSubnetIds(const std::vector<std::string>& _subnetIds);

                    /**
                     * 判断参数 SubnetIds 是否已赋值
                     * @return SubnetIds 是否已赋值
                     * 
                     */
                    bool SubnetIdsHasBeenSet() const;

                    /**
                     * 获取集群所属的VPC的ID
                     * @return VpcId 集群所属的VPC的ID
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置集群所属的VPC的ID
                     * @param _vpcId 集群所属的VPC的ID
                     * 
                     */
                    void SetVpcId(const std::string& _vpcId);

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     * 
                     */
                    bool VpcIdHasBeenSet() const;

                    /**
                     * 获取是否同步添加 vpc 网段到 ip-masq-agent-config 的 NonMasqueradeCIDRs 字段，默认 false 会同步添加
                     * @return SkipAddingNonMasqueradeCIDRs 是否同步添加 vpc 网段到 ip-masq-agent-config 的 NonMasqueradeCIDRs 字段，默认 false 会同步添加
                     * 
                     */
                    bool GetSkipAddingNonMasqueradeCIDRs() const;

                    /**
                     * 设置是否同步添加 vpc 网段到 ip-masq-agent-config 的 NonMasqueradeCIDRs 字段，默认 false 会同步添加
                     * @param _skipAddingNonMasqueradeCIDRs 是否同步添加 vpc 网段到 ip-masq-agent-config 的 NonMasqueradeCIDRs 字段，默认 false 会同步添加
                     * 
                     */
                    void SetSkipAddingNonMasqueradeCIDRs(const bool& _skipAddingNonMasqueradeCIDRs);

                    /**
                     * 判断参数 SkipAddingNonMasqueradeCIDRs 是否已赋值
                     * @return SkipAddingNonMasqueradeCIDRs 是否已赋值
                     * 
                     */
                    bool SkipAddingNonMasqueradeCIDRsHasBeenSet() const;

                private:

                    /**
                     * 集群ID
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * 为集群容器网络增加的子网列表
                     */
                    std::vector<std::string> m_subnetIds;
                    bool m_subnetIdsHasBeenSet;

                    /**
                     * 集群所属的VPC的ID
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * 是否同步添加 vpc 网段到 ip-masq-agent-config 的 NonMasqueradeCIDRs 字段，默认 false 会同步添加
                     */
                    bool m_skipAddingNonMasqueradeCIDRs;
                    bool m_skipAddingNonMasqueradeCIDRsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_ADDVPCCNISUBNETSREQUEST_H_
