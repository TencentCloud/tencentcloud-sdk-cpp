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

#ifndef TENCENTCLOUD_OCR_V20181119_MODEL_ANSWERELEMENT_H_
#define TENCENTCLOUD_OCR_V20181119_MODEL_ANSWERELEMENT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ocr
    {
        namespace V20181119
        {
            namespace Model
            {
                /**
                * 试题识别结果-答案元素内容
                */
                class AnswerElement : public AbstractModel
                {
                public:
                    AnswerElement();
                    ~AnswerElement() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>答案是否正确</p>
                     * @return IsCorrect <p>答案是否正确</p>
                     * 
                     */
                    bool GetIsCorrect() const;

                    /**
                     * 设置<p>答案是否正确</p>
                     * @param _isCorrect <p>答案是否正确</p>
                     * 
                     */
                    void SetIsCorrect(const bool& _isCorrect);

                    /**
                     * 判断参数 IsCorrect 是否已赋值
                     * @return IsCorrect 是否已赋值
                     * 
                     */
                    bool IsCorrectHasBeenSet() const;

                    /**
                     * 获取<p>答案分析结果</p>
                     * @return AnswerAnalysis <p>答案分析结果</p>
                     * 
                     */
                    std::string GetAnswerAnalysis() const;

                    /**
                     * 设置<p>答案分析结果</p>
                     * @param _answerAnalysis <p>答案分析结果</p>
                     * 
                     */
                    void SetAnswerAnalysis(const std::string& _answerAnalysis);

                    /**
                     * 判断参数 AnswerAnalysis 是否已赋值
                     * @return AnswerAnalysis 是否已赋值
                     * 
                     */
                    bool AnswerAnalysisHasBeenSet() const;

                    /**
                     * 获取<p>返回正确答案内容</p>
                     * @return RightAnswer <p>返回正确答案内容</p>
                     * 
                     */
                    std::string GetRightAnswer() const;

                    /**
                     * 设置<p>返回正确答案内容</p>
                     * @param _rightAnswer <p>返回正确答案内容</p>
                     * 
                     */
                    void SetRightAnswer(const std::string& _rightAnswer);

                    /**
                     * 判断参数 RightAnswer 是否已赋值
                     * @return RightAnswer 是否已赋值
                     * 
                     */
                    bool RightAnswerHasBeenSet() const;

                private:

                    /**
                     * <p>答案是否正确</p>
                     */
                    bool m_isCorrect;
                    bool m_isCorrectHasBeenSet;

                    /**
                     * <p>答案分析结果</p>
                     */
                    std::string m_answerAnalysis;
                    bool m_answerAnalysisHasBeenSet;

                    /**
                     * <p>返回正确答案内容</p>
                     */
                    std::string m_rightAnswer;
                    bool m_rightAnswerHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_ANSWERELEMENT_H_
