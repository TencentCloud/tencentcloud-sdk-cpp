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

#include <tencentcloud/adp/v20260520/model/DocUpdatePeriod.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Adp::V20260520::Model;
using namespace std;

DocUpdatePeriod::DocUpdatePeriod() :
    m_enabledHasBeenSet(false),
    m_periodHourHasBeenSet(false)
{
}

CoreInternalOutcome DocUpdatePeriod::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Enabled") && !value["Enabled"].IsNull())
    {
        if (!value["Enabled"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `DocUpdatePeriod.Enabled` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_enabled = value["Enabled"].GetBool();
        m_enabledHasBeenSet = true;
    }

    if (value.HasMember("PeriodHour") && !value["PeriodHour"].IsNull())
    {
        if (!value["PeriodHour"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DocUpdatePeriod.PeriodHour` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_periodHour = value["PeriodHour"].GetUint64();
        m_periodHourHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DocUpdatePeriod::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_enabledHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Enabled";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enabled, allocator);
    }

    if (m_periodHourHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PeriodHour";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_periodHour, allocator);
    }

}


bool DocUpdatePeriod::GetEnabled() const
{
    return m_enabled;
}

void DocUpdatePeriod::SetEnabled(const bool& _enabled)
{
    m_enabled = _enabled;
    m_enabledHasBeenSet = true;
}

bool DocUpdatePeriod::EnabledHasBeenSet() const
{
    return m_enabledHasBeenSet;
}

uint64_t DocUpdatePeriod::GetPeriodHour() const
{
    return m_periodHour;
}

void DocUpdatePeriod::SetPeriodHour(const uint64_t& _periodHour)
{
    m_periodHour = _periodHour;
    m_periodHourHasBeenSet = true;
}

bool DocUpdatePeriod::PeriodHourHasBeenSet() const
{
    return m_periodHourHasBeenSet;
}

