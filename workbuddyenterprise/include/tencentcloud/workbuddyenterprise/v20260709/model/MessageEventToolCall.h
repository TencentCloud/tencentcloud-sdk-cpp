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

#ifndef TENCENTCLOUD_WORKBUDDYENTERPRISE_V20260709_MODEL_MESSAGEEVENTTOOLCALL_H_
#define TENCENTCLOUD_WORKBUDDYENTERPRISE_V20260709_MODEL_MESSAGEEVENTTOOLCALL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Workbuddyenterprise
    {
        namespace V20260709
        {
            namespace Model
            {
                /**
                * 工具调用
                */
                class MessageEventToolCall : public AbstractModel
                {
                public:
                    MessageEventToolCall();
                    ~MessageEventToolCall() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>调用ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ToolCallId <p>调用ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetToolCallId() const;

                    /**
                     * 设置<p>调用ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _toolCallId <p>调用ID</p>
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
                     * 获取<p>工具名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ToolName <p>工具名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetToolName() const;

                    /**
                     * 设置<p>工具名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _toolName <p>工具名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetToolName(const std::string& _toolName);

                    /**
                     * 判断参数 ToolName 是否已赋值
                     * @return ToolName 是否已赋值
                     * 
                     */
                    bool ToolNameHasBeenSet() const;

                    /**
                     * 获取<p>状态 PENDING/IN_PROGRESS/SUCCEEDED/FAILED</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Status <p>状态 PENDING/IN_PROGRESS/SUCCEEDED/FAILED</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>状态 PENDING/IN_PROGRESS/SUCCEEDED/FAILED</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _status <p>状态 PENDING/IN_PROGRESS/SUCCEEDED/FAILED</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取<p>工具调用Input（已递归脱敏，JSON 字符串）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Input <p>工具调用Input（已递归脱敏，JSON 字符串）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetInput() const;

                    /**
                     * 设置<p>工具调用Input（已递归脱敏，JSON 字符串）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _input <p>工具调用Input（已递归脱敏，JSON 字符串）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetInput(const std::string& _input);

                    /**
                     * 判断参数 Input 是否已赋值
                     * @return Input 是否已赋值
                     * 
                     */
                    bool InputHasBeenSet() const;

                    /**
                     * 获取<p>工具调用Output（已递归脱敏，JSON 字符串）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Output <p>工具调用Output（已递归脱敏，JSON 字符串）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetOutput() const;

                    /**
                     * 设置<p>工具调用Output（已递归脱敏，JSON 字符串）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _output <p>工具调用Output（已递归脱敏，JSON 字符串）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOutput(const std::string& _output);

                    /**
                     * 判断参数 Output 是否已赋值
                     * @return Output 是否已赋值
                     * 
                     */
                    bool OutputHasBeenSet() const;

                    /**
                     * 获取<p>结束时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EndedAt <p>结束时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetEndedAt() const;

                    /**
                     * 设置<p>结束时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _endedAt <p>结束时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetEndedAt(const std::string& _endedAt);

                    /**
                     * 判断参数 EndedAt 是否已赋值
                     * @return EndedAt 是否已赋值
                     * 
                     */
                    bool EndedAtHasBeenSet() const;

                    /**
                     * 获取<p>耗时毫秒</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DurationMs <p>耗时毫秒</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetDurationMs() const;

                    /**
                     * 设置<p>耗时毫秒</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _durationMs <p>耗时毫秒</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDurationMs(const int64_t& _durationMs);

                    /**
                     * 判断参数 DurationMs 是否已赋值
                     * @return DurationMs 是否已赋值
                     * 
                     */
                    bool DurationMsHasBeenSet() const;

                    /**
                     * 获取<p>调用开始时间（RFC3339 格式）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StartedAt <p>调用开始时间（RFC3339 格式）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetStartedAt() const;

                    /**
                     * 设置<p>调用开始时间（RFC3339 格式）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _startedAt <p>调用开始时间（RFC3339 格式）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStartedAt(const std::string& _startedAt);

                    /**
                     * 判断参数 StartedAt 是否已赋值
                     * @return StartedAt 是否已赋值
                     * 
                     */
                    bool StartedAtHasBeenSet() const;

                    /**
                     * 获取本次调用对应的业务专家 ID。
                     * @return ExpertId 本次调用对应的业务专家 ID。
                     * 
                     */
                    std::string GetExpertId() const;

                    /**
                     * 设置本次调用对应的业务专家 ID。
                     * @param _expertId 本次调用对应的业务专家 ID。
                     * 
                     */
                    void SetExpertId(const std::string& _expertId);

                    /**
                     * 判断参数 ExpertId 是否已赋值
                     * @return ExpertId 是否已赋值
                     * 
                     */
                    bool ExpertIdHasBeenSet() const;

                    /**
                     * 获取本次调用对应的专家名称。
                     * @return ExpertName 本次调用对应的专家名称。
                     * 
                     */
                    std::string GetExpertName() const;

                    /**
                     * 设置本次调用对应的专家名称。
                     * @param _expertName 本次调用对应的专家名称。
                     * 
                     */
                    void SetExpertName(const std::string& _expertName);

                    /**
                     * 判断参数 ExpertName 是否已赋值
                     * @return ExpertName 是否已赋值
                     * 
                     */
                    bool ExpertNameHasBeenSet() const;

                    /**
                     * 获取执行时解析到的专家资源版本。
                     * @return ExpertVersion 执行时解析到的专家资源版本。
                     * 
                     */
                    std::string GetExpertVersion() const;

                    /**
                     * 设置执行时解析到的专家资源版本。
                     * @param _expertVersion 执行时解析到的专家资源版本。
                     * 
                     */
                    void SetExpertVersion(const std::string& _expertVersion);

                    /**
                     * 判断参数 ExpertVersion 是否已赋值
                     * @return ExpertVersion 是否已赋值
                     * 
                     */
                    bool ExpertVersionHasBeenSet() const;

                    /**
                     * 获取CBC 子代理执行实例 ID，可用于查询该次专家调用的消息事件。
                     * @return SubAgentId CBC 子代理执行实例 ID，可用于查询该次专家调用的消息事件。
                     * 
                     */
                    std::string GetSubAgentId() const;

                    /**
                     * 设置CBC 子代理执行实例 ID，可用于查询该次专家调用的消息事件。
                     * @param _subAgentId CBC 子代理执行实例 ID，可用于查询该次专家调用的消息事件。
                     * 
                     */
                    void SetSubAgentId(const std::string& _subAgentId);

                    /**
                     * 判断参数 SubAgentId 是否已赋值
                     * @return SubAgentId 是否已赋值
                     * 
                     */
                    bool SubAgentIdHasBeenSet() const;

                    /**
                     * 获取CBC 子代理定义名称。
                     * @return SubAgentName CBC 子代理定义名称。
                     * 
                     */
                    std::string GetSubAgentName() const;

                    /**
                     * 设置CBC 子代理定义名称。
                     * @param _subAgentName CBC 子代理定义名称。
                     * 
                     */
                    void SetSubAgentName(const std::string& _subAgentName);

                    /**
                     * 判断参数 SubAgentName 是否已赋值
                     * @return SubAgentName 是否已赋值
                     * 
                     */
                    bool SubAgentNameHasBeenSet() const;

                    /**
                     * 获取父会话中触发本次子代理执行的工具调用 ID。
                     * @return ParentToolCallId 父会话中触发本次子代理执行的工具调用 ID。
                     * 
                     */
                    std::string GetParentToolCallId() const;

                    /**
                     * 设置父会话中触发本次子代理执行的工具调用 ID。
                     * @param _parentToolCallId 父会话中触发本次子代理执行的工具调用 ID。
                     * 
                     */
                    void SetParentToolCallId(const std::string& _parentToolCallId);

                    /**
                     * 判断参数 ParentToolCallId 是否已赋值
                     * @return ParentToolCallId 是否已赋值
                     * 
                     */
                    bool ParentToolCallIdHasBeenSet() const;

                private:

                    /**
                     * <p>调用ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_toolCallId;
                    bool m_toolCallIdHasBeenSet;

                    /**
                     * <p>工具名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_toolName;
                    bool m_toolNameHasBeenSet;

                    /**
                     * <p>状态 PENDING/IN_PROGRESS/SUCCEEDED/FAILED</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>工具调用Input（已递归脱敏，JSON 字符串）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_input;
                    bool m_inputHasBeenSet;

                    /**
                     * <p>工具调用Output（已递归脱敏，JSON 字符串）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_output;
                    bool m_outputHasBeenSet;

                    /**
                     * <p>结束时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_endedAt;
                    bool m_endedAtHasBeenSet;

                    /**
                     * <p>耗时毫秒</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_durationMs;
                    bool m_durationMsHasBeenSet;

                    /**
                     * <p>调用开始时间（RFC3339 格式）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_startedAt;
                    bool m_startedAtHasBeenSet;

                    /**
                     * 本次调用对应的业务专家 ID。
                     */
                    std::string m_expertId;
                    bool m_expertIdHasBeenSet;

                    /**
                     * 本次调用对应的专家名称。
                     */
                    std::string m_expertName;
                    bool m_expertNameHasBeenSet;

                    /**
                     * 执行时解析到的专家资源版本。
                     */
                    std::string m_expertVersion;
                    bool m_expertVersionHasBeenSet;

                    /**
                     * CBC 子代理执行实例 ID，可用于查询该次专家调用的消息事件。
                     */
                    std::string m_subAgentId;
                    bool m_subAgentIdHasBeenSet;

                    /**
                     * CBC 子代理定义名称。
                     */
                    std::string m_subAgentName;
                    bool m_subAgentNameHasBeenSet;

                    /**
                     * 父会话中触发本次子代理执行的工具调用 ID。
                     */
                    std::string m_parentToolCallId;
                    bool m_parentToolCallIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WORKBUDDYENTERPRISE_V20260709_MODEL_MESSAGEEVENTTOOLCALL_H_
