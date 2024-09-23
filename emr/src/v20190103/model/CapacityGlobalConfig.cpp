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

#include <tencentcloud/emr/v20190103/model/CapacityGlobalConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Emr::V20190103::Model;
using namespace std;

CapacityGlobalConfig::CapacityGlobalConfig() :
    m_enableLabelHasBeenSet(false),
    m_labelDirHasBeenSet(false),
    m_queueMappingOverrideHasBeenSet(false),
    m_defaultSettingsHasBeenSet(false)
{
}

CoreInternalOutcome CapacityGlobalConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("EnableLabel") && !value["EnableLabel"].IsNull())
    {
        if (!value["EnableLabel"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `CapacityGlobalConfig.EnableLabel` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_enableLabel = value["EnableLabel"].GetBool();
        m_enableLabelHasBeenSet = true;
    }

    if (value.HasMember("LabelDir") && !value["LabelDir"].IsNull())
    {
        if (!value["LabelDir"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CapacityGlobalConfig.LabelDir` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_labelDir = string(value["LabelDir"].GetString());
        m_labelDirHasBeenSet = true;
    }

    if (value.HasMember("QueueMappingOverride") && !value["QueueMappingOverride"].IsNull())
    {
        if (!value["QueueMappingOverride"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `CapacityGlobalConfig.QueueMappingOverride` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_queueMappingOverride = value["QueueMappingOverride"].GetBool();
        m_queueMappingOverrideHasBeenSet = true;
    }

    if (value.HasMember("DefaultSettings") && !value["DefaultSettings"].IsNull())
    {
        if (!value["DefaultSettings"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CapacityGlobalConfig.DefaultSettings` is not array type"));

        const rapidjson::Value &tmpValue = value["DefaultSettings"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            DefaultSetting item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_defaultSettings.push_back(item);
        }
        m_defaultSettingsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CapacityGlobalConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_enableLabelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableLabel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enableLabel, allocator);
    }

    if (m_labelDirHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LabelDir";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_labelDir.c_str(), allocator).Move(), allocator);
    }

    if (m_queueMappingOverrideHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QueueMappingOverride";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_queueMappingOverride, allocator);
    }

    if (m_defaultSettingsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DefaultSettings";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_defaultSettings.begin(); itr != m_defaultSettings.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


bool CapacityGlobalConfig::GetEnableLabel() const
{
    return m_enableLabel;
}

void CapacityGlobalConfig::SetEnableLabel(const bool& _enableLabel)
{
    m_enableLabel = _enableLabel;
    m_enableLabelHasBeenSet = true;
}

bool CapacityGlobalConfig::EnableLabelHasBeenSet() const
{
    return m_enableLabelHasBeenSet;
}

string CapacityGlobalConfig::GetLabelDir() const
{
    return m_labelDir;
}

void CapacityGlobalConfig::SetLabelDir(const string& _labelDir)
{
    m_labelDir = _labelDir;
    m_labelDirHasBeenSet = true;
}

bool CapacityGlobalConfig::LabelDirHasBeenSet() const
{
    return m_labelDirHasBeenSet;
}

bool CapacityGlobalConfig::GetQueueMappingOverride() const
{
    return m_queueMappingOverride;
}

void CapacityGlobalConfig::SetQueueMappingOverride(const bool& _queueMappingOverride)
{
    m_queueMappingOverride = _queueMappingOverride;
    m_queueMappingOverrideHasBeenSet = true;
}

bool CapacityGlobalConfig::QueueMappingOverrideHasBeenSet() const
{
    return m_queueMappingOverrideHasBeenSet;
}

vector<DefaultSetting> CapacityGlobalConfig::GetDefaultSettings() const
{
    return m_defaultSettings;
}

void CapacityGlobalConfig::SetDefaultSettings(const vector<DefaultSetting>& _defaultSettings)
{
    m_defaultSettings = _defaultSettings;
    m_defaultSettingsHasBeenSet = true;
}

bool CapacityGlobalConfig::DefaultSettingsHasBeenSet() const
{
    return m_defaultSettingsHasBeenSet;
}

