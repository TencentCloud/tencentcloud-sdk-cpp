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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_CHATCOMPLETIONSREQUEST_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_CHATCOMPLETIONSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/clb/v20180317/model/MultiModalityAttachments.h>


namespace TencentCloud
{
    namespace Clb
    {
        namespace V20180317
        {
            namespace Model
            {
                /**
                * ChatCompletions请求参数结构体
                */
                class ChatCompletionsRequest : public AbstractModel
                {
                public:
                    ChatCompletionsRequest();
                    ~ChatCompletionsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>virtual key，用于向代理网关鉴权</p>
                     * @return ApiKey <p>virtual key，用于向代理网关鉴权</p>
                     * 
                     */
                    std::string GetApiKey() const;

                    /**
                     * 设置<p>virtual key，用于向代理网关鉴权</p>
                     * @param _apiKey <p>virtual key，用于向代理网关鉴权</p>
                     * 
                     */
                    void SetApiKey(const std::string& _apiKey);

                    /**
                     * 判断参数 ApiKey 是否已赋值
                     * @return ApiKey 是否已赋值
                     * 
                     */
                    bool ApiKeyHasBeenSet() const;

                    /**
                     * 获取<p>多模态附件列表</p>
                     * @return Attachments <p>多模态附件列表</p>
                     * 
                     */
                    std::vector<MultiModalityAttachments> GetAttachments() const;

                    /**
                     * 设置<p>多模态附件列表</p>
                     * @param _attachments <p>多模态附件列表</p>
                     * 
                     */
                    void SetAttachments(const std::vector<MultiModalityAttachments>& _attachments);

                    /**
                     * 判断参数 Attachments 是否已赋值
                     * @return Attachments 是否已赋值
                     * 
                     */
                    bool AttachmentsHasBeenSet() const;

                    /**
                     * 获取<p>聊天内容</p>
                     * @return ChatContent <p>聊天内容</p>
                     * 
                     */
                    std::string GetChatContent() const;

                    /**
                     * 设置<p>聊天内容</p>
                     * @param _chatContent <p>聊天内容</p>
                     * 
                     */
                    void SetChatContent(const std::string& _chatContent);

                    /**
                     * 判断参数 ChatContent 是否已赋值
                     * @return ChatContent 是否已赋值
                     * 
                     */
                    bool ChatContentHasBeenSet() const;

                    /**
                     * 获取<p>模型名称，配置的模型标识</p><p>示例：gpt-4o、deepseek-chat</p>
                     * @return Model <p>模型名称，配置的模型标识</p><p>示例：gpt-4o、deepseek-chat</p>
                     * 
                     */
                    std::string GetModel() const;

                    /**
                     * 设置<p>模型名称，配置的模型标识</p><p>示例：gpt-4o、deepseek-chat</p>
                     * @param _model <p>模型名称，配置的模型标识</p><p>示例：gpt-4o、deepseek-chat</p>
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
                     * 获取<p>模型路由实例ID</p>
                     * @return ModelRouterId <p>模型路由实例ID</p>
                     * 
                     */
                    std::string GetModelRouterId() const;

                    /**
                     * 设置<p>模型路由实例ID</p>
                     * @param _modelRouterId <p>模型路由实例ID</p>
                     * 
                     */
                    void SetModelRouterId(const std::string& _modelRouterId);

                    /**
                     * 判断参数 ModelRouterId 是否已赋值
                     * @return ModelRouterId 是否已赋值
                     * 
                     */
                    bool ModelRouterIdHasBeenSet() const;

                    /**
                     * 获取<p>请求路径</p><p>默认值：/v1/chat/completions</p>
                     * @return RequestPath <p>请求路径</p><p>默认值：/v1/chat/completions</p>
                     * 
                     */
                    std::string GetRequestPath() const;

                    /**
                     * 设置<p>请求路径</p><p>默认值：/v1/chat/completions</p>
                     * @param _requestPath <p>请求路径</p><p>默认值：/v1/chat/completions</p>
                     * 
                     */
                    void SetRequestPath(const std::string& _requestPath);

                    /**
                     * 判断参数 RequestPath 是否已赋值
                     * @return RequestPath 是否已赋值
                     * 
                     */
                    bool RequestPathHasBeenSet() const;

                private:

                    /**
                     * <p>virtual key，用于向代理网关鉴权</p>
                     */
                    std::string m_apiKey;
                    bool m_apiKeyHasBeenSet;

                    /**
                     * <p>多模态附件列表</p>
                     */
                    std::vector<MultiModalityAttachments> m_attachments;
                    bool m_attachmentsHasBeenSet;

                    /**
                     * <p>聊天内容</p>
                     */
                    std::string m_chatContent;
                    bool m_chatContentHasBeenSet;

                    /**
                     * <p>模型名称，配置的模型标识</p><p>示例：gpt-4o、deepseek-chat</p>
                     */
                    std::string m_model;
                    bool m_modelHasBeenSet;

                    /**
                     * <p>模型路由实例ID</p>
                     */
                    std::string m_modelRouterId;
                    bool m_modelRouterIdHasBeenSet;

                    /**
                     * <p>请求路径</p><p>默认值：/v1/chat/completions</p>
                     */
                    std::string m_requestPath;
                    bool m_requestPathHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_CHATCOMPLETIONSREQUEST_H_
