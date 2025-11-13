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

#ifndef TENCENTCLOUD_DATAAGENT_V20250513_MODEL_CHATAIREQUEST_H_
#define TENCENTCLOUD_DATAAGENT_V20250513_MODEL_CHATAIREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * ChatAI请求参数结构体
                */
                class ChatAIRequest : public AbstractModel
                {
                public:
                    ChatAIRequest();
                    ~ChatAIRequest() = default;
                    std::string ToJsonString() const;


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
                     * 获取实例ID
                     * @return InstanceId 实例ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例ID
                     * @param _instanceId 实例ID
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

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

                    /**
                     * 获取模型
                     * @return Model 模型
                     * 
                     */
                    std::string GetModel() const;

                    /**
                     * 设置模型
                     * @param _model 模型
                     * 
                     */
                    void SetModel(const std::string& _model);

                    /**
                     * 判断参数 Model 是否已赋值
                     * @return Model 是否已赋值
                     * 
                     */
                    bool ModelHasBeenSet() const;

                    /**
                     * 获取是否深度思考
                     * @return DeepThinking 是否深度思考
                     * 
                     */
                    bool GetDeepThinking() const;

                    /**
                     * 设置是否深度思考
                     * @param _deepThinking 是否深度思考
                     * 
                     */
                    void SetDeepThinking(const bool& _deepThinking);

                    /**
                     * 判断参数 DeepThinking 是否已赋值
                     * @return DeepThinking 是否已赋值
                     * 
                     */
                    bool DeepThinkingHasBeenSet() const;

                    /**
                     * 获取数据源id
                     * @return DataSourceIds 数据源id
                     * 
                     */
                    std::vector<std::string> GetDataSourceIds() const;

                    /**
                     * 设置数据源id
                     * @param _dataSourceIds 数据源id
                     * 
                     */
                    void SetDataSourceIds(const std::vector<std::string>& _dataSourceIds);

                    /**
                     * 判断参数 DataSourceIds 是否已赋值
                     * @return DataSourceIds 是否已赋值
                     * 
                     */
                    bool DataSourceIdsHasBeenSet() const;

                    /**
                     * 获取agent类型
                     * @return AgentType agent类型
                     * 
                     */
                    std::string GetAgentType() const;

                    /**
                     * 设置agent类型
                     * @param _agentType agent类型
                     * 
                     */
                    void SetAgentType(const std::string& _agentType);

                    /**
                     * 判断参数 AgentType 是否已赋值
                     * @return AgentType 是否已赋值
                     * 
                     */
                    bool AgentTypeHasBeenSet() const;

                    /**
                     * 获取需要重新生成答案的记录ID
                     * @return OldRecordId 需要重新生成答案的记录ID
                     * 
                     */
                    std::string GetOldRecordId() const;

                    /**
                     * 设置需要重新生成答案的记录ID
                     * @param _oldRecordId 需要重新生成答案的记录ID
                     * 
                     */
                    void SetOldRecordId(const std::string& _oldRecordId);

                    /**
                     * 判断参数 OldRecordId 是否已赋值
                     * @return OldRecordId 是否已赋值
                     * 
                     */
                    bool OldRecordIdHasBeenSet() const;

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

                private:

                    /**
                     * 会话ID
                     */
                    std::string m_sessionId;
                    bool m_sessionIdHasBeenSet;

                    /**
                     * 实例ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 问题内容
                     */
                    std::string m_question;
                    bool m_questionHasBeenSet;

                    /**
                     * 上下文
                     */
                    std::string m_context;
                    bool m_contextHasBeenSet;

                    /**
                     * 模型
                     */
                    std::string m_model;
                    bool m_modelHasBeenSet;

                    /**
                     * 是否深度思考
                     */
                    bool m_deepThinking;
                    bool m_deepThinkingHasBeenSet;

                    /**
                     * 数据源id
                     */
                    std::vector<std::string> m_dataSourceIds;
                    bool m_dataSourceIdsHasBeenSet;

                    /**
                     * agent类型
                     */
                    std::string m_agentType;
                    bool m_agentTypeHasBeenSet;

                    /**
                     * 需要重新生成答案的记录ID
                     */
                    std::string m_oldRecordId;
                    bool m_oldRecordIdHasBeenSet;

                    /**
                     * 知识库id列表
                     */
                    std::vector<std::string> m_knowledgeBaseIds;
                    bool m_knowledgeBaseIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DATAAGENT_V20250513_MODEL_CHATAIREQUEST_H_
