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

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_DELETEQUALITYRULEGROUPRESULTVO_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_DELETEQUALITYRULEGROUPRESULTVO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20250806/model/CommonQualityOperateResult.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20250806
        {
            namespace Model
            {
                /**
                * 批量规则操作的返回信息
                */
                class DeleteQualityRuleGroupResultVO : public AbstractModel
                {
                public:
                    DeleteQualityRuleGroupResultVO();
                    ~DeleteQualityRuleGroupResultVO() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取总条数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SumCount 总条数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetSumCount() const;

                    /**
                     * 设置总条数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _sumCount 总条数
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
                     * 获取成功条数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SuccessCount 成功条数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetSuccessCount() const;

                    /**
                     * 设置成功条数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _successCount 成功条数
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
                     * 获取失败条数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FailedCount 失败条数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetFailedCount() const;

                    /**
                     * 设置失败条数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _failedCount 失败条数
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
                     * 获取操作详情
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Results 操作详情
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<CommonQualityOperateResult> GetResults() const;

                    /**
                     * 设置操作详情
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _results 操作详情
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetResults(const std::vector<CommonQualityOperateResult>& _results);

                    /**
                     * 判断参数 Results 是否已赋值
                     * @return Results 是否已赋值
                     * 
                     */
                    bool ResultsHasBeenSet() const;

                private:

                    /**
                     * 总条数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_sumCount;
                    bool m_sumCountHasBeenSet;

                    /**
                     * 成功条数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_successCount;
                    bool m_successCountHasBeenSet;

                    /**
                     * 失败条数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_failedCount;
                    bool m_failedCountHasBeenSet;

                    /**
                     * 操作详情
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<CommonQualityOperateResult> m_results;
                    bool m_resultsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_DELETEQUALITYRULEGROUPRESULTVO_H_
