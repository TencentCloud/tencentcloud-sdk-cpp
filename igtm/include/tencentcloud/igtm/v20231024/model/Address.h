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

#ifndef TENCENTCLOUD_IGTM_V20231024_MODEL_ADDRESS_H_
#define TENCENTCLOUD_IGTM_V20231024_MODEL_ADDRESS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Igtm
    {
        namespace V20231024
        {
            namespace Model
            {
                /**
                * 添加地址池地址
                */
                class Address : public AbstractModel
                {
                public:
                    Address();
                    ~Address() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取地址值：只支持ipv4、ipv6和域名格式；
不支持回环地址、保留地址、内网地址与腾讯保留网段
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Addr 地址值：只支持ipv4、ipv6和域名格式；
不支持回环地址、保留地址、内网地址与腾讯保留网段
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAddr() const;

                    /**
                     * 设置地址值：只支持ipv4、ipv6和域名格式；
不支持回环地址、保留地址、内网地址与腾讯保留网段
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _addr 地址值：只支持ipv4、ipv6和域名格式；
不支持回环地址、保留地址、内网地址与腾讯保留网段
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAddr(const std::string& _addr);

                    /**
                     * 判断参数 Addr 是否已赋值
                     * @return Addr 是否已赋值
                     * 
                     */
                    bool AddrHasBeenSet() const;

                    /**
                     * 获取是否启用:DISABLED不启用；ENABLED启用
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IsEnable 是否启用:DISABLED不启用；ENABLED启用
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetIsEnable() const;

                    /**
                     * 设置是否启用:DISABLED不启用；ENABLED启用
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _isEnable 是否启用:DISABLED不启用；ENABLED启用
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIsEnable(const std::string& _isEnable);

                    /**
                     * 判断参数 IsEnable 是否已赋值
                     * @return IsEnable 是否已赋值
                     * 
                     */
                    bool IsEnableHasBeenSet() const;

                    /**
                     * 获取地址id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AddressId 地址id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetAddressId() const;

                    /**
                     * 设置地址id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _addressId 地址id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAddressId(const uint64_t& _addressId);

                    /**
                     * 判断参数 AddressId 是否已赋值
                     * @return AddressId 是否已赋值
                     * 
                     */
                    bool AddressIdHasBeenSet() const;

                    /**
                     * 获取地址名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Location 地址名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLocation() const;

                    /**
                     * 设置地址名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _location 地址名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLocation(const std::string& _location);

                    /**
                     * 判断参数 Location 是否已赋值
                     * @return Location 是否已赋值
                     * 
                     */
                    bool LocationHasBeenSet() const;

                    /**
                     * 获取OK正常，DOWN故障，WARN风险，UNKNOWN探测中，UNMONITORED未知
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Status OK正常，DOWN故障，WARN风险，UNKNOWN探测中，UNMONITORED未知
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置OK正常，DOWN故障，WARN风险，UNKNOWN探测中，UNMONITORED未知
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _status OK正常，DOWN故障，WARN风险，UNKNOWN探测中，UNMONITORED未知
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取权重，流量策略为WEIGHT时，必填；范围1-100
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Weight 权重，流量策略为WEIGHT时，必填；范围1-100
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetWeight() const;

                    /**
                     * 设置权重，流量策略为WEIGHT时，必填；范围1-100
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _weight 权重，流量策略为WEIGHT时，必填；范围1-100
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetWeight(const uint64_t& _weight);

                    /**
                     * 判断参数 Weight 是否已赋值
                     * @return Weight 是否已赋值
                     * 
                     */
                    bool WeightHasBeenSet() const;

                    /**
                     * 获取创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreatedOn 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCreatedOn() const;

                    /**
                     * 设置创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _createdOn 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCreatedOn(const std::string& _createdOn);

                    /**
                     * 判断参数 CreatedOn 是否已赋值
                     * @return CreatedOn 是否已赋值
                     * 
                     */
                    bool CreatedOnHasBeenSet() const;

                    /**
                     * 获取修改时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UpdatedOn 修改时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUpdatedOn() const;

                    /**
                     * 设置修改时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _updatedOn 修改时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUpdatedOn(const std::string& _updatedOn);

                    /**
                     * 判断参数 UpdatedOn 是否已赋值
                     * @return UpdatedOn 是否已赋值
                     * 
                     */
                    bool UpdatedOnHasBeenSet() const;

                private:

                    /**
                     * 地址值：只支持ipv4、ipv6和域名格式；
不支持回环地址、保留地址、内网地址与腾讯保留网段
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_addr;
                    bool m_addrHasBeenSet;

                    /**
                     * 是否启用:DISABLED不启用；ENABLED启用
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_isEnable;
                    bool m_isEnableHasBeenSet;

                    /**
                     * 地址id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_addressId;
                    bool m_addressIdHasBeenSet;

                    /**
                     * 地址名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_location;
                    bool m_locationHasBeenSet;

                    /**
                     * OK正常，DOWN故障，WARN风险，UNKNOWN探测中，UNMONITORED未知
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 权重，流量策略为WEIGHT时，必填；范围1-100
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_weight;
                    bool m_weightHasBeenSet;

                    /**
                     * 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_createdOn;
                    bool m_createdOnHasBeenSet;

                    /**
                     * 修改时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_updatedOn;
                    bool m_updatedOnHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IGTM_V20231024_MODEL_ADDRESS_H_
