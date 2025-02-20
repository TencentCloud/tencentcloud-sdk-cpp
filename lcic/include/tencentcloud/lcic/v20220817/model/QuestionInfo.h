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

#ifndef TENCENTCLOUD_LCIC_V20220817_MODEL_QUESTIONINFO_H_
#define TENCENTCLOUD_LCIC_V20220817_MODEL_QUESTIONINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/lcic/v20220817/model/AnswerStat.h>


namespace TencentCloud
{
    namespace Lcic
    {
        namespace V20220817
        {
            namespace Model
            {
                /**
                * 房间问答问题详情
                */
                class QuestionInfo : public AbstractModel
                {
                public:
                    QuestionInfo();
                    ~QuestionInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取问题ID
                     * @return QuestionId 问题ID
                     * 
                     */
                    std::string GetQuestionId() const;

                    /**
                     * 设置问题ID
                     * @param _questionId 问题ID
                     * 
                     */
                    void SetQuestionId(const std::string& _questionId);

                    /**
                     * 判断参数 QuestionId 是否已赋值
                     * @return QuestionId 是否已赋值
                     * 
                     */
                    bool QuestionIdHasBeenSet() const;

                    /**
                     * 获取问题内容
                     * @return QuestionContent 问题内容
                     * 
                     */
                    std::string GetQuestionContent() const;

                    /**
                     * 设置问题内容
                     * @param _questionContent 问题内容
                     * 
                     */
                    void SetQuestionContent(const std::string& _questionContent);

                    /**
                     * 判断参数 QuestionContent 是否已赋值
                     * @return QuestionContent 是否已赋值
                     * 
                     */
                    bool QuestionContentHasBeenSet() const;

                    /**
                     * 获取倒计时答题设置的秒数（0 表示不计时）
                     * @return Duration 倒计时答题设置的秒数（0 表示不计时）
                     * 
                     */
                    uint64_t GetDuration() const;

                    /**
                     * 设置倒计时答题设置的秒数（0 表示不计时）
                     * @param _duration 倒计时答题设置的秒数（0 表示不计时）
                     * 
                     */
                    void SetDuration(const uint64_t& _duration);

                    /**
                     * 判断参数 Duration 是否已赋值
                     * @return Duration 是否已赋值
                     * 
                     */
                    bool DurationHasBeenSet() const;

                    /**
                     * 获取正确答案（按照位表示是否选择，如0x1表示选择A，0x11表示选择AB）
                     * @return CorrectAnswer 正确答案（按照位表示是否选择，如0x1表示选择A，0x11表示选择AB）
                     * 
                     */
                    int64_t GetCorrectAnswer() const;

                    /**
                     * 设置正确答案（按照位表示是否选择，如0x1表示选择A，0x11表示选择AB）
                     * @param _correctAnswer 正确答案（按照位表示是否选择，如0x1表示选择A，0x11表示选择AB）
                     * 
                     */
                    void SetCorrectAnswer(const int64_t& _correctAnswer);

                    /**
                     * 判断参数 CorrectAnswer 是否已赋值
                     * @return CorrectAnswer 是否已赋值
                     * 
                     */
                    bool CorrectAnswerHasBeenSet() const;

                    /**
                     * 获取每个选项答题人数统计
                     * @return AnswerStats 每个选项答题人数统计
                     * 
                     */
                    std::vector<AnswerStat> GetAnswerStats() const;

                    /**
                     * 设置每个选项答题人数统计
                     * @param _answerStats 每个选项答题人数统计
                     * 
                     */
                    void SetAnswerStats(const std::vector<AnswerStat>& _answerStats);

                    /**
                     * 判断参数 AnswerStats 是否已赋值
                     * @return AnswerStats 是否已赋值
                     * 
                     */
                    bool AnswerStatsHasBeenSet() const;

                private:

                    /**
                     * 问题ID
                     */
                    std::string m_questionId;
                    bool m_questionIdHasBeenSet;

                    /**
                     * 问题内容
                     */
                    std::string m_questionContent;
                    bool m_questionContentHasBeenSet;

                    /**
                     * 倒计时答题设置的秒数（0 表示不计时）
                     */
                    uint64_t m_duration;
                    bool m_durationHasBeenSet;

                    /**
                     * 正确答案（按照位表示是否选择，如0x1表示选择A，0x11表示选择AB）
                     */
                    int64_t m_correctAnswer;
                    bool m_correctAnswerHasBeenSet;

                    /**
                     * 每个选项答题人数统计
                     */
                    std::vector<AnswerStat> m_answerStats;
                    bool m_answerStatsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LCIC_V20220817_MODEL_QUESTIONINFO_H_
