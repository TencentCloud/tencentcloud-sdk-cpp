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

#include <tencentcloud/ckafka/v20190819/model/GroupInfoMember.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ckafka::V20190819::Model;
using namespace std;

GroupInfoMember::GroupInfoMember() :
    m_memberIdHasBeenSet(false),
    m_clientIdHasBeenSet(false),
    m_clientHostHasBeenSet(false),
    m_assignmentHasBeenSet(false)
{
}

CoreInternalOutcome GroupInfoMember::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("MemberId") && !value["MemberId"].IsNull())
    {
        if (!value["MemberId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GroupInfoMember.MemberId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_memberId = string(value["MemberId"].GetString());
        m_memberIdHasBeenSet = true;
    }

    if (value.HasMember("ClientId") && !value["ClientId"].IsNull())
    {
        if (!value["ClientId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GroupInfoMember.ClientId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clientId = string(value["ClientId"].GetString());
        m_clientIdHasBeenSet = true;
    }

    if (value.HasMember("ClientHost") && !value["ClientHost"].IsNull())
    {
        if (!value["ClientHost"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GroupInfoMember.ClientHost` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clientHost = string(value["ClientHost"].GetString());
        m_clientHostHasBeenSet = true;
    }

    if (value.HasMember("Assignment") && !value["Assignment"].IsNull())
    {
        if (!value["Assignment"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `GroupInfoMember.Assignment` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_assignment.Deserialize(value["Assignment"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_assignmentHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void GroupInfoMember::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_memberIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MemberId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_memberId.c_str(), allocator).Move(), allocator);
    }

    if (m_clientIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClientId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clientId.c_str(), allocator).Move(), allocator);
    }

    if (m_clientHostHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClientHost";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clientHost.c_str(), allocator).Move(), allocator);
    }

    if (m_assignmentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Assignment";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_assignment.ToJsonObject(value[key.c_str()], allocator);
    }

}


string GroupInfoMember::GetMemberId() const
{
    return m_memberId;
}

void GroupInfoMember::SetMemberId(const string& _memberId)
{
    m_memberId = _memberId;
    m_memberIdHasBeenSet = true;
}

bool GroupInfoMember::MemberIdHasBeenSet() const
{
    return m_memberIdHasBeenSet;
}

string GroupInfoMember::GetClientId() const
{
    return m_clientId;
}

void GroupInfoMember::SetClientId(const string& _clientId)
{
    m_clientId = _clientId;
    m_clientIdHasBeenSet = true;
}

bool GroupInfoMember::ClientIdHasBeenSet() const
{
    return m_clientIdHasBeenSet;
}

string GroupInfoMember::GetClientHost() const
{
    return m_clientHost;
}

void GroupInfoMember::SetClientHost(const string& _clientHost)
{
    m_clientHost = _clientHost;
    m_clientHostHasBeenSet = true;
}

bool GroupInfoMember::ClientHostHasBeenSet() const
{
    return m_clientHostHasBeenSet;
}

Assignment GroupInfoMember::GetAssignment() const
{
    return m_assignment;
}

void GroupInfoMember::SetAssignment(const Assignment& _assignment)
{
    m_assignment = _assignment;
    m_assignmentHasBeenSet = true;
}

bool GroupInfoMember::AssignmentHasBeenSet() const
{
    return m_assignmentHasBeenSet;
}

