/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#ifndef TENCENTCLOUD_FWM_V20250611_MODEL_ACCOUNTSTATSGROUP_H_
#define TENCENTCLOUD_FWM_V20250611_MODEL_ACCOUNTSTATSGROUP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/fwm/v20250611/model/MemberInfo.h>
#include <tencentcloud/fwm/v20250611/model/AccountProductDetailStats.h>


namespace TencentCloud
{
    namespace Fwm
    {
        namespace V20250611
        {
            namespace Model
            {
                /**
                * 按账号分组的风险统计数据
                */
                class AccountStatsGroup : public AbstractModel
                {
                public:
                    AccountStatsGroup();
                    ~AccountStatsGroup() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取成员账号信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Member 成员账号信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    MemberInfo GetMember() const;

                    /**
                     * 设置成员账号信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _member 成员账号信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMember(const MemberInfo& _member);

                    /**
                     * 判断参数 Member 是否已赋值
                     * @return Member 是否已赋值
                     * 
                     */
                    bool MemberHasBeenSet() const;

                    /**
                     * 获取该账号下所有产品待整改风险数汇总
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UntreatedRiskCount 该账号下所有产品待整改风险数汇总
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetUntreatedRiskCount() const;

                    /**
                     * 设置该账号下所有产品待整改风险数汇总
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _untreatedRiskCount 该账号下所有产品待整改风险数汇总
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUntreatedRiskCount(const int64_t& _untreatedRiskCount);

                    /**
                     * 判断参数 UntreatedRiskCount 是否已赋值
                     * @return UntreatedRiskCount 是否已赋值
                     * 
                     */
                    bool UntreatedRiskCountHasBeenSet() const;

                    /**
                     * 获取该账号下各产品维度的风险统计列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ProductStats 该账号下各产品维度的风险统计列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<AccountProductDetailStats> GetProductStats() const;

                    /**
                     * 设置该账号下各产品维度的风险统计列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _productStats 该账号下各产品维度的风险统计列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetProductStats(const std::vector<AccountProductDetailStats>& _productStats);

                    /**
                     * 判断参数 ProductStats 是否已赋值
                     * @return ProductStats 是否已赋值
                     * 
                     */
                    bool ProductStatsHasBeenSet() const;

                    /**
                     * 获取整改率
                     * @return RectifyRate 整改率
                     * 
                     */
                    std::string GetRectifyRate() const;

                    /**
                     * 设置整改率
                     * @param _rectifyRate 整改率
                     * 
                     */
                    void SetRectifyRate(const std::string& _rectifyRate);

                    /**
                     * 判断参数 RectifyRate 是否已赋值
                     * @return RectifyRate 是否已赋值
                     * 
                     */
                    bool RectifyRateHasBeenSet() const;

                private:

                    /**
                     * 成员账号信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    MemberInfo m_member;
                    bool m_memberHasBeenSet;

                    /**
                     * 该账号下所有产品待整改风险数汇总
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_untreatedRiskCount;
                    bool m_untreatedRiskCountHasBeenSet;

                    /**
                     * 该账号下各产品维度的风险统计列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<AccountProductDetailStats> m_productStats;
                    bool m_productStatsHasBeenSet;

                    /**
                     * 整改率
                     */
                    std::string m_rectifyRate;
                    bool m_rectifyRateHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_FWM_V20250611_MODEL_ACCOUNTSTATSGROUP_H_
