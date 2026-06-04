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

#include <tencentcloud/adp/v20260520/model/Plugin.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Adp::V20260520::Model;
using namespace std;

Plugin::Plugin() :
    m_createTimeHasBeenSet(false),
    m_operationHasBeenSet(false),
    m_pluginIdHasBeenSet(false),
    m_pluginVersionHasBeenSet(false),
    m_profileHasBeenSet(false),
    m_statisticsHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_toolListHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_userStateHasBeenSet(false)
{
}

CoreInternalOutcome Plugin::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Plugin.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("Operation") && !value["Operation"].IsNull())
    {
        if (!value["Operation"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Plugin.Operation` is not object type").SetRequestId(requestId));
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
            return CoreInternalOutcome(Core::Error("response `Plugin.PluginId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_pluginId = string(value["PluginId"].GetString());
        m_pluginIdHasBeenSet = true;
    }

    if (value.HasMember("PluginVersion") && !value["PluginVersion"].IsNull())
    {
        if (!value["PluginVersion"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Plugin.PluginVersion` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_pluginVersion = value["PluginVersion"].GetInt64();
        m_pluginVersionHasBeenSet = true;
    }

    if (value.HasMember("Profile") && !value["Profile"].IsNull())
    {
        if (!value["Profile"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Plugin.Profile` is not object type").SetRequestId(requestId));
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
            return CoreInternalOutcome(Core::Error("response `Plugin.Statistics` is not object type").SetRequestId(requestId));
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
            return CoreInternalOutcome(Core::Error("response `Plugin.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("ToolList") && !value["ToolList"].IsNull())
    {
        if (!value["ToolList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Plugin.ToolList` is not array type"));

        const rapidjson::Value &tmpValue = value["ToolList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Tool item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_toolList.push_back(item);
        }
        m_toolListHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Plugin.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("UserState") && !value["UserState"].IsNull())
    {
        if (!value["UserState"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Plugin.UserState` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_userState.Deserialize(value["UserState"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_userStateHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Plugin::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

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

    if (m_pluginVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PluginVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_pluginVersion, allocator);
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

    if (m_toolListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ToolList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_toolList.begin(); itr != m_toolList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updateTime.c_str(), allocator).Move(), allocator);
    }

    if (m_userStateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserState";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_userState.ToJsonObject(value[key.c_str()], allocator);
    }

}


string Plugin::GetCreateTime() const
{
    return m_createTime;
}

void Plugin::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool Plugin::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

PluginOperation Plugin::GetOperation() const
{
    return m_operation;
}

void Plugin::SetOperation(const PluginOperation& _operation)
{
    m_operation = _operation;
    m_operationHasBeenSet = true;
}

bool Plugin::OperationHasBeenSet() const
{
    return m_operationHasBeenSet;
}

string Plugin::GetPluginId() const
{
    return m_pluginId;
}

void Plugin::SetPluginId(const string& _pluginId)
{
    m_pluginId = _pluginId;
    m_pluginIdHasBeenSet = true;
}

bool Plugin::PluginIdHasBeenSet() const
{
    return m_pluginIdHasBeenSet;
}

int64_t Plugin::GetPluginVersion() const
{
    return m_pluginVersion;
}

void Plugin::SetPluginVersion(const int64_t& _pluginVersion)
{
    m_pluginVersion = _pluginVersion;
    m_pluginVersionHasBeenSet = true;
}

bool Plugin::PluginVersionHasBeenSet() const
{
    return m_pluginVersionHasBeenSet;
}

PluginProfile Plugin::GetProfile() const
{
    return m_profile;
}

void Plugin::SetProfile(const PluginProfile& _profile)
{
    m_profile = _profile;
    m_profileHasBeenSet = true;
}

bool Plugin::ProfileHasBeenSet() const
{
    return m_profileHasBeenSet;
}

PluginStatistics Plugin::GetStatistics() const
{
    return m_statistics;
}

void Plugin::SetStatistics(const PluginStatistics& _statistics)
{
    m_statistics = _statistics;
    m_statisticsHasBeenSet = true;
}

bool Plugin::StatisticsHasBeenSet() const
{
    return m_statisticsHasBeenSet;
}

int64_t Plugin::GetStatus() const
{
    return m_status;
}

void Plugin::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool Plugin::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

vector<Tool> Plugin::GetToolList() const
{
    return m_toolList;
}

void Plugin::SetToolList(const vector<Tool>& _toolList)
{
    m_toolList = _toolList;
    m_toolListHasBeenSet = true;
}

bool Plugin::ToolListHasBeenSet() const
{
    return m_toolListHasBeenSet;
}

string Plugin::GetUpdateTime() const
{
    return m_updateTime;
}

void Plugin::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool Plugin::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

PluginUserState Plugin::GetUserState() const
{
    return m_userState;
}

void Plugin::SetUserState(const PluginUserState& _userState)
{
    m_userState = _userState;
    m_userStateHasBeenSet = true;
}

bool Plugin::UserStateHasBeenSet() const
{
    return m_userStateHasBeenSet;
}

