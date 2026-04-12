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

#ifndef TENCENTCLOUD_OCR_V20181119_MODEL_MARKINFO_H_
#define TENCENTCLOUD_OCR_V20181119_MODEL_MARKINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ocr/v20181119/model/AnswerInfo.h>
#include <tencentcloud/ocr/v20181119/model/MarkInfo.h>
#include <tencentcloud/ocr/v20181119/model/Positions.h>


namespace TencentCloud
{
    namespace Ocr
    {
        namespace V20181119
        {
            namespace Model
            {
                /**
                * 整张试卷所有题目批改信息
                */
                class MarkInfo : public AbstractModel
                {
                public:
                    MarkInfo();
                    ~MarkInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>题目的题干信息</p>
                     * @return MarkItemTitle <p>题目的题干信息</p>
                     * 
                     */
                    std::string GetMarkItemTitle() const;

                    /**
                     * 设置<p>题目的题干信息</p>
                     * @param _markItemTitle <p>题目的题干信息</p>
                     * 
                     */
                    void SetMarkItemTitle(const std::string& _markItemTitle);

                    /**
                     * 判断参数 MarkItemTitle 是否已赋值
                     * @return MarkItemTitle 是否已赋值
                     * 
                     */
                    bool MarkItemTitleHasBeenSet() const;

                    /**
                     * 获取<p>批改答案列表（每个小题存在多个答案，比如多个填空区域答案，循序按照从左到右，从上到下排列）</p>
                     * @return AnswerInfos <p>批改答案列表（每个小题存在多个答案，比如多个填空区域答案，循序按照从左到右，从上到下排列）</p>
                     * 
                     */
                    std::vector<AnswerInfo> GetAnswerInfos() const;

                    /**
                     * 设置<p>批改答案列表（每个小题存在多个答案，比如多个填空区域答案，循序按照从左到右，从上到下排列）</p>
                     * @param _answerInfos <p>批改答案列表（每个小题存在多个答案，比如多个填空区域答案，循序按照从左到右，从上到下排列）</p>
                     * 
                     */
                    void SetAnswerInfos(const std::vector<AnswerInfo>& _answerInfos);

                    /**
                     * 判断参数 AnswerInfos 是否已赋值
                     * @return AnswerInfos 是否已赋值
                     * 
                     */
                    bool AnswerInfosHasBeenSet() const;

                    /**
                     * 获取<p>嵌套题目结构（如果有多层嵌套则会返回子题信息，如果没有嵌套题目则返回空）</p>
                     * @return MarkInfos <p>嵌套题目结构（如果有多层嵌套则会返回子题信息，如果没有嵌套题目则返回空）</p>
                     * 
                     */
                    std::vector<MarkInfo> GetMarkInfos() const;

                    /**
                     * 设置<p>嵌套题目结构（如果有多层嵌套则会返回子题信息，如果没有嵌套题目则返回空）</p>
                     * @param _markInfos <p>嵌套题目结构（如果有多层嵌套则会返回子题信息，如果没有嵌套题目则返回空）</p>
                     * 
                     */
                    void SetMarkInfos(const std::vector<MarkInfo>& _markInfos);

                    /**
                     * 判断参数 MarkInfos 是否已赋值
                     * @return MarkInfos 是否已赋值
                     * 
                     */
                    bool MarkInfosHasBeenSet() const;

                    /**
                     * 获取<p>题干坐标</p><p>单位：px</p>
                     * @return QuestionPositions <p>题干坐标</p><p>单位：px</p>
                     * 
                     */
                    std::vector<int64_t> GetQuestionPositions() const;

                    /**
                     * 设置<p>题干坐标</p><p>单位：px</p>
                     * @param _questionPositions <p>题干坐标</p><p>单位：px</p>
                     * 
                     */
                    void SetQuestionPositions(const std::vector<int64_t>& _questionPositions);

                    /**
                     * 判断参数 QuestionPositions 是否已赋值
                     * @return QuestionPositions 是否已赋值
                     * 
                     */
                    bool QuestionPositionsHasBeenSet() const;

                    /**
                     * 获取<p>题干插图坐标列表，每个元素包含一张插图的4个角点坐标</p>
                     * @return QuestionImagePositions <p>题干插图坐标列表，每个元素包含一张插图的4个角点坐标</p>
                     * 
                     */
                    std::vector<Positions> GetQuestionImagePositions() const;

                    /**
                     * 设置<p>题干插图坐标列表，每个元素包含一张插图的4个角点坐标</p>
                     * @param _questionImagePositions <p>题干插图坐标列表，每个元素包含一张插图的4个角点坐标</p>
                     * 
                     */
                    void SetQuestionImagePositions(const std::vector<Positions>& _questionImagePositions);

                    /**
                     * 判断参数 QuestionImagePositions 是否已赋值
                     * @return QuestionImagePositions 是否已赋值
                     * 
                     */
                    bool QuestionImagePositionsHasBeenSet() const;

                    /**
                     * 获取<p>题目级正确答案（步骤批改时使用，包含完整解题步骤）</p>
                     * @return RightAnswer <p>题目级正确答案（步骤批改时使用，包含完整解题步骤）</p>
                     * 
                     */
                    std::string GetRightAnswer() const;

                    /**
                     * 设置<p>题目级正确答案（步骤批改时使用，包含完整解题步骤）</p>
                     * @param _rightAnswer <p>题目级正确答案（步骤批改时使用，包含完整解题步骤）</p>
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
                     * <p>题目的题干信息</p>
                     */
                    std::string m_markItemTitle;
                    bool m_markItemTitleHasBeenSet;

                    /**
                     * <p>批改答案列表（每个小题存在多个答案，比如多个填空区域答案，循序按照从左到右，从上到下排列）</p>
                     */
                    std::vector<AnswerInfo> m_answerInfos;
                    bool m_answerInfosHasBeenSet;

                    /**
                     * <p>嵌套题目结构（如果有多层嵌套则会返回子题信息，如果没有嵌套题目则返回空）</p>
                     */
                    std::vector<MarkInfo> m_markInfos;
                    bool m_markInfosHasBeenSet;

                    /**
                     * <p>题干坐标</p><p>单位：px</p>
                     */
                    std::vector<int64_t> m_questionPositions;
                    bool m_questionPositionsHasBeenSet;

                    /**
                     * <p>题干插图坐标列表，每个元素包含一张插图的4个角点坐标</p>
                     */
                    std::vector<Positions> m_questionImagePositions;
                    bool m_questionImagePositionsHasBeenSet;

                    /**
                     * <p>题目级正确答案（步骤批改时使用，包含完整解题步骤）</p>
                     */
                    std::string m_rightAnswer;
                    bool m_rightAnswerHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_MARKINFO_H_
