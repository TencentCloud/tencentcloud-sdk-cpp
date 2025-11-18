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

#ifndef TENCENTCLOUD_DATAAGENT_V20250513_MODEL_RECORD_H_
#define TENCENTCLOUD_DATAAGENT_V20250513_MODEL_RECORD_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dataagent/v20250513/model/Task.h>


namespace TencentCloud
{
    namespace Dataagent
    {
        namespace V20250513
        {
            namespace Model
            {
                /**
                * 问答结构
                */
                class Record : public AbstractModel
                {
                public:
                    Record();
                    ~Record() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取问题内容
                     * @return Question 问题内容
                     * 
                     */
                    std::string GetQuestion() const;

                    /**
                     * 设置问题内容
                     * @param _question 问题内容
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
                     * 获取回答内容
                     * @return Answer 回答内容
                     * 
                     */
                    std::string GetAnswer() const;

                    /**
                     * 设置回答内容
                     * @param _answer 回答内容
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
                     * 获取思考内容
                     * @return Think 思考内容
                     * 
                     */
                    std::string GetThink() const;

                    /**
                     * 设置思考内容
                     * @param _think 思考内容
                     * 
                     */
                    void SetThink(const std::string& _think);

                    /**
                     * 判断参数 Think 是否已赋值
                     * @return Think 是否已赋值
                     * 
                     */
                    bool ThinkHasBeenSet() const;

                    /**
                     * 获取任务列表
                     * @return TaskList 任务列表
                     * 
                     */
                    std::vector<Task> GetTaskList() const;

                    /**
                     * 设置任务列表
                     * @param _taskList 任务列表
                     * 
                     */
                    void SetTaskList(const std::vector<Task>& _taskList);

                    /**
                     * 判断参数 TaskList 是否已赋值
                     * @return TaskList 是否已赋值
                     * 
                     */
                    bool TaskListHasBeenSet() const;

                    /**
                     * 获取记录创建时间
                     * @return CreateTime 记录创建时间
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置记录创建时间
                     * @param _createTime 记录创建时间
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
                     * 获取记录更新时间
                     * @return UpdateTime 记录更新时间
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置记录更新时间
                     * @param _updateTime 记录更新时间
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
                     * 获取记录id
                     * @return RecordId 记录id
                     * 
                     */
                    std::string GetRecordId() const;

                    /**
                     * 设置记录id
                     * @param _recordId 记录id
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
                     * 获取总结内容
                     * @return FinalSummary 总结内容
                     * 
                     */
                    std::string GetFinalSummary() const;

                    /**
                     * 设置总结内容
                     * @param _finalSummary 总结内容
                     * 
                     */
                    void SetFinalSummary(const std::string& _finalSummary);

                    /**
                     * 判断参数 FinalSummary 是否已赋值
                     * @return FinalSummary 是否已赋值
                     * 
                     */
                    bool FinalSummaryHasBeenSet() const;

                    /**
                     * 获取会话ID
                     * @return SessionId 会话ID
                     * 
                     */
                    std::string GetSessionId() const;

                    /**
                     * 设置会话ID
                     * @param _sessionId 会话ID
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
                     * 获取1=赞，2=踩，0=无反馈
                     * @return Feedback 1=赞，2=踩，0=无反馈
                     * 
                     */
                    int64_t GetFeedback() const;

                    /**
                     * 设置1=赞，2=踩，0=无反馈
                     * @param _feedback 1=赞，2=踩，0=无反馈
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
                     * 获取数据库信息
                     * @return DbInfo 数据库信息
                     * 
                     */
                    std::string GetDbInfo() const;

                    /**
                     * 设置数据库信息
                     * @param _dbInfo 数据库信息
                     * 
                     */
                    void SetDbInfo(const std::string& _dbInfo);

                    /**
                     * 判断参数 DbInfo 是否已赋值
                     * @return DbInfo 是否已赋值
                     * 
                     */
                    bool DbInfoHasBeenSet() const;

                    /**
                     * 获取错误信息
                     * @return ErrorContext 错误信息
                     * 
                     */
                    std::string GetErrorContext() const;

                    /**
                     * 设置错误信息
                     * @param _errorContext 错误信息
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
                     * 获取TaskList的string字符串
                     * @return TaskListStr TaskList的string字符串
                     * 
                     */
                    std::string GetTaskListStr() const;

                    /**
                     * 设置TaskList的string字符串
                     * @param _taskListStr TaskList的string字符串
                     * 
                     */
                    void SetTaskListStr(const std::string& _taskListStr);

                    /**
                     * 判断参数 TaskListStr 是否已赋值
                     * @return TaskListStr 是否已赋值
                     * 
                     */
                    bool TaskListStrHasBeenSet() const;

                    /**
                     * 获取知识库id列表
                     * @return KnowledgeBaseIds 知识库id列表
                     * 
                     */
                    std::vector<std::string> GetKnowledgeBaseIds() const;

                    /**
                     * 设置知识库id列表
                     * @param _knowledgeBaseIds 知识库id列表
                     * 
                     */
                    void SetKnowledgeBaseIds(const std::vector<std::string>& _knowledgeBaseIds);

                    /**
                     * 判断参数 KnowledgeBaseIds 是否已赋值
                     * @return KnowledgeBaseIds 是否已赋值
                     * 
                     */
                    bool KnowledgeBaseIdsHasBeenSet() const;

                    /**
                     * 获取上下文
                     * @return Context 上下文
                     * 
                     */
                    std::string GetContext() const;

                    /**
                     * 设置上下文
                     * @param _context 上下文
                     * 
                     */
                    void SetContext(const std::string& _context);

                    /**
                     * 判断参数 Context 是否已赋值
                     * @return Context 是否已赋值
                     * 
                     */
                    bool ContextHasBeenSet() const;

                private:

                    /**
                     * 问题内容
                     */
                    std::string m_question;
                    bool m_questionHasBeenSet;

                    /**
                     * 回答内容
                     */
                    std::string m_answer;
                    bool m_answerHasBeenSet;

                    /**
                     * 思考内容
                     */
                    std::string m_think;
                    bool m_thinkHasBeenSet;

                    /**
                     * 任务列表
                     */
                    std::vector<Task> m_taskList;
                    bool m_taskListHasBeenSet;

                    /**
                     * 记录创建时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 记录更新时间
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * 记录id
                     */
                    std::string m_recordId;
                    bool m_recordIdHasBeenSet;

                    /**
                     * 总结内容
                     */
                    std::string m_finalSummary;
                    bool m_finalSummaryHasBeenSet;

                    /**
                     * 会话ID
                     */
                    std::string m_sessionId;
                    bool m_sessionIdHasBeenSet;

                    /**
                     * 1=赞，2=踩，0=无反馈
                     */
                    int64_t m_feedback;
                    bool m_feedbackHasBeenSet;

                    /**
                     * 数据库信息
                     */
                    std::string m_dbInfo;
                    bool m_dbInfoHasBeenSet;

                    /**
                     * 错误信息
                     */
                    std::string m_errorContext;
                    bool m_errorContextHasBeenSet;

                    /**
                     * TaskList的string字符串
                     */
                    std::string m_taskListStr;
                    bool m_taskListStrHasBeenSet;

                    /**
                     * 知识库id列表
                     */
                    std::vector<std::string> m_knowledgeBaseIds;
                    bool m_knowledgeBaseIdsHasBeenSet;

                    /**
                     * 上下文
                     */
                    std::string m_context;
                    bool m_contextHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DATAAGENT_V20250513_MODEL_RECORD_H_
