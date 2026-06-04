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

#include <tencentcloud/adp/v20260520/model/AppMemoryConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Adp::V20260520::Model;
using namespace std;

AppMemoryConfig::AppMemoryConfig() :
    m_enabledHasBeenSet(false),
    m_longMemoryDayHasBeenSet(false),
    m_modelHasBeenSet(false),
    m_promptContentHasBeenSet(false),
    m_promptModeHasBeenSet(false)
{
}

CoreInternalOutcome AppMemoryConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Enabled") && !value["Enabled"].IsNull())
    {
        if (!value["Enabled"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `AppMemoryConfig.Enabled` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_enabled = value["Enabled"].GetBool();
        m_enabledHasBeenSet = true;
    }

    if (value.HasMember("LongMemoryDay") && !value["LongMemoryDay"].IsNull())
    {
        if (!value["LongMemoryDay"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AppMemoryConfig.LongMemoryDay` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_longMemoryDay = value["LongMemoryDay"].GetUint64();
        m_longMemoryDayHasBeenSet = true;
    }

    if (value.HasMember("Model") && !value["Model"].IsNull())
    {
        if (!value["Model"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AppMemoryConfig.Model` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_model.Deserialize(value["Model"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_modelHasBeenSet = true;
    }

    if (value.HasMember("PromptContent") && !value["PromptContent"].IsNull())
    {
        if (!value["PromptContent"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AppMemoryConfig.PromptContent` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_promptContent = string(value["PromptContent"].GetString());
        m_promptContentHasBeenSet = true;
    }

    if (value.HasMember("PromptMode") && !value["PromptMode"].IsNull())
    {
        if (!value["PromptMode"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AppMemoryConfig.PromptMode` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_promptMode = value["PromptMode"].GetInt64();
        m_promptModeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AppMemoryConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_enabledHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Enabled";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enabled, allocator);
    }

    if (m_longMemoryDayHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LongMemoryDay";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_longMemoryDay, allocator);
    }

    if (m_modelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Model";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_model.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_promptContentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PromptContent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_promptContent.c_str(), allocator).Move(), allocator);
    }

    if (m_promptModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PromptMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_promptMode, allocator);
    }

}


bool AppMemoryConfig::GetEnabled() const
{
    return m_enabled;
}

void AppMemoryConfig::SetEnabled(const bool& _enabled)
{
    m_enabled = _enabled;
    m_enabledHasBeenSet = true;
}

bool AppMemoryConfig::EnabledHasBeenSet() const
{
    return m_enabledHasBeenSet;
}

uint64_t AppMemoryConfig::GetLongMemoryDay() const
{
    return m_longMemoryDay;
}

void AppMemoryConfig::SetLongMemoryDay(const uint64_t& _longMemoryDay)
{
    m_longMemoryDay = _longMemoryDay;
    m_longMemoryDayHasBeenSet = true;
}

bool AppMemoryConfig::LongMemoryDayHasBeenSet() const
{
    return m_longMemoryDayHasBeenSet;
}

ModelDetailInfo AppMemoryConfig::GetModel() const
{
    return m_model;
}

void AppMemoryConfig::SetModel(const ModelDetailInfo& _model)
{
    m_model = _model;
    m_modelHasBeenSet = true;
}

bool AppMemoryConfig::ModelHasBeenSet() const
{
    return m_modelHasBeenSet;
}

string AppMemoryConfig::GetPromptContent() const
{
    return m_promptContent;
}

void AppMemoryConfig::SetPromptContent(const string& _promptContent)
{
    m_promptContent = _promptContent;
    m_promptContentHasBeenSet = true;
}

bool AppMemoryConfig::PromptContentHasBeenSet() const
{
    return m_promptContentHasBeenSet;
}

int64_t AppMemoryConfig::GetPromptMode() const
{
    return m_promptMode;
}

void AppMemoryConfig::SetPromptMode(const int64_t& _promptMode)
{
    m_promptMode = _promptMode;
    m_promptModeHasBeenSet = true;
}

bool AppMemoryConfig::PromptModeHasBeenSet() const
{
    return m_promptModeHasBeenSet;
}

