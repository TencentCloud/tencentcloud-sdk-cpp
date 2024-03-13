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

#ifndef TENCENTCLOUD_ES_V20180416_MODEL_VPCINFO_H_
#define TENCENTCLOUD_ES_V20180416_MODEL_VPCINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Es
    {
        namespace V20180416
        {
            namespace Model
            {
                /**
                * vpc信息
                */
                class VpcInfo : public AbstractModel
                {
                public:
                    VpcInfo();
                    ~VpcInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取vpcId信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return VpcId vpcId信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置vpcId信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _vpcId vpcId信息
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取SubnetId信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SubnetId SubnetId信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置SubnetId信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _subnetId SubnetId信息
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取VpcUid信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return VpcUid VpcUid信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetVpcUid() const;

                    /**
                     * 设置VpcUid信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _vpcUid VpcUid信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetVpcUid(const uint64_t& _vpcUid);

                    /**
                     * 判断参数 VpcUid 是否已赋值
                     * @return VpcUid 是否已赋值
                     * 
                     */
                    bool VpcUidHasBeenSet() const;

                    /**
                     * 获取SubnetUid 信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SubnetUid SubnetUid 信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetSubnetUid() const;

                    /**
                     * 设置SubnetUid 信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _subnetUid SubnetUid 信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSubnetUid(const uint64_t& _subnetUid);

                    /**
                     * 判断参数 SubnetUid 是否已赋值
                     * @return SubnetUid 是否已赋值
                     * 
                     */
                    bool SubnetUidHasBeenSet() const;

                    /**
                     * 获取可用ip数量
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AvailableIpAddressCount 可用ip数量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetAvailableIpAddressCount() const;

                    /**
                     * 设置可用ip数量
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _availableIpAddressCount 可用ip数量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAvailableIpAddressCount(const int64_t& _availableIpAddressCount);

                    /**
                     * 判断参数 AvailableIpAddressCount 是否已赋值
                     * @return AvailableIpAddressCount 是否已赋值
                     * 
                     */
                    bool AvailableIpAddressCountHasBeenSet() const;

                private:

                    /**
                     * vpcId信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * SubnetId信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * VpcUid信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_vpcUid;
                    bool m_vpcUidHasBeenSet;

                    /**
                     * SubnetUid 信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_subnetUid;
                    bool m_subnetUidHasBeenSet;

                    /**
                     * 可用ip数量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_availableIpAddressCount;
                    bool m_availableIpAddressCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ES_V20180416_MODEL_VPCINFO_H_
