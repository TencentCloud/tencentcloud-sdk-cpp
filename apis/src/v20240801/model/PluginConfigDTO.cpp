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

#include <tencentcloud/apis/v20240801/model/PluginConfigDTO.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Apis::V20240801::Model;
using namespace std;

PluginConfigDTO::PluginConfigDTO() :
    m_statusHasBeenSet(false),
    m_pluginNameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_pluginIDHasBeenSet(false),
    m_levelHasBeenSet(false),
    m_pluginFormValuesHasBeenSet(false)
{
}

CoreInternalOutcome PluginConfigDTO::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `PluginConfigDTO.Status` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetBool();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("PluginName") && !value["PluginName"].IsNull())
    {
        if (!value["PluginName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PluginConfigDTO.PluginName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_pluginName = string(value["PluginName"].GetString());
        m_pluginNameHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PluginConfigDTO.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("PluginID") && !value["PluginID"].IsNull())
    {
        if (!value["PluginID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PluginConfigDTO.PluginID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_pluginID = string(value["PluginID"].GetString());
        m_pluginIDHasBeenSet = true;
    }

    if (value.HasMember("Level") && !value["Level"].IsNull())
    {
        if (!value["Level"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PluginConfigDTO.Level` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_level = value["Level"].GetInt64();
        m_levelHasBeenSet = true;
    }

    if (value.HasMember("PluginFormValues") && !value["PluginFormValues"].IsNull())
    {
        if (!value["PluginFormValues"].IsArray())
            return CoreInternalOutcome(Core::Error("response `PluginConfigDTO.PluginFormValues` is not array type"));

        const rapidjson::Value &tmpValue = value["PluginFormValues"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            PluginFormValueDTO item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_pluginFormValues.push_back(item);
        }
        m_pluginFormValuesHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PluginConfigDTO::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_pluginNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PluginName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_pluginName.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_pluginIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PluginID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_pluginID.c_str(), allocator).Move(), allocator);
    }

    if (m_levelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Level";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_level, allocator);
    }

    if (m_pluginFormValuesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PluginFormValues";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_pluginFormValues.begin(); itr != m_pluginFormValues.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


bool PluginConfigDTO::GetStatus() const
{
    return m_status;
}

void PluginConfigDTO::SetStatus(const bool& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool PluginConfigDTO::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string PluginConfigDTO::GetPluginName() const
{
    return m_pluginName;
}

void PluginConfigDTO::SetPluginName(const string& _pluginName)
{
    m_pluginName = _pluginName;
    m_pluginNameHasBeenSet = true;
}

bool PluginConfigDTO::PluginNameHasBeenSet() const
{
    return m_pluginNameHasBeenSet;
}

string PluginConfigDTO::GetDescription() const
{
    return m_description;
}

void PluginConfigDTO::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool PluginConfigDTO::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string PluginConfigDTO::GetPluginID() const
{
    return m_pluginID;
}

void PluginConfigDTO::SetPluginID(const string& _pluginID)
{
    m_pluginID = _pluginID;
    m_pluginIDHasBeenSet = true;
}

bool PluginConfigDTO::PluginIDHasBeenSet() const
{
    return m_pluginIDHasBeenSet;
}

int64_t PluginConfigDTO::GetLevel() const
{
    return m_level;
}

void PluginConfigDTO::SetLevel(const int64_t& _level)
{
    m_level = _level;
    m_levelHasBeenSet = true;
}

bool PluginConfigDTO::LevelHasBeenSet() const
{
    return m_levelHasBeenSet;
}

vector<PluginFormValueDTO> PluginConfigDTO::GetPluginFormValues() const
{
    return m_pluginFormValues;
}

void PluginConfigDTO::SetPluginFormValues(const vector<PluginFormValueDTO>& _pluginFormValues)
{
    m_pluginFormValues = _pluginFormValues;
    m_pluginFormValuesHasBeenSet = true;
}

bool PluginConfigDTO::PluginFormValuesHasBeenSet() const
{
    return m_pluginFormValuesHasBeenSet;
}

