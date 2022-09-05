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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_TRAFFICPACKAGE_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_TRAFFICPACKAGE_H_

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
                * 流量包信息描述类型
                */
                class TrafficPackage : public AbstractModel
                {
                public:
                    TrafficPackage();
                    ~TrafficPackage() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取流量包唯一ID
                     * @return TrafficPackageId 流量包唯一ID
                     */
                    std::string GetTrafficPackageId() const;

                    /**
                     * 设置流量包唯一ID
                     * @param TrafficPackageId 流量包唯一ID
                     */
                    void SetTrafficPackageId(const std::string& _trafficPackageId);

                    /**
                     * 判断参数 TrafficPackageId 是否已赋值
                     * @return TrafficPackageId 是否已赋值
                     */
                    bool TrafficPackageIdHasBeenSet() const;

                    /**
                     * 获取流量包名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TrafficPackageName 流量包名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetTrafficPackageName() const;

                    /**
                     * 设置流量包名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param TrafficPackageName 流量包名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetTrafficPackageName(const std::string& _trafficPackageName);

                    /**
                     * 判断参数 TrafficPackageName 是否已赋值
                     * @return TrafficPackageName 是否已赋值
                     */
                    bool TrafficPackageNameHasBeenSet() const;

                    /**
                     * 获取流量包总量，单位GB
                     * @return TotalAmount 流量包总量，单位GB
                     */
                    double GetTotalAmount() const;

                    /**
                     * 设置流量包总量，单位GB
                     * @param TotalAmount 流量包总量，单位GB
                     */
                    void SetTotalAmount(const double& _totalAmount);

                    /**
                     * 判断参数 TotalAmount 是否已赋值
                     * @return TotalAmount 是否已赋值
                     */
                    bool TotalAmountHasBeenSet() const;

                    /**
                     * 获取流量包剩余量，单位GB
                     * @return RemainingAmount 流量包剩余量，单位GB
                     */
                    double GetRemainingAmount() const;

                    /**
                     * 设置流量包剩余量，单位GB
                     * @param RemainingAmount 流量包剩余量，单位GB
                     */
                    void SetRemainingAmount(const double& _remainingAmount);

                    /**
                     * 判断参数 RemainingAmount 是否已赋值
                     * @return RemainingAmount 是否已赋值
                     */
                    bool RemainingAmountHasBeenSet() const;

                    /**
                     * 获取流量包状态，可能的值有: AVAILABLE-可用状态， EXPIRED-已过期， EXHAUSTED-已用完， REFUNDED-已退还， DELETED-已删除
                     * @return Status 流量包状态，可能的值有: AVAILABLE-可用状态， EXPIRED-已过期， EXHAUSTED-已用完， REFUNDED-已退还， DELETED-已删除
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置流量包状态，可能的值有: AVAILABLE-可用状态， EXPIRED-已过期， EXHAUSTED-已用完， REFUNDED-已退还， DELETED-已删除
                     * @param Status 流量包状态，可能的值有: AVAILABLE-可用状态， EXPIRED-已过期， EXHAUSTED-已用完， REFUNDED-已退还， DELETED-已删除
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取流量包创建时间
                     * @return CreatedTime 流量包创建时间
                     */
                    std::string GetCreatedTime() const;

                    /**
                     * 设置流量包创建时间
                     * @param CreatedTime 流量包创建时间
                     */
                    void SetCreatedTime(const std::string& _createdTime);

                    /**
                     * 判断参数 CreatedTime 是否已赋值
                     * @return CreatedTime 是否已赋值
                     */
                    bool CreatedTimeHasBeenSet() const;

                    /**
                     * 获取流量包截止时间
                     * @return Deadline 流量包截止时间
                     */
                    std::string GetDeadline() const;

                    /**
                     * 设置流量包截止时间
                     * @param Deadline 流量包截止时间
                     */
                    void SetDeadline(const std::string& _deadline);

                    /**
                     * 判断参数 Deadline 是否已赋值
                     * @return Deadline 是否已赋值
                     */
                    bool DeadlineHasBeenSet() const;

                    /**
                     * 获取已使用的流量，单位GB
                     * @return UsedAmount 已使用的流量，单位GB
                     */
                    double GetUsedAmount() const;

                    /**
                     * 设置已使用的流量，单位GB
                     * @param UsedAmount 已使用的流量，单位GB
                     */
                    void SetUsedAmount(const double& _usedAmount);

                    /**
                     * 判断参数 UsedAmount 是否已赋值
                     * @return UsedAmount 是否已赋值
                     */
                    bool UsedAmountHasBeenSet() const;

                    /**
                     * 获取流量包标签
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TagSet 流量包标签
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<Tag> GetTagSet() const;

                    /**
                     * 设置流量包标签
注意：此字段可能返回 null，表示取不到有效值。
                     * @param TagSet 流量包标签
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetTagSet(const std::vector<Tag>& _tagSet);

                    /**
                     * 判断参数 TagSet 是否已赋值
                     * @return TagSet 是否已赋值
                     */
                    bool TagSetHasBeenSet() const;

                    /**
                     * 获取区分闲时流量包与全时流量包
                     * @return DeductType 区分闲时流量包与全时流量包
                     */
                    std::string GetDeductType() const;

                    /**
                     * 设置区分闲时流量包与全时流量包
                     * @param DeductType 区分闲时流量包与全时流量包
                     */
                    void SetDeductType(const std::string& _deductType);

                    /**
                     * 判断参数 DeductType 是否已赋值
                     * @return DeductType 是否已赋值
                     */
                    bool DeductTypeHasBeenSet() const;

                private:

                    /**
                     * 流量包唯一ID
                     */
                    std::string m_trafficPackageId;
                    bool m_trafficPackageIdHasBeenSet;

                    /**
                     * 流量包名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_trafficPackageName;
                    bool m_trafficPackageNameHasBeenSet;

                    /**
                     * 流量包总量，单位GB
                     */
                    double m_totalAmount;
                    bool m_totalAmountHasBeenSet;

                    /**
                     * 流量包剩余量，单位GB
                     */
                    double m_remainingAmount;
                    bool m_remainingAmountHasBeenSet;

                    /**
                     * 流量包状态，可能的值有: AVAILABLE-可用状态， EXPIRED-已过期， EXHAUSTED-已用完， REFUNDED-已退还， DELETED-已删除
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 流量包创建时间
                     */
                    std::string m_createdTime;
                    bool m_createdTimeHasBeenSet;

                    /**
                     * 流量包截止时间
                     */
                    std::string m_deadline;
                    bool m_deadlineHasBeenSet;

                    /**
                     * 已使用的流量，单位GB
                     */
                    double m_usedAmount;
                    bool m_usedAmountHasBeenSet;

                    /**
                     * 流量包标签
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<Tag> m_tagSet;
                    bool m_tagSetHasBeenSet;

                    /**
                     * 区分闲时流量包与全时流量包
                     */
                    std::string m_deductType;
                    bool m_deductTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_TRAFFICPACKAGE_H_
