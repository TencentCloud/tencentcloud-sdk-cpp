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

#ifndef TENCENTCLOUD_HUNYUAN_V20230901_MODEL_MESSAGE_H_
#define TENCENTCLOUD_HUNYUAN_V20230901_MODEL_MESSAGE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/hunyuan/v20230901/model/Content.h>
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
                     * 获取角色，可选值包括 system、user、assistant、 tool。
                     * @return Role 角色，可选值包括 system、user、assistant、 tool。
                     * 
                     */
                    std::string GetRole() const;

                    /**
                     * 设置角色，可选值包括 system、user、assistant、 tool。
                     * @param _role 角色，可选值包括 system、user、assistant、 tool。
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
                     * 获取文本内容
                     * @return Content 文本内容
                     * 
                     */
                    std::string GetContent() const;

                    /**
                     * 设置文本内容
                     * @param _content 文本内容
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
                     * 获取多种类型内容（目前支持图片和文本），仅 hunyuan-vision 和 hunyuan-turbo-vision 模型支持
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Contents 多种类型内容（目前支持图片和文本），仅 hunyuan-vision 和 hunyuan-turbo-vision 模型支持
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<Content> GetContents() const;

                    /**
                     * 设置多种类型内容（目前支持图片和文本），仅 hunyuan-vision 和 hunyuan-turbo-vision 模型支持
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _contents 多种类型内容（目前支持图片和文本），仅 hunyuan-vision 和 hunyuan-turbo-vision 模型支持
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetContents(const std::vector<Content>& _contents);

                    /**
                     * 判断参数 Contents 是否已赋值
                     * @return Contents 是否已赋值
                     * 
                     */
                    bool ContentsHasBeenSet() const;

                    /**
                     * 获取当role为tool时传入，标识具体的函数调用
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ToolCallId 当role为tool时传入，标识具体的函数调用
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetToolCallId() const;

                    /**
                     * 设置当role为tool时传入，标识具体的函数调用
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _toolCallId 当role为tool时传入，标识具体的函数调用
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetToolCallId(const std::string& _toolCallId);

                    /**
                     * 判断参数 ToolCallId 是否已赋值
                     * @return ToolCallId 是否已赋值
                     * 
                     */
                    bool ToolCallIdHasBeenSet() const;

                    /**
                     * 获取模型生成的工具调用，仅 hunyuan-pro 或者 hunyuan-functioncall 模型支持
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ToolCalls 模型生成的工具调用，仅 hunyuan-pro 或者 hunyuan-functioncall 模型支持
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<ToolCall> GetToolCalls() const;

                    /**
                     * 设置模型生成的工具调用，仅 hunyuan-pro 或者 hunyuan-functioncall 模型支持
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _toolCalls 模型生成的工具调用，仅 hunyuan-pro 或者 hunyuan-functioncall 模型支持
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
                     * 获取文件标识符。单次最大 50 个文件。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FileIDs 文件标识符。单次最大 50 个文件。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetFileIDs() const;

                    /**
                     * 设置文件标识符。单次最大 50 个文件。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _fileIDs 文件标识符。单次最大 50 个文件。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFileIDs(const std::vector<std::string>& _fileIDs);

                    /**
                     * 判断参数 FileIDs 是否已赋值
                     * @return FileIDs 是否已赋值
                     * 
                     */
                    bool FileIDsHasBeenSet() const;

                    /**
                     * 获取思维链内容。用于展示模型思考过程，仅 Hunyuan-T1 系列模型可用。注意：在进行多轮对话时，请**不要**将此字段拼接到 messages 中。请求 messages 的请求参数中包含 reasoning_content，接口将报错。
                     * @return ReasoningContent 思维链内容。用于展示模型思考过程，仅 Hunyuan-T1 系列模型可用。注意：在进行多轮对话时，请**不要**将此字段拼接到 messages 中。请求 messages 的请求参数中包含 reasoning_content，接口将报错。
                     * 
                     */
                    std::string GetReasoningContent() const;

                    /**
                     * 设置思维链内容。用于展示模型思考过程，仅 Hunyuan-T1 系列模型可用。注意：在进行多轮对话时，请**不要**将此字段拼接到 messages 中。请求 messages 的请求参数中包含 reasoning_content，接口将报错。
                     * @param _reasoningContent 思维链内容。用于展示模型思考过程，仅 Hunyuan-T1 系列模型可用。注意：在进行多轮对话时，请**不要**将此字段拼接到 messages 中。请求 messages 的请求参数中包含 reasoning_content，接口将报错。
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
                     * 角色，可选值包括 system、user、assistant、 tool。
                     */
                    std::string m_role;
                    bool m_roleHasBeenSet;

                    /**
                     * 文本内容
                     */
                    std::string m_content;
                    bool m_contentHasBeenSet;

                    /**
                     * 多种类型内容（目前支持图片和文本），仅 hunyuan-vision 和 hunyuan-turbo-vision 模型支持
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<Content> m_contents;
                    bool m_contentsHasBeenSet;

                    /**
                     * 当role为tool时传入，标识具体的函数调用
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_toolCallId;
                    bool m_toolCallIdHasBeenSet;

                    /**
                     * 模型生成的工具调用，仅 hunyuan-pro 或者 hunyuan-functioncall 模型支持
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<ToolCall> m_toolCalls;
                    bool m_toolCallsHasBeenSet;

                    /**
                     * 文件标识符。单次最大 50 个文件。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_fileIDs;
                    bool m_fileIDsHasBeenSet;

                    /**
                     * 思维链内容。用于展示模型思考过程，仅 Hunyuan-T1 系列模型可用。注意：在进行多轮对话时，请**不要**将此字段拼接到 messages 中。请求 messages 的请求参数中包含 reasoning_content，接口将报错。
                     */
                    std::string m_reasoningContent;
                    bool m_reasoningContentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_HUNYUAN_V20230901_MODEL_MESSAGE_H_
