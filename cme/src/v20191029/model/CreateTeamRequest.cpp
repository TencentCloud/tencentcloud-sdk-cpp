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

#include <tencentcloud/cme/v20191029/model/CreateTeamRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cme::V20191029::Model;
using namespace std;

CreateTeamRequest::CreateTeamRequest() :
    m_platformHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_ownerIdHasBeenSet(false),
    m_ownerRemarkHasBeenSet(false),
    m_teamIdHasBeenSet(false)
{
}

string CreateTeamRequest::ToJsonString() const
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

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_ownerIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OwnerId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_ownerId.c_str(), allocator).Move(), allocator);
    }

    if (m_ownerRemarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OwnerRemark";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_ownerRemark.c_str(), allocator).Move(), allocator);
    }

    if (m_teamIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TeamId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_teamId.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateTeamRequest::GetPlatform() const
{
    return m_platform;
}

void CreateTeamRequest::SetPlatform(const string& _platform)
{
    m_platform = _platform;
    m_platformHasBeenSet = true;
}

bool CreateTeamRequest::PlatformHasBeenSet() const
{
    return m_platformHasBeenSet;
}

string CreateTeamRequest::GetName() const
{
    return m_name;
}

void CreateTeamRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool CreateTeamRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string CreateTeamRequest::GetOwnerId() const
{
    return m_ownerId;
}

void CreateTeamRequest::SetOwnerId(const string& _ownerId)
{
    m_ownerId = _ownerId;
    m_ownerIdHasBeenSet = true;
}

bool CreateTeamRequest::OwnerIdHasBeenSet() const
{
    return m_ownerIdHasBeenSet;
}

string CreateTeamRequest::GetOwnerRemark() const
{
    return m_ownerRemark;
}

void CreateTeamRequest::SetOwnerRemark(const string& _ownerRemark)
{
    m_ownerRemark = _ownerRemark;
    m_ownerRemarkHasBeenSet = true;
}

bool CreateTeamRequest::OwnerRemarkHasBeenSet() const
{
    return m_ownerRemarkHasBeenSet;
}

string CreateTeamRequest::GetTeamId() const
{
    return m_teamId;
}

void CreateTeamRequest::SetTeamId(const string& _teamId)
{
    m_teamId = _teamId;
    m_teamIdHasBeenSet = true;
}

bool CreateTeamRequest::TeamIdHasBeenSet() const
{
    return m_teamIdHasBeenSet;
}


