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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_RESERVEIPADDRESSINFO_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_RESERVEIPADDRESSINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * 内网保留IP数据
                */
                class ReserveIpAddressInfo : public AbstractModel
                {
                public:
                    ReserveIpAddressInfo();
                    ~ReserveIpAddressInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取内网保留IP唯一 ID。
                     * @return ReserveIpId 内网保留IP唯一 ID。
                     * 
                     */
                    std::string GetReserveIpId() const;

                    /**
                     * 设置内网保留IP唯一 ID。
                     * @param _reserveIpId 内网保留IP唯一 ID。
                     * 
                     */
                    void SetReserveIpId(const std::string& _reserveIpId);

                    /**
                     * 判断参数 ReserveIpId 是否已赋值
                     * @return ReserveIpId 是否已赋值
                     * 
                     */
                    bool ReserveIpIdHasBeenSet() const;

                    /**
                     * 获取VPC唯一 ID。
                     * @return VpcId VPC唯一 ID。
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置VPC唯一 ID。
                     * @param _vpcId VPC唯一 ID。
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
                     * 获取子网唯一 ID。
                     * @return SubnetId 子网唯一 ID。
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置子网唯一 ID。
                     * @param _subnetId 子网唯一 ID。
                     * 
                     */
                    void SetSubnetId(const std::string& _subnetId);

                    /**
                     * 判断参数 SubnetId 是否已赋值
                     * @return SubnetId 是否已赋值
                     * 
                     */
                    bool SubnetIdHasBeenSet() const;

                    /**
                     * 获取内网保留IP地址。
                     * @return ReserveIpAddress 内网保留IP地址。
                     * 
                     */
                    std::string GetReserveIpAddress() const;

                    /**
                     * 设置内网保留IP地址。
                     * @param _reserveIpAddress 内网保留IP地址。
                     * 
                     */
                    void SetReserveIpAddress(const std::string& _reserveIpAddress);

                    /**
                     * 判断参数 ReserveIpAddress 是否已赋值
                     * @return ReserveIpAddress 是否已赋值
                     * 
                     */
                    bool ReserveIpAddressHasBeenSet() const;

                    /**
                     * 获取内网保留 IP绑定的资源实例 ID。
                     * @return ResourceId 内网保留 IP绑定的资源实例 ID。
                     * 
                     */
                    std::string GetResourceId() const;

                    /**
                     * 设置内网保留 IP绑定的资源实例 ID。
                     * @param _resourceId 内网保留 IP绑定的资源实例 ID。
                     * 
                     */
                    void SetResourceId(const std::string& _resourceId);

                    /**
                     * 判断参数 ResourceId 是否已赋值
                     * @return ResourceId 是否已赋值
                     * 
                     */
                    bool ResourceIdHasBeenSet() const;

                    /**
                     * 获取产品申请的IpType。
                     * @return IpType 产品申请的IpType。
                     * 
                     */
                    uint64_t GetIpType() const;

                    /**
                     * 设置产品申请的IpType。
                     * @param _ipType 产品申请的IpType。
                     * 
                     */
                    void SetIpType(const uint64_t& _ipType);

                    /**
                     * 判断参数 IpType 是否已赋值
                     * @return IpType 是否已赋值
                     * 
                     */
                    bool IpTypeHasBeenSet() const;

                    /**
                     * 获取绑定状态，UnBind-未绑定， Bind-绑定。
                     * @return State 绑定状态，UnBind-未绑定， Bind-绑定。
                     * 
                     */
                    std::string GetState() const;

                    /**
                     * 设置绑定状态，UnBind-未绑定， Bind-绑定。
                     * @param _state 绑定状态，UnBind-未绑定， Bind-绑定。
                     * 
                     */
                    void SetState(const std::string& _state);

                    /**
                     * 判断参数 State 是否已赋值
                     * @return State 是否已赋值
                     * 
                     */
                    bool StateHasBeenSet() const;

                    /**
                     * 获取保留 IP名称。
                     * @return Name 保留 IP名称。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置保留 IP名称。
                     * @param _name 保留 IP名称。
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取保留 IP描述。
                     * @return Description 保留 IP描述。
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置保留 IP描述。
                     * @param _description 保留 IP描述。
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取创建时间。
                     * @return CreatedTime 创建时间。
                     * 
                     */
                    std::string GetCreatedTime() const;

                    /**
                     * 设置创建时间。
                     * @param _createdTime 创建时间。
                     * 
                     */
                    void SetCreatedTime(const std::string& _createdTime);

                    /**
                     * 判断参数 CreatedTime 是否已赋值
                     * @return CreatedTime 是否已赋值
                     * 
                     */
                    bool CreatedTimeHasBeenSet() const;

                    /**
                     * 获取标签键值对。
                     * @return TagSet 标签键值对。
                     * 
                     */
                    std::vector<Tag> GetTagSet() const;

                    /**
                     * 设置标签键值对。
                     * @param _tagSet 标签键值对。
                     * 
                     */
                    void SetTagSet(const std::vector<Tag>& _tagSet);

                    /**
                     * 判断参数 TagSet 是否已赋值
                     * @return TagSet 是否已赋值
                     * 
                     */
                    bool TagSetHasBeenSet() const;

                private:

                    /**
                     * 内网保留IP唯一 ID。
                     */
                    std::string m_reserveIpId;
                    bool m_reserveIpIdHasBeenSet;

                    /**
                     * VPC唯一 ID。
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * 子网唯一 ID。
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * 内网保留IP地址。
                     */
                    std::string m_reserveIpAddress;
                    bool m_reserveIpAddressHasBeenSet;

                    /**
                     * 内网保留 IP绑定的资源实例 ID。
                     */
                    std::string m_resourceId;
                    bool m_resourceIdHasBeenSet;

                    /**
                     * 产品申请的IpType。
                     */
                    uint64_t m_ipType;
                    bool m_ipTypeHasBeenSet;

                    /**
                     * 绑定状态，UnBind-未绑定， Bind-绑定。
                     */
                    std::string m_state;
                    bool m_stateHasBeenSet;

                    /**
                     * 保留 IP名称。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 保留 IP描述。
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 创建时间。
                     */
                    std::string m_createdTime;
                    bool m_createdTimeHasBeenSet;

                    /**
                     * 标签键值对。
                     */
                    std::vector<Tag> m_tagSet;
                    bool m_tagSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_RESERVEIPADDRESSINFO_H_
