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

#include <tencentcloud/cme/v20191029/model/AddTeamMemberRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cme::V20191029::Model;
using namespace std;

AddTeamMemberRequest::AddTeamMemberRequest() :
    m_platformHasBeenSet(false),
    m_teamIdHasBeenSet(false),
    m_teamMembersHasBeenSet(false),
    m_operatorHasBeenSet(false)
{
}

string AddTeamMemberRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_platformHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Platform";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_platform.c_str(), allocator).Move(), allocator);
    }

    if (m_teamIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TeamId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_teamId.c_str(), allocator).Move(), allocator);
    }

    if (m_teamMembersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TeamMembers";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_teamMembers.begin(); itr != m_teamMembers.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_operatorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Operator";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_operator.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string AddTeamMemberRequest::GetPlatform() const
{
    return m_platform;
}

void AddTeamMemberRequest::SetPlatform(const string& _platform)
{
    m_platform = _platform;
    m_platformHasBeenSet = true;
}

bool AddTeamMemberRequest::PlatformHasBeenSet() const
{
    return m_platformHasBeenSet;
}

string AddTeamMemberRequest::GetTeamId() const
{
    return m_teamId;
}

void AddTeamMemberRequest::SetTeamId(const string& _teamId)
{
    m_teamId = _teamId;
    m_teamIdHasBeenSet = true;
}

bool AddTeamMemberRequest::TeamIdHasBeenSet() const
{
    return m_teamIdHasBeenSet;
}

vector<AddMemberInfo> AddTeamMemberRequest::GetTeamMembers() const
{
    return m_teamMembers;
}

void AddTeamMemberRequest::SetTeamMembers(const vector<AddMemberInfo>& _teamMembers)
{
    m_teamMembers = _teamMembers;
    m_teamMembersHasBeenSet = true;
}

bool AddTeamMemberRequest::TeamMembersHasBeenSet() const
{
    return m_teamMembersHasBeenSet;
}

string AddTeamMemberRequest::GetOperator() const
{
    return m_operator;
}

void AddTeamMemberRequest::SetOperator(const string& _operator)
{
    m_operator = _operator;
    m_operatorHasBeenSet = true;
}

bool AddTeamMemberRequest::OperatorHasBeenSet() const
{
    return m_operatorHasBeenSet;
}


