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

#include <tencentcloud/organization/v20210331/model/RoleConfiguration.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Organization::V20210331::Model;
using namespace std;

RoleConfiguration::RoleConfiguration() :
    m_roleConfigurationIdHasBeenSet(false),
    m_roleConfigurationNameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_sessionDurationHasBeenSet(false),
    m_relayStateHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_isSelectedHasBeenSet(false)
{
}

CoreInternalOutcome RoleConfiguration::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RoleConfigurationId") && !value["RoleConfigurationId"].IsNull())
    {
        if (!value["RoleConfigurationId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RoleConfiguration.RoleConfigurationId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_roleConfigurationId = string(value["RoleConfigurationId"].GetString());
        m_roleConfigurationIdHasBeenSet = true;
    }

    if (value.HasMember("RoleConfigurationName") && !value["RoleConfigurationName"].IsNull())
    {
        if (!value["RoleConfigurationName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RoleConfiguration.RoleConfigurationName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_roleConfigurationName = string(value["RoleConfigurationName"].GetString());
        m_roleConfigurationNameHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RoleConfiguration.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("SessionDuration") && !value["SessionDuration"].IsNull())
    {
        if (!value["SessionDuration"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RoleConfiguration.SessionDuration` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_sessionDuration = value["SessionDuration"].GetInt64();
        m_sessionDurationHasBeenSet = true;
    }

    if (value.HasMember("RelayState") && !value["RelayState"].IsNull())
    {
        if (!value["RelayState"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RoleConfiguration.RelayState` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_relayState = string(value["RelayState"].GetString());
        m_relayStateHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RoleConfiguration.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RoleConfiguration.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("IsSelected") && !value["IsSelected"].IsNull())
    {
        if (!value["IsSelected"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `RoleConfiguration.IsSelected` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isSelected = value["IsSelected"].GetBool();
        m_isSelectedHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RoleConfiguration::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_roleConfigurationIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RoleConfigurationId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_roleConfigurationId.c_str(), allocator).Move(), allocator);
    }

    if (m_roleConfigurationNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RoleConfigurationName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_roleConfigurationName.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_sessionDurationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SessionDuration";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sessionDuration, allocator);
    }

    if (m_relayStateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RelayState";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_relayState.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updateTime.c_str(), allocator).Move(), allocator);
    }

    if (m_isSelectedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsSelected";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isSelected, allocator);
    }

}


string RoleConfiguration::GetRoleConfigurationId() const
{
    return m_roleConfigurationId;
}

void RoleConfiguration::SetRoleConfigurationId(const string& _roleConfigurationId)
{
    m_roleConfigurationId = _roleConfigurationId;
    m_roleConfigurationIdHasBeenSet = true;
}

bool RoleConfiguration::RoleConfigurationIdHasBeenSet() const
{
    return m_roleConfigurationIdHasBeenSet;
}

string RoleConfiguration::GetRoleConfigurationName() const
{
    return m_roleConfigurationName;
}

void RoleConfiguration::SetRoleConfigurationName(const string& _roleConfigurationName)
{
    m_roleConfigurationName = _roleConfigurationName;
    m_roleConfigurationNameHasBeenSet = true;
}

bool RoleConfiguration::RoleConfigurationNameHasBeenSet() const
{
    return m_roleConfigurationNameHasBeenSet;
}

string RoleConfiguration::GetDescription() const
{
    return m_description;
}

void RoleConfiguration::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool RoleConfiguration::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

int64_t RoleConfiguration::GetSessionDuration() const
{
    return m_sessionDuration;
}

void RoleConfiguration::SetSessionDuration(const int64_t& _sessionDuration)
{
    m_sessionDuration = _sessionDuration;
    m_sessionDurationHasBeenSet = true;
}

bool RoleConfiguration::SessionDurationHasBeenSet() const
{
    return m_sessionDurationHasBeenSet;
}

string RoleConfiguration::GetRelayState() const
{
    return m_relayState;
}

void RoleConfiguration::SetRelayState(const string& _relayState)
{
    m_relayState = _relayState;
    m_relayStateHasBeenSet = true;
}

bool RoleConfiguration::RelayStateHasBeenSet() const
{
    return m_relayStateHasBeenSet;
}

string RoleConfiguration::GetCreateTime() const
{
    return m_createTime;
}

void RoleConfiguration::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool RoleConfiguration::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string RoleConfiguration::GetUpdateTime() const
{
    return m_updateTime;
}

void RoleConfiguration::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool RoleConfiguration::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

bool RoleConfiguration::GetIsSelected() const
{
    return m_isSelected;
}

void RoleConfiguration::SetIsSelected(const bool& _isSelected)
{
    m_isSelected = _isSelected;
    m_isSelectedHasBeenSet = true;
}

bool RoleConfiguration::IsSelectedHasBeenSet() const
{
    return m_isSelectedHasBeenSet;
}

