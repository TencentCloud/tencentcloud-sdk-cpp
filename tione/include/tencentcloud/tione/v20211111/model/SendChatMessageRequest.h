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

#ifndef TENCENTCLOUD_TIONE_V20211111_MODEL_SENDCHATMESSAGEREQUEST_H_
#define TENCENTCLOUD_TIONE_V20211111_MODEL_SENDCHATMESSAGEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tione
    {
        namespace V20211111
        {
            namespace Model
            {
                /**
                * SendChatMessage请求参数结构体
                */
                class SendChatMessageRequest : public AbstractModel
                {
                public:
                    SendChatMessageRequest();
                    ~SendChatMessageRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取会话id，标识一组对话的唯一id，id变更则重置会话
                     * @return SessionId 会话id，标识一组对话的唯一id，id变更则重置会话
                     * 
                     */
                    std::string GetSessionId() const;

                    /**
                     * 设置会话id，标识一组对话的唯一id，id变更则重置会话
                     * @param _sessionId 会话id，标识一组对话的唯一id，id变更则重置会话
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
                     * 获取问题描述
                     * @return Question 问题描述
                     * 
                     */
                    std::string GetQuestion() const;

                    /**
                     * 设置问题描述
                     * @param _question 问题描述
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
                     * 获取会话模型版本，不同的会话模型调用到不同的模型后台。
注: 多行业多场景大模型填写 tj_llm_clm-v1
                     * @return ModelVersion 会话模型版本，不同的会话模型调用到不同的模型后台。
注: 多行业多场景大模型填写 tj_llm_clm-v1
                     * 
                     */
                    std::string GetModelVersion() const;

                    /**
                     * 设置会话模型版本，不同的会话模型调用到不同的模型后台。
注: 多行业多场景大模型填写 tj_llm_clm-v1
                     * @param _modelVersion 会话模型版本，不同的会话模型调用到不同的模型后台。
注: 多行业多场景大模型填写 tj_llm_clm-v1
                     * 
                     */
                    void SetModelVersion(const std::string& _modelVersion);

                    /**
                     * 判断参数 ModelVersion 是否已赋值
                     * @return ModelVersion 是否已赋值
                     * 
                     */
                    bool ModelVersionHasBeenSet() const;

                    /**
                     * 获取使用模式(仅部分模型支持)。General 通用问答；WithSearchPlugin 搜索增强问答
                     * @return Mode 使用模式(仅部分模型支持)。General 通用问答；WithSearchPlugin 搜索增强问答
                     * 
                     */
                    std::string GetMode() const;

                    /**
                     * 设置使用模式(仅部分模型支持)。General 通用问答；WithSearchPlugin 搜索增强问答
                     * @param _mode 使用模式(仅部分模型支持)。General 通用问答；WithSearchPlugin 搜索增强问答
                     * 
                     */
                    void SetMode(const std::string& _mode);

                    /**
                     * 判断参数 Mode 是否已赋值
                     * @return Mode 是否已赋值
                     * 
                     */
                    bool ModeHasBeenSet() const;

                    /**
                     * 获取搜索来源。仅当Mode未WithSearchPlugin时生效。Preset 预置文稿库；Custom 自定义。
                     * @return SearchSource 搜索来源。仅当Mode未WithSearchPlugin时生效。Preset 预置文稿库；Custom 自定义。
                     * 
                     */
                    std::string GetSearchSource() const;

                    /**
                     * 设置搜索来源。仅当Mode未WithSearchPlugin时生效。Preset 预置文稿库；Custom 自定义。
                     * @param _searchSource 搜索来源。仅当Mode未WithSearchPlugin时生效。Preset 预置文稿库；Custom 自定义。
                     * 
                     */
                    void SetSearchSource(const std::string& _searchSource);

                    /**
                     * 判断参数 SearchSource 是否已赋值
                     * @return SearchSource 是否已赋值
                     * 
                     */
                    bool SearchSourceHasBeenSet() const;

                private:

                    /**
                     * 会话id，标识一组对话的唯一id，id变更则重置会话
                     */
                    std::string m_sessionId;
                    bool m_sessionIdHasBeenSet;

                    /**
                     * 问题描述
                     */
                    std::string m_question;
                    bool m_questionHasBeenSet;

                    /**
                     * 会话模型版本，不同的会话模型调用到不同的模型后台。
注: 多行业多场景大模型填写 tj_llm_clm-v1
                     */
                    std::string m_modelVersion;
                    bool m_modelVersionHasBeenSet;

                    /**
                     * 使用模式(仅部分模型支持)。General 通用问答；WithSearchPlugin 搜索增强问答
                     */
                    std::string m_mode;
                    bool m_modeHasBeenSet;

                    /**
                     * 搜索来源。仅当Mode未WithSearchPlugin时生效。Preset 预置文稿库；Custom 自定义。
                     */
                    std::string m_searchSource;
                    bool m_searchSourceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIONE_V20211111_MODEL_SENDCHATMESSAGEREQUEST_H_
