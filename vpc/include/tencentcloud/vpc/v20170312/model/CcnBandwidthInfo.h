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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_CCNBANDWIDTHINFO_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_CCNBANDWIDTHINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vpc/v20170312/model/CcnRegionBandwidthLimit.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * 用于描述云联网地域间限速带宽实例的信息
                */
                class CcnBandwidthInfo : public AbstractModel
                {
                public:
                    CcnBandwidthInfo();
                    ~CcnBandwidthInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取带宽所属的云联网ID。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CcnId 带宽所属的云联网ID。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetCcnId() const;

                    /**
                     * 设置带宽所属的云联网ID。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param CcnId 带宽所属的云联网ID。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetCcnId(const std::string& _ccnId);

                    /**
                     * 判断参数 CcnId 是否已赋值
                     * @return CcnId 是否已赋值
                     */
                    bool CcnIdHasBeenSet() const;

                    /**
                     * 获取实例的创建时间。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreatedTime 实例的创建时间。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetCreatedTime() const;

                    /**
                     * 设置实例的创建时间。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param CreatedTime 实例的创建时间。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetCreatedTime(const std::string& _createdTime);

                    /**
                     * 判断参数 CreatedTime 是否已赋值
                     * @return CreatedTime 是否已赋值
                     */
                    bool CreatedTimeHasBeenSet() const;

                    /**
                     * 获取实例的过期时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExpiredTime 实例的过期时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetExpiredTime() const;

                    /**
                     * 设置实例的过期时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ExpiredTime 实例的过期时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetExpiredTime(const std::string& _expiredTime);

                    /**
                     * 判断参数 ExpiredTime 是否已赋值
                     * @return ExpiredTime 是否已赋值
                     */
                    bool ExpiredTimeHasBeenSet() const;

                    /**
                     * 获取带宽实例的唯一ID。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RegionFlowControlId 带宽实例的唯一ID。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetRegionFlowControlId() const;

                    /**
                     * 设置带宽实例的唯一ID。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param RegionFlowControlId 带宽实例的唯一ID。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetRegionFlowControlId(const std::string& _regionFlowControlId);

                    /**
                     * 判断参数 RegionFlowControlId 是否已赋值
                     * @return RegionFlowControlId 是否已赋值
                     */
                    bool RegionFlowControlIdHasBeenSet() const;

                    /**
                     * 获取带宽是否自动续费的标记。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RenewFlag 带宽是否自动续费的标记。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetRenewFlag() const;

                    /**
                     * 设置带宽是否自动续费的标记。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param RenewFlag 带宽是否自动续费的标记。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetRenewFlag(const std::string& _renewFlag);

                    /**
                     * 判断参数 RenewFlag 是否已赋值
                     * @return RenewFlag 是否已赋值
                     */
                    bool RenewFlagHasBeenSet() const;

                    /**
                     * 获取描述带宽的地域和限速上限信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CcnRegionBandwidthLimit 描述带宽的地域和限速上限信息。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    CcnRegionBandwidthLimit GetCcnRegionBandwidthLimit() const;

                    /**
                     * 设置描述带宽的地域和限速上限信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param CcnRegionBandwidthLimit 描述带宽的地域和限速上限信息。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetCcnRegionBandwidthLimit(const CcnRegionBandwidthLimit& _ccnRegionBandwidthLimit);

                    /**
                     * 判断参数 CcnRegionBandwidthLimit 是否已赋值
                     * @return CcnRegionBandwidthLimit 是否已赋值
                     */
                    bool CcnRegionBandwidthLimitHasBeenSet() const;

                private:

                    /**
                     * 带宽所属的云联网ID。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_ccnId;
                    bool m_ccnIdHasBeenSet;

                    /**
                     * 实例的创建时间。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_createdTime;
                    bool m_createdTimeHasBeenSet;

                    /**
                     * 实例的过期时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_expiredTime;
                    bool m_expiredTimeHasBeenSet;

                    /**
                     * 带宽实例的唯一ID。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_regionFlowControlId;
                    bool m_regionFlowControlIdHasBeenSet;

                    /**
                     * 带宽是否自动续费的标记。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_renewFlag;
                    bool m_renewFlagHasBeenSet;

                    /**
                     * 描述带宽的地域和限速上限信息。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    CcnRegionBandwidthLimit m_ccnRegionBandwidthLimit;
                    bool m_ccnRegionBandwidthLimitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_CCNBANDWIDTHINFO_H_
