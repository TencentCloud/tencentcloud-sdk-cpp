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

#ifndef TENCENTCLOUD_OCR_V20181119_MODEL_QUESTIONOBJ_H_
#define TENCENTCLOUD_OCR_V20181119_MODEL_QUESTIONOBJ_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ocr/v20181119/model/Rect.h>


namespace TencentCloud
{
    namespace Ocr
    {
        namespace V20181119
        {
            namespace Model
            {
                /**
                * 试题识别结构化信息
                */
                class QuestionObj : public AbstractModel
                {
                public:
                    QuestionObj();
                    ~QuestionObj() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取题号
                     * @return QuestionTextNo 题号
                     * 
                     */
                    std::string GetQuestionTextNo() const;

                    /**
                     * 设置题号
                     * @param _questionTextNo 题号
                     * 
                     */
                    void SetQuestionTextNo(const std::string& _questionTextNo);

                    /**
                     * 判断参数 QuestionTextNo 是否已赋值
                     * @return QuestionTextNo 是否已赋值
                     * 
                     */
                    bool QuestionTextNoHasBeenSet() const;

                    /**
                     * 获取题型：
1: "选择题"
2: "填空题"
3: "解答题"
                     * @return QuestionTextType 题型：
1: "选择题"
2: "填空题"
3: "解答题"
                     * 
                     */
                    int64_t GetQuestionTextType() const;

                    /**
                     * 设置题型：
1: "选择题"
2: "填空题"
3: "解答题"
                     * @param _questionTextType 题型：
1: "选择题"
2: "填空题"
3: "解答题"
                     * 
                     */
                    void SetQuestionTextType(const int64_t& _questionTextType);

                    /**
                     * 判断参数 QuestionTextType 是否已赋值
                     * @return QuestionTextType 是否已赋值
                     * 
                     */
                    bool QuestionTextTypeHasBeenSet() const;

                    /**
                     * 获取题干
                     * @return QuestionText 题干
                     * 
                     */
                    std::string GetQuestionText() const;

                    /**
                     * 设置题干
                     * @param _questionText 题干
                     * 
                     */
                    void SetQuestionText(const std::string& _questionText);

                    /**
                     * 判断参数 QuestionText 是否已赋值
                     * @return QuestionText 是否已赋值
                     * 
                     */
                    bool QuestionTextHasBeenSet() const;

                    /**
                     * 获取选择题选项，包含1个或多个option
                     * @return QuestionOptions 选择题选项，包含1个或多个option
                     * 
                     */
                    std::string GetQuestionOptions() const;

                    /**
                     * 设置选择题选项，包含1个或多个option
                     * @param _questionOptions 选择题选项，包含1个或多个option
                     * 
                     */
                    void SetQuestionOptions(const std::string& _questionOptions);

                    /**
                     * 判断参数 QuestionOptions 是否已赋值
                     * @return QuestionOptions 是否已赋值
                     * 
                     */
                    bool QuestionOptionsHasBeenSet() const;

                    /**
                     * 获取所有子题的question属性
                     * @return QuestionSubquestion 所有子题的question属性
                     * 
                     */
                    std::string GetQuestionSubquestion() const;

                    /**
                     * 设置所有子题的question属性
                     * @param _questionSubquestion 所有子题的question属性
                     * 
                     */
                    void SetQuestionSubquestion(const std::string& _questionSubquestion);

                    /**
                     * 判断参数 QuestionSubquestion 是否已赋值
                     * @return QuestionSubquestion 是否已赋值
                     * 
                     */
                    bool QuestionSubquestionHasBeenSet() const;

                    /**
                     * 获取示意图检测框在的图片中的像素坐标
                     * @return QuestionImageCoords 示意图检测框在的图片中的像素坐标
                     * 
                     */
                    std::vector<Rect> GetQuestionImageCoords() const;

                    /**
                     * 设置示意图检测框在的图片中的像素坐标
                     * @param _questionImageCoords 示意图检测框在的图片中的像素坐标
                     * 
                     */
                    void SetQuestionImageCoords(const std::vector<Rect>& _questionImageCoords);

                    /**
                     * 判断参数 QuestionImageCoords 是否已赋值
                     * @return QuestionImageCoords 是否已赋值
                     * 
                     */
                    bool QuestionImageCoordsHasBeenSet() const;

                private:

                    /**
                     * 题号
                     */
                    std::string m_questionTextNo;
                    bool m_questionTextNoHasBeenSet;

                    /**
                     * 题型：
1: "选择题"
2: "填空题"
3: "解答题"
                     */
                    int64_t m_questionTextType;
                    bool m_questionTextTypeHasBeenSet;

                    /**
                     * 题干
                     */
                    std::string m_questionText;
                    bool m_questionTextHasBeenSet;

                    /**
                     * 选择题选项，包含1个或多个option
                     */
                    std::string m_questionOptions;
                    bool m_questionOptionsHasBeenSet;

                    /**
                     * 所有子题的question属性
                     */
                    std::string m_questionSubquestion;
                    bool m_questionSubquestionHasBeenSet;

                    /**
                     * 示意图检测框在的图片中的像素坐标
                     */
                    std::vector<Rect> m_questionImageCoords;
                    bool m_questionImageCoordsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_QUESTIONOBJ_H_
