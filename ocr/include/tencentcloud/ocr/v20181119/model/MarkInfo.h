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
                     * 获取题目的题干信息 


                     * @return MarkItemTitle 题目的题干信息 


                     * 
                     */
                    std::string GetMarkItemTitle() const;

                    /**
                     * 设置题目的题干信息 


                     * @param _markItemTitle 题目的题干信息 


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
                     * 获取批改答案列表（每个小题存在多个答案，比如多个填空区域答案，循序按照从左到右，从上到下排列）
                     * @return AnswerInfos 批改答案列表（每个小题存在多个答案，比如多个填空区域答案，循序按照从左到右，从上到下排列）
                     * 
                     */
                    std::vector<AnswerInfo> GetAnswerInfos() const;

                    /**
                     * 设置批改答案列表（每个小题存在多个答案，比如多个填空区域答案，循序按照从左到右，从上到下排列）
                     * @param _answerInfos 批改答案列表（每个小题存在多个答案，比如多个填空区域答案，循序按照从左到右，从上到下排列）
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
                     * 获取嵌套题目结构（如果有多层嵌套则会返回子题信息，如果没有嵌套题目则返回空）
                     * @return MarkInfos 嵌套题目结构（如果有多层嵌套则会返回子题信息，如果没有嵌套题目则返回空）
                     * 
                     */
                    std::vector<MarkInfo> GetMarkInfos() const;

                    /**
                     * 设置嵌套题目结构（如果有多层嵌套则会返回子题信息，如果没有嵌套题目则返回空）
                     * @param _markInfos 嵌套题目结构（如果有多层嵌套则会返回子题信息，如果没有嵌套题目则返回空）
                     * 
                     */
                    void SetMarkInfos(const std::vector<MarkInfo>& _markInfos);

                    /**
                     * 判断参数 MarkInfos 是否已赋值
                     * @return MarkInfos 是否已赋值
                     * 
                     */
                    bool MarkInfosHasBeenSet() const;

                private:

                    /**
                     * 题目的题干信息 


                     */
                    std::string m_markItemTitle;
                    bool m_markItemTitleHasBeenSet;

                    /**
                     * 批改答案列表（每个小题存在多个答案，比如多个填空区域答案，循序按照从左到右，从上到下排列）
                     */
                    std::vector<AnswerInfo> m_answerInfos;
                    bool m_answerInfosHasBeenSet;

                    /**
                     * 嵌套题目结构（如果有多层嵌套则会返回子题信息，如果没有嵌套题目则返回空）
                     */
                    std::vector<MarkInfo> m_markInfos;
                    bool m_markInfosHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_MARKINFO_H_
