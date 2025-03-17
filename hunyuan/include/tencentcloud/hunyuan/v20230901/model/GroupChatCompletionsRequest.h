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

#ifndef TENCENTCLOUD_HUNYUAN_V20230901_MODEL_GROUPCHATCOMPLETIONSREQUEST_H_
#define TENCENTCLOUD_HUNYUAN_V20230901_MODEL_GROUPCHATCOMPLETIONSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/hunyuan/v20230901/model/GroupMessage.h>
#include <tencentcloud/hunyuan/v20230901/model/GroupChatConfig.h>


namespace TencentCloud
{
    namespace Hunyuan
    {
        namespace V20230901
        {
            namespace Model
            {
                /**
                * GroupChatCompletions请求参数结构体
                */
                class GroupChatCompletionsRequest : public AbstractModel
                {
                public:
                    GroupChatCompletionsRequest();
                    ~GroupChatCompletionsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取模型名称，可选值包括 hunyuan-large-role-group。各模型介绍请阅读 [产品概述](https://cloud.tencent.com/document/product/1729/104753) 中的说明。注意：不同的模型计费不同，请根据 [购买指南](https://cloud.tencent.com/document/product/1729/97731) 按需调用。
                     * @return Model 模型名称，可选值包括 hunyuan-large-role-group。各模型介绍请阅读 [产品概述](https://cloud.tencent.com/document/product/1729/104753) 中的说明。注意：不同的模型计费不同，请根据 [购买指南](https://cloud.tencent.com/document/product/1729/97731) 按需调用。
                     * 
                     */
                    std::string GetModel() const;

                    /**
                     * 设置模型名称，可选值包括 hunyuan-large-role-group。各模型介绍请阅读 [产品概述](https://cloud.tencent.com/document/product/1729/104753) 中的说明。注意：不同的模型计费不同，请根据 [购买指南](https://cloud.tencent.com/document/product/1729/97731) 按需调用。
                     * @param _model 模型名称，可选值包括 hunyuan-large-role-group。各模型介绍请阅读 [产品概述](https://cloud.tencent.com/document/product/1729/104753) 中的说明。注意：不同的模型计费不同，请根据 [购买指南](https://cloud.tencent.com/document/product/1729/97731) 按需调用。
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
                     * 获取聊天上下文信息。
                     * @return Messages 聊天上下文信息。
                     * 
                     */
                    std::vector<GroupMessage> GetMessages() const;

                    /**
                     * 设置聊天上下文信息。
                     * @param _messages 聊天上下文信息。
                     * 
                     */
                    void SetMessages(const std::vector<GroupMessage>& _messages);

                    /**
                     * 判断参数 Messages 是否已赋值
                     * @return Messages 是否已赋值
                     * 
                     */
                    bool MessagesHasBeenSet() const;

                    /**
                     * 获取流式调用开关。
说明：
1. 未传值时默认为非流式调用（false）。
2. 流式调用时以 SSE 协议增量返回结果（返回值取 Choices[n].Delta 中的值，需要拼接增量数据才能获得完整结果）。
3. 非流式调用时：
调用方式与普通 HTTP 请求无异。
接口响应耗时较长，**如需更低时延建议设置为 true**。
只返回一次最终结果（返回值取 Choices[n].Message 中的值）。

注意：
通过 SDK 调用时，流式和非流式调用需用**不同的方式**获取返回值，具体参考 SDK 中的注释或示例（在各语言 SDK 代码仓库的 examples/hunyuan/v20230901/ 目录中）。
                     * @return Stream 流式调用开关。
说明：
1. 未传值时默认为非流式调用（false）。
2. 流式调用时以 SSE 协议增量返回结果（返回值取 Choices[n].Delta 中的值，需要拼接增量数据才能获得完整结果）。
3. 非流式调用时：
调用方式与普通 HTTP 请求无异。
接口响应耗时较长，**如需更低时延建议设置为 true**。
只返回一次最终结果（返回值取 Choices[n].Message 中的值）。

注意：
通过 SDK 调用时，流式和非流式调用需用**不同的方式**获取返回值，具体参考 SDK 中的注释或示例（在各语言 SDK 代码仓库的 examples/hunyuan/v20230901/ 目录中）。
                     * 
                     */
                    bool GetStream() const;

                    /**
                     * 设置流式调用开关。
说明：
1. 未传值时默认为非流式调用（false）。
2. 流式调用时以 SSE 协议增量返回结果（返回值取 Choices[n].Delta 中的值，需要拼接增量数据才能获得完整结果）。
3. 非流式调用时：
调用方式与普通 HTTP 请求无异。
接口响应耗时较长，**如需更低时延建议设置为 true**。
只返回一次最终结果（返回值取 Choices[n].Message 中的值）。

注意：
通过 SDK 调用时，流式和非流式调用需用**不同的方式**获取返回值，具体参考 SDK 中的注释或示例（在各语言 SDK 代码仓库的 examples/hunyuan/v20230901/ 目录中）。
                     * @param _stream 流式调用开关。
说明：
1. 未传值时默认为非流式调用（false）。
2. 流式调用时以 SSE 协议增量返回结果（返回值取 Choices[n].Delta 中的值，需要拼接增量数据才能获得完整结果）。
3. 非流式调用时：
调用方式与普通 HTTP 请求无异。
接口响应耗时较长，**如需更低时延建议设置为 true**。
只返回一次最终结果（返回值取 Choices[n].Message 中的值）。

注意：
通过 SDK 调用时，流式和非流式调用需用**不同的方式**获取返回值，具体参考 SDK 中的注释或示例（在各语言 SDK 代码仓库的 examples/hunyuan/v20230901/ 目录中）。
                     * 
                     */
                    void SetStream(const bool& _stream);

                    /**
                     * 判断参数 Stream 是否已赋值
                     * @return Stream 是否已赋值
                     * 
                     */
                    bool StreamHasBeenSet() const;

                    /**
                     * 获取目标人物名称
                     * @return TargetCharacterName 目标人物名称
                     * 
                     */
                    std::string GetTargetCharacterName() const;

                    /**
                     * 设置目标人物名称
                     * @param _targetCharacterName 目标人物名称
                     * 
                     */
                    void SetTargetCharacterName(const std::string& _targetCharacterName);

                    /**
                     * 判断参数 TargetCharacterName 是否已赋值
                     * @return TargetCharacterName 是否已赋值
                     * 
                     */
                    bool TargetCharacterNameHasBeenSet() const;

                    /**
                     * 获取角色描述
                     * @return GroupChatConfig 角色描述
                     * 
                     */
                    GroupChatConfig GetGroupChatConfig() const;

                    /**
                     * 设置角色描述
                     * @param _groupChatConfig 角色描述
                     * 
                     */
                    void SetGroupChatConfig(const GroupChatConfig& _groupChatConfig);

                    /**
                     * 判断参数 GroupChatConfig 是否已赋值
                     * @return GroupChatConfig 是否已赋值
                     * 
                     */
                    bool GroupChatConfigHasBeenSet() const;

                    /**
                     * 获取用户ID
                     * @return UserId 用户ID
                     * 
                     */
                    std::string GetUserId() const;

                    /**
                     * 设置用户ID
                     * @param _userId 用户ID
                     * 
                     */
                    void SetUserId(const std::string& _userId);

                    /**
                     * 判断参数 UserId 是否已赋值
                     * @return UserId 是否已赋值
                     * 
                     */
                    bool UserIdHasBeenSet() const;

                    /**
                     * 获取对话接口
                     * @return SessionId 对话接口
                     * 
                     */
                    std::string GetSessionId() const;

                    /**
                     * 设置对话接口
                     * @param _sessionId 对话接口
                     * 
                     */
                    void SetSessionId(const std::string& _sessionId);

                    /**
                     * 判断参数 SessionId 是否已赋值
                     * @return SessionId 是否已赋值
                     * 
                     */
                    bool SessionIdHasBeenSet() const;

                private:

                    /**
                     * 模型名称，可选值包括 hunyuan-large-role-group。各模型介绍请阅读 [产品概述](https://cloud.tencent.com/document/product/1729/104753) 中的说明。注意：不同的模型计费不同，请根据 [购买指南](https://cloud.tencent.com/document/product/1729/97731) 按需调用。
                     */
                    std::string m_model;
                    bool m_modelHasBeenSet;

                    /**
                     * 聊天上下文信息。
                     */
                    std::vector<GroupMessage> m_messages;
                    bool m_messagesHasBeenSet;

                    /**
                     * 流式调用开关。
说明：
1. 未传值时默认为非流式调用（false）。
2. 流式调用时以 SSE 协议增量返回结果（返回值取 Choices[n].Delta 中的值，需要拼接增量数据才能获得完整结果）。
3. 非流式调用时：
调用方式与普通 HTTP 请求无异。
接口响应耗时较长，**如需更低时延建议设置为 true**。
只返回一次最终结果（返回值取 Choices[n].Message 中的值）。

注意：
通过 SDK 调用时，流式和非流式调用需用**不同的方式**获取返回值，具体参考 SDK 中的注释或示例（在各语言 SDK 代码仓库的 examples/hunyuan/v20230901/ 目录中）。
                     */
                    bool m_stream;
                    bool m_streamHasBeenSet;

                    /**
                     * 目标人物名称
                     */
                    std::string m_targetCharacterName;
                    bool m_targetCharacterNameHasBeenSet;

                    /**
                     * 角色描述
                     */
                    GroupChatConfig m_groupChatConfig;
                    bool m_groupChatConfigHasBeenSet;

                    /**
                     * 用户ID
                     */
                    std::string m_userId;
                    bool m_userIdHasBeenSet;

                    /**
                     * 对话接口
                     */
                    std::string m_sessionId;
                    bool m_sessionIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_HUNYUAN_V20230901_MODEL_GROUPCHATCOMPLETIONSREQUEST_H_
