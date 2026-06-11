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
                     * 获取<p>会话ID</p>
                     * @return SessionId <p>会话ID</p>
                     * 
                     */
                    std::string GetSessionId() const;

                    /**
                     * 设置<p>会话ID</p>
                     * @param _sessionId <p>会话ID</p>
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
                     * 获取<p>实例ID</p>
                     * @return InstanceId <p>实例ID</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>实例ID</p>
                     * @param _instanceId <p>实例ID</p>
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
                     * 获取<p>上下文</p>
                     * @return Context <p>上下文</p>
                     * 
                     */
                    std::string GetContext() const;

                    /**
                     * 设置<p>上下文</p>
                     * @param _context <p>上下文</p>
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
                     * 获取<p>模型</p>
                     * @return Model <p>模型</p>
                     * 
                     */
                    std::string GetModel() const;

                    /**
                     * 设置<p>模型</p>
                     * @param _model <p>模型</p>
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
                     * 获取<p>是否深度思考</p>
                     * @return DeepThinking <p>是否深度思考</p>
                     * 
                     */
                    bool GetDeepThinking() const;

                    /**
                     * 设置<p>是否深度思考</p>
                     * @param _deepThinking <p>是否深度思考</p>
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
                     * 获取<p>数据源id</p>
                     * @return DataSourceIds <p>数据源id</p>
                     * 
                     */
                    std::vector<std::string> GetDataSourceIds() const;

                    /**
                     * 设置<p>数据源id</p>
                     * @param _dataSourceIds <p>数据源id</p>
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
                     * 获取<p>agent类型</p>
                     * @return AgentType <p>agent类型</p>
                     * 
                     */
                    std::string GetAgentType() const;

                    /**
                     * 设置<p>agent类型</p>
                     * @param _agentType <p>agent类型</p>
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
                     * 获取<p>需要重新生成答案的记录ID</p>
                     * @return OldRecordId <p>需要重新生成答案的记录ID</p>
                     * 
                     */
                    std::string GetOldRecordId() const;

                    /**
                     * 设置<p>需要重新生成答案的记录ID</p>
                     * @param _oldRecordId <p>需要重新生成答案的记录ID</p>
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
                     * 获取<p>知识库id列表</p>
                     * @return KnowledgeBaseIds <p>知识库id列表</p>
                     * 
                     */
                    std::vector<std::string> GetKnowledgeBaseIds() const;

                    /**
                     * 设置<p>知识库id列表</p>
                     * @param _knowledgeBaseIds <p>知识库id列表</p>
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
                     * <p>会话ID</p>
                     */
                    std::string m_sessionId;
                    bool m_sessionIdHasBeenSet;

                    /**
                     * <p>实例ID</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>问题内容</p>
                     */
                    std::string m_question;
                    bool m_questionHasBeenSet;

                    /**
                     * <p>上下文</p>
                     */
                    std::string m_context;
                    bool m_contextHasBeenSet;

                    /**
                     * <p>模型</p>
                     */
                    std::string m_model;
                    bool m_modelHasBeenSet;

                    /**
                     * <p>是否深度思考</p>
                     */
                    bool m_deepThinking;
                    bool m_deepThinkingHasBeenSet;

                    /**
                     * <p>数据源id</p>
                     */
                    std::vector<std::string> m_dataSourceIds;
                    bool m_dataSourceIdsHasBeenSet;

                    /**
                     * <p>agent类型</p>
                     */
                    std::string m_agentType;
                    bool m_agentTypeHasBeenSet;

                    /**
                     * <p>需要重新生成答案的记录ID</p>
                     */
                    std::string m_oldRecordId;
                    bool m_oldRecordIdHasBeenSet;

                    /**
                     * <p>知识库id列表</p>
                     */
                    std::vector<std::string> m_knowledgeBaseIds;
                    bool m_knowledgeBaseIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DATAAGENT_V20250513_MODEL_CHATAIREQUEST_H_
