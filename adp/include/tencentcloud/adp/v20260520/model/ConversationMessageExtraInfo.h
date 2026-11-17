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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_CONVERSATIONMESSAGEEXTRAINFO_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_CONVERSATIONMESSAGEEXTRAINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * MessageExtraInfo 消息扩展信息
                */
                class ConversationMessageExtraInfo : public AbstractModel
                {
                public:
                    ConversationMessageExtraInfo();
                    ~ConversationMessageExtraInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>智能体图标</p>
                     * @return AgentIcon <p>智能体图标</p>
                     * 
                     */
                    std::string GetAgentIcon() const;

                    /**
                     * 设置<p>智能体图标</p>
                     * @param _agentIcon <p>智能体图标</p>
                     * 
                     */
                    void SetAgentIcon(const std::string& _agentIcon);

                    /**
                     * 判断参数 AgentIcon 是否已赋值
                     * @return AgentIcon 是否已赋值
                     * 
                     */
                    bool AgentIconHasBeenSet() const;

                    /**
                     * 获取<p>智能体名称</p>
                     * @return AgentName <p>智能体名称</p>
                     * 
                     */
                    std::string GetAgentName() const;

                    /**
                     * 设置<p>智能体名称</p>
                     * @param _agentName <p>智能体名称</p>
                     * 
                     */
                    void SetAgentName(const std::string& _agentName);

                    /**
                     * 判断参数 AgentName 是否已赋值
                     * @return AgentName 是否已赋值
                     * 
                     */
                    bool AgentNameHasBeenSet() const;

                    /**
                     * 获取<p>消息处理耗时</p>
                     * @return Elapsed <p>消息处理耗时</p>
                     * 
                     */
                    std::string GetElapsed() const;

                    /**
                     * 设置<p>消息处理耗时</p>
                     * @param _elapsed <p>消息处理耗时</p>
                     * 
                     */
                    void SetElapsed(const std::string& _elapsed);

                    /**
                     * 判断参数 Elapsed 是否已赋值
                     * @return Elapsed 是否已赋值
                     * 
                     */
                    bool ElapsedHasBeenSet() const;

                    /**
                     * 获取<p>父消息 ID</p>
                     * @return ParentMessageId <p>父消息 ID</p>
                     * 
                     */
                    std::string GetParentMessageId() const;

                    /**
                     * 设置<p>父消息 ID</p>
                     * @param _parentMessageId <p>父消息 ID</p>
                     * 
                     */
                    void SetParentMessageId(const std::string& _parentMessageId);

                    /**
                     * 判断参数 ParentMessageId 是否已赋值
                     * @return ParentMessageId 是否已赋值
                     * 
                     */
                    bool ParentMessageIdHasBeenSet() const;

                    /**
                     * 获取<p>关联记录 ID</p>
                     * @return RelatedRecordId <p>关联记录 ID</p>
                     * 
                     */
                    std::string GetRelatedRecordId() const;

                    /**
                     * 设置<p>关联记录 ID</p>
                     * @param _relatedRecordId <p>关联记录 ID</p>
                     * 
                     */
                    void SetRelatedRecordId(const std::string& _relatedRecordId);

                    /**
                     * 判断参数 RelatedRecordId 是否已赋值
                     * @return RelatedRecordId 是否已赋值
                     * 
                     */
                    bool RelatedRecordIdHasBeenSet() const;

                    /**
                     * 获取<p>消息处理开始时间戳（毫秒）</p>
                     * @return StartTime <p>消息处理开始时间戳（毫秒）</p>
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置<p>消息处理开始时间戳（毫秒）</p>
                     * @param _startTime <p>消息处理开始时间戳（毫秒）</p>
                     * 
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取<p>工具图标</p>
                     * @return ToolIcon <p>工具图标</p>
                     * 
                     */
                    std::string GetToolIcon() const;

                    /**
                     * 设置<p>工具图标</p>
                     * @param _toolIcon <p>工具图标</p>
                     * 
                     */
                    void SetToolIcon(const std::string& _toolIcon);

                    /**
                     * 判断参数 ToolIcon 是否已赋值
                     * @return ToolIcon 是否已赋值
                     * 
                     */
                    bool ToolIconHasBeenSet() const;

                    /**
                     * 获取<p>工具名称</p>
                     * @return ToolName <p>工具名称</p>
                     * 
                     */
                    std::string GetToolName() const;

                    /**
                     * 设置<p>工具名称</p>
                     * @param _toolName <p>工具名称</p>
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
                     * 获取<p>Trace ID</p>
                     * @return TraceId <p>Trace ID</p>
                     * 
                     */
                    std::string GetTraceId() const;

                    /**
                     * 设置<p>Trace ID</p>
                     * @param _traceId <p>Trace ID</p>
                     * 
                     */
                    void SetTraceId(const std::string& _traceId);

                    /**
                     * 判断参数 TraceId 是否已赋值
                     * @return TraceId 是否已赋值
                     * 
                     */
                    bool TraceIdHasBeenSet() const;

                    /**
                     * 获取<p>是否可以反馈</p>
                     * @return CanFeedback <p>是否可以反馈</p>
                     * 
                     */
                    bool GetCanFeedback() const;

                    /**
                     * 设置<p>是否可以反馈</p>
                     * @param _canFeedback <p>是否可以反馈</p>
                     * 
                     */
                    void SetCanFeedback(const bool& _canFeedback);

                    /**
                     * 判断参数 CanFeedback 是否已赋值
                     * @return CanFeedback 是否已赋值
                     * 
                     */
                    bool CanFeedbackHasBeenSet() const;

                    /**
                     * 获取<p>是否可以点赞点踩</p>
                     * @return CanRate <p>是否可以点赞点踩</p>
                     * 
                     */
                    bool GetCanRate() const;

                    /**
                     * 设置<p>是否可以点赞点踩</p>
                     * @param _canRate <p>是否可以点赞点踩</p>
                     * 
                     */
                    void SetCanRate(const bool& _canRate);

                    /**
                     * 判断参数 CanRate 是否已赋值
                     * @return CanRate 是否已赋值
                     * 
                     */
                    bool CanRateHasBeenSet() const;

                    /**
                     * 获取<p>消息处理开始时间戳（毫秒）</p>
                     * @return EndTime <p>消息处理开始时间戳（毫秒）</p>
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置<p>消息处理开始时间戳（毫秒）</p>
                     * @param _endTime <p>消息处理开始时间戳（毫秒）</p>
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取<p>是否已读</p>
                     * @return HasRead <p>是否已读</p>
                     * 
                     */
                    bool GetHasRead() const;

                    /**
                     * 设置<p>是否已读</p>
                     * @param _hasRead <p>是否已读</p>
                     * 
                     */
                    void SetHasRead(const bool& _hasRead);

                    /**
                     * 判断参数 HasRead 是否已赋值
                     * @return HasRead 是否已赋值
                     * 
                     */
                    bool HasReadHasBeenSet() const;

                    /**
                     * 获取<p>是否大模型生成</p>
                     * @return IsModelGenerated <p>是否大模型生成</p>
                     * 
                     */
                    bool GetIsModelGenerated() const;

                    /**
                     * 设置<p>是否大模型生成</p>
                     * @param _isModelGenerated <p>是否大模型生成</p>
                     * 
                     */
                    void SetIsModelGenerated(const bool& _isModelGenerated);

                    /**
                     * 判断参数 IsModelGenerated 是否已赋值
                     * @return IsModelGenerated 是否已赋值
                     * 
                     */
                    bool IsModelGeneratedHasBeenSet() const;

                    /**
                     * 获取<p>用户反馈标签列表</p>
                     * @return ReasonList <p>用户反馈标签列表</p>
                     * 
                     */
                    std::vector<std::string> GetReasonList() const;

                    /**
                     * 设置<p>用户反馈标签列表</p>
                     * @param _reasonList <p>用户反馈标签列表</p>
                     * 
                     */
                    void SetReasonList(const std::vector<std::string>& _reasonList);

                    /**
                     * 判断参数 ReasonList 是否已赋值
                     * @return ReasonList 是否已赋值
                     * 
                     */
                    bool ReasonListHasBeenSet() const;

                    /**
                     * 获取<p>回复方式</p>
                     * @return ReplyMethod <p>回复方式</p>
                     * 
                     */
                    int64_t GetReplyMethod() const;

                    /**
                     * 设置<p>回复方式</p>
                     * @param _replyMethod <p>回复方式</p>
                     * 
                     */
                    void SetReplyMethod(const int64_t& _replyMethod);

                    /**
                     * 判断参数 ReplyMethod 是否已赋值
                     * @return ReplyMethod 是否已赋值
                     * 
                     */
                    bool ReplyMethodHasBeenSet() const;

                    /**
                     * 获取<p>用户打分</p>
                     * @return Score <p>用户打分</p>
                     * 
                     */
                    int64_t GetScore() const;

                    /**
                     * 设置<p>用户打分</p>
                     * @param _score <p>用户打分</p>
                     * 
                     */
                    void SetScore(const int64_t& _score);

                    /**
                     * 判断参数 Score 是否已赋值
                     * @return Score 是否已赋值
                     * 
                     */
                    bool ScoreHasBeenSet() const;

                    /**
                     * 获取<p>子 Agent 运行 Id</p>
                     * @return SubAgentRunId <p>子 Agent 运行 Id</p>
                     * 
                     */
                    std::string GetSubAgentRunId() const;

                    /**
                     * 设置<p>子 Agent 运行 Id</p>
                     * @param _subAgentRunId <p>子 Agent 运行 Id</p>
                     * 
                     */
                    void SetSubAgentRunId(const std::string& _subAgentRunId);

                    /**
                     * 判断参数 SubAgentRunId 是否已赋值
                     * @return SubAgentRunId 是否已赋值
                     * 
                     */
                    bool SubAgentRunIdHasBeenSet() const;

                    /**
                     * 获取<p>是否是子 Agent 的消息</p>
                     * @return IsSubAgent <p>是否是子 Agent 的消息</p>
                     * 
                     */
                    bool GetIsSubAgent() const;

                    /**
                     * 设置<p>是否是子 Agent 的消息</p>
                     * @param _isSubAgent <p>是否是子 Agent 的消息</p>
                     * 
                     */
                    void SetIsSubAgent(const bool& _isSubAgent);

                    /**
                     * 判断参数 IsSubAgent 是否已赋值
                     * @return IsSubAgent 是否已赋值
                     * 
                     */
                    bool IsSubAgentHasBeenSet() const;

                    /**
                     * 获取<p>子 Agent 线程 ID</p>
                     * @return SubAgentThreadId <p>子 Agent 线程 ID</p>
                     * 
                     */
                    std::string GetSubAgentThreadId() const;

                    /**
                     * 设置<p>子 Agent 线程 ID</p>
                     * @param _subAgentThreadId <p>子 Agent 线程 ID</p>
                     * 
                     */
                    void SetSubAgentThreadId(const std::string& _subAgentThreadId);

                    /**
                     * 判断参数 SubAgentThreadId 是否已赋值
                     * @return SubAgentThreadId 是否已赋值
                     * 
                     */
                    bool SubAgentThreadIdHasBeenSet() const;

                    /**
                     * 获取<p>是否是 Agent Team 模式下的 teammate 成员</p>
                     * @return IsTeammate <p>是否是 Agent Team 模式下的 teammate 成员</p>
                     * 
                     */
                    bool GetIsTeammate() const;

                    /**
                     * 设置<p>是否是 Agent Team 模式下的 teammate 成员</p>
                     * @param _isTeammate <p>是否是 Agent Team 模式下的 teammate 成员</p>
                     * 
                     */
                    void SetIsTeammate(const bool& _isTeammate);

                    /**
                     * 判断参数 IsTeammate 是否已赋值
                     * @return IsTeammate 是否已赋值
                     * 
                     */
                    bool IsTeammateHasBeenSet() const;

                    /**
                     * 获取<p>Agent Team 模式下的 teammate 名称</p>
                     * @return TeammateName <p>Agent Team 模式下的 teammate 名称</p>
                     * 
                     */
                    std::string GetTeammateName() const;

                    /**
                     * 设置<p>Agent Team 模式下的 teammate 名称</p>
                     * @param _teammateName <p>Agent Team 模式下的 teammate 名称</p>
                     * 
                     */
                    void SetTeammateName(const std::string& _teammateName);

                    /**
                     * 判断参数 TeammateName 是否已赋值
                     * @return TeammateName 是否已赋值
                     * 
                     */
                    bool TeammateNameHasBeenSet() const;

                    /**
                     * 获取<p>工作流节点名称</p>
                     * @return WorkflowNodeName <p>工作流节点名称</p>
                     * 
                     */
                    std::string GetWorkflowNodeName() const;

                    /**
                     * 设置<p>工作流节点名称</p>
                     * @param _workflowNodeName <p>工作流节点名称</p>
                     * 
                     */
                    void SetWorkflowNodeName(const std::string& _workflowNodeName);

                    /**
                     * 判断参数 WorkflowNodeName 是否已赋值
                     * @return WorkflowNodeName 是否已赋值
                     * 
                     */
                    bool WorkflowNodeNameHasBeenSet() const;

                private:

                    /**
                     * <p>智能体图标</p>
                     */
                    std::string m_agentIcon;
                    bool m_agentIconHasBeenSet;

                    /**
                     * <p>智能体名称</p>
                     */
                    std::string m_agentName;
                    bool m_agentNameHasBeenSet;

                    /**
                     * <p>消息处理耗时</p>
                     */
                    std::string m_elapsed;
                    bool m_elapsedHasBeenSet;

                    /**
                     * <p>父消息 ID</p>
                     */
                    std::string m_parentMessageId;
                    bool m_parentMessageIdHasBeenSet;

                    /**
                     * <p>关联记录 ID</p>
                     */
                    std::string m_relatedRecordId;
                    bool m_relatedRecordIdHasBeenSet;

                    /**
                     * <p>消息处理开始时间戳（毫秒）</p>
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * <p>工具图标</p>
                     */
                    std::string m_toolIcon;
                    bool m_toolIconHasBeenSet;

                    /**
                     * <p>工具名称</p>
                     */
                    std::string m_toolName;
                    bool m_toolNameHasBeenSet;

                    /**
                     * <p>Trace ID</p>
                     */
                    std::string m_traceId;
                    bool m_traceIdHasBeenSet;

                    /**
                     * <p>是否可以反馈</p>
                     */
                    bool m_canFeedback;
                    bool m_canFeedbackHasBeenSet;

                    /**
                     * <p>是否可以点赞点踩</p>
                     */
                    bool m_canRate;
                    bool m_canRateHasBeenSet;

                    /**
                     * <p>消息处理开始时间戳（毫秒）</p>
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * <p>是否已读</p>
                     */
                    bool m_hasRead;
                    bool m_hasReadHasBeenSet;

                    /**
                     * <p>是否大模型生成</p>
                     */
                    bool m_isModelGenerated;
                    bool m_isModelGeneratedHasBeenSet;

                    /**
                     * <p>用户反馈标签列表</p>
                     */
                    std::vector<std::string> m_reasonList;
                    bool m_reasonListHasBeenSet;

                    /**
                     * <p>回复方式</p>
                     */
                    int64_t m_replyMethod;
                    bool m_replyMethodHasBeenSet;

                    /**
                     * <p>用户打分</p>
                     */
                    int64_t m_score;
                    bool m_scoreHasBeenSet;

                    /**
                     * <p>子 Agent 运行 Id</p>
                     */
                    std::string m_subAgentRunId;
                    bool m_subAgentRunIdHasBeenSet;

                    /**
                     * <p>是否是子 Agent 的消息</p>
                     */
                    bool m_isSubAgent;
                    bool m_isSubAgentHasBeenSet;

                    /**
                     * <p>子 Agent 线程 ID</p>
                     */
                    std::string m_subAgentThreadId;
                    bool m_subAgentThreadIdHasBeenSet;

                    /**
                     * <p>是否是 Agent Team 模式下的 teammate 成员</p>
                     */
                    bool m_isTeammate;
                    bool m_isTeammateHasBeenSet;

                    /**
                     * <p>Agent Team 模式下的 teammate 名称</p>
                     */
                    std::string m_teammateName;
                    bool m_teammateNameHasBeenSet;

                    /**
                     * <p>工作流节点名称</p>
                     */
                    std::string m_workflowNodeName;
                    bool m_workflowNodeNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_CONVERSATIONMESSAGEEXTRAINFO_H_
