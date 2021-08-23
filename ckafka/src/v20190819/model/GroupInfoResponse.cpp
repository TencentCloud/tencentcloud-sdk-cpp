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

#include <tencentcloud/ckafka/v20190819/model/GroupInfoResponse.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ckafka::V20190819::Model;
using namespace std;

GroupInfoResponse::GroupInfoResponse() :
    m_errorCodeHasBeenSet(false),
    m_stateHasBeenSet(false),
    m_protocolTypeHasBeenSet(false),
    m_protocolHasBeenSet(false),
    m_membersHasBeenSet(false),
    m_groupHasBeenSet(false)
{
}

CoreInternalOutcome GroupInfoResponse::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ErrorCode") && !value["ErrorCode"].IsNull())
    {
        if (!value["ErrorCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GroupInfoResponse.ErrorCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_errorCode = string(value["ErrorCode"].GetString());
        m_errorCodeHasBeenSet = true;
    }

    if (value.HasMember("State") && !value["State"].IsNull())
    {
        if (!value["State"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GroupInfoResponse.State` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_state = string(value["State"].GetString());
        m_stateHasBeenSet = true;
    }

    if (value.HasMember("ProtocolType") && !value["ProtocolType"].IsNull())
    {
        if (!value["ProtocolType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GroupInfoResponse.ProtocolType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_protocolType = string(value["ProtocolType"].GetString());
        m_protocolTypeHasBeenSet = true;
    }

    if (value.HasMember("Protocol") && !value["Protocol"].IsNull())
    {
        if (!value["Protocol"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GroupInfoResponse.Protocol` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_protocol = string(value["Protocol"].GetString());
        m_protocolHasBeenSet = true;
    }

    if (value.HasMember("Members") && !value["Members"].IsNull())
    {
        if (!value["Members"].IsArray())
            return CoreInternalOutcome(Core::Error("response `GroupInfoResponse.Members` is not array type"));

        const rapidjson::Value &tmpValue = value["Members"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            GroupInfoMember item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_members.push_back(item);
        }
        m_membersHasBeenSet = true;
    }

    if (value.HasMember("Group") && !value["Group"].IsNull())
    {
        if (!value["Group"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GroupInfoResponse.Group` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_group = string(value["Group"].GetString());
        m_groupHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void GroupInfoResponse::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_errorCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ErrorCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_errorCode.c_str(), allocator).Move(), allocator);
    }

    if (m_stateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "State";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_state.c_str(), allocator).Move(), allocator);
    }

    if (m_protocolTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProtocolType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_protocolType.c_str(), allocator).Move(), allocator);
    }

    if (m_protocolHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Protocol";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_protocol.c_str(), allocator).Move(), allocator);
    }

    if (m_membersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Members";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_members.begin(); itr != m_members.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_groupHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Group";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_group.c_str(), allocator).Move(), allocator);
    }

}


string GroupInfoResponse::GetErrorCode() const
{
    return m_errorCode;
}

void GroupInfoResponse::SetErrorCode(const string& _errorCode)
{
    m_errorCode = _errorCode;
    m_errorCodeHasBeenSet = true;
}

bool GroupInfoResponse::ErrorCodeHasBeenSet() const
{
    return m_errorCodeHasBeenSet;
}

string GroupInfoResponse::GetState() const
{
    return m_state;
}

void GroupInfoResponse::SetState(const string& _state)
{
    m_state = _state;
    m_stateHasBeenSet = true;
}

bool GroupInfoResponse::StateHasBeenSet() const
{
    return m_stateHasBeenSet;
}

string GroupInfoResponse::GetProtocolType() const
{
    return m_protocolType;
}

void GroupInfoResponse::SetProtocolType(const string& _protocolType)
{
    m_protocolType = _protocolType;
    m_protocolTypeHasBeenSet = true;
}

bool GroupInfoResponse::ProtocolTypeHasBeenSet() const
{
    return m_protocolTypeHasBeenSet;
}

string GroupInfoResponse::GetProtocol() const
{
    return m_protocol;
}

void GroupInfoResponse::SetProtocol(const string& _protocol)
{
    m_protocol = _protocol;
    m_protocolHasBeenSet = true;
}

bool GroupInfoResponse::ProtocolHasBeenSet() const
{
    return m_protocolHasBeenSet;
}

vector<GroupInfoMember> GroupInfoResponse::GetMembers() const
{
    return m_members;
}

void GroupInfoResponse::SetMembers(const vector<GroupInfoMember>& _members)
{
    m_members = _members;
    m_membersHasBeenSet = true;
}

bool GroupInfoResponse::MembersHasBeenSet() const
{
    return m_membersHasBeenSet;
}

string GroupInfoResponse::GetGroup() const
{
    return m_group;
}

void GroupInfoResponse::SetGroup(const string& _group)
{
    m_group = _group;
    m_groupHasBeenSet = true;
}

bool GroupInfoResponse::GroupHasBeenSet() const
{
    return m_groupHasBeenSet;
}

