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

#ifndef TENCENTCLOUD_LKE_V20231130_MODEL_UNSATISFIEDREPLY_H_
#define TENCENTCLOUD_LKE_V20231130_MODEL_UNSATISFIEDREPLY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Lke
    {
        namespace V20231130
        {
            namespace Model
            {
                /**
                * 不满意回复
                */
                class UnsatisfiedReply : public AbstractModel
                {
                public:
                    UnsatisfiedReply();
                    ~UnsatisfiedReply() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取不满意回复ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ReplyBizId 不满意回复ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetReplyBizId() const;

                    /**
                     * 设置不满意回复ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _replyBizId 不满意回复ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetReplyBizId(const std::string& _replyBizId);

                    /**
                     * 判断参数 ReplyBizId 是否已赋值
                     * @return ReplyBizId 是否已赋值
                     * 
                     */
                    bool ReplyBizIdHasBeenSet() const;

                    /**
                     * 获取消息记录ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RecordBizId 消息记录ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRecordBizId() const;

                    /**
                     * 设置消息记录ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _recordBizId 消息记录ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRecordBizId(const std::string& _recordBizId);

                    /**
                     * 判断参数 RecordBizId 是否已赋值
                     * @return RecordBizId 是否已赋值
                     * 
                     */
                    bool RecordBizIdHasBeenSet() const;

                    /**
                     * 获取用户问题
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Question 用户问题
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetQuestion() const;

                    /**
                     * 设置用户问题
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _question 用户问题
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取应用回复
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Answer 应用回复
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAnswer() const;

                    /**
                     * 设置应用回复
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _answer 应用回复
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取错误类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Reasons 错误类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetReasons() const;

                    /**
                     * 设置错误类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _reasons 错误类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetReasons(const std::vector<std::string>& _reasons);

                    /**
                     * 判断参数 Reasons 是否已赋值
                     * @return Reasons 是否已赋值
                     * 
                     */
                    bool ReasonsHasBeenSet() const;

                private:

                    /**
                     * 不满意回复ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_replyBizId;
                    bool m_replyBizIdHasBeenSet;

                    /**
                     * 消息记录ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_recordBizId;
                    bool m_recordBizIdHasBeenSet;

                    /**
                     * 用户问题
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_question;
                    bool m_questionHasBeenSet;

                    /**
                     * 应用回复
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_answer;
                    bool m_answerHasBeenSet;

                    /**
                     * 错误类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_reasons;
                    bool m_reasonsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_UNSATISFIEDREPLY_H_
