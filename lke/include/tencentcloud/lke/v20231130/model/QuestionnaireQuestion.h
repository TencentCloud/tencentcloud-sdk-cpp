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

#ifndef TENCENTCLOUD_LKE_V20231130_MODEL_QUESTIONNAIREQUESTION_H_
#define TENCENTCLOUD_LKE_V20231130_MODEL_QUESTIONNAIREQUESTION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/lke/v20231130/model/QuestionOption.h>


namespace TencentCloud
{
    namespace Lke
    {
        namespace V20231130
        {
            namespace Model
            {
                /**
                * 问卷的问题
                */
                class QuestionnaireQuestion : public AbstractModel
                {
                public:
                    QuestionnaireQuestion();
                    ~QuestionnaireQuestion() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>问题的序号</p>
                     * @return Index <p>问题的序号</p>
                     * 
                     */
                    int64_t GetIndex() const;

                    /**
                     * 设置<p>问题的序号</p>
                     * @param _index <p>问题的序号</p>
                     * 
                     */
                    void SetIndex(const int64_t& _index);

                    /**
                     * 判断参数 Index 是否已赋值
                     * @return Index 是否已赋值
                     * 
                     */
                    bool IndexHasBeenSet() const;

                    /**
                     * 获取<p>问题的内容</p>
                     * @return Question <p>问题的内容</p>
                     * 
                     */
                    std::string GetQuestion() const;

                    /**
                     * 设置<p>问题的内容</p>
                     * @param _question <p>问题的内容</p>
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
                     * 获取<p>问题类型</p>
                     * @return Type <p>问题类型</p>
                     * 
                     */
                    int64_t GetType() const;

                    /**
                     * 设置<p>问题类型</p>
                     * @param _type <p>问题类型</p>
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
                     * 获取<p>是否必选</p>
                     * @return Required <p>是否必选</p>
                     * 
                     */
                    bool GetRequired() const;

                    /**
                     * 设置<p>是否必选</p>
                     * @param _required <p>是否必选</p>
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
                     * 获取<p>问题的选项</p>
                     * @return Options <p>问题的选项</p>
                     * 
                     */
                    std::vector<QuestionOption> GetOptions() const;

                    /**
                     * 设置<p>问题的选项</p>
                     * @param _options <p>问题的选项</p>
                     * 
                     */
                    void SetOptions(const std::vector<QuestionOption>& _options);

                    /**
                     * 判断参数 Options 是否已赋值
                     * @return Options 是否已赋值
                     * 
                     */
                    bool OptionsHasBeenSet() const;

                private:

                    /**
                     * <p>问题的序号</p>
                     */
                    int64_t m_index;
                    bool m_indexHasBeenSet;

                    /**
                     * <p>问题的内容</p>
                     */
                    std::string m_question;
                    bool m_questionHasBeenSet;

                    /**
                     * <p>问题类型</p>
                     */
                    int64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * <p>是否必选</p>
                     */
                    bool m_required;
                    bool m_requiredHasBeenSet;

                    /**
                     * <p>问题的选项</p>
                     */
                    std::vector<QuestionOption> m_options;
                    bool m_optionsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_QUESTIONNAIREQUESTION_H_
