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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_CREATESUBNETSREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_CREATESUBNETSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vpc/v20170312/model/SubnetInput.h>
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
                * CreateSubnets请求参数结构体
                */
                class CreateSubnetsRequest : public AbstractModel
                {
                public:
                    CreateSubnetsRequest();
                    ~CreateSubnetsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取`VPC`实例`ID`。形如：`vpc-6v2ht8q5`。
                     * @return VpcId `VPC`实例`ID`。形如：`vpc-6v2ht8q5`。
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置`VPC`实例`ID`。形如：`vpc-6v2ht8q5`。
                     * @param _vpcId `VPC`实例`ID`。形如：`vpc-6v2ht8q5`。
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
                     * 获取子网对象列表。
                     * @return Subnets 子网对象列表。
                     * 
                     */
                    std::vector<SubnetInput> GetSubnets() const;

                    /**
                     * 设置子网对象列表。
                     * @param _subnets 子网对象列表。
                     * 
                     */
                    void SetSubnets(const std::vector<SubnetInput>& _subnets);

                    /**
                     * 判断参数 Subnets 是否已赋值
                     * @return Subnets 是否已赋值
                     * 
                     */
                    bool SubnetsHasBeenSet() const;

                    /**
                     * 获取指定绑定的标签列表，注意这里的标签集合为列表中所有子网对象所共享，不能为每个子网对象单独指定标签，例如：[{"Key": "city", "Value": "shanghai"}]。
                     * @return Tags 指定绑定的标签列表，注意这里的标签集合为列表中所有子网对象所共享，不能为每个子网对象单独指定标签，例如：[{"Key": "city", "Value": "shanghai"}]。
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置指定绑定的标签列表，注意这里的标签集合为列表中所有子网对象所共享，不能为每个子网对象单独指定标签，例如：[{"Key": "city", "Value": "shanghai"}]。
                     * @param _tags 指定绑定的标签列表，注意这里的标签集合为列表中所有子网对象所共享，不能为每个子网对象单独指定标签，例如：[{"Key": "city", "Value": "shanghai"}]。
                     * 
                     */
                    void SetTags(const std::vector<Tag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取需要增加到的CDC实例ID。
                     * @return CdcId 需要增加到的CDC实例ID。
                     * 
                     */
                    std::string GetCdcId() const;

                    /**
                     * 设置需要增加到的CDC实例ID。
                     * @param _cdcId 需要增加到的CDC实例ID。
                     * 
                     */
                    void SetCdcId(const std::string& _cdcId);

                    /**
                     * 判断参数 CdcId 是否已赋值
                     * @return CdcId 是否已赋值
                     * 
                     */
                    bool CdcIdHasBeenSet() const;

                private:

                    /**
                     * `VPC`实例`ID`。形如：`vpc-6v2ht8q5`。
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * 子网对象列表。
                     */
                    std::vector<SubnetInput> m_subnets;
                    bool m_subnetsHasBeenSet;

                    /**
                     * 指定绑定的标签列表，注意这里的标签集合为列表中所有子网对象所共享，不能为每个子网对象单独指定标签，例如：[{"Key": "city", "Value": "shanghai"}]。
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * 需要增加到的CDC实例ID。
                     */
                    std::string m_cdcId;
                    bool m_cdcIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_CREATESUBNETSREQUEST_H_
