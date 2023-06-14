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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_DAILYSCOREINFO_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_DAILYSCOREINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * 日评分信息
                */
                class DailyScoreInfo : public AbstractModel
                {
                public:
                    DailyScoreInfo();
                    ~DailyScoreInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取统计日期 时间戳
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StatisticsDate 统计日期 时间戳
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetStatisticsDate() const;

                    /**
                     * 设置统计日期 时间戳
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _statisticsDate 统计日期 时间戳
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStatisticsDate(const int64_t& _statisticsDate);

                    /**
                     * 判断参数 StatisticsDate 是否已赋值
                     * @return StatisticsDate 是否已赋值
                     * 
                     */
                    bool StatisticsDateHasBeenSet() const;

                    /**
                     * 获取评分
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Score 评分
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    double GetScore() const;

                    /**
                     * 设置评分
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _score 评分
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetScore(const double& _score);

                    /**
                     * 判断参数 Score 是否已赋值
                     * @return Score 是否已赋值
                     * 
                     */
                    bool ScoreHasBeenSet() const;

                private:

                    /**
                     * 统计日期 时间戳
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_statisticsDate;
                    bool m_statisticsDateHasBeenSet;

                    /**
                     * 评分
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_score;
                    bool m_scoreHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_DAILYSCOREINFO_H_
