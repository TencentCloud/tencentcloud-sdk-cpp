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

#include <tencentcloud/as/v20180419/model/InstanceNameIndexSettings.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::As::V20180419::Model;
using namespace std;

InstanceNameIndexSettings::InstanceNameIndexSettings() :
    m_enabledHasBeenSet(false),
    m_beginIndexHasBeenSet(false)
{
}

CoreInternalOutcome InstanceNameIndexSettings::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Enabled") && !value["Enabled"].IsNull())
    {
        if (!value["Enabled"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceNameIndexSettings.Enabled` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_enabled = value["Enabled"].GetBool();
        m_enabledHasBeenSet = true;
    }

    if (value.HasMember("BeginIndex") && !value["BeginIndex"].IsNull())
    {
        if (!value["BeginIndex"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceNameIndexSettings.BeginIndex` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_beginIndex = value["BeginIndex"].GetInt64();
        m_beginIndexHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void InstanceNameIndexSettings::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_enabledHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Enabled";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enabled, allocator);
    }

    if (m_beginIndexHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BeginIndex";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_beginIndex, allocator);
    }

}


bool InstanceNameIndexSettings::GetEnabled() const
{
    return m_enabled;
}

void InstanceNameIndexSettings::SetEnabled(const bool& _enabled)
{
    m_enabled = _enabled;
    m_enabledHasBeenSet = true;
}

bool InstanceNameIndexSettings::EnabledHasBeenSet() const
{
    return m_enabledHasBeenSet;
}

int64_t InstanceNameIndexSettings::GetBeginIndex() const
{
    return m_beginIndex;
}

void InstanceNameIndexSettings::SetBeginIndex(const int64_t& _beginIndex)
{
    m_beginIndex = _beginIndex;
    m_beginIndexHasBeenSet = true;
}

bool InstanceNameIndexSettings::BeginIndexHasBeenSet() const
{
    return m_beginIndexHasBeenSet;
}

