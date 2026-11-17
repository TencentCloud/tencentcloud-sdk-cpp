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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_CONVERSATIONQUESTION_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_CONVERSATIONQUESTION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/adp/v20260520/model/ConversationQuestionOption.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * Question 问卷问题信息
                */
                class ConversationQuestion : public AbstractModel
                {
                public:
                    ConversationQuestion();
                    ~ConversationQuestion() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>问题序号</p>
                     * @return Index <p>问题序号</p>
                     * 
                     */
                    uint64_t GetIndex() const;

                    /**
                     * 设置<p>问题序号</p>
                     * @param _index <p>问题序号</p>
                     * 
                     */
                    void SetIndex(const uint64_t& _index);

                    /**
                     * 判断参数 Index 是否已赋值
                     * @return Index 是否已赋值
                     * 
                     */
                    bool IndexHasBeenSet() const;

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
                     * 获取<p>是否必答</p>
                     * @return Required <p>是否必答</p>
                     * 
                     */
                    bool GetRequired() const;

                    /**
                     * 设置<p>是否必答</p>
                     * @param _required <p>是否必答</p>
                     * 
                     */
                    void SetRequired(const bool& _required);

                    /**
                     * 判断参数 Required 是否已赋值
                     * @return Required 是否已赋值
                     * 
                     */
                    bool RequiredHasBeenSet() const;

                    /**
                     * 获取<p>问题类型 枚举值: 0-QUESTION_TYPE_UNSPECIFIED(未指定), 1-QUESTION_TYPE_SINGLE(单选), 2-QUESTION_TYPE_MULTIPLE(多选)</p>
                     * @return Type <p>问题类型 枚举值: 0-QUESTION_TYPE_UNSPECIFIED(未指定), 1-QUESTION_TYPE_SINGLE(单选), 2-QUESTION_TYPE_MULTIPLE(多选)</p>
                     * 
                     */
                    int64_t GetType() const;

                    /**
                     * 设置<p>问题类型 枚举值: 0-QUESTION_TYPE_UNSPECIFIED(未指定), 1-QUESTION_TYPE_SINGLE(单选), 2-QUESTION_TYPE_MULTIPLE(多选)</p>
                     * @param _type <p>问题类型 枚举值: 0-QUESTION_TYPE_UNSPECIFIED(未指定), 1-QUESTION_TYPE_SINGLE(单选), 2-QUESTION_TYPE_MULTIPLE(多选)</p>
                     * 
                     */
                    void SetType(const int64_t& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取<p>选项列表</p>
                     * @return OptionList <p>选项列表</p>
                     * 
                     */
                    std::vector<ConversationQuestionOption> GetOptionList() const;

                    /**
                     * 设置<p>选项列表</p>
                     * @param _optionList <p>选项列表</p>
                     * 
                     */
                    void SetOptionList(const std::vector<ConversationQuestionOption>& _optionList);

                    /**
                     * 判断参数 OptionList 是否已赋值
                     * @return OptionList 是否已赋值
                     * 
                     */
                    bool OptionListHasBeenSet() const;

                    /**
                     * 获取<p>选项列表</p>
                     * @return Options <p>选项列表</p>
                     * 
                     */
                    std::vector<ConversationQuestionOption> GetOptions() const;

                    /**
                     * 设置<p>选项列表</p>
                     * @param _options <p>选项列表</p>
                     * 
                     */
                    void SetOptions(const std::vector<ConversationQuestionOption>& _options);

                    /**
                     * 判断参数 Options 是否已赋值
                     * @return Options 是否已赋值
                     * 
                     */
                    bool OptionsHasBeenSet() const;

                private:

                    /**
                     * <p>问题序号</p>
                     */
                    uint64_t m_index;
                    bool m_indexHasBeenSet;

                    /**
                     * <p>问题内容</p>
                     */
                    std::string m_question;
                    bool m_questionHasBeenSet;

                    /**
                     * <p>是否必答</p>
                     */
                    bool m_required;
                    bool m_requiredHasBeenSet;

                    /**
                     * <p>问题类型 枚举值: 0-QUESTION_TYPE_UNSPECIFIED(未指定), 1-QUESTION_TYPE_SINGLE(单选), 2-QUESTION_TYPE_MULTIPLE(多选)</p>
                     */
                    int64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * <p>选项列表</p>
                     */
                    std::vector<ConversationQuestionOption> m_optionList;
                    bool m_optionListHasBeenSet;

                    /**
                     * <p>选项列表</p>
                     */
                    std::vector<ConversationQuestionOption> m_options;
                    bool m_optionsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_CONVERSATIONQUESTION_H_
