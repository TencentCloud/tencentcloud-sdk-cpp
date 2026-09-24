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

#include <tencentcloud/dataagent/v20250513/model/Thinking.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dataagent::V20250513::Model;
using namespace std;

Thinking::Thinking() :
    m_modeHasBeenSet(false),
    m_defaultEnabledHasBeenSet(false),
    m_effortOptionsHasBeenSet(false),
    m_defaultEffortHasBeenSet(false)
{
}

CoreInternalOutcome Thinking::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Mode") && !value["Mode"].IsNull())
    {
        if (!value["Mode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Thinking.Mode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mode = string(value["Mode"].GetString());
        m_modeHasBeenSet = true;
    }

    if (value.HasMember("DefaultEnabled") && !value["DefaultEnabled"].IsNull())
    {
        if (!value["DefaultEnabled"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `Thinking.DefaultEnabled` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_defaultEnabled = value["DefaultEnabled"].GetBool();
        m_defaultEnabledHasBeenSet = true;
    }

    if (value.HasMember("EffortOptions") && !value["EffortOptions"].IsNull())
    {
        if (!value["EffortOptions"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Thinking.EffortOptions` is not array type"));

        const rapidjson::Value &tmpValue = value["EffortOptions"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_effortOptions.push_back((*itr).GetString());
        }
        m_effortOptionsHasBeenSet = true;
    }

    if (value.HasMember("DefaultEffort") && !value["DefaultEffort"].IsNull())
    {
        if (!value["DefaultEffort"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Thinking.DefaultEffort` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_defaultEffort = string(value["DefaultEffort"].GetString());
        m_defaultEffortHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Thinking::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_modeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Mode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_mode.c_str(), allocator).Move(), allocator);
    }

    if (m_defaultEnabledHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DefaultEnabled";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_defaultEnabled, allocator);
    }

    if (m_effortOptionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EffortOptions";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_effortOptions.begin(); itr != m_effortOptions.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_defaultEffortHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DefaultEffort";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_defaultEffort.c_str(), allocator).Move(), allocator);
    }

}


string Thinking::GetMode() const
{
    return m_mode;
}

void Thinking::SetMode(const string& _mode)
{
    m_mode = _mode;
    m_modeHasBeenSet = true;
}

bool Thinking::ModeHasBeenSet() const
{
    return m_modeHasBeenSet;
}

bool Thinking::GetDefaultEnabled() const
{
    return m_defaultEnabled;
}

void Thinking::SetDefaultEnabled(const bool& _defaultEnabled)
{
    m_defaultEnabled = _defaultEnabled;
    m_defaultEnabledHasBeenSet = true;
}

bool Thinking::DefaultEnabledHasBeenSet() const
{
    return m_defaultEnabledHasBeenSet;
}

vector<string> Thinking::GetEffortOptions() const
{
    return m_effortOptions;
}

void Thinking::SetEffortOptions(const vector<string>& _effortOptions)
{
    m_effortOptions = _effortOptions;
    m_effortOptionsHasBeenSet = true;
}

bool Thinking::EffortOptionsHasBeenSet() const
{
    return m_effortOptionsHasBeenSet;
}

string Thinking::GetDefaultEffort() const
{
    return m_defaultEffort;
}

void Thinking::SetDefaultEffort(const string& _defaultEffort)
{
    m_defaultEffort = _defaultEffort;
    m_defaultEffortHasBeenSet = true;
}

bool Thinking::DefaultEffortHasBeenSet() const
{
    return m_defaultEffortHasBeenSet;
}

