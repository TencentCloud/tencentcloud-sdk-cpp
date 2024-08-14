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

#include <tencentcloud/organization/v20210331/model/UpdateRoleConfigurationRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Organization::V20210331::Model;
using namespace std;

UpdateRoleConfigurationRequest::UpdateRoleConfigurationRequest() :
    m_zoneIdHasBeenSet(false),
    m_roleConfigurationIdHasBeenSet(false),
    m_newDescriptionHasBeenSet(false),
    m_newSessionDurationHasBeenSet(false),
    m_newRelayStateHasBeenSet(false)
{
}

string UpdateRoleConfigurationRequest::ToJsonString() const
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

    if (m_roleConfigurationIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RoleConfigurationId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_roleConfigurationId.c_str(), allocator).Move(), allocator);
    }

    if (m_newDescriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NewDescription";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_newDescription.c_str(), allocator).Move(), allocator);
    }

    if (m_newSessionDurationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NewSessionDuration";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_newSessionDuration, allocator);
    }

    if (m_newRelayStateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NewRelayState";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_newRelayState.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string UpdateRoleConfigurationRequest::GetZoneId() const
{
    return m_zoneId;
}

void UpdateRoleConfigurationRequest::SetZoneId(const string& _zoneId)
{
    m_zoneId = _zoneId;
    m_zoneIdHasBeenSet = true;
}

bool UpdateRoleConfigurationRequest::ZoneIdHasBeenSet() const
{
    return m_zoneIdHasBeenSet;
}

string UpdateRoleConfigurationRequest::GetRoleConfigurationId() const
{
    return m_roleConfigurationId;
}

void UpdateRoleConfigurationRequest::SetRoleConfigurationId(const string& _roleConfigurationId)
{
    m_roleConfigurationId = _roleConfigurationId;
    m_roleConfigurationIdHasBeenSet = true;
}

bool UpdateRoleConfigurationRequest::RoleConfigurationIdHasBeenSet() const
{
    return m_roleConfigurationIdHasBeenSet;
}

string UpdateRoleConfigurationRequest::GetNewDescription() const
{
    return m_newDescription;
}

void UpdateRoleConfigurationRequest::SetNewDescription(const string& _newDescription)
{
    m_newDescription = _newDescription;
    m_newDescriptionHasBeenSet = true;
}

bool UpdateRoleConfigurationRequest::NewDescriptionHasBeenSet() const
{
    return m_newDescriptionHasBeenSet;
}

int64_t UpdateRoleConfigurationRequest::GetNewSessionDuration() const
{
    return m_newSessionDuration;
}

void UpdateRoleConfigurationRequest::SetNewSessionDuration(const int64_t& _newSessionDuration)
{
    m_newSessionDuration = _newSessionDuration;
    m_newSessionDurationHasBeenSet = true;
}

bool UpdateRoleConfigurationRequest::NewSessionDurationHasBeenSet() const
{
    return m_newSessionDurationHasBeenSet;
}

string UpdateRoleConfigurationRequest::GetNewRelayState() const
{
    return m_newRelayState;
}

void UpdateRoleConfigurationRequest::SetNewRelayState(const string& _newRelayState)
{
    m_newRelayState = _newRelayState;
    m_newRelayStateHasBeenSet = true;
}

bool UpdateRoleConfigurationRequest::NewRelayStateHasBeenSet() const
{
    return m_newRelayStateHasBeenSet;
}


