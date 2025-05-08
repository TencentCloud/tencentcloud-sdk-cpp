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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_ASSISTANTCIDR_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_ASSISTANTCIDR_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vpc/v20170312/model/Subnet.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * VPC辅助CIDR信息。
                */
                class AssistantCidr : public AbstractModel
                {
                public:
                    AssistantCidr();
                    ~AssistantCidr() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取`VPC`实例`ID`。形如：`vpc-6v2ht8q5`
                     * @return VpcId `VPC`实例`ID`。形如：`vpc-6v2ht8q5`
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置`VPC`实例`ID`。形如：`vpc-6v2ht8q5`
                     * @param _vpcId `VPC`实例`ID`。形如：`vpc-6v2ht8q5`
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
                     * 获取辅助CIDR。形如：`172.16.0.0/16`
                     * @return CidrBlock 辅助CIDR。形如：`172.16.0.0/16`
                     * 
                     */
                    std::string GetCidrBlock() const;

                    /**
                     * 设置辅助CIDR。形如：`172.16.0.0/16`
                     * @param _cidrBlock 辅助CIDR。形如：`172.16.0.0/16`
                     * 
                     */
                    void SetCidrBlock(const std::string& _cidrBlock);

                    /**
                     * 判断参数 CidrBlock 是否已赋值
                     * @return CidrBlock 是否已赋值
                     * 
                     */
                    bool CidrBlockHasBeenSet() const;

                    /**
                     * 获取辅助CIDR类型（0：普通辅助CIDR，1：容器辅助CIDR），默认都是0。
                     * @return AssistantType 辅助CIDR类型（0：普通辅助CIDR，1：容器辅助CIDR），默认都是0。
                     * 
                     */
                    int64_t GetAssistantType() const;

                    /**
                     * 设置辅助CIDR类型（0：普通辅助CIDR，1：容器辅助CIDR），默认都是0。
                     * @param _assistantType 辅助CIDR类型（0：普通辅助CIDR，1：容器辅助CIDR），默认都是0。
                     * 
                     */
                    void SetAssistantType(const int64_t& _assistantType);

                    /**
                     * 判断参数 AssistantType 是否已赋值
                     * @return AssistantType 是否已赋值
                     * 
                     */
                    bool AssistantTypeHasBeenSet() const;

                    /**
                     * 获取辅助CIDR拆分的子网。
                     * @return SubnetSet 辅助CIDR拆分的子网。
                     * 
                     */
                    std::vector<Subnet> GetSubnetSet() const;

                    /**
                     * 设置辅助CIDR拆分的子网。
                     * @param _subnetSet 辅助CIDR拆分的子网。
                     * 
                     */
                    void SetSubnetSet(const std::vector<Subnet>& _subnetSet);

                    /**
                     * 判断参数 SubnetSet 是否已赋值
                     * @return SubnetSet 是否已赋值
                     * 
                     */
                    bool SubnetSetHasBeenSet() const;

                private:

                    /**
                     * `VPC`实例`ID`。形如：`vpc-6v2ht8q5`
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * 辅助CIDR。形如：`172.16.0.0/16`
                     */
                    std::string m_cidrBlock;
                    bool m_cidrBlockHasBeenSet;

                    /**
                     * 辅助CIDR类型（0：普通辅助CIDR，1：容器辅助CIDR），默认都是0。
                     */
                    int64_t m_assistantType;
                    bool m_assistantTypeHasBeenSet;

                    /**
                     * 辅助CIDR拆分的子网。
                     */
                    std::vector<Subnet> m_subnetSet;
                    bool m_subnetSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_ASSISTANTCIDR_H_
