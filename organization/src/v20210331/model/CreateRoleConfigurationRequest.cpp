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

#include <tencentcloud/organization/v20210331/model/CreateRoleConfigurationRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Organization::V20210331::Model;
using namespace std;

CreateRoleConfigurationRequest::CreateRoleConfigurationRequest() :
    m_zoneIdHasBeenSet(false),
    m_roleConfigurationNameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_sessionDurationHasBeenSet(false),
    m_relayStateHasBeenSet(false)
{
}

string CreateRoleConfigurationRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_zoneIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ZoneId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_zoneId.c_str(), allocator).Move(), allocator);
    }

    if (m_roleConfigurationNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RoleConfigurationName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_roleConfigurationName.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_sessionDurationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SessionDuration";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_sessionDuration, allocator);
    }

    if (m_relayStateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RelayState";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_relayState.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateRoleConfigurationRequest::GetZoneId() const
{
    return m_zoneId;
}

void CreateRoleConfigurationRequest::SetZoneId(const string& _zoneId)
{
    m_zoneId = _zoneId;
    m_zoneIdHasBeenSet = true;
}

bool CreateRoleConfigurationRequest::ZoneIdHasBeenSet() const
{
    return m_zoneIdHasBeenSet;
}

string CreateRoleConfigurationRequest::GetRoleConfigurationName() const
{
    return m_roleConfigurationName;
}

void CreateRoleConfigurationRequest::SetRoleConfigurationName(const string& _roleConfigurationName)
{
    m_roleConfigurationName = _roleConfigurationName;
    m_roleConfigurationNameHasBeenSet = true;
}

bool CreateRoleConfigurationRequest::RoleConfigurationNameHasBeenSet() const
{
    return m_roleConfigurationNameHasBeenSet;
}

string CreateRoleConfigurationRequest::GetDescription() const
{
    return m_description;
}

void CreateRoleConfigurationRequest::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool CreateRoleConfigurationRequest::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

int64_t CreateRoleConfigurationRequest::GetSessionDuration() const
{
    return m_sessionDuration;
}

void CreateRoleConfigurationRequest::SetSessionDuration(const int64_t& _sessionDuration)
{
    m_sessionDuration = _sessionDuration;
    m_sessionDurationHasBeenSet = true;
}

bool CreateRoleConfigurationRequest::SessionDurationHasBeenSet() const
{
    return m_sessionDurationHasBeenSet;
}

string CreateRoleConfigurationRequest::GetRelayState() const
{
    return m_relayState;
}

void CreateRoleConfigurationRequest::SetRelayState(const string& _relayState)
{
    m_relayState = _relayState;
    m_relayStateHasBeenSet = true;
}

bool CreateRoleConfigurationRequest::RelayStateHasBeenSet() const
{
    return m_relayStateHasBeenSet;
}


