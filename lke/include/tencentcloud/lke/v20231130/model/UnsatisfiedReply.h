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
                     * 获取<p>不满意回复ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ReplyBizId <p>不满意回复ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetReplyBizId() const;

                    /**
                     * 设置<p>不满意回复ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _replyBizId <p>不满意回复ID</p>
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
                     * 获取<p>消息记录ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RecordBizId <p>消息记录ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRecordBizId() const;

                    /**
                     * 设置<p>消息记录ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _recordBizId <p>消息记录ID</p>
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
                     * 获取<p>用户问题</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Question <p>用户问题</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetQuestion() const;

                    /**
                     * 设置<p>用户问题</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _question <p>用户问题</p>
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
                     * 获取<p>问题回复</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Answer <p>问题回复</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAnswer() const;

                    /**
                     * 设置<p>问题回复</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _answer <p>问题回复</p>
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
                     * 获取<p>错误类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Reasons <p>错误类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetReasons() const;

                    /**
                     * 设置<p>错误类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _reasons <p>错误类型</p>
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
                     * 获取<p>处理状态，0：待处理，1：已拒答，2：已忽略，3：已纠错</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Status <p>处理状态，0：待处理，1：已拒答，2：已忽略，3：已纠错</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置<p>处理状态，0：待处理，1：已拒答，2：已忽略，3：已纠错</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _status <p>处理状态，0：待处理，1：已拒答，2：已忽略，3：已纠错</p>
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
                     * 获取<p>创建时间，秒级时间戳</p>
                     * @return CreateTime <p>创建时间，秒级时间戳</p>
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置<p>创建时间，秒级时间戳</p>
                     * @param _createTime <p>创建时间，秒级时间戳</p>
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
                     * 获取<p>更新时间,秒级时间戳</p>
                     * @return UpdateTime <p>更新时间,秒级时间戳</p>
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置<p>更新时间,秒级时间戳</p>
                     * @param _updateTime <p>更新时间,秒级时间戳</p>
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
                     * 获取<p>操作人</p>
                     * @return Operator <p>操作人</p>
                     * 
                     */
                    std::string GetOperator() const;

                    /**
                     * 设置<p>操作人</p>
                     * @param _operator <p>操作人</p>
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
                     * 获取<p>自定义反馈</p>
                     * @return FeedbackContent <p>自定义反馈</p>
                     * 
                     */
                    std::string GetFeedbackContent() const;

                    /**
                     * 设置<p>自定义反馈</p>
                     * @param _feedbackContent <p>自定义反馈</p>
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
                     * <p>不满意回复ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_replyBizId;
                    bool m_replyBizIdHasBeenSet;

                    /**
                     * <p>消息记录ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_recordBizId;
                    bool m_recordBizIdHasBeenSet;

                    /**
                     * <p>用户问题</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_question;
                    bool m_questionHasBeenSet;

                    /**
                     * <p>问题回复</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_answer;
                    bool m_answerHasBeenSet;

                    /**
                     * <p>错误类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_reasons;
                    bool m_reasonsHasBeenSet;

                    /**
                     * <p>处理状态，0：待处理，1：已拒答，2：已忽略，3：已纠错</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>创建时间，秒级时间戳</p>
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>更新时间,秒级时间戳</p>
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * <p>操作人</p>
                     */
                    std::string m_operator;
                    bool m_operatorHasBeenSet;

                    /**
                     * <p>自定义反馈</p>
                     */
                    std::string m_feedbackContent;
                    bool m_feedbackContentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_UNSATISFIEDREPLY_H_
