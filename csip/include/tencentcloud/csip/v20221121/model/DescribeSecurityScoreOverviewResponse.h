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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBESECURITYSCOREOVERVIEWRESPONSE_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBESECURITYSCOREOVERVIEWRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/DimensionItem.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * DescribeSecurityScoreOverview返回参数结构体
                */
                class DescribeSecurityScoreOverviewResponse : public AbstractModel
                {
                public:
                    DescribeSecurityScoreOverviewResponse();
                    ~DescribeSecurityScoreOverviewResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>安全评分<br>取值范围：[0, 100]</p>
                     * @return Score <p>安全评分<br>取值范围：[0, 100]</p>
                     * 
                     */
                    int64_t GetScore() const;

                    /**
                     * 判断参数 Score 是否已赋值
                     * @return Score 是否已赋值
                     * 
                     */
                    bool ScoreHasBeenSet() const;

                    /**
                     * 获取<p>安全等级<br>枚举值：<br>safe：安全(90-100分)<br>good：良好(70-89分)<br>medium：一般(40-69分)<br>danger：危险(0-39分)</p>
                     * @return Level <p>安全等级<br>枚举值：<br>safe：安全(90-100分)<br>good：良好(70-89分)<br>medium：一般(40-69分)<br>danger：危险(0-39分)</p>
                     * 
                     */
                    std::string GetLevel() const;

                    /**
                     * 判断参数 Level 是否已赋值
                     * @return Level 是否已赋值
                     * 
                     */
                    bool LevelHasBeenSet() const;

                    /**
                     * 获取<p>评分状态<br>枚举值：<br>success：全部数据源正常<br>partial_error：部分数据源使用了缓存<br>stale：使用上次完整快照<br>error：无法计算</p>
                     * @return ScoreStatus <p>评分状态<br>枚举值：<br>success：全部数据源正常<br>partial_error：部分数据源使用了缓存<br>stale：使用上次完整快照<br>error：无法计算</p>
                     * 
                     */
                    std::string GetScoreStatus() const;

                    /**
                     * 判断参数 ScoreStatus 是否已赋值
                     * @return ScoreStatus 是否已赋值
                     * 
                     */
                    bool ScoreStatusHasBeenSet() const;

                    /**
                     * 获取<p>初始分<br>默认值：100</p>
                     * @return InitialScore <p>初始分<br>默认值：100</p>
                     * 
                     */
                    int64_t GetInitialScore() const;

                    /**
                     * 判断参数 InitialScore 是否已赋值
                     * @return InitialScore 是否已赋值
                     * 
                     */
                    bool InitialScoreHasBeenSet() const;

                    /**
                     * 获取<p>存在风险的分类数量（X类风险建议尽快处理）</p>
                     * @return RiskCategoryCount <p>存在风险的分类数量（X类风险建议尽快处理）</p>
                     * 
                     */
                    int64_t GetRiskCategoryCount() const;

                    /**
                     * 判断参数 RiskCategoryCount 是否已赋值
                     * @return RiskCategoryCount 是否已赋值
                     * 
                     */
                    bool RiskCategoryCountHasBeenSet() const;

                    /**
                     * 获取<p>总扣分</p>
                     * @return DeductScore <p>总扣分</p>
                     * 
                     */
                    int64_t GetDeductScore() const;

                    /**
                     * 判断参数 DeductScore 是否已赋值
                     * @return DeductScore 是否已赋值
                     * 
                     */
                    bool DeductScoreHasBeenSet() const;

                    /**
                     * 获取<p>计算时间<br>参数格式：YYYY-MM-DDTHH:mm:ss+08:00</p>
                     * @return CalculatedAt <p>计算时间<br>参数格式：YYYY-MM-DDTHH:mm:ss+08:00</p>
                     * 
                     */
                    std::string GetCalculatedAt() const;

                    /**
                     * 判断参数 CalculatedAt 是否已赋值
                     * @return CalculatedAt 是否已赋值
                     * 
                     */
                    bool CalculatedAtHasBeenSet() const;

                    /**
                     * 获取<p>维度明细，含子项扣分和待办</p>
                     * @return Dimensions <p>维度明细，含子项扣分和待办</p>
                     * 
                     */
                    std::vector<DimensionItem> GetDimensions() const;

                    /**
                     * 判断参数 Dimensions 是否已赋值
                     * @return Dimensions 是否已赋值
                     * 
                     */
                    bool DimensionsHasBeenSet() const;

                private:

                    /**
                     * <p>安全评分<br>取值范围：[0, 100]</p>
                     */
                    int64_t m_score;
                    bool m_scoreHasBeenSet;

                    /**
                     * <p>安全等级<br>枚举值：<br>safe：安全(90-100分)<br>good：良好(70-89分)<br>medium：一般(40-69分)<br>danger：危险(0-39分)</p>
                     */
                    std::string m_level;
                    bool m_levelHasBeenSet;

                    /**
                     * <p>评分状态<br>枚举值：<br>success：全部数据源正常<br>partial_error：部分数据源使用了缓存<br>stale：使用上次完整快照<br>error：无法计算</p>
                     */
                    std::string m_scoreStatus;
                    bool m_scoreStatusHasBeenSet;

                    /**
                     * <p>初始分<br>默认值：100</p>
                     */
                    int64_t m_initialScore;
                    bool m_initialScoreHasBeenSet;

                    /**
                     * <p>存在风险的分类数量（X类风险建议尽快处理）</p>
                     */
                    int64_t m_riskCategoryCount;
                    bool m_riskCategoryCountHasBeenSet;

                    /**
                     * <p>总扣分</p>
                     */
                    int64_t m_deductScore;
                    bool m_deductScoreHasBeenSet;

                    /**
                     * <p>计算时间<br>参数格式：YYYY-MM-DDTHH:mm:ss+08:00</p>
                     */
                    std::string m_calculatedAt;
                    bool m_calculatedAtHasBeenSet;

                    /**
                     * <p>维度明细，含子项扣分和待办</p>
                     */
                    std::vector<DimensionItem> m_dimensions;
                    bool m_dimensionsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBESECURITYSCOREOVERVIEWRESPONSE_H_
