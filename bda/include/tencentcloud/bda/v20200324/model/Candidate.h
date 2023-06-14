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

#ifndef TENCENTCLOUD_BDA_V20200324_MODEL_CANDIDATE_H_
#define TENCENTCLOUD_BDA_V20200324_MODEL_CANDIDATE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Bda
    {
        namespace V20200324
        {
            namespace Model
            {
                /**
                * 识别出的最相似候选人。
                */
                class Candidate : public AbstractModel
                {
                public:
                    Candidate();
                    ~Candidate() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取人员ID。
                     * @return PersonId 人员ID。
                     * 
                     */
                    std::string GetPersonId() const;

                    /**
                     * 设置人员ID。
                     * @param _personId 人员ID。
                     * 
                     */
                    void SetPersonId(const std::string& _personId);

                    /**
                     * 判断参数 PersonId 是否已赋值
                     * @return PersonId 是否已赋值
                     * 
                     */
                    bool PersonIdHasBeenSet() const;

                    /**
                     * 获取人体动作轨迹ID。
                     * @return TraceId 人体动作轨迹ID。
                     * 
                     */
                    std::string GetTraceId() const;

                    /**
                     * 设置人体动作轨迹ID。
                     * @param _traceId 人体动作轨迹ID。
                     * 
                     */
                    void SetTraceId(const std::string& _traceId);

                    /**
                     * 判断参数 TraceId 是否已赋值
                     * @return TraceId 是否已赋值
                     * 
                     */
                    bool TraceIdHasBeenSet() const;

                    /**
                     * 获取候选者的匹配得分。 
十万人体库下，误识率百分之五对应的分数为70分；误识率百分之二对应的分数为80分；误识率百分之一对应的分数为90分。
 
二十万人体库下，误识率百分之五对应的分数为80分；误识率百分之二对应的分数为90分；误识率百分之一对应的分数为95分。
 
通常情况建议使用分数80分（保召回）。若希望获得较高精度，建议使用分数90分（保准确）。
                     * @return Score 候选者的匹配得分。 
十万人体库下，误识率百分之五对应的分数为70分；误识率百分之二对应的分数为80分；误识率百分之一对应的分数为90分。
 
二十万人体库下，误识率百分之五对应的分数为80分；误识率百分之二对应的分数为90分；误识率百分之一对应的分数为95分。
 
通常情况建议使用分数80分（保召回）。若希望获得较高精度，建议使用分数90分（保准确）。
                     * 
                     */
                    double GetScore() const;

                    /**
                     * 设置候选者的匹配得分。 
十万人体库下，误识率百分之五对应的分数为70分；误识率百分之二对应的分数为80分；误识率百分之一对应的分数为90分。
 
二十万人体库下，误识率百分之五对应的分数为80分；误识率百分之二对应的分数为90分；误识率百分之一对应的分数为95分。
 
通常情况建议使用分数80分（保召回）。若希望获得较高精度，建议使用分数90分（保准确）。
                     * @param _score 候选者的匹配得分。 
十万人体库下，误识率百分之五对应的分数为70分；误识率百分之二对应的分数为80分；误识率百分之一对应的分数为90分。
 
二十万人体库下，误识率百分之五对应的分数为80分；误识率百分之二对应的分数为90分；误识率百分之一对应的分数为95分。
 
通常情况建议使用分数80分（保召回）。若希望获得较高精度，建议使用分数90分（保准确）。
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
                     * 人员ID。
                     */
                    std::string m_personId;
                    bool m_personIdHasBeenSet;

                    /**
                     * 人体动作轨迹ID。
                     */
                    std::string m_traceId;
                    bool m_traceIdHasBeenSet;

                    /**
                     * 候选者的匹配得分。 
十万人体库下，误识率百分之五对应的分数为70分；误识率百分之二对应的分数为80分；误识率百分之一对应的分数为90分。
 
二十万人体库下，误识率百分之五对应的分数为80分；误识率百分之二对应的分数为90分；误识率百分之一对应的分数为95分。
 
通常情况建议使用分数80分（保召回）。若希望获得较高精度，建议使用分数90分（保准确）。
                     */
                    double m_score;
                    bool m_scoreHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BDA_V20200324_MODEL_CANDIDATE_H_
