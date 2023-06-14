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

#ifndef TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_POLICYDETAIL_H_
#define TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_POLICYDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Lighthouse
    {
        namespace V20200324
        {
            namespace Model
            {
                /**
                * 折扣详情信息。
                */
                class PolicyDetail : public AbstractModel
                {
                public:
                    PolicyDetail();
                    ~PolicyDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取用户折扣。
                     * @return UserDiscount 用户折扣。
                     * 
                     */
                    double GetUserDiscount() const;

                    /**
                     * 设置用户折扣。
                     * @param _userDiscount 用户折扣。
                     * 
                     */
                    void SetUserDiscount(const double& _userDiscount);

                    /**
                     * 判断参数 UserDiscount 是否已赋值
                     * @return UserDiscount 是否已赋值
                     * 
                     */
                    bool UserDiscountHasBeenSet() const;

                    /**
                     * 获取公共折扣。
                     * @return CommonDiscount 公共折扣。
                     * 
                     */
                    double GetCommonDiscount() const;

                    /**
                     * 设置公共折扣。
                     * @param _commonDiscount 公共折扣。
                     * 
                     */
                    void SetCommonDiscount(const double& _commonDiscount);

                    /**
                     * 判断参数 CommonDiscount 是否已赋值
                     * @return CommonDiscount 是否已赋值
                     * 
                     */
                    bool CommonDiscountHasBeenSet() const;

                    /**
                     * 获取最终折扣。
                     * @return FinalDiscount 最终折扣。
                     * 
                     */
                    double GetFinalDiscount() const;

                    /**
                     * 设置最终折扣。
                     * @param _finalDiscount 最终折扣。
                     * 
                     */
                    void SetFinalDiscount(const double& _finalDiscount);

                    /**
                     * 判断参数 FinalDiscount 是否已赋值
                     * @return FinalDiscount 是否已赋值
                     * 
                     */
                    bool FinalDiscountHasBeenSet() const;

                    /**
                     * 获取活动折扣。取值为null，表示无有效值，即没有折扣。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ActivityDiscount 活动折扣。取值为null，表示无有效值，即没有折扣。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    double GetActivityDiscount() const;

                    /**
                     * 设置活动折扣。取值为null，表示无有效值，即没有折扣。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _activityDiscount 活动折扣。取值为null，表示无有效值，即没有折扣。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetActivityDiscount(const double& _activityDiscount);

                    /**
                     * 判断参数 ActivityDiscount 是否已赋值
                     * @return ActivityDiscount 是否已赋值
                     * 
                     */
                    bool ActivityDiscountHasBeenSet() const;

                    /**
                     * 获取折扣类型。
user：用户折扣; common：官网折扣; activity：活动折扣。 取值为null，表示无有效值，即没有折扣。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DiscountType 折扣类型。
user：用户折扣; common：官网折扣; activity：活动折扣。 取值为null，表示无有效值，即没有折扣。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDiscountType() const;

                    /**
                     * 设置折扣类型。
user：用户折扣; common：官网折扣; activity：活动折扣。 取值为null，表示无有效值，即没有折扣。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _discountType 折扣类型。
user：用户折扣; common：官网折扣; activity：活动折扣。 取值为null，表示无有效值，即没有折扣。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDiscountType(const std::string& _discountType);

                    /**
                     * 判断参数 DiscountType 是否已赋值
                     * @return DiscountType 是否已赋值
                     * 
                     */
                    bool DiscountTypeHasBeenSet() const;

                private:

                    /**
                     * 用户折扣。
                     */
                    double m_userDiscount;
                    bool m_userDiscountHasBeenSet;

                    /**
                     * 公共折扣。
                     */
                    double m_commonDiscount;
                    bool m_commonDiscountHasBeenSet;

                    /**
                     * 最终折扣。
                     */
                    double m_finalDiscount;
                    bool m_finalDiscountHasBeenSet;

                    /**
                     * 活动折扣。取值为null，表示无有效值，即没有折扣。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_activityDiscount;
                    bool m_activityDiscountHasBeenSet;

                    /**
                     * 折扣类型。
user：用户折扣; common：官网折扣; activity：活动折扣。 取值为null，表示无有效值，即没有折扣。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_discountType;
                    bool m_discountTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_POLICYDETAIL_H_
