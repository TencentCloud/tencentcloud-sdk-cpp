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

#ifndef TENCENTCLOUD_DATAAGENT_V20250513_MODEL_EXAMPLEQA_H_
#define TENCENTCLOUD_DATAAGENT_V20250513_MODEL_EXAMPLEQA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dataagent
    {
        namespace V20250513
        {
            namespace Model
            {
                /**
                * 问答数据
                */
                class ExampleQA : public AbstractModel
                {
                public:
                    ExampleQA();
                    ~ExampleQA() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取示例记录的唯一业务 ID
                     * @return ExampleId 示例记录的唯一业务 ID
                     * 
                     */
                    std::string GetExampleId() const;

                    /**
                     * 设置示例记录的唯一业务 ID
                     * @param _exampleId 示例记录的唯一业务 ID
                     * 
                     */
                    void SetExampleId(const std::string& _exampleId);

                    /**
                     * 判断参数 ExampleId 是否已赋值
                     * @return ExampleId 是否已赋值
                     * 
                     */
                    bool ExampleIdHasBeenSet() const;

                    /**
                     * 获取问题列表
                     * @return Questions 问题列表
                     * 
                     */
                    std::vector<std::string> GetQuestions() const;

                    /**
                     * 设置问题列表
                     * @param _questions 问题列表
                     * 
                     */
                    void SetQuestions(const std::vector<std::string>& _questions);

                    /**
                     * 判断参数 Questions 是否已赋值
                     * @return Questions 是否已赋值
                     * 
                     */
                    bool QuestionsHasBeenSet() const;

                    /**
                     * 获取对应的标准答案或回复
                     * @return Answer 对应的标准答案或回复
                     * 
                     */
                    std::string GetAnswer() const;

                    /**
                     * 设置对应的标准答案或回复
                     * @param _answer 对应的标准答案或回复
                     * 
                     */
                    void SetAnswer(const std::string& _answer);

                    /**
                     * 判断参数 Answer 是否已赋值
                     * @return Answer 是否已赋值
                     * 
                     */
                    bool AnswerHasBeenSet() const;

                    /**
                     * 获取内容类型，类型包含 'text', 'sql', 'code' 
                     * @return Type 内容类型，类型包含 'text', 'sql', 'code' 
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置内容类型，类型包含 'text', 'sql', 'code' 
                     * @param _type 内容类型，类型包含 'text', 'sql', 'code' 
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取记录的创建时间
                     * @return CreateTime 记录的创建时间
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置记录的创建时间
                     * @param _createTime 记录的创建时间
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取记录的最后更新时间
                     * @return UpdateTime 记录的最后更新时间
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置记录的最后更新时间
                     * @param _updateTime 记录的最后更新时间
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                private:

                    /**
                     * 示例记录的唯一业务 ID
                     */
                    std::string m_exampleId;
                    bool m_exampleIdHasBeenSet;

                    /**
                     * 问题列表
                     */
                    std::vector<std::string> m_questions;
                    bool m_questionsHasBeenSet;

                    /**
                     * 对应的标准答案或回复
                     */
                    std::string m_answer;
                    bool m_answerHasBeenSet;

                    /**
                     * 内容类型，类型包含 'text', 'sql', 'code' 
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 记录的创建时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 记录的最后更新时间
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DATAAGENT_V20250513_MODEL_EXAMPLEQA_H_
