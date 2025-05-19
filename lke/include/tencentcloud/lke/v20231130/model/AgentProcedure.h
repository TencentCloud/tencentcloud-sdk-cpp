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

#ifndef TENCENTCLOUD_LKE_V20231130_MODEL_AGENTPROCEDURE_H_
#define TENCENTCLOUD_LKE_V20231130_MODEL_AGENTPROCEDURE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/lke/v20231130/model/AgentProcedureDebugging.h>


namespace TencentCloud
{
    namespace Lke
    {
        namespace V20231130
        {
            namespace Model
            {
                /**
                * 思考事件过程信息
                */
                class AgentProcedure : public AbstractModel
                {
                public:
                    AgentProcedure();
                    ~AgentProcedure() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取索引
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Index 索引
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetIndex() const;

                    /**
                     * 设置索引
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _index 索引
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIndex(const uint64_t& _index);

                    /**
                     * 判断参数 Index 是否已赋值
                     * @return Index 是否已赋值
                     * 
                     */
                    bool IndexHasBeenSet() const;

                    /**
                     * 获取执行过程英语名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Name 执行过程英语名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置执行过程英语名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _name 执行过程英语名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取中文名, 用于展示
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Title 中文名, 用于展示
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTitle() const;

                    /**
                     * 设置中文名, 用于展示
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _title 中文名, 用于展示
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTitle(const std::string& _title);

                    /**
                     * 判断参数 Title 是否已赋值
                     * @return Title 是否已赋值
                     * 
                     */
                    bool TitleHasBeenSet() const;

                    /**
                     * 获取状态常量: 使用中: processing, 成功: success, 失败: failed
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Status 状态常量: 使用中: processing, 成功: success, 失败: failed
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置状态常量: 使用中: processing, 成功: success, 失败: failed
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _status 状态常量: 使用中: processing, 成功: success, 失败: failed
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
                     * 获取图标
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Icon 图标
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetIcon() const;

                    /**
                     * 设置图标
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _icon 图标
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIcon(const std::string& _icon);

                    /**
                     * 判断参数 Icon 是否已赋值
                     * @return Icon 是否已赋值
                     * 
                     */
                    bool IconHasBeenSet() const;

                    /**
                     * 获取Agent调试信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Debugging Agent调试信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    AgentProcedureDebugging GetDebugging() const;

                    /**
                     * 设置Agent调试信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _debugging Agent调试信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDebugging(const AgentProcedureDebugging& _debugging);

                    /**
                     * 判断参数 Debugging 是否已赋值
                     * @return Debugging 是否已赋值
                     * 
                     */
                    bool DebuggingHasBeenSet() const;

                    /**
                     * 获取是否切换Agent，取值为"main"或者"workflow",不切换为空
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Switch 是否切换Agent，取值为"main"或者"workflow",不切换为空
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSwitch() const;

                    /**
                     * 设置是否切换Agent，取值为"main"或者"workflow",不切换为空
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _switch 是否切换Agent，取值为"main"或者"workflow",不切换为空
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSwitch(const std::string& _switch);

                    /**
                     * 判断参数 Switch 是否已赋值
                     * @return Switch 是否已赋值
                     * 
                     */
                    bool SwitchHasBeenSet() const;

                    /**
                     * 获取工作流名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return WorkflowName 工作流名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetWorkflowName() const;

                    /**
                     * 设置工作流名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _workflowName 工作流名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetWorkflowName(const std::string& _workflowName);

                    /**
                     * 判断参数 WorkflowName 是否已赋值
                     * @return WorkflowName 是否已赋值
                     * 
                     */
                    bool WorkflowNameHasBeenSet() const;

                    /**
                     * 获取当前请求执行时间, 单位 ms
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Elapsed 当前请求执行时间, 单位 ms
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetElapsed() const;

                    /**
                     * 设置当前请求执行时间, 单位 ms
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _elapsed 当前请求执行时间, 单位 ms
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetElapsed(const uint64_t& _elapsed);

                    /**
                     * 判断参数 Elapsed 是否已赋值
                     * @return Elapsed 是否已赋值
                     * 
                     */
                    bool ElapsedHasBeenSet() const;

                    /**
                     * 获取工作流节点名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NodeName 工作流节点名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetNodeName() const;

                    /**
                     * 设置工作流节点名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _nodeName 工作流节点名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetNodeName(const std::string& _nodeName);

                    /**
                     * 判断参数 NodeName 是否已赋值
                     * @return NodeName 是否已赋值
                     * 
                     */
                    bool NodeNameHasBeenSet() const;

                    /**
                     * 获取用于展示思考放在哪个回复气泡中
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ReplyIndex 用于展示思考放在哪个回复气泡中
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetReplyIndex() const;

                    /**
                     * 设置用于展示思考放在哪个回复气泡中
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _replyIndex 用于展示思考放在哪个回复气泡中
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetReplyIndex(const uint64_t& _replyIndex);

                    /**
                     * 判断参数 ReplyIndex 是否已赋值
                     * @return ReplyIndex 是否已赋值
                     * 
                     */
                    bool ReplyIndexHasBeenSet() const;

                    /**
                     * 获取主agent
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SourceAgentName 主agent
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSourceAgentName() const;

                    /**
                     * 设置主agent
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _sourceAgentName 主agent
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSourceAgentName(const std::string& _sourceAgentName);

                    /**
                     * 判断参数 SourceAgentName 是否已赋值
                     * @return SourceAgentName 是否已赋值
                     * 
                     */
                    bool SourceAgentNameHasBeenSet() const;

                    /**
                     * 获取挂号agent
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TargetAgentName 挂号agent
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTargetAgentName() const;

                    /**
                     * 设置挂号agent
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _targetAgentName 挂号agent
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTargetAgentName(const std::string& _targetAgentName);

                    /**
                     * 判断参数 TargetAgentName 是否已赋值
                     * @return TargetAgentName 是否已赋值
                     * 
                     */
                    bool TargetAgentNameHasBeenSet() const;

                    /**
                     * 获取Agent的图标
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AgentIcon Agent的图标
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAgentIcon() const;

                    /**
                     * 设置Agent的图标
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _agentIcon Agent的图标
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAgentIcon(const std::string& _agentIcon);

                    /**
                     * 判断参数 AgentIcon 是否已赋值
                     * @return AgentIcon 是否已赋值
                     * 
                     */
                    bool AgentIconHasBeenSet() const;

                private:

                    /**
                     * 索引
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_index;
                    bool m_indexHasBeenSet;

                    /**
                     * 执行过程英语名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 中文名, 用于展示
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_title;
                    bool m_titleHasBeenSet;

                    /**
                     * 状态常量: 使用中: processing, 成功: success, 失败: failed
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 图标
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_icon;
                    bool m_iconHasBeenSet;

                    /**
                     * Agent调试信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    AgentProcedureDebugging m_debugging;
                    bool m_debuggingHasBeenSet;

                    /**
                     * 是否切换Agent，取值为"main"或者"workflow",不切换为空
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_switch;
                    bool m_switchHasBeenSet;

                    /**
                     * 工作流名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_workflowName;
                    bool m_workflowNameHasBeenSet;

                    /**
                     * 当前请求执行时间, 单位 ms
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_elapsed;
                    bool m_elapsedHasBeenSet;

                    /**
                     * 工作流节点名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_nodeName;
                    bool m_nodeNameHasBeenSet;

                    /**
                     * 用于展示思考放在哪个回复气泡中
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_replyIndex;
                    bool m_replyIndexHasBeenSet;

                    /**
                     * 主agent
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_sourceAgentName;
                    bool m_sourceAgentNameHasBeenSet;

                    /**
                     * 挂号agent
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_targetAgentName;
                    bool m_targetAgentNameHasBeenSet;

                    /**
                     * Agent的图标
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_agentIcon;
                    bool m_agentIconHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_AGENTPROCEDURE_H_
