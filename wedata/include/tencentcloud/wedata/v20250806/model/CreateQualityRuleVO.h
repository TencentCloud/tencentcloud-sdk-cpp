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

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_CREATEQUALITYRULEVO_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_CREATEQUALITYRULEVO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20250806/model/QualityRuleCreateResult.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20250806
        {
            namespace Model
            {
                /**
                * 数据质量规则批量创建结果
                */
                class CreateQualityRuleVO : public AbstractModel
                {
                public:
                    CreateQualityRuleVO();
                    ~CreateQualityRuleVO() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取操作结果文案
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Msg 操作结果文案
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetMsg() const;

                    /**
                     * 设置操作结果文案
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _msg 操作结果文案
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMsg(const std::string& _msg);

                    /**
                     * 判断参数 Msg 是否已赋值
                     * @return Msg 是否已赋值
                     * 
                     */
                    bool MsgHasBeenSet() const;

                    /**
                     * 获取单条数据新增结果对象
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Results 单条数据新增结果对象
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<QualityRuleCreateResult> GetResults() const;

                    /**
                     * 设置单条数据新增结果对象
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _results 单条数据新增结果对象
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetResults(const std::vector<QualityRuleCreateResult>& _results);

                    /**
                     * 判断参数 Results 是否已赋值
                     * @return Results 是否已赋值
                     * 
                     */
                    bool ResultsHasBeenSet() const;

                    /**
                     * 获取总新增条数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SumCount 总新增条数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetSumCount() const;

                    /**
                     * 设置总新增条数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _sumCount 总新增条数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSumCount(const uint64_t& _sumCount);

                    /**
                     * 判断参数 SumCount 是否已赋值
                     * @return SumCount 是否已赋值
                     * 
                     */
                    bool SumCountHasBeenSet() const;

                    /**
                     * 获取新增成功条数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SuccessCount 新增成功条数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetSuccessCount() const;

                    /**
                     * 设置新增成功条数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _successCount 新增成功条数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSuccessCount(const uint64_t& _successCount);

                    /**
                     * 判断参数 SuccessCount 是否已赋值
                     * @return SuccessCount 是否已赋值
                     * 
                     */
                    bool SuccessCountHasBeenSet() const;

                    /**
                     * 获取新增失败条数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FailedCount 新增失败条数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetFailedCount() const;

                    /**
                     * 设置新增失败条数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _failedCount 新增失败条数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFailedCount(const uint64_t& _failedCount);

                    /**
                     * 判断参数 FailedCount 是否已赋值
                     * @return FailedCount 是否已赋值
                     * 
                     */
                    bool FailedCountHasBeenSet() const;

                    /**
                     * 获取新增成功的 ruleId集合
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SuccessRuleIds 新增成功的 ruleId集合
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<uint64_t> GetSuccessRuleIds() const;

                    /**
                     * 设置新增成功的 ruleId集合
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _successRuleIds 新增成功的 ruleId集合
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSuccessRuleIds(const std::vector<uint64_t>& _successRuleIds);

                    /**
                     * 判断参数 SuccessRuleIds 是否已赋值
                     * @return SuccessRuleIds 是否已赋值
                     * 
                     */
                    bool SuccessRuleIdsHasBeenSet() const;

                private:

                    /**
                     * 操作结果文案
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_msg;
                    bool m_msgHasBeenSet;

                    /**
                     * 单条数据新增结果对象
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<QualityRuleCreateResult> m_results;
                    bool m_resultsHasBeenSet;

                    /**
                     * 总新增条数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_sumCount;
                    bool m_sumCountHasBeenSet;

                    /**
                     * 新增成功条数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_successCount;
                    bool m_successCountHasBeenSet;

                    /**
                     * 新增失败条数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_failedCount;
                    bool m_failedCountHasBeenSet;

                    /**
                     * 新增成功的 ruleId集合
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<uint64_t> m_successRuleIds;
                    bool m_successRuleIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_CREATEQUALITYRULEVO_H_
