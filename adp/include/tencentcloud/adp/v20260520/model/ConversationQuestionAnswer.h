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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_CONVERSATIONQUESTIONANSWER_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_CONVERSATIONQUESTIONANSWER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * QuestionAnswer 问题答案信息
                */
                class ConversationQuestionAnswer : public AbstractModel
                {
                public:
                    ConversationQuestionAnswer();
                    ~ConversationQuestionAnswer() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>问题内容</p>
                     * @return Question <p>问题内容</p>
                     * 
                     */
                    std::string GetQuestion() const;

                    /**
                     * 设置<p>问题内容</p>
                     * @param _question <p>问题内容</p>
                     * 
                     */
                    void SetQuestion(const std::string& _question);

                    /**
                     * 判断参数 Question 是否已赋值
                     * @return Question 是否已赋值
                     * 
                     */
                    bool QuestionHasBeenSet() const;

                    /**
                     * 获取<p>已选择的选项标签列表</p>
                     * @return SelectedLabelList <p>已选择的选项标签列表</p>
                     * 
                     */
                    std::vector<std::string> GetSelectedLabelList() const;

                    /**
                     * 设置<p>已选择的选项标签列表</p>
                     * @param _selectedLabelList <p>已选择的选项标签列表</p>
                     * 
                     */
                    void SetSelectedLabelList(const std::vector<std::string>& _selectedLabelList);

                    /**
                     * 判断参数 SelectedLabelList 是否已赋值
                     * @return SelectedLabelList 是否已赋值
                     * 
                     */
                    bool SelectedLabelListHasBeenSet() const;

                    /**
                     * 获取<p>已选择的选项标签列表</p>
                     * @return SelectedLabels <p>已选择的选项标签列表</p>
                     * 
                     */
                    std::vector<std::string> GetSelectedLabels() const;

                    /**
                     * 设置<p>已选择的选项标签列表</p>
                     * @param _selectedLabels <p>已选择的选项标签列表</p>
                     * 
                     */
                    void SetSelectedLabels(const std::vector<std::string>& _selectedLabels);

                    /**
                     * 判断参数 SelectedLabels 是否已赋值
                     * @return SelectedLabels 是否已赋值
                     * 
                     */
                    bool SelectedLabelsHasBeenSet() const;

                private:

                    /**
                     * <p>问题内容</p>
                     */
                    std::string m_question;
                    bool m_questionHasBeenSet;

                    /**
                     * <p>已选择的选项标签列表</p>
                     */
                    std::vector<std::string> m_selectedLabelList;
                    bool m_selectedLabelListHasBeenSet;

                    /**
                     * <p>已选择的选项标签列表</p>
                     */
                    std::vector<std::string> m_selectedLabels;
                    bool m_selectedLabelsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_CONVERSATIONQUESTIONANSWER_H_
