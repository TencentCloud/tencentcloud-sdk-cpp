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

#ifndef TENCENTCLOUD_DATAAGENT_V20250513_MODEL_RECORDLIST_H_
#define TENCENTCLOUD_DATAAGENT_V20250513_MODEL_RECORDLIST_H_

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
                * 记录列表
                */
                class RecordList : public AbstractModel
                {
                public:
                    RecordList();
                    ~RecordList() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>会话上下文</p>
                     * @return Context <p>会话上下文</p>
                     * 
                     */
                    std::string GetContext() const;

                    /**
                     * 设置<p>会话上下文</p>
                     * @param _context <p>会话上下文</p>
                     * 
                     */
                    void SetContext(const std::string& _context);

                    /**
                     * 判断参数 Context 是否已赋值
                     * @return Context 是否已赋值
                     * 
                     */
                    bool ContextHasBeenSet() const;

                    /**
                     * 获取<p>记录id</p>
                     * @return RecordId <p>记录id</p>
                     * 
                     */
                    std::string GetRecordId() const;

                    /**
                     * 设置<p>记录id</p>
                     * @param _recordId <p>记录id</p>
                     * 
                     */
                    void SetRecordId(const std::string& _recordId);

                    /**
                     * 判断参数 RecordId 是否已赋值
                     * @return RecordId 是否已赋值
                     * 
                     */
                    bool RecordIdHasBeenSet() const;

                    /**
                     * 获取<p>追踪id</p>
                     * @return TraceId <p>追踪id</p>
                     * 
                     */
                    std::string GetTraceId() const;

                    /**
                     * 设置<p>追踪id</p>
                     * @param _traceId <p>追踪id</p>
                     * 
                     */
                    void SetTraceId(const std::string& _traceId);

                    /**
                     * 判断参数 TraceId 是否已赋值
                     * @return TraceId 是否已赋值
                     * 
                     */
                    bool TraceIdHasBeenSet() const;

                    /**
                     * 获取<p>会话id</p>
                     * @return SessionId <p>会话id</p>
                     * 
                     */
                    std::string GetSessionId() const;

                    /**
                     * 设置<p>会话id</p>
                     * @param _sessionId <p>会话id</p>
                     * 
                     */
                    void SetSessionId(const std::string& _sessionId);

                    /**
                     * 判断参数 SessionId 是否已赋值
                     * @return SessionId 是否已赋值
                     * 
                     */
                    bool SessionIdHasBeenSet() const;

                    /**
                     * 获取<p>问题</p>
                     * @return Question <p>问题</p>
                     * 
                     */
                    std::string GetQuestion() const;

                    /**
                     * 设置<p>问题</p>
                     * @param _question <p>问题</p>
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
                     * 获取<p>回答</p>
                     * @return Answer <p>回答</p>
                     * 
                     */
                    std::string GetAnswer() const;

                    /**
                     * 设置<p>回答</p>
                     * @param _answer <p>回答</p>
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
                     * 获取<p>0-否定反馈, 1-肯定反馈</p>
                     * @return Feedback <p>0-否定反馈, 1-肯定反馈</p>
                     * 
                     */
                    int64_t GetFeedback() const;

                    /**
                     * 设置<p>0-否定反馈, 1-肯定反馈</p>
                     * @param _feedback <p>0-否定反馈, 1-肯定反馈</p>
                     * 
                     */
                    void SetFeedback(const int64_t& _feedback);

                    /**
                     * 判断参数 Feedback 是否已赋值
                     * @return Feedback 是否已赋值
                     * 
                     */
                    bool FeedbackHasBeenSet() const;

                    /**
                     * 获取<p>错误信息</p>
                     * @return ErrorContext <p>错误信息</p>
                     * 
                     */
                    std::string GetErrorContext() const;

                    /**
                     * 设置<p>错误信息</p>
                     * @param _errorContext <p>错误信息</p>
                     * 
                     */
                    void SetErrorContext(const std::string& _errorContext);

                    /**
                     * 判断参数 ErrorContext 是否已赋值
                     * @return ErrorContext 是否已赋值
                     * 
                     */
                    bool ErrorContextHasBeenSet() const;

                    /**
                     * 获取<p>创建时间</p>
                     * @return CreateTime <p>创建时间</p>
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置<p>创建时间</p>
                     * @param _createTime <p>创建时间</p>
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
                     * 获取<p>更新时间</p>
                     * @return UpdateTime <p>更新时间</p>
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置<p>更新时间</p>
                     * @param _updateTime <p>更新时间</p>
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
                     * 获取<p>模型信息</p>
                     * @return Model <p>模型信息</p>
                     * 
                     */
                    std::string GetModel() const;

                    /**
                     * 设置<p>模型信息</p>
                     * @param _model <p>模型信息</p>
                     * 
                     */
                    void SetModel(const std::string& _model);

                    /**
                     * 判断参数 Model 是否已赋值
                     * @return Model 是否已赋值
                     * 
                     */
                    bool ModelHasBeenSet() const;

                private:

                    /**
                     * <p>会话上下文</p>
                     */
                    std::string m_context;
                    bool m_contextHasBeenSet;

                    /**
                     * <p>记录id</p>
                     */
                    std::string m_recordId;
                    bool m_recordIdHasBeenSet;

                    /**
                     * <p>追踪id</p>
                     */
                    std::string m_traceId;
                    bool m_traceIdHasBeenSet;

                    /**
                     * <p>会话id</p>
                     */
                    std::string m_sessionId;
                    bool m_sessionIdHasBeenSet;

                    /**
                     * <p>问题</p>
                     */
                    std::string m_question;
                    bool m_questionHasBeenSet;

                    /**
                     * <p>回答</p>
                     */
                    std::string m_answer;
                    bool m_answerHasBeenSet;

                    /**
                     * <p>0-否定反馈, 1-肯定反馈</p>
                     */
                    int64_t m_feedback;
                    bool m_feedbackHasBeenSet;

                    /**
                     * <p>错误信息</p>
                     */
                    std::string m_errorContext;
                    bool m_errorContextHasBeenSet;

                    /**
                     * <p>创建时间</p>
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>更新时间</p>
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * <p>模型信息</p>
                     */
                    std::string m_model;
                    bool m_modelHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DATAAGENT_V20250513_MODEL_RECORDLIST_H_
