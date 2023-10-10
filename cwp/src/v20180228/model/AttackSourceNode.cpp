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

#include <tencentcloud/cwp/v20180228/model/AttackSourceNode.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cwp::V20180228::Model;
using namespace std;

AttackSourceNode::AttackSourceNode() :
    m_eventIdHasBeenSet(false),
    m_eventTypeHasBeenSet(false),
    m_ipHasBeenSet(false),
    m_levelHasBeenSet(false),
    m_nodeIdHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_nodeDescHasBeenSet(false),
    m_timeLineNumHasBeenSet(false),
    m_nodeDetailHasBeenSet(false)
{
}

CoreInternalOutcome AttackSourceNode::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("EventId") && !value["EventId"].IsNull())
    {
        if (!value["EventId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AttackSourceNode.EventId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_eventId = value["EventId"].GetUint64();
        m_eventIdHasBeenSet = true;
    }

    if (value.HasMember("EventType") && !value["EventType"].IsNull())
    {
        if (!value["EventType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AttackSourceNode.EventType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_eventType = string(value["EventType"].GetString());
        m_eventTypeHasBeenSet = true;
    }

    if (value.HasMember("Ip") && !value["Ip"].IsNull())
    {
        if (!value["Ip"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AttackSourceNode.Ip` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ip = string(value["Ip"].GetString());
        m_ipHasBeenSet = true;
    }

    if (value.HasMember("Level") && !value["Level"].IsNull())
    {
        if (!value["Level"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AttackSourceNode.Level` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_level = value["Level"].GetUint64();
        m_levelHasBeenSet = true;
    }

    if (value.HasMember("NodeId") && !value["NodeId"].IsNull())
    {
        if (!value["NodeId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AttackSourceNode.NodeId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nodeId = string(value["NodeId"].GetString());
        m_nodeIdHasBeenSet = true;
    }

    if (value.HasMember("StartTime") && !value["StartTime"].IsNull())
    {
        if (!value["StartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AttackSourceNode.StartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_startTime = string(value["StartTime"].GetString());
        m_startTimeHasBeenSet = true;
    }

    if (value.HasMember("EndTime") && !value["EndTime"].IsNull())
    {
        if (!value["EndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AttackSourceNode.EndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endTime = string(value["EndTime"].GetString());
        m_endTimeHasBeenSet = true;
    }

    if (value.HasMember("NodeDesc") && !value["NodeDesc"].IsNull())
    {
        if (!value["NodeDesc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AttackSourceNode.NodeDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nodeDesc = string(value["NodeDesc"].GetString());
        m_nodeDescHasBeenSet = true;
    }

    if (value.HasMember("TimeLineNum") && !value["TimeLineNum"].IsNull())
    {
        if (!value["TimeLineNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AttackSourceNode.TimeLineNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_timeLineNum = value["TimeLineNum"].GetUint64();
        m_timeLineNumHasBeenSet = true;
    }

    if (value.HasMember("NodeDetail") && !value["NodeDetail"].IsNull())
    {
        if (!value["NodeDetail"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AttackSourceNode.NodeDetail` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nodeDetail = string(value["NodeDetail"].GetString());
        m_nodeDetailHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AttackSourceNode::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_eventIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EventId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_eventId, allocator);
    }

    if (m_eventTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EventType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_eventType.c_str(), allocator).Move(), allocator);
    }

    if (m_ipHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Ip";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ip.c_str(), allocator).Move(), allocator);
    }

    if (m_levelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Level";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_level, allocator);
    }

    if (m_nodeIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nodeId.c_str(), allocator).Move(), allocator);
    }

    if (m_startTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_startTime.c_str(), allocator).Move(), allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_endTime.c_str(), allocator).Move(), allocator);
    }

    if (m_nodeDescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeDesc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nodeDesc.c_str(), allocator).Move(), allocator);
    }

    if (m_timeLineNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimeLineNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_timeLineNum, allocator);
    }

    if (m_nodeDetailHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeDetail";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nodeDetail.c_str(), allocator).Move(), allocator);
    }

}


uint64_t AttackSourceNode::GetEventId() const
{
    return m_eventId;
}

void AttackSourceNode::SetEventId(const uint64_t& _eventId)
{
    m_eventId = _eventId;
    m_eventIdHasBeenSet = true;
}

bool AttackSourceNode::EventIdHasBeenSet() const
{
    return m_eventIdHasBeenSet;
}

string AttackSourceNode::GetEventType() const
{
    return m_eventType;
}

void AttackSourceNode::SetEventType(const string& _eventType)
{
    m_eventType = _eventType;
    m_eventTypeHasBeenSet = true;
}

bool AttackSourceNode::EventTypeHasBeenSet() const
{
    return m_eventTypeHasBeenSet;
}

string AttackSourceNode::GetIp() const
{
    return m_ip;
}

void AttackSourceNode::SetIp(const string& _ip)
{
    m_ip = _ip;
    m_ipHasBeenSet = true;
}

bool AttackSourceNode::IpHasBeenSet() const
{
    return m_ipHasBeenSet;
}

uint64_t AttackSourceNode::GetLevel() const
{
    return m_level;
}

void AttackSourceNode::SetLevel(const uint64_t& _level)
{
    m_level = _level;
    m_levelHasBeenSet = true;
}

bool AttackSourceNode::LevelHasBeenSet() const
{
    return m_levelHasBeenSet;
}

string AttackSourceNode::GetNodeId() const
{
    return m_nodeId;
}

void AttackSourceNode::SetNodeId(const string& _nodeId)
{
    m_nodeId = _nodeId;
    m_nodeIdHasBeenSet = true;
}

bool AttackSourceNode::NodeIdHasBeenSet() const
{
    return m_nodeIdHasBeenSet;
}

string AttackSourceNode::GetStartTime() const
{
    return m_startTime;
}

void AttackSourceNode::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool AttackSourceNode::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string AttackSourceNode::GetEndTime() const
{
    return m_endTime;
}

void AttackSourceNode::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool AttackSourceNode::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

string AttackSourceNode::GetNodeDesc() const
{
    return m_nodeDesc;
}

void AttackSourceNode::SetNodeDesc(const string& _nodeDesc)
{
    m_nodeDesc = _nodeDesc;
    m_nodeDescHasBeenSet = true;
}

bool AttackSourceNode::NodeDescHasBeenSet() const
{
    return m_nodeDescHasBeenSet;
}

uint64_t AttackSourceNode::GetTimeLineNum() const
{
    return m_timeLineNum;
}

void AttackSourceNode::SetTimeLineNum(const uint64_t& _timeLineNum)
{
    m_timeLineNum = _timeLineNum;
    m_timeLineNumHasBeenSet = true;
}

bool AttackSourceNode::TimeLineNumHasBeenSet() const
{
    return m_timeLineNumHasBeenSet;
}

string AttackSourceNode::GetNodeDetail() const
{
    return m_nodeDetail;
}

void AttackSourceNode::SetNodeDetail(const string& _nodeDetail)
{
    m_nodeDetail = _nodeDetail;
    m_nodeDetailHasBeenSet = true;
}

bool AttackSourceNode::NodeDetailHasBeenSet() const
{
    return m_nodeDetailHasBeenSet;
}

