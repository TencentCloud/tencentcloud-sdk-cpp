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

#include <tencentcloud/mongodb/v20190725/model/NodeProperty.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mongodb::V20190725::Model;
using namespace std;

NodeProperty::NodeProperty() :
    m_zoneHasBeenSet(false),
    m_nodeNameHasBeenSet(false),
    m_addressHasBeenSet(false),
    m_wanServiceAddressHasBeenSet(false),
    m_roleHasBeenSet(false),
    m_hiddenHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_slaveDelayHasBeenSet(false),
    m_priorityHasBeenSet(false),
    m_votesHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_replicateSetIdHasBeenSet(false)
{
}

CoreInternalOutcome NodeProperty::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Zone") && !value["Zone"].IsNull())
    {
        if (!value["Zone"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NodeProperty.Zone` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_zone = string(value["Zone"].GetString());
        m_zoneHasBeenSet = true;
    }

    if (value.HasMember("NodeName") && !value["NodeName"].IsNull())
    {
        if (!value["NodeName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NodeProperty.NodeName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nodeName = string(value["NodeName"].GetString());
        m_nodeNameHasBeenSet = true;
    }

    if (value.HasMember("Address") && !value["Address"].IsNull())
    {
        if (!value["Address"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NodeProperty.Address` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_address = string(value["Address"].GetString());
        m_addressHasBeenSet = true;
    }

    if (value.HasMember("WanServiceAddress") && !value["WanServiceAddress"].IsNull())
    {
        if (!value["WanServiceAddress"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NodeProperty.WanServiceAddress` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_wanServiceAddress = string(value["WanServiceAddress"].GetString());
        m_wanServiceAddressHasBeenSet = true;
    }

    if (value.HasMember("Role") && !value["Role"].IsNull())
    {
        if (!value["Role"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NodeProperty.Role` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_role = string(value["Role"].GetString());
        m_roleHasBeenSet = true;
    }

    if (value.HasMember("Hidden") && !value["Hidden"].IsNull())
    {
        if (!value["Hidden"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `NodeProperty.Hidden` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_hidden = value["Hidden"].GetBool();
        m_hiddenHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NodeProperty.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("SlaveDelay") && !value["SlaveDelay"].IsNull())
    {
        if (!value["SlaveDelay"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `NodeProperty.SlaveDelay` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_slaveDelay = value["SlaveDelay"].GetInt64();
        m_slaveDelayHasBeenSet = true;
    }

    if (value.HasMember("Priority") && !value["Priority"].IsNull())
    {
        if (!value["Priority"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `NodeProperty.Priority` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_priority = value["Priority"].GetInt64();
        m_priorityHasBeenSet = true;
    }

    if (value.HasMember("Votes") && !value["Votes"].IsNull())
    {
        if (!value["Votes"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `NodeProperty.Votes` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_votes = value["Votes"].GetInt64();
        m_votesHasBeenSet = true;
    }

    if (value.HasMember("Tags") && !value["Tags"].IsNull())
    {
        if (!value["Tags"].IsArray())
            return CoreInternalOutcome(Core::Error("response `NodeProperty.Tags` is not array type"));

        const rapidjson::Value &tmpValue = value["Tags"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            NodeTag item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_tags.push_back(item);
        }
        m_tagsHasBeenSet = true;
    }

    if (value.HasMember("ReplicateSetId") && !value["ReplicateSetId"].IsNull())
    {
        if (!value["ReplicateSetId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NodeProperty.ReplicateSetId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_replicateSetId = string(value["ReplicateSetId"].GetString());
        m_replicateSetIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void NodeProperty::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_zoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Zone";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_zone.c_str(), allocator).Move(), allocator);
    }

    if (m_nodeNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nodeName.c_str(), allocator).Move(), allocator);
    }

    if (m_addressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Address";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_address.c_str(), allocator).Move(), allocator);
    }

    if (m_wanServiceAddressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WanServiceAddress";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_wanServiceAddress.c_str(), allocator).Move(), allocator);
    }

    if (m_roleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Role";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_role.c_str(), allocator).Move(), allocator);
    }

    if (m_hiddenHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Hidden";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_hidden, allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_slaveDelayHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SlaveDelay";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_slaveDelay, allocator);
    }

    if (m_priorityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Priority";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_priority, allocator);
    }

    if (m_votesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Votes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_votes, allocator);
    }

    if (m_tagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tags";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tags.begin(); itr != m_tags.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_replicateSetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReplicateSetId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_replicateSetId.c_str(), allocator).Move(), allocator);
    }

}


string NodeProperty::GetZone() const
{
    return m_zone;
}

void NodeProperty::SetZone(const string& _zone)
{
    m_zone = _zone;
    m_zoneHasBeenSet = true;
}

bool NodeProperty::ZoneHasBeenSet() const
{
    return m_zoneHasBeenSet;
}

string NodeProperty::GetNodeName() const
{
    return m_nodeName;
}

void NodeProperty::SetNodeName(const string& _nodeName)
{
    m_nodeName = _nodeName;
    m_nodeNameHasBeenSet = true;
}

bool NodeProperty::NodeNameHasBeenSet() const
{
    return m_nodeNameHasBeenSet;
}

string NodeProperty::GetAddress() const
{
    return m_address;
}

void NodeProperty::SetAddress(const string& _address)
{
    m_address = _address;
    m_addressHasBeenSet = true;
}

bool NodeProperty::AddressHasBeenSet() const
{
    return m_addressHasBeenSet;
}

string NodeProperty::GetWanServiceAddress() const
{
    return m_wanServiceAddress;
}

void NodeProperty::SetWanServiceAddress(const string& _wanServiceAddress)
{
    m_wanServiceAddress = _wanServiceAddress;
    m_wanServiceAddressHasBeenSet = true;
}

bool NodeProperty::WanServiceAddressHasBeenSet() const
{
    return m_wanServiceAddressHasBeenSet;
}

string NodeProperty::GetRole() const
{
    return m_role;
}

void NodeProperty::SetRole(const string& _role)
{
    m_role = _role;
    m_roleHasBeenSet = true;
}

bool NodeProperty::RoleHasBeenSet() const
{
    return m_roleHasBeenSet;
}

bool NodeProperty::GetHidden() const
{
    return m_hidden;
}

void NodeProperty::SetHidden(const bool& _hidden)
{
    m_hidden = _hidden;
    m_hiddenHasBeenSet = true;
}

bool NodeProperty::HiddenHasBeenSet() const
{
    return m_hiddenHasBeenSet;
}

string NodeProperty::GetStatus() const
{
    return m_status;
}

void NodeProperty::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool NodeProperty::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

int64_t NodeProperty::GetSlaveDelay() const
{
    return m_slaveDelay;
}

void NodeProperty::SetSlaveDelay(const int64_t& _slaveDelay)
{
    m_slaveDelay = _slaveDelay;
    m_slaveDelayHasBeenSet = true;
}

bool NodeProperty::SlaveDelayHasBeenSet() const
{
    return m_slaveDelayHasBeenSet;
}

int64_t NodeProperty::GetPriority() const
{
    return m_priority;
}

void NodeProperty::SetPriority(const int64_t& _priority)
{
    m_priority = _priority;
    m_priorityHasBeenSet = true;
}

bool NodeProperty::PriorityHasBeenSet() const
{
    return m_priorityHasBeenSet;
}

int64_t NodeProperty::GetVotes() const
{
    return m_votes;
}

void NodeProperty::SetVotes(const int64_t& _votes)
{
    m_votes = _votes;
    m_votesHasBeenSet = true;
}

bool NodeProperty::VotesHasBeenSet() const
{
    return m_votesHasBeenSet;
}

vector<NodeTag> NodeProperty::GetTags() const
{
    return m_tags;
}

void NodeProperty::SetTags(const vector<NodeTag>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool NodeProperty::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

string NodeProperty::GetReplicateSetId() const
{
    return m_replicateSetId;
}

void NodeProperty::SetReplicateSetId(const string& _replicateSetId)
{
    m_replicateSetId = _replicateSetId;
    m_replicateSetIdHasBeenSet = true;
}

bool NodeProperty::ReplicateSetIdHasBeenSet() const
{
    return m_replicateSetIdHasBeenSet;
}

