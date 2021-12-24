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

#include <tencentcloud/iecp/v20210914/model/GridEventInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iecp::V20210914::Model;
using namespace std;

GridEventInfo::GridEventInfo() :
    m_firstTimeHasBeenSet(false),
    m_lastTimeHasBeenSet(false),
    m_involvedObjectKindHasBeenSet(false),
    m_involvedObjectNameHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_reasonHasBeenSet(false),
    m_messageHasBeenSet(false),
    m_countHasBeenSet(false),
    m_nodeNameHasBeenSet(false),
    m_iPHasBeenSet(false)
{
}

CoreInternalOutcome GridEventInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("FirstTime") && !value["FirstTime"].IsNull())
    {
        if (!value["FirstTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GridEventInfo.FirstTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_firstTime = string(value["FirstTime"].GetString());
        m_firstTimeHasBeenSet = true;
    }

    if (value.HasMember("LastTime") && !value["LastTime"].IsNull())
    {
        if (!value["LastTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GridEventInfo.LastTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lastTime = string(value["LastTime"].GetString());
        m_lastTimeHasBeenSet = true;
    }

    if (value.HasMember("InvolvedObjectKind") && !value["InvolvedObjectKind"].IsNull())
    {
        if (!value["InvolvedObjectKind"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GridEventInfo.InvolvedObjectKind` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_involvedObjectKind = string(value["InvolvedObjectKind"].GetString());
        m_involvedObjectKindHasBeenSet = true;
    }

    if (value.HasMember("InvolvedObjectName") && !value["InvolvedObjectName"].IsNull())
    {
        if (!value["InvolvedObjectName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GridEventInfo.InvolvedObjectName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_involvedObjectName = string(value["InvolvedObjectName"].GetString());
        m_involvedObjectNameHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GridEventInfo.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("Reason") && !value["Reason"].IsNull())
    {
        if (!value["Reason"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GridEventInfo.Reason` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_reason = string(value["Reason"].GetString());
        m_reasonHasBeenSet = true;
    }

    if (value.HasMember("Message") && !value["Message"].IsNull())
    {
        if (!value["Message"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GridEventInfo.Message` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_message = string(value["Message"].GetString());
        m_messageHasBeenSet = true;
    }

    if (value.HasMember("Count") && !value["Count"].IsNull())
    {
        if (!value["Count"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `GridEventInfo.Count` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_count = value["Count"].GetInt64();
        m_countHasBeenSet = true;
    }

    if (value.HasMember("NodeName") && !value["NodeName"].IsNull())
    {
        if (!value["NodeName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GridEventInfo.NodeName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nodeName = string(value["NodeName"].GetString());
        m_nodeNameHasBeenSet = true;
    }

    if (value.HasMember("IP") && !value["IP"].IsNull())
    {
        if (!value["IP"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GridEventInfo.IP` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_iP = string(value["IP"].GetString());
        m_iPHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void GridEventInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_firstTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FirstTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_firstTime.c_str(), allocator).Move(), allocator);
    }

    if (m_lastTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lastTime.c_str(), allocator).Move(), allocator);
    }

    if (m_involvedObjectKindHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InvolvedObjectKind";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_involvedObjectKind.c_str(), allocator).Move(), allocator);
    }

    if (m_involvedObjectNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InvolvedObjectName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_involvedObjectName.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_reasonHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Reason";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_reason.c_str(), allocator).Move(), allocator);
    }

    if (m_messageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Message";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_message.c_str(), allocator).Move(), allocator);
    }

    if (m_countHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Count";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_count, allocator);
    }

    if (m_nodeNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nodeName.c_str(), allocator).Move(), allocator);
    }

    if (m_iPHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IP";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_iP.c_str(), allocator).Move(), allocator);
    }

}


string GridEventInfo::GetFirstTime() const
{
    return m_firstTime;
}

void GridEventInfo::SetFirstTime(const string& _firstTime)
{
    m_firstTime = _firstTime;
    m_firstTimeHasBeenSet = true;
}

bool GridEventInfo::FirstTimeHasBeenSet() const
{
    return m_firstTimeHasBeenSet;
}

string GridEventInfo::GetLastTime() const
{
    return m_lastTime;
}

void GridEventInfo::SetLastTime(const string& _lastTime)
{
    m_lastTime = _lastTime;
    m_lastTimeHasBeenSet = true;
}

bool GridEventInfo::LastTimeHasBeenSet() const
{
    return m_lastTimeHasBeenSet;
}

string GridEventInfo::GetInvolvedObjectKind() const
{
    return m_involvedObjectKind;
}

void GridEventInfo::SetInvolvedObjectKind(const string& _involvedObjectKind)
{
    m_involvedObjectKind = _involvedObjectKind;
    m_involvedObjectKindHasBeenSet = true;
}

bool GridEventInfo::InvolvedObjectKindHasBeenSet() const
{
    return m_involvedObjectKindHasBeenSet;
}

string GridEventInfo::GetInvolvedObjectName() const
{
    return m_involvedObjectName;
}

void GridEventInfo::SetInvolvedObjectName(const string& _involvedObjectName)
{
    m_involvedObjectName = _involvedObjectName;
    m_involvedObjectNameHasBeenSet = true;
}

bool GridEventInfo::InvolvedObjectNameHasBeenSet() const
{
    return m_involvedObjectNameHasBeenSet;
}

string GridEventInfo::GetType() const
{
    return m_type;
}

void GridEventInfo::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool GridEventInfo::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string GridEventInfo::GetReason() const
{
    return m_reason;
}

void GridEventInfo::SetReason(const string& _reason)
{
    m_reason = _reason;
    m_reasonHasBeenSet = true;
}

bool GridEventInfo::ReasonHasBeenSet() const
{
    return m_reasonHasBeenSet;
}

string GridEventInfo::GetMessage() const
{
    return m_message;
}

void GridEventInfo::SetMessage(const string& _message)
{
    m_message = _message;
    m_messageHasBeenSet = true;
}

bool GridEventInfo::MessageHasBeenSet() const
{
    return m_messageHasBeenSet;
}

int64_t GridEventInfo::GetCount() const
{
    return m_count;
}

void GridEventInfo::SetCount(const int64_t& _count)
{
    m_count = _count;
    m_countHasBeenSet = true;
}

bool GridEventInfo::CountHasBeenSet() const
{
    return m_countHasBeenSet;
}

string GridEventInfo::GetNodeName() const
{
    return m_nodeName;
}

void GridEventInfo::SetNodeName(const string& _nodeName)
{
    m_nodeName = _nodeName;
    m_nodeNameHasBeenSet = true;
}

bool GridEventInfo::NodeNameHasBeenSet() const
{
    return m_nodeNameHasBeenSet;
}

string GridEventInfo::GetIP() const
{
    return m_iP;
}

void GridEventInfo::SetIP(const string& _iP)
{
    m_iP = _iP;
    m_iPHasBeenSet = true;
}

bool GridEventInfo::IPHasBeenSet() const
{
    return m_iPHasBeenSet;
}

