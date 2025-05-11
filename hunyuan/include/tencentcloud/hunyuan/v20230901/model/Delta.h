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

#ifndef TENCENTCLOUD_HUNYUAN_V20230901_MODEL_DELTA_H_
#define TENCENTCLOUD_HUNYUAN_V20230901_MODEL_DELTA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/hunyuan/v20230901/model/ToolCall.h>


namespace TencentCloud
{
    namespace Hunyuan
    {
        namespace V20230901
        {
            namespace Model
            {
                /**
                * 返回的内容（流式返回）
                */
                class Delta : public AbstractModel
                {
                public:
                    Delta();
                    ~Delta() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取角色名称。
                     * @return Role 角色名称。
                     * 
                     */
                    std::string GetRole() const;

                    /**
                     * 设置角色名称。
                     * @param _role 角色名称。
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
                     * 获取内容详情。
                     * @return Content 内容详情。
                     * 
                     */
                    std::string GetContent() const;

                    /**
                     * 设置内容详情。
                     * @param _content 内容详情。
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
                     * 获取模型生成的工具调用，仅 hunyuan-functioncall 模型支持
说明：
对于每一次的输出值应该以Id为标识对Type、Name、Arguments字段进行合并。

注意：此字段可能返回 null，表示取不到有效值。
                     * @return ToolCalls 模型生成的工具调用，仅 hunyuan-functioncall 模型支持
说明：
对于每一次的输出值应该以Id为标识对Type、Name、Arguments字段进行合并。

注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<ToolCall> GetToolCalls() const;

                    /**
                     * 设置模型生成的工具调用，仅 hunyuan-functioncall 模型支持
说明：
对于每一次的输出值应该以Id为标识对Type、Name、Arguments字段进行合并。

注意：此字段可能返回 null，表示取不到有效值。
                     * @param _toolCalls 模型生成的工具调用，仅 hunyuan-functioncall 模型支持
说明：
对于每一次的输出值应该以Id为标识对Type、Name、Arguments字段进行合并。

注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetToolCalls(const std::vector<ToolCall>& _toolCalls);

                    /**
                     * 判断参数 ToolCalls 是否已赋值
                     * @return ToolCalls 是否已赋值
                     * 
                     */
                    bool ToolCallsHasBeenSet() const;

                    /**
                     * 获取思维链内容。用于展示模型思考过程，仅 Hunyuan-T1 系列模型可用。注意：在进行多轮对话时，请不要将此字段拼接到 messages 中。请求 messages 的请求参数中包含 reasoning_content，接口将报错。
                     * @return ReasoningContent 思维链内容。用于展示模型思考过程，仅 Hunyuan-T1 系列模型可用。注意：在进行多轮对话时，请不要将此字段拼接到 messages 中。请求 messages 的请求参数中包含 reasoning_content，接口将报错。
                     * 
                     */
                    std::string GetReasoningContent() const;

                    /**
                     * 设置思维链内容。用于展示模型思考过程，仅 Hunyuan-T1 系列模型可用。注意：在进行多轮对话时，请不要将此字段拼接到 messages 中。请求 messages 的请求参数中包含 reasoning_content，接口将报错。
                     * @param _reasoningContent 思维链内容。用于展示模型思考过程，仅 Hunyuan-T1 系列模型可用。注意：在进行多轮对话时，请不要将此字段拼接到 messages 中。请求 messages 的请求参数中包含 reasoning_content，接口将报错。
                     * 
                     */
                    void SetReasoningContent(const std::string& _reasoningContent);

                    /**
                     * 判断参数 ReasoningContent 是否已赋值
                     * @return ReasoningContent 是否已赋值
                     * 
                     */
                    bool ReasoningContentHasBeenSet() const;

                private:

                    /**
                     * 角色名称。
                     */
                    std::string m_role;
                    bool m_roleHasBeenSet;

                    /**
                     * 内容详情。
                     */
                    std::string m_content;
                    bool m_contentHasBeenSet;

                    /**
                     * 模型生成的工具调用，仅 hunyuan-functioncall 模型支持
说明：
对于每一次的输出值应该以Id为标识对Type、Name、Arguments字段进行合并。

注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<ToolCall> m_toolCalls;
                    bool m_toolCallsHasBeenSet;

                    /**
                     * 思维链内容。用于展示模型思考过程，仅 Hunyuan-T1 系列模型可用。注意：在进行多轮对话时，请不要将此字段拼接到 messages 中。请求 messages 的请求参数中包含 reasoning_content，接口将报错。
                     */
                    std::string m_reasoningContent;
                    bool m_reasoningContentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_HUNYUAN_V20230901_MODEL_DELTA_H_
