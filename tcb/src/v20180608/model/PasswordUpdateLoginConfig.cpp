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

#include <tencentcloud/tcb/v20180608/model/PasswordUpdateLoginConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcb::V20180608::Model;
using namespace std;

PasswordUpdateLoginConfig::PasswordUpdateLoginConfig() :
    m_firstLoginUpdateHasBeenSet(false),
    m_periodUpdateHasBeenSet(false),
    m_periodValueHasBeenSet(false),
    m_periodTypeHasBeenSet(false)
{
}

CoreInternalOutcome PasswordUpdateLoginConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("FirstLoginUpdate") && !value["FirstLoginUpdate"].IsNull())
    {
        if (!value["FirstLoginUpdate"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `PasswordUpdateLoginConfig.FirstLoginUpdate` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_firstLoginUpdate = value["FirstLoginUpdate"].GetBool();
        m_firstLoginUpdateHasBeenSet = true;
    }

    if (value.HasMember("PeriodUpdate") && !value["PeriodUpdate"].IsNull())
    {
        if (!value["PeriodUpdate"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `PasswordUpdateLoginConfig.PeriodUpdate` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_periodUpdate = value["PeriodUpdate"].GetBool();
        m_periodUpdateHasBeenSet = true;
    }

    if (value.HasMember("PeriodValue") && !value["PeriodValue"].IsNull())
    {
        if (!value["PeriodValue"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PasswordUpdateLoginConfig.PeriodValue` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_periodValue = value["PeriodValue"].GetInt64();
        m_periodValueHasBeenSet = true;
    }

    if (value.HasMember("PeriodType") && !value["PeriodType"].IsNull())
    {
        if (!value["PeriodType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PasswordUpdateLoginConfig.PeriodType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_periodType = string(value["PeriodType"].GetString());
        m_periodTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PasswordUpdateLoginConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_firstLoginUpdateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FirstLoginUpdate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_firstLoginUpdate, allocator);
    }

    if (m_periodUpdateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PeriodUpdate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_periodUpdate, allocator);
    }

    if (m_periodValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PeriodValue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_periodValue, allocator);
    }

    if (m_periodTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PeriodType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_periodType.c_str(), allocator).Move(), allocator);
    }

}


bool PasswordUpdateLoginConfig::GetFirstLoginUpdate() const
{
    return m_firstLoginUpdate;
}

void PasswordUpdateLoginConfig::SetFirstLoginUpdate(const bool& _firstLoginUpdate)
{
    m_firstLoginUpdate = _firstLoginUpdate;
    m_firstLoginUpdateHasBeenSet = true;
}

bool PasswordUpdateLoginConfig::FirstLoginUpdateHasBeenSet() const
{
    return m_firstLoginUpdateHasBeenSet;
}

bool PasswordUpdateLoginConfig::GetPeriodUpdate() const
{
    return m_periodUpdate;
}

void PasswordUpdateLoginConfig::SetPeriodUpdate(const bool& _periodUpdate)
{
    m_periodUpdate = _periodUpdate;
    m_periodUpdateHasBeenSet = true;
}

bool PasswordUpdateLoginConfig::PeriodUpdateHasBeenSet() const
{
    return m_periodUpdateHasBeenSet;
}

int64_t PasswordUpdateLoginConfig::GetPeriodValue() const
{
    return m_periodValue;
}

void PasswordUpdateLoginConfig::SetPeriodValue(const int64_t& _periodValue)
{
    m_periodValue = _periodValue;
    m_periodValueHasBeenSet = true;
}

bool PasswordUpdateLoginConfig::PeriodValueHasBeenSet() const
{
    return m_periodValueHasBeenSet;
}

string PasswordUpdateLoginConfig::GetPeriodType() const
{
    return m_periodType;
}

void PasswordUpdateLoginConfig::SetPeriodType(const string& _periodType)
{
    m_periodType = _periodType;
    m_periodTypeHasBeenSet = true;
}

bool PasswordUpdateLoginConfig::PeriodTypeHasBeenSet() const
{
    return m_periodTypeHasBeenSet;
}

