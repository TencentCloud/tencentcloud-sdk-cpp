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

#include <tencentcloud/adp/v20260520/model/PluginSummary.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Adp::V20260520::Model;
using namespace std;

PluginSummary::PluginSummary() :
    m_operationHasBeenSet(false),
    m_pluginIdHasBeenSet(false),
    m_profileHasBeenSet(false),
    m_statisticsHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_userStateHasBeenSet(false),
    m_configHasBeenSet(false)
{
}

CoreInternalOutcome PluginSummary::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Operation") && !value["Operation"].IsNull())
    {
        if (!value["Operation"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `PluginSummary.Operation` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_operation.Deserialize(value["Operation"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_operationHasBeenSet = true;
    }

    if (value.HasMember("PluginId") && !value["PluginId"].IsNull())
    {
        if (!value["PluginId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PluginSummary.PluginId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_pluginId = string(value["PluginId"].GetString());
        m_pluginIdHasBeenSet = true;
    }

    if (value.HasMember("Profile") && !value["Profile"].IsNull())
    {
        if (!value["Profile"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `PluginSummary.Profile` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_profile.Deserialize(value["Profile"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_profileHasBeenSet = true;
    }

    if (value.HasMember("Statistics") && !value["Statistics"].IsNull())
    {
        if (!value["Statistics"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `PluginSummary.Statistics` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_statistics.Deserialize(value["Statistics"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_statisticsHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PluginSummary.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("UserState") && !value["UserState"].IsNull())
    {
        if (!value["UserState"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `PluginSummary.UserState` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_userState.Deserialize(value["UserState"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_userStateHasBeenSet = true;
    }

    if (value.HasMember("Config") && !value["Config"].IsNull())
    {
        if (!value["Config"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `PluginSummary.Config` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_config.Deserialize(value["Config"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_configHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PluginSummary::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_operationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Operation";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_operation.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_pluginIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PluginId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_pluginId.c_str(), allocator).Move(), allocator);
    }

    if (m_profileHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Profile";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_profile.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_statisticsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Statistics";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_statistics.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_userStateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserState";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_userState.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_configHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Config";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_config.ToJsonObject(value[key.c_str()], allocator);
    }

}


PluginOperation PluginSummary::GetOperation() const
{
    return m_operation;
}

void PluginSummary::SetOperation(const PluginOperation& _operation)
{
    m_operation = _operation;
    m_operationHasBeenSet = true;
}

bool PluginSummary::OperationHasBeenSet() const
{
    return m_operationHasBeenSet;
}

string PluginSummary::GetPluginId() const
{
    return m_pluginId;
}

void PluginSummary::SetPluginId(const string& _pluginId)
{
    m_pluginId = _pluginId;
    m_pluginIdHasBeenSet = true;
}

bool PluginSummary::PluginIdHasBeenSet() const
{
    return m_pluginIdHasBeenSet;
}

PluginProfile PluginSummary::GetProfile() const
{
    return m_profile;
}

void PluginSummary::SetProfile(const PluginProfile& _profile)
{
    m_profile = _profile;
    m_profileHasBeenSet = true;
}

bool PluginSummary::ProfileHasBeenSet() const
{
    return m_profileHasBeenSet;
}

PluginStatistics PluginSummary::GetStatistics() const
{
    return m_statistics;
}

void PluginSummary::SetStatistics(const PluginStatistics& _statistics)
{
    m_statistics = _statistics;
    m_statisticsHasBeenSet = true;
}

bool PluginSummary::StatisticsHasBeenSet() const
{
    return m_statisticsHasBeenSet;
}

int64_t PluginSummary::GetStatus() const
{
    return m_status;
}

void PluginSummary::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool PluginSummary::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

PluginUserState PluginSummary::GetUserState() const
{
    return m_userState;
}

void PluginSummary::SetUserState(const PluginUserState& _userState)
{
    m_userState = _userState;
    m_userStateHasBeenSet = true;
}

bool PluginSummary::UserStateHasBeenSet() const
{
    return m_userStateHasBeenSet;
}

PluginConfig PluginSummary::GetConfig() const
{
    return m_config;
}

void PluginSummary::SetConfig(const PluginConfig& _config)
{
    m_config = _config;
    m_configHasBeenSet = true;
}

bool PluginSummary::ConfigHasBeenSet() const
{
    return m_configHasBeenSet;
}

