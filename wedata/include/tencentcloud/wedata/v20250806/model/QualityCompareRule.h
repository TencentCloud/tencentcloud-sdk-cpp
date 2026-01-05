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

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_QUALITYCOMPARERULE_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_QUALITYCOMPARERULE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20250806/model/QualityCompareRuleItem.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20250806
        {
            namespace Model
            {
                /**
                * 对比规则
                */
                class QualityCompareRule : public AbstractModel
                {
                public:
                    QualityCompareRule();
                    ~QualityCompareRule() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取比较条件列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Items 比较条件列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<QualityCompareRuleItem> GetItems() const;

                    /**
                     * 设置比较条件列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _items 比较条件列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetItems(const std::vector<QualityCompareRuleItem>& _items);

                    /**
                     * 判断参数 Items 是否已赋值
                     * @return Items 是否已赋值
                     * 
                     */
                    bool ItemsHasBeenSet() const;

                    /**
                     * 获取周期性模板默认周期，单位秒
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CycleStep 周期性模板默认周期，单位秒
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetCycleStep() const;

                    /**
                     * 设置周期性模板默认周期，单位秒
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _cycleStep 周期性模板默认周期，单位秒
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCycleStep(const uint64_t& _cycleStep);

                    /**
                     * 判断参数 CycleStep 是否已赋值
                     * @return CycleStep 是否已赋值
                     * 
                     */
                    bool CycleStepHasBeenSet() const;

                    /**
                     * 获取o 表示 或，a 表示 且，数字表示items下标
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ComputeExpression o 表示 或，a 表示 且，数字表示items下标
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetComputeExpression() const;

                    /**
                     * 设置o 表示 或，a 表示 且，数字表示items下标
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _computeExpression o 表示 或，a 表示 且，数字表示items下标
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetComputeExpression(const std::string& _computeExpression);

                    /**
                     * 判断参数 ComputeExpression 是否已赋值
                     * @return ComputeExpression 是否已赋值
                     * 
                     */
                    bool ComputeExpressionHasBeenSet() const;

                private:

                    /**
                     * 比较条件列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<QualityCompareRuleItem> m_items;
                    bool m_itemsHasBeenSet;

                    /**
                     * 周期性模板默认周期，单位秒
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_cycleStep;
                    bool m_cycleStepHasBeenSet;

                    /**
                     * o 表示 或，a 表示 且，数字表示items下标
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_computeExpression;
                    bool m_computeExpressionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_QUALITYCOMPARERULE_H_
