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

#include <tencentcloud/vpc/v20170312/model/TrafficMirrorFilter.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vpc::V20170312::Model;
using namespace std;

TrafficMirrorFilter::TrafficMirrorFilter() :
    m_srcNetHasBeenSet(false),
    m_dstNetHasBeenSet(false),
    m_protocolHasBeenSet(false),
    m_srcPortHasBeenSet(false),
    m_dstPortHasBeenSet(false),
    m_trafficMirrorFilterRuleIdHasBeenSet(false),
    m_priorityHasBeenSet(false),
    m_actionHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_createdTimeHasBeenSet(false)
{
}

CoreInternalOutcome TrafficMirrorFilter::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SrcNet") && !value["SrcNet"].IsNull())
    {
        if (!value["SrcNet"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TrafficMirrorFilter.SrcNet` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_srcNet = string(value["SrcNet"].GetString());
        m_srcNetHasBeenSet = true;
    }

    if (value.HasMember("DstNet") && !value["DstNet"].IsNull())
    {
        if (!value["DstNet"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TrafficMirrorFilter.DstNet` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dstNet = string(value["DstNet"].GetString());
        m_dstNetHasBeenSet = true;
    }

    if (value.HasMember("Protocol") && !value["Protocol"].IsNull())
    {
        if (!value["Protocol"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TrafficMirrorFilter.Protocol` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_protocol = string(value["Protocol"].GetString());
        m_protocolHasBeenSet = true;
    }

    if (value.HasMember("SrcPort") && !value["SrcPort"].IsNull())
    {
        if (!value["SrcPort"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TrafficMirrorFilter.SrcPort` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_srcPort = string(value["SrcPort"].GetString());
        m_srcPortHasBeenSet = true;
    }

    if (value.HasMember("DstPort") && !value["DstPort"].IsNull())
    {
        if (!value["DstPort"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TrafficMirrorFilter.DstPort` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dstPort = string(value["DstPort"].GetString());
        m_dstPortHasBeenSet = true;
    }

    if (value.HasMember("TrafficMirrorFilterRuleId") && !value["TrafficMirrorFilterRuleId"].IsNull())
    {
        if (!value["TrafficMirrorFilterRuleId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TrafficMirrorFilter.TrafficMirrorFilterRuleId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_trafficMirrorFilterRuleId = string(value["TrafficMirrorFilterRuleId"].GetString());
        m_trafficMirrorFilterRuleIdHasBeenSet = true;
    }

    if (value.HasMember("Priority") && !value["Priority"].IsNull())
    {
        if (!value["Priority"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `TrafficMirrorFilter.Priority` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_priority = value["Priority"].GetUint64();
        m_priorityHasBeenSet = true;
    }

    if (value.HasMember("Action") && !value["Action"].IsNull())
    {
        if (!value["Action"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TrafficMirrorFilter.Action` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_action = string(value["Action"].GetString());
        m_actionHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TrafficMirrorFilter.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("CreatedTime") && !value["CreatedTime"].IsNull())
    {
        if (!value["CreatedTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TrafficMirrorFilter.CreatedTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createdTime = string(value["CreatedTime"].GetString());
        m_createdTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TrafficMirrorFilter::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_srcNetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SrcNet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_srcNet.c_str(), allocator).Move(), allocator);
    }

    if (m_dstNetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DstNet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dstNet.c_str(), allocator).Move(), allocator);
    }

    if (m_protocolHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Protocol";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_protocol.c_str(), allocator).Move(), allocator);
    }

    if (m_srcPortHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SrcPort";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_srcPort.c_str(), allocator).Move(), allocator);
    }

    if (m_dstPortHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DstPort";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dstPort.c_str(), allocator).Move(), allocator);
    }

    if (m_trafficMirrorFilterRuleIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TrafficMirrorFilterRuleId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_trafficMirrorFilterRuleId.c_str(), allocator).Move(), allocator);
    }

    if (m_priorityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Priority";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_priority, allocator);
    }

    if (m_actionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Action";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_action.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_createdTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatedTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createdTime.c_str(), allocator).Move(), allocator);
    }

}


string TrafficMirrorFilter::GetSrcNet() const
{
    return m_srcNet;
}

void TrafficMirrorFilter::SetSrcNet(const string& _srcNet)
{
    m_srcNet = _srcNet;
    m_srcNetHasBeenSet = true;
}

bool TrafficMirrorFilter::SrcNetHasBeenSet() const
{
    return m_srcNetHasBeenSet;
}

string TrafficMirrorFilter::GetDstNet() const
{
    return m_dstNet;
}

void TrafficMirrorFilter::SetDstNet(const string& _dstNet)
{
    m_dstNet = _dstNet;
    m_dstNetHasBeenSet = true;
}

bool TrafficMirrorFilter::DstNetHasBeenSet() const
{
    return m_dstNetHasBeenSet;
}

string TrafficMirrorFilter::GetProtocol() const
{
    return m_protocol;
}

void TrafficMirrorFilter::SetProtocol(const string& _protocol)
{
    m_protocol = _protocol;
    m_protocolHasBeenSet = true;
}

bool TrafficMirrorFilter::ProtocolHasBeenSet() const
{
    return m_protocolHasBeenSet;
}

string TrafficMirrorFilter::GetSrcPort() const
{
    return m_srcPort;
}

void TrafficMirrorFilter::SetSrcPort(const string& _srcPort)
{
    m_srcPort = _srcPort;
    m_srcPortHasBeenSet = true;
}

bool TrafficMirrorFilter::SrcPortHasBeenSet() const
{
    return m_srcPortHasBeenSet;
}

string TrafficMirrorFilter::GetDstPort() const
{
    return m_dstPort;
}

void TrafficMirrorFilter::SetDstPort(const string& _dstPort)
{
    m_dstPort = _dstPort;
    m_dstPortHasBeenSet = true;
}

bool TrafficMirrorFilter::DstPortHasBeenSet() const
{
    return m_dstPortHasBeenSet;
}

string TrafficMirrorFilter::GetTrafficMirrorFilterRuleId() const
{
    return m_trafficMirrorFilterRuleId;
}

void TrafficMirrorFilter::SetTrafficMirrorFilterRuleId(const string& _trafficMirrorFilterRuleId)
{
    m_trafficMirrorFilterRuleId = _trafficMirrorFilterRuleId;
    m_trafficMirrorFilterRuleIdHasBeenSet = true;
}

bool TrafficMirrorFilter::TrafficMirrorFilterRuleIdHasBeenSet() const
{
    return m_trafficMirrorFilterRuleIdHasBeenSet;
}

uint64_t TrafficMirrorFilter::GetPriority() const
{
    return m_priority;
}

void TrafficMirrorFilter::SetPriority(const uint64_t& _priority)
{
    m_priority = _priority;
    m_priorityHasBeenSet = true;
}

bool TrafficMirrorFilter::PriorityHasBeenSet() const
{
    return m_priorityHasBeenSet;
}

string TrafficMirrorFilter::GetAction() const
{
    return m_action;
}

void TrafficMirrorFilter::SetAction(const string& _action)
{
    m_action = _action;
    m_actionHasBeenSet = true;
}

bool TrafficMirrorFilter::ActionHasBeenSet() const
{
    return m_actionHasBeenSet;
}

string TrafficMirrorFilter::GetDescription() const
{
    return m_description;
}

void TrafficMirrorFilter::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool TrafficMirrorFilter::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string TrafficMirrorFilter::GetCreatedTime() const
{
    return m_createdTime;
}

void TrafficMirrorFilter::SetCreatedTime(const string& _createdTime)
{
    m_createdTime = _createdTime;
    m_createdTimeHasBeenSet = true;
}

bool TrafficMirrorFilter::CreatedTimeHasBeenSet() const
{
    return m_createdTimeHasBeenSet;
}

