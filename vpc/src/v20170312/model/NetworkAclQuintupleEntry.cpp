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

#include <tencentcloud/vpc/v20170312/model/NetworkAclQuintupleEntry.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vpc::V20170312::Model;
using namespace std;

NetworkAclQuintupleEntry::NetworkAclQuintupleEntry() :
    m_protocolHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_sourcePortHasBeenSet(false),
    m_sourceCidrHasBeenSet(false),
    m_destinationPortHasBeenSet(false),
    m_destinationCidrHasBeenSet(false),
    m_actionHasBeenSet(false),
    m_networkAclQuintupleEntryIdHasBeenSet(false),
    m_priorityHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_networkAclDirectionHasBeenSet(false)
{
}

CoreInternalOutcome NetworkAclQuintupleEntry::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Protocol") && !value["Protocol"].IsNull())
    {
        if (!value["Protocol"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NetworkAclQuintupleEntry.Protocol` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_protocol = string(value["Protocol"].GetString());
        m_protocolHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NetworkAclQuintupleEntry.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("SourcePort") && !value["SourcePort"].IsNull())
    {
        if (!value["SourcePort"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NetworkAclQuintupleEntry.SourcePort` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sourcePort = string(value["SourcePort"].GetString());
        m_sourcePortHasBeenSet = true;
    }

    if (value.HasMember("SourceCidr") && !value["SourceCidr"].IsNull())
    {
        if (!value["SourceCidr"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NetworkAclQuintupleEntry.SourceCidr` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sourceCidr = string(value["SourceCidr"].GetString());
        m_sourceCidrHasBeenSet = true;
    }

    if (value.HasMember("DestinationPort") && !value["DestinationPort"].IsNull())
    {
        if (!value["DestinationPort"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NetworkAclQuintupleEntry.DestinationPort` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_destinationPort = string(value["DestinationPort"].GetString());
        m_destinationPortHasBeenSet = true;
    }

    if (value.HasMember("DestinationCidr") && !value["DestinationCidr"].IsNull())
    {
        if (!value["DestinationCidr"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NetworkAclQuintupleEntry.DestinationCidr` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_destinationCidr = string(value["DestinationCidr"].GetString());
        m_destinationCidrHasBeenSet = true;
    }

    if (value.HasMember("Action") && !value["Action"].IsNull())
    {
        if (!value["Action"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NetworkAclQuintupleEntry.Action` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_action = string(value["Action"].GetString());
        m_actionHasBeenSet = true;
    }

    if (value.HasMember("NetworkAclQuintupleEntryId") && !value["NetworkAclQuintupleEntryId"].IsNull())
    {
        if (!value["NetworkAclQuintupleEntryId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NetworkAclQuintupleEntry.NetworkAclQuintupleEntryId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_networkAclQuintupleEntryId = string(value["NetworkAclQuintupleEntryId"].GetString());
        m_networkAclQuintupleEntryIdHasBeenSet = true;
    }

    if (value.HasMember("Priority") && !value["Priority"].IsNull())
    {
        if (!value["Priority"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `NetworkAclQuintupleEntry.Priority` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_priority = value["Priority"].GetInt64();
        m_priorityHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NetworkAclQuintupleEntry.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("NetworkAclDirection") && !value["NetworkAclDirection"].IsNull())
    {
        if (!value["NetworkAclDirection"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NetworkAclQuintupleEntry.NetworkAclDirection` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_networkAclDirection = string(value["NetworkAclDirection"].GetString());
        m_networkAclDirectionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void NetworkAclQuintupleEntry::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_protocolHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Protocol";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_protocol.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_sourcePortHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourcePort";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sourcePort.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceCidrHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceCidr";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sourceCidr.c_str(), allocator).Move(), allocator);
    }

    if (m_destinationPortHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DestinationPort";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_destinationPort.c_str(), allocator).Move(), allocator);
    }

    if (m_destinationCidrHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DestinationCidr";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_destinationCidr.c_str(), allocator).Move(), allocator);
    }

    if (m_actionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Action";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_action.c_str(), allocator).Move(), allocator);
    }

    if (m_networkAclQuintupleEntryIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NetworkAclQuintupleEntryId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_networkAclQuintupleEntryId.c_str(), allocator).Move(), allocator);
    }

    if (m_priorityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Priority";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_priority, allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_networkAclDirectionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NetworkAclDirection";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_networkAclDirection.c_str(), allocator).Move(), allocator);
    }

}


string NetworkAclQuintupleEntry::GetProtocol() const
{
    return m_protocol;
}

void NetworkAclQuintupleEntry::SetProtocol(const string& _protocol)
{
    m_protocol = _protocol;
    m_protocolHasBeenSet = true;
}

bool NetworkAclQuintupleEntry::ProtocolHasBeenSet() const
{
    return m_protocolHasBeenSet;
}

string NetworkAclQuintupleEntry::GetDescription() const
{
    return m_description;
}

void NetworkAclQuintupleEntry::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool NetworkAclQuintupleEntry::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string NetworkAclQuintupleEntry::GetSourcePort() const
{
    return m_sourcePort;
}

void NetworkAclQuintupleEntry::SetSourcePort(const string& _sourcePort)
{
    m_sourcePort = _sourcePort;
    m_sourcePortHasBeenSet = true;
}

bool NetworkAclQuintupleEntry::SourcePortHasBeenSet() const
{
    return m_sourcePortHasBeenSet;
}

string NetworkAclQuintupleEntry::GetSourceCidr() const
{
    return m_sourceCidr;
}

void NetworkAclQuintupleEntry::SetSourceCidr(const string& _sourceCidr)
{
    m_sourceCidr = _sourceCidr;
    m_sourceCidrHasBeenSet = true;
}

bool NetworkAclQuintupleEntry::SourceCidrHasBeenSet() const
{
    return m_sourceCidrHasBeenSet;
}

string NetworkAclQuintupleEntry::GetDestinationPort() const
{
    return m_destinationPort;
}

void NetworkAclQuintupleEntry::SetDestinationPort(const string& _destinationPort)
{
    m_destinationPort = _destinationPort;
    m_destinationPortHasBeenSet = true;
}

bool NetworkAclQuintupleEntry::DestinationPortHasBeenSet() const
{
    return m_destinationPortHasBeenSet;
}

string NetworkAclQuintupleEntry::GetDestinationCidr() const
{
    return m_destinationCidr;
}

void NetworkAclQuintupleEntry::SetDestinationCidr(const string& _destinationCidr)
{
    m_destinationCidr = _destinationCidr;
    m_destinationCidrHasBeenSet = true;
}

bool NetworkAclQuintupleEntry::DestinationCidrHasBeenSet() const
{
    return m_destinationCidrHasBeenSet;
}

string NetworkAclQuintupleEntry::GetAction() const
{
    return m_action;
}

void NetworkAclQuintupleEntry::SetAction(const string& _action)
{
    m_action = _action;
    m_actionHasBeenSet = true;
}

bool NetworkAclQuintupleEntry::ActionHasBeenSet() const
{
    return m_actionHasBeenSet;
}

string NetworkAclQuintupleEntry::GetNetworkAclQuintupleEntryId() const
{
    return m_networkAclQuintupleEntryId;
}

void NetworkAclQuintupleEntry::SetNetworkAclQuintupleEntryId(const string& _networkAclQuintupleEntryId)
{
    m_networkAclQuintupleEntryId = _networkAclQuintupleEntryId;
    m_networkAclQuintupleEntryIdHasBeenSet = true;
}

bool NetworkAclQuintupleEntry::NetworkAclQuintupleEntryIdHasBeenSet() const
{
    return m_networkAclQuintupleEntryIdHasBeenSet;
}

int64_t NetworkAclQuintupleEntry::GetPriority() const
{
    return m_priority;
}

void NetworkAclQuintupleEntry::SetPriority(const int64_t& _priority)
{
    m_priority = _priority;
    m_priorityHasBeenSet = true;
}

bool NetworkAclQuintupleEntry::PriorityHasBeenSet() const
{
    return m_priorityHasBeenSet;
}

string NetworkAclQuintupleEntry::GetCreateTime() const
{
    return m_createTime;
}

void NetworkAclQuintupleEntry::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool NetworkAclQuintupleEntry::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string NetworkAclQuintupleEntry::GetNetworkAclDirection() const
{
    return m_networkAclDirection;
}

void NetworkAclQuintupleEntry::SetNetworkAclDirection(const string& _networkAclDirection)
{
    m_networkAclDirection = _networkAclDirection;
    m_networkAclDirectionHasBeenSet = true;
}

bool NetworkAclQuintupleEntry::NetworkAclDirectionHasBeenSet() const
{
    return m_networkAclDirectionHasBeenSet;
}

