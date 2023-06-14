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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_QUALITYSCORE_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_QUALITYSCORE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20210820/model/TableScoreStatisticsInfo.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * 质量评分
                */
                class QualityScore : public AbstractModel
                {
                public:
                    QualityScore();
                    ~QualityScore() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取综合分数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CompositeScore 综合分数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    double GetCompositeScore() const;

                    /**
                     * 设置综合分数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _compositeScore 综合分数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCompositeScore(const double& _compositeScore);

                    /**
                     * 判断参数 CompositeScore 是否已赋值
                     * @return CompositeScore 是否已赋值
                     * 
                     */
                    bool CompositeScoreHasBeenSet() const;

                    /**
                     * 获取评分分布
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ScoringDistribution 评分分布
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<TableScoreStatisticsInfo> GetScoringDistribution() const;

                    /**
                     * 设置评分分布
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _scoringDistribution 评分分布
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetScoringDistribution(const std::vector<TableScoreStatisticsInfo>& _scoringDistribution);

                    /**
                     * 判断参数 ScoringDistribution 是否已赋值
                     * @return ScoringDistribution 是否已赋值
                     * 
                     */
                    bool ScoringDistributionHasBeenSet() const;

                    /**
                     * 获取总表数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TotalTableNumber 总表数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetTotalTableNumber() const;

                    /**
                     * 设置总表数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _totalTableNumber 总表数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTotalTableNumber(const int64_t& _totalTableNumber);

                    /**
                     * 判断参数 TotalTableNumber 是否已赋值
                     * @return TotalTableNumber 是否已赋值
                     * 
                     */
                    bool TotalTableNumberHasBeenSet() const;

                private:

                    /**
                     * 综合分数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_compositeScore;
                    bool m_compositeScoreHasBeenSet;

                    /**
                     * 评分分布
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<TableScoreStatisticsInfo> m_scoringDistribution;
                    bool m_scoringDistributionHasBeenSet;

                    /**
                     * 总表数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_totalTableNumber;
                    bool m_totalTableNumberHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_QUALITYSCORE_H_
