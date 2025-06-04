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

#include <tencentcloud/emr/v20190103/model/InspectionTaskSettings.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Emr::V20190103::Model;
using namespace std;

InspectionTaskSettings::InspectionTaskSettings() :
    m_taskTypeHasBeenSet(false),
    m_groupHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_taskSettingsHasBeenSet(false),
    m_selectedHasBeenSet(false),
    m_enableHasBeenSet(false),
    m_settingsJsonHasBeenSet(false)
{
}

CoreInternalOutcome InspectionTaskSettings::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TaskType") && !value["TaskType"].IsNull())
    {
        if (!value["TaskType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InspectionTaskSettings.TaskType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskType = string(value["TaskType"].GetString());
        m_taskTypeHasBeenSet = true;
    }

    if (value.HasMember("Group") && !value["Group"].IsNull())
    {
        if (!value["Group"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InspectionTaskSettings.Group` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_group = string(value["Group"].GetString());
        m_groupHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InspectionTaskSettings.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("TaskSettings") && !value["TaskSettings"].IsNull())
    {
        if (!value["TaskSettings"].IsArray())
            return CoreInternalOutcome(Core::Error("response `InspectionTaskSettings.TaskSettings` is not array type"));

        const rapidjson::Value &tmpValue = value["TaskSettings"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            TaskSettings item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_taskSettings.push_back(item);
        }
        m_taskSettingsHasBeenSet = true;
    }

    if (value.HasMember("Selected") && !value["Selected"].IsNull())
    {
        if (!value["Selected"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InspectionTaskSettings.Selected` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_selected = string(value["Selected"].GetString());
        m_selectedHasBeenSet = true;
    }

    if (value.HasMember("Enable") && !value["Enable"].IsNull())
    {
        if (!value["Enable"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InspectionTaskSettings.Enable` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_enable = string(value["Enable"].GetString());
        m_enableHasBeenSet = true;
    }

    if (value.HasMember("SettingsJson") && !value["SettingsJson"].IsNull())
    {
        if (!value["SettingsJson"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InspectionTaskSettings.SettingsJson` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_settingsJson = string(value["SettingsJson"].GetString());
        m_settingsJsonHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void InspectionTaskSettings::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_taskTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskType.c_str(), allocator).Move(), allocator);
    }

    if (m_groupHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Group";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_group.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_taskSettingsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskSettings";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_taskSettings.begin(); itr != m_taskSettings.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_selectedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Selected";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_selected.c_str(), allocator).Move(), allocator);
    }

    if (m_enableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Enable";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_enable.c_str(), allocator).Move(), allocator);
    }

    if (m_settingsJsonHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SettingsJson";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_settingsJson.c_str(), allocator).Move(), allocator);
    }

}


string InspectionTaskSettings::GetTaskType() const
{
    return m_taskType;
}

void InspectionTaskSettings::SetTaskType(const string& _taskType)
{
    m_taskType = _taskType;
    m_taskTypeHasBeenSet = true;
}

bool InspectionTaskSettings::TaskTypeHasBeenSet() const
{
    return m_taskTypeHasBeenSet;
}

string InspectionTaskSettings::GetGroup() const
{
    return m_group;
}

void InspectionTaskSettings::SetGroup(const string& _group)
{
    m_group = _group;
    m_groupHasBeenSet = true;
}

bool InspectionTaskSettings::GroupHasBeenSet() const
{
    return m_groupHasBeenSet;
}

string InspectionTaskSettings::GetName() const
{
    return m_name;
}

void InspectionTaskSettings::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool InspectionTaskSettings::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

vector<TaskSettings> InspectionTaskSettings::GetTaskSettings() const
{
    return m_taskSettings;
}

void InspectionTaskSettings::SetTaskSettings(const vector<TaskSettings>& _taskSettings)
{
    m_taskSettings = _taskSettings;
    m_taskSettingsHasBeenSet = true;
}

bool InspectionTaskSettings::TaskSettingsHasBeenSet() const
{
    return m_taskSettingsHasBeenSet;
}

string InspectionTaskSettings::GetSelected() const
{
    return m_selected;
}

void InspectionTaskSettings::SetSelected(const string& _selected)
{
    m_selected = _selected;
    m_selectedHasBeenSet = true;
}

bool InspectionTaskSettings::SelectedHasBeenSet() const
{
    return m_selectedHasBeenSet;
}

string InspectionTaskSettings::GetEnable() const
{
    return m_enable;
}

void InspectionTaskSettings::SetEnable(const string& _enable)
{
    m_enable = _enable;
    m_enableHasBeenSet = true;
}

bool InspectionTaskSettings::EnableHasBeenSet() const
{
    return m_enableHasBeenSet;
}

string InspectionTaskSettings::GetSettingsJson() const
{
    return m_settingsJson;
}

void InspectionTaskSettings::SetSettingsJson(const string& _settingsJson)
{
    m_settingsJson = _settingsJson;
    m_settingsJsonHasBeenSet = true;
}

bool InspectionTaskSettings::SettingsJsonHasBeenSet() const
{
    return m_settingsJsonHasBeenSet;
}

