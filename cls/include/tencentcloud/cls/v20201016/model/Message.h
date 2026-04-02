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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_MESSAGE_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_MESSAGE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cls/v20201016/model/ToolCall.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * 会话内容
                */
                class Message : public AbstractModel
                {
                public:
                    Message();
                    ~Message() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>角色</p><p>枚举值：</p><ul><li>user： 用户</li><li>assistant： AI助手</li></ul>
                     * @return Role <p>角色</p><p>枚举值：</p><ul><li>user： 用户</li><li>assistant： AI助手</li></ul>
                     * 
                     */
                    std::string GetRole() const;

                    /**
                     * 设置<p>角色</p><p>枚举值：</p><ul><li>user： 用户</li><li>assistant： AI助手</li></ul>
                     * @param _role <p>角色</p><p>枚举值：</p><ul><li>user： 用户</li><li>assistant： AI助手</li></ul>
                     * 
                     */
                    void SetRole(const std::string& _role);

                    /**
                     * 判断参数 Role 是否已赋值
                     * @return Role 是否已赋值
                     * 
                     */
                    bool RoleHasBeenSet() const;

                    /**
                     * 获取<p>文本内容</p>
                     * @return Content <p>文本内容</p>
                     * 
                     */
                    std::string GetContent() const;

                    /**
                     * 设置<p>文本内容</p>
                     * @param _content <p>文本内容</p>
                     * 
                     */
                    void SetContent(const std::string& _content);

                    /**
                     * 判断参数 Content 是否已赋值
                     * @return Content 是否已赋值
                     * 
                     */
                    bool ContentHasBeenSet() const;

                    /**
                     * 获取<p>思维链内容。<br>用于展示模型思考过程，仅深度思考模式可用。仅作为输出参数返回，在进行多轮对话时，无需传入输入参数中。</p>
                     * @return ReasoningContent <p>思维链内容。<br>用于展示模型思考过程，仅深度思考模式可用。仅作为输出参数返回，在进行多轮对话时，无需传入输入参数中。</p>
                     * 
                     */
                    std::string GetReasoningContent() const;

                    /**
                     * 设置<p>思维链内容。<br>用于展示模型思考过程，仅深度思考模式可用。仅作为输出参数返回，在进行多轮对话时，无需传入输入参数中。</p>
                     * @param _reasoningContent <p>思维链内容。<br>用于展示模型思考过程，仅深度思考模式可用。仅作为输出参数返回，在进行多轮对话时，无需传入输入参数中。</p>
                     * 
                     */
                    void SetReasoningContent(const std::string& _reasoningContent);

                    /**
                     * 判断参数 ReasoningContent 是否已赋值
                     * @return ReasoningContent 是否已赋值
                     * 
                     */
                    bool ReasoningContentHasBeenSet() const;

                    /**
                     * 获取<p>模型生成的工具调用。仅支持输出参数返回。</p>
                     * @return ToolCalls <p>模型生成的工具调用。仅支持输出参数返回。</p>
                     * 
                     */
                    std::vector<ToolCall> GetToolCalls() const;

                    /**
                     * 设置<p>模型生成的工具调用。仅支持输出参数返回。</p>
                     * @param _toolCalls <p>模型生成的工具调用。仅支持输出参数返回。</p>
                     * 
                     */
                    void SetToolCalls(const std::vector<ToolCall>& _toolCalls);

                    /**
                     * 判断参数 ToolCalls 是否已赋值
                     * @return ToolCalls 是否已赋值
                     * 
                     */
                    bool ToolCallsHasBeenSet() const;

                private:

                    /**
                     * <p>角色</p><p>枚举值：</p><ul><li>user： 用户</li><li>assistant： AI助手</li></ul>
                     */
                    std::string m_role;
                    bool m_roleHasBeenSet;

                    /**
                     * <p>文本内容</p>
                     */
                    std::string m_content;
                    bool m_contentHasBeenSet;

                    /**
                     * <p>思维链内容。<br>用于展示模型思考过程，仅深度思考模式可用。仅作为输出参数返回，在进行多轮对话时，无需传入输入参数中。</p>
                     */
                    std::string m_reasoningContent;
                    bool m_reasoningContentHasBeenSet;

                    /**
                     * <p>模型生成的工具调用。仅支持输出参数返回。</p>
                     */
                    std::vector<ToolCall> m_toolCalls;
                    bool m_toolCallsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_MESSAGE_H_
