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

#ifndef TENCENTCLOUD_ECC_V20181213_MODEL_CORRECTDATA_H_
#define TENCENTCLOUD_ECC_V20181213_MODEL_CORRECTDATA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ecc/v20181213/model/ScoreCategory.h>
#include <tencentcloud/ecc/v20181213/model/SentenceCom.h>


namespace TencentCloud
{
    namespace Ecc
    {
        namespace V20181213
        {
            namespace Model
            {
                /**
                * 批改的结果
                */
                class CorrectData : public AbstractModel
                {
                public:
                    CorrectData();
                    ~CorrectData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取总得分
                     * @return Score 总得分
                     * 
                     */
                    double GetScore() const;

                    /**
                     * 设置总得分
                     * @param _score 总得分
                     * 
                     */
                    void SetScore(const double& _score);

                    /**
                     * 判断参数 Score 是否已赋值
                     * @return Score 是否已赋值
                     * 
                     */
                    bool ScoreHasBeenSet() const;

                    /**
                     * 获取各项得分详情
                     * @return ScoreCat 各项得分详情
                     * 
                     */
                    ScoreCategory GetScoreCat() const;

                    /**
                     * 设置各项得分详情
                     * @param _scoreCat 各项得分详情
                     * 
                     */
                    void SetScoreCat(const ScoreCategory& _scoreCat);

                    /**
                     * 判断参数 ScoreCat 是否已赋值
                     * @return ScoreCat 是否已赋值
                     * 
                     */
                    bool ScoreCatHasBeenSet() const;

                    /**
                     * 获取综合评价
                     * @return Comment 综合评价
                     * 
                     */
                    std::string GetComment() const;

                    /**
                     * 设置综合评价
                     * @param _comment 综合评价
                     * 
                     */
                    void SetComment(const std::string& _comment);

                    /**
                     * 判断参数 Comment 是否已赋值
                     * @return Comment 是否已赋值
                     * 
                     */
                    bool CommentHasBeenSet() const;

                    /**
                     * 获取句子点评
                     * @return SentenceComments 句子点评
                     * 
                     */
                    std::vector<SentenceCom> GetSentenceComments() const;

                    /**
                     * 设置句子点评
                     * @param _sentenceComments 句子点评
                     * 
                     */
                    void SetSentenceComments(const std::vector<SentenceCom>& _sentenceComments);

                    /**
                     * 判断参数 SentenceComments 是否已赋值
                     * @return SentenceComments 是否已赋值
                     * 
                     */
                    bool SentenceCommentsHasBeenSet() const;

                private:

                    /**
                     * 总得分
                     */
                    double m_score;
                    bool m_scoreHasBeenSet;

                    /**
                     * 各项得分详情
                     */
                    ScoreCategory m_scoreCat;
                    bool m_scoreCatHasBeenSet;

                    /**
                     * 综合评价
                     */
                    std::string m_comment;
                    bool m_commentHasBeenSet;

                    /**
                     * 句子点评
                     */
                    std::vector<SentenceCom> m_sentenceComments;
                    bool m_sentenceCommentsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ECC_V20181213_MODEL_CORRECTDATA_H_
