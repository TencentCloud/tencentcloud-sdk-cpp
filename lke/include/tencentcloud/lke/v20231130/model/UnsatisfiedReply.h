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
                     * 获取问题回复
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Answer 问题回复
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAnswer() const;

                    /**
                     * 设置问题回复
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _answer 问题回复
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

                    /**
                     * 获取处理状态，0：待处理，1：已拒答，2：已忽略，3：已纠错
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Status 处理状态，0：待处理，1：已拒答，2：已忽略，3：已纠错
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置处理状态，0：待处理，1：已拒答，2：已忽略，3：已纠错
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _status 处理状态，0：待处理，1：已拒答，2：已忽略，3：已纠错
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取创建时间，秒级时间戳
                     * @return CreateTime 创建时间，秒级时间戳
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置创建时间，秒级时间戳
                     * @param _createTime 创建时间，秒级时间戳
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
                     * 获取更新时间,秒级时间戳
                     * @return UpdateTime 更新时间,秒级时间戳
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置更新时间,秒级时间戳
                     * @param _updateTime 更新时间,秒级时间戳
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取操作人
                     * @return Operator 操作人
                     * 
                     */
                    std::string GetOperator() const;

                    /**
                     * 设置操作人
                     * @param _operator 操作人
                     * 
                     */
                    void SetOperator(const std::string& _operator);

                    /**
                     * 判断参数 Operator 是否已赋值
                     * @return Operator 是否已赋值
                     * 
                     */
                    bool OperatorHasBeenSet() const;

                    /**
                     * 获取自定义反馈
                     * @return FeedbackContent 自定义反馈
                     * 
                     */
                    std::string GetFeedbackContent() const;

                    /**
                     * 设置自定义反馈
                     * @param _feedbackContent 自定义反馈
                     * 
                     */
                    void SetFeedbackContent(const std::string& _feedbackContent);

                    /**
                     * 判断参数 FeedbackContent 是否已赋值
                     * @return FeedbackContent 是否已赋值
                     * 
                     */
                    bool FeedbackContentHasBeenSet() const;

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
                     * 问题回复
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

                    /**
                     * 处理状态，0：待处理，1：已拒答，2：已忽略，3：已纠错
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 创建时间，秒级时间戳
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 更新时间,秒级时间戳
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * 操作人
                     */
                    std::string m_operator;
                    bool m_operatorHasBeenSet;

                    /**
                     * 自定义反馈
                     */
                    std::string m_feedbackContent;
                    bool m_feedbackContentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_UNSATISFIEDREPLY_H_
