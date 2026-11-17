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

#include <tencentcloud/adp/v20260520/model/ConversationMessageExtraInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Adp::V20260520::Model;
using namespace std;

ConversationMessageExtraInfo::ConversationMessageExtraInfo() :
    m_agentIconHasBeenSet(false),
    m_agentNameHasBeenSet(false),
    m_elapsedHasBeenSet(false),
    m_parentMessageIdHasBeenSet(false),
    m_relatedRecordIdHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_toolIconHasBeenSet(false),
    m_toolNameHasBeenSet(false),
    m_traceIdHasBeenSet(false),
    m_canFeedbackHasBeenSet(false),
    m_canRateHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_hasReadHasBeenSet(false),
    m_isModelGeneratedHasBeenSet(false),
    m_reasonListHasBeenSet(false),
    m_replyMethodHasBeenSet(false),
    m_scoreHasBeenSet(false),
    m_subAgentRunIdHasBeenSet(false),
    m_isSubAgentHasBeenSet(false),
    m_subAgentThreadIdHasBeenSet(false),
    m_isTeammateHasBeenSet(false),
    m_teammateNameHasBeenSet(false),
    m_workflowNodeNameHasBeenSet(false)
{
}

CoreInternalOutcome ConversationMessageExtraInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AgentIcon") && !value["AgentIcon"].IsNull())
    {
        if (!value["AgentIcon"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConversationMessageExtraInfo.AgentIcon` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_agentIcon = string(value["AgentIcon"].GetString());
        m_agentIconHasBeenSet = true;
    }

    if (value.HasMember("AgentName") && !value["AgentName"].IsNull())
    {
        if (!value["AgentName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConversationMessageExtraInfo.AgentName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_agentName = string(value["AgentName"].GetString());
        m_agentNameHasBeenSet = true;
    }

    if (value.HasMember("Elapsed") && !value["Elapsed"].IsNull())
    {
        if (!value["Elapsed"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConversationMessageExtraInfo.Elapsed` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_elapsed = string(value["Elapsed"].GetString());
        m_elapsedHasBeenSet = true;
    }

    if (value.HasMember("ParentMessageId") && !value["ParentMessageId"].IsNull())
    {
        if (!value["ParentMessageId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConversationMessageExtraInfo.ParentMessageId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_parentMessageId = string(value["ParentMessageId"].GetString());
        m_parentMessageIdHasBeenSet = true;
    }

    if (value.HasMember("RelatedRecordId") && !value["RelatedRecordId"].IsNull())
    {
        if (!value["RelatedRecordId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConversationMessageExtraInfo.RelatedRecordId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_relatedRecordId = string(value["RelatedRecordId"].GetString());
        m_relatedRecordIdHasBeenSet = true;
    }

    if (value.HasMember("StartTime") && !value["StartTime"].IsNull())
    {
        if (!value["StartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConversationMessageExtraInfo.StartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_startTime = string(value["StartTime"].GetString());
        m_startTimeHasBeenSet = true;
    }

    if (value.HasMember("ToolIcon") && !value["ToolIcon"].IsNull())
    {
        if (!value["ToolIcon"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConversationMessageExtraInfo.ToolIcon` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_toolIcon = string(value["ToolIcon"].GetString());
        m_toolIconHasBeenSet = true;
    }

    if (value.HasMember("ToolName") && !value["ToolName"].IsNull())
    {
        if (!value["ToolName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConversationMessageExtraInfo.ToolName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_toolName = string(value["ToolName"].GetString());
        m_toolNameHasBeenSet = true;
    }

    if (value.HasMember("TraceId") && !value["TraceId"].IsNull())
    {
        if (!value["TraceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConversationMessageExtraInfo.TraceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_traceId = string(value["TraceId"].GetString());
        m_traceIdHasBeenSet = true;
    }

    if (value.HasMember("CanFeedback") && !value["CanFeedback"].IsNull())
    {
        if (!value["CanFeedback"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ConversationMessageExtraInfo.CanFeedback` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_canFeedback = value["CanFeedback"].GetBool();
        m_canFeedbackHasBeenSet = true;
    }

    if (value.HasMember("CanRate") && !value["CanRate"].IsNull())
    {
        if (!value["CanRate"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ConversationMessageExtraInfo.CanRate` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_canRate = value["CanRate"].GetBool();
        m_canRateHasBeenSet = true;
    }

    if (value.HasMember("EndTime") && !value["EndTime"].IsNull())
    {
        if (!value["EndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConversationMessageExtraInfo.EndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endTime = string(value["EndTime"].GetString());
        m_endTimeHasBeenSet = true;
    }

    if (value.HasMember("HasRead") && !value["HasRead"].IsNull())
    {
        if (!value["HasRead"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ConversationMessageExtraInfo.HasRead` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_hasRead = value["HasRead"].GetBool();
        m_hasReadHasBeenSet = true;
    }

    if (value.HasMember("IsModelGenerated") && !value["IsModelGenerated"].IsNull())
    {
        if (!value["IsModelGenerated"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ConversationMessageExtraInfo.IsModelGenerated` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isModelGenerated = value["IsModelGenerated"].GetBool();
        m_isModelGeneratedHasBeenSet = true;
    }

    if (value.HasMember("ReasonList") && !value["ReasonList"].IsNull())
    {
        if (!value["ReasonList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ConversationMessageExtraInfo.ReasonList` is not array type"));

        const rapidjson::Value &tmpValue = value["ReasonList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_reasonList.push_back((*itr).GetString());
        }
        m_reasonListHasBeenSet = true;
    }

    if (value.HasMember("ReplyMethod") && !value["ReplyMethod"].IsNull())
    {
        if (!value["ReplyMethod"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ConversationMessageExtraInfo.ReplyMethod` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_replyMethod = value["ReplyMethod"].GetInt64();
        m_replyMethodHasBeenSet = true;
    }

    if (value.HasMember("Score") && !value["Score"].IsNull())
    {
        if (!value["Score"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ConversationMessageExtraInfo.Score` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_score = value["Score"].GetInt64();
        m_scoreHasBeenSet = true;
    }

    if (value.HasMember("SubAgentRunId") && !value["SubAgentRunId"].IsNull())
    {
        if (!value["SubAgentRunId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConversationMessageExtraInfo.SubAgentRunId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subAgentRunId = string(value["SubAgentRunId"].GetString());
        m_subAgentRunIdHasBeenSet = true;
    }

    if (value.HasMember("IsSubAgent") && !value["IsSubAgent"].IsNull())
    {
        if (!value["IsSubAgent"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ConversationMessageExtraInfo.IsSubAgent` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isSubAgent = value["IsSubAgent"].GetBool();
        m_isSubAgentHasBeenSet = true;
    }

    if (value.HasMember("SubAgentThreadId") && !value["SubAgentThreadId"].IsNull())
    {
        if (!value["SubAgentThreadId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConversationMessageExtraInfo.SubAgentThreadId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subAgentThreadId = string(value["SubAgentThreadId"].GetString());
        m_subAgentThreadIdHasBeenSet = true;
    }

    if (value.HasMember("IsTeammate") && !value["IsTeammate"].IsNull())
    {
        if (!value["IsTeammate"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ConversationMessageExtraInfo.IsTeammate` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isTeammate = value["IsTeammate"].GetBool();
        m_isTeammateHasBeenSet = true;
    }

    if (value.HasMember("TeammateName") && !value["TeammateName"].IsNull())
    {
        if (!value["TeammateName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConversationMessageExtraInfo.TeammateName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_teammateName = string(value["TeammateName"].GetString());
        m_teammateNameHasBeenSet = true;
    }

    if (value.HasMember("WorkflowNodeName") && !value["WorkflowNodeName"].IsNull())
    {
        if (!value["WorkflowNodeName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConversationMessageExtraInfo.WorkflowNodeName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_workflowNodeName = string(value["WorkflowNodeName"].GetString());
        m_workflowNodeNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ConversationMessageExtraInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_agentIconHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AgentIcon";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_agentIcon.c_str(), allocator).Move(), allocator);
    }

    if (m_agentNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AgentName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_agentName.c_str(), allocator).Move(), allocator);
    }

    if (m_elapsedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Elapsed";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_elapsed.c_str(), allocator).Move(), allocator);
    }

    if (m_parentMessageIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ParentMessageId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_parentMessageId.c_str(), allocator).Move(), allocator);
    }

    if (m_relatedRecordIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RelatedRecordId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_relatedRecordId.c_str(), allocator).Move(), allocator);
    }

    if (m_startTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_startTime.c_str(), allocator).Move(), allocator);
    }

    if (m_toolIconHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ToolIcon";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_toolIcon.c_str(), allocator).Move(), allocator);
    }

    if (m_toolNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ToolName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_toolName.c_str(), allocator).Move(), allocator);
    }

    if (m_traceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TraceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_traceId.c_str(), allocator).Move(), allocator);
    }

    if (m_canFeedbackHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CanFeedback";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_canFeedback, allocator);
    }

    if (m_canRateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CanRate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_canRate, allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_endTime.c_str(), allocator).Move(), allocator);
    }

    if (m_hasReadHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HasRead";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_hasRead, allocator);
    }

    if (m_isModelGeneratedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsModelGenerated";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isModelGenerated, allocator);
    }

    if (m_reasonListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReasonList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_reasonList.begin(); itr != m_reasonList.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_replyMethodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReplyMethod";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_replyMethod, allocator);
    }

    if (m_scoreHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Score";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_score, allocator);
    }

    if (m_subAgentRunIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubAgentRunId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subAgentRunId.c_str(), allocator).Move(), allocator);
    }

    if (m_isSubAgentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsSubAgent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isSubAgent, allocator);
    }

    if (m_subAgentThreadIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubAgentThreadId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subAgentThreadId.c_str(), allocator).Move(), allocator);
    }

    if (m_isTeammateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsTeammate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isTeammate, allocator);
    }

    if (m_teammateNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TeammateName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_teammateName.c_str(), allocator).Move(), allocator);
    }

    if (m_workflowNodeNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkflowNodeName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_workflowNodeName.c_str(), allocator).Move(), allocator);
    }

}


string ConversationMessageExtraInfo::GetAgentIcon() const
{
    return m_agentIcon;
}

void ConversationMessageExtraInfo::SetAgentIcon(const string& _agentIcon)
{
    m_agentIcon = _agentIcon;
    m_agentIconHasBeenSet = true;
}

bool ConversationMessageExtraInfo::AgentIconHasBeenSet() const
{
    return m_agentIconHasBeenSet;
}

string ConversationMessageExtraInfo::GetAgentName() const
{
    return m_agentName;
}

void ConversationMessageExtraInfo::SetAgentName(const string& _agentName)
{
    m_agentName = _agentName;
    m_agentNameHasBeenSet = true;
}

bool ConversationMessageExtraInfo::AgentNameHasBeenSet() const
{
    return m_agentNameHasBeenSet;
}

string ConversationMessageExtraInfo::GetElapsed() const
{
    return m_elapsed;
}

void ConversationMessageExtraInfo::SetElapsed(const string& _elapsed)
{
    m_elapsed = _elapsed;
    m_elapsedHasBeenSet = true;
}

bool ConversationMessageExtraInfo::ElapsedHasBeenSet() const
{
    return m_elapsedHasBeenSet;
}

string ConversationMessageExtraInfo::GetParentMessageId() const
{
    return m_parentMessageId;
}

void ConversationMessageExtraInfo::SetParentMessageId(const string& _parentMessageId)
{
    m_parentMessageId = _parentMessageId;
    m_parentMessageIdHasBeenSet = true;
}

bool ConversationMessageExtraInfo::ParentMessageIdHasBeenSet() const
{
    return m_parentMessageIdHasBeenSet;
}

string ConversationMessageExtraInfo::GetRelatedRecordId() const
{
    return m_relatedRecordId;
}

void ConversationMessageExtraInfo::SetRelatedRecordId(const string& _relatedRecordId)
{
    m_relatedRecordId = _relatedRecordId;
    m_relatedRecordIdHasBeenSet = true;
}

bool ConversationMessageExtraInfo::RelatedRecordIdHasBeenSet() const
{
    return m_relatedRecordIdHasBeenSet;
}

string ConversationMessageExtraInfo::GetStartTime() const
{
    return m_startTime;
}

void ConversationMessageExtraInfo::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool ConversationMessageExtraInfo::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string ConversationMessageExtraInfo::GetToolIcon() const
{
    return m_toolIcon;
}

void ConversationMessageExtraInfo::SetToolIcon(const string& _toolIcon)
{
    m_toolIcon = _toolIcon;
    m_toolIconHasBeenSet = true;
}

bool ConversationMessageExtraInfo::ToolIconHasBeenSet() const
{
    return m_toolIconHasBeenSet;
}

string ConversationMessageExtraInfo::GetToolName() const
{
    return m_toolName;
}

void ConversationMessageExtraInfo::SetToolName(const string& _toolName)
{
    m_toolName = _toolName;
    m_toolNameHasBeenSet = true;
}

bool ConversationMessageExtraInfo::ToolNameHasBeenSet() const
{
    return m_toolNameHasBeenSet;
}

string ConversationMessageExtraInfo::GetTraceId() const
{
    return m_traceId;
}

void ConversationMessageExtraInfo::SetTraceId(const string& _traceId)
{
    m_traceId = _traceId;
    m_traceIdHasBeenSet = true;
}

bool ConversationMessageExtraInfo::TraceIdHasBeenSet() const
{
    return m_traceIdHasBeenSet;
}

bool ConversationMessageExtraInfo::GetCanFeedback() const
{
    return m_canFeedback;
}

void ConversationMessageExtraInfo::SetCanFeedback(const bool& _canFeedback)
{
    m_canFeedback = _canFeedback;
    m_canFeedbackHasBeenSet = true;
}

bool ConversationMessageExtraInfo::CanFeedbackHasBeenSet() const
{
    return m_canFeedbackHasBeenSet;
}

bool ConversationMessageExtraInfo::GetCanRate() const
{
    return m_canRate;
}

void ConversationMessageExtraInfo::SetCanRate(const bool& _canRate)
{
    m_canRate = _canRate;
    m_canRateHasBeenSet = true;
}

bool ConversationMessageExtraInfo::CanRateHasBeenSet() const
{
    return m_canRateHasBeenSet;
}

string ConversationMessageExtraInfo::GetEndTime() const
{
    return m_endTime;
}

void ConversationMessageExtraInfo::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool ConversationMessageExtraInfo::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

bool ConversationMessageExtraInfo::GetHasRead() const
{
    return m_hasRead;
}

void ConversationMessageExtraInfo::SetHasRead(const bool& _hasRead)
{
    m_hasRead = _hasRead;
    m_hasReadHasBeenSet = true;
}

bool ConversationMessageExtraInfo::HasReadHasBeenSet() const
{
    return m_hasReadHasBeenSet;
}

bool ConversationMessageExtraInfo::GetIsModelGenerated() const
{
    return m_isModelGenerated;
}

void ConversationMessageExtraInfo::SetIsModelGenerated(const bool& _isModelGenerated)
{
    m_isModelGenerated = _isModelGenerated;
    m_isModelGeneratedHasBeenSet = true;
}

bool ConversationMessageExtraInfo::IsModelGeneratedHasBeenSet() const
{
    return m_isModelGeneratedHasBeenSet;
}

vector<string> ConversationMessageExtraInfo::GetReasonList() const
{
    return m_reasonList;
}

void ConversationMessageExtraInfo::SetReasonList(const vector<string>& _reasonList)
{
    m_reasonList = _reasonList;
    m_reasonListHasBeenSet = true;
}

bool ConversationMessageExtraInfo::ReasonListHasBeenSet() const
{
    return m_reasonListHasBeenSet;
}

int64_t ConversationMessageExtraInfo::GetReplyMethod() const
{
    return m_replyMethod;
}

void ConversationMessageExtraInfo::SetReplyMethod(const int64_t& _replyMethod)
{
    m_replyMethod = _replyMethod;
    m_replyMethodHasBeenSet = true;
}

bool ConversationMessageExtraInfo::ReplyMethodHasBeenSet() const
{
    return m_replyMethodHasBeenSet;
}

int64_t ConversationMessageExtraInfo::GetScore() const
{
    return m_score;
}

void ConversationMessageExtraInfo::SetScore(const int64_t& _score)
{
    m_score = _score;
    m_scoreHasBeenSet = true;
}

bool ConversationMessageExtraInfo::ScoreHasBeenSet() const
{
    return m_scoreHasBeenSet;
}

string ConversationMessageExtraInfo::GetSubAgentRunId() const
{
    return m_subAgentRunId;
}

void ConversationMessageExtraInfo::SetSubAgentRunId(const string& _subAgentRunId)
{
    m_subAgentRunId = _subAgentRunId;
    m_subAgentRunIdHasBeenSet = true;
}

bool ConversationMessageExtraInfo::SubAgentRunIdHasBeenSet() const
{
    return m_subAgentRunIdHasBeenSet;
}

bool ConversationMessageExtraInfo::GetIsSubAgent() const
{
    return m_isSubAgent;
}

void ConversationMessageExtraInfo::SetIsSubAgent(const bool& _isSubAgent)
{
    m_isSubAgent = _isSubAgent;
    m_isSubAgentHasBeenSet = true;
}

bool ConversationMessageExtraInfo::IsSubAgentHasBeenSet() const
{
    return m_isSubAgentHasBeenSet;
}

string ConversationMessageExtraInfo::GetSubAgentThreadId() const
{
    return m_subAgentThreadId;
}

void ConversationMessageExtraInfo::SetSubAgentThreadId(const string& _subAgentThreadId)
{
    m_subAgentThreadId = _subAgentThreadId;
    m_subAgentThreadIdHasBeenSet = true;
}

bool ConversationMessageExtraInfo::SubAgentThreadIdHasBeenSet() const
{
    return m_subAgentThreadIdHasBeenSet;
}

bool ConversationMessageExtraInfo::GetIsTeammate() const
{
    return m_isTeammate;
}

void ConversationMessageExtraInfo::SetIsTeammate(const bool& _isTeammate)
{
    m_isTeammate = _isTeammate;
    m_isTeammateHasBeenSet = true;
}

bool ConversationMessageExtraInfo::IsTeammateHasBeenSet() const
{
    return m_isTeammateHasBeenSet;
}

string ConversationMessageExtraInfo::GetTeammateName() const
{
    return m_teammateName;
}

void ConversationMessageExtraInfo::SetTeammateName(const string& _teammateName)
{
    m_teammateName = _teammateName;
    m_teammateNameHasBeenSet = true;
}

bool ConversationMessageExtraInfo::TeammateNameHasBeenSet() const
{
    return m_teammateNameHasBeenSet;
}

string ConversationMessageExtraInfo::GetWorkflowNodeName() const
{
    return m_workflowNodeName;
}

void ConversationMessageExtraInfo::SetWorkflowNodeName(const string& _workflowNodeName)
{
    m_workflowNodeName = _workflowNodeName;
    m_workflowNodeNameHasBeenSet = true;
}

bool ConversationMessageExtraInfo::WorkflowNodeNameHasBeenSet() const
{
    return m_workflowNodeNameHasBeenSet;
}

