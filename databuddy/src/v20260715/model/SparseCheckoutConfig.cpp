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

#include <tencentcloud/databuddy/v20260715/model/SparseCheckoutConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Databuddy::V20260715::Model;
using namespace std;

SparseCheckoutConfig::SparseCheckoutConfig() :
    m_enabledHasBeenSet(false),
    m_coneModeHasBeenSet(false),
    m_patternsHasBeenSet(false)
{
}

CoreInternalOutcome SparseCheckoutConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Enabled") && !value["Enabled"].IsNull())
    {
        if (!value["Enabled"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `SparseCheckoutConfig.Enabled` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_enabled = value["Enabled"].GetBool();
        m_enabledHasBeenSet = true;
    }

    if (value.HasMember("ConeMode") && !value["ConeMode"].IsNull())
    {
        if (!value["ConeMode"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `SparseCheckoutConfig.ConeMode` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_coneMode = value["ConeMode"].GetBool();
        m_coneModeHasBeenSet = true;
    }

    if (value.HasMember("Patterns") && !value["Patterns"].IsNull())
    {
        if (!value["Patterns"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SparseCheckoutConfig.Patterns` is not array type"));

        const rapidjson::Value &tmpValue = value["Patterns"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_patterns.push_back((*itr).GetString());
        }
        m_patternsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SparseCheckoutConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_enabledHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Enabled";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enabled, allocator);
    }

    if (m_coneModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConeMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_coneMode, allocator);
    }

    if (m_patternsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Patterns";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_patterns.begin(); itr != m_patterns.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


bool SparseCheckoutConfig::GetEnabled() const
{
    return m_enabled;
}

void SparseCheckoutConfig::SetEnabled(const bool& _enabled)
{
    m_enabled = _enabled;
    m_enabledHasBeenSet = true;
}

bool SparseCheckoutConfig::EnabledHasBeenSet() const
{
    return m_enabledHasBeenSet;
}

bool SparseCheckoutConfig::GetConeMode() const
{
    return m_coneMode;
}

void SparseCheckoutConfig::SetConeMode(const bool& _coneMode)
{
    m_coneMode = _coneMode;
    m_coneModeHasBeenSet = true;
}

bool SparseCheckoutConfig::ConeModeHasBeenSet() const
{
    return m_coneModeHasBeenSet;
}

vector<string> SparseCheckoutConfig::GetPatterns() const
{
    return m_patterns;
}

void SparseCheckoutConfig::SetPatterns(const vector<string>& _patterns)
{
    m_patterns = _patterns;
    m_patternsHasBeenSet = true;
}

bool SparseCheckoutConfig::PatternsHasBeenSet() const
{
    return m_patternsHasBeenSet;
}

