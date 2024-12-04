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

#include <tencentcloud/vcube/v20220410/model/XMagicFeature.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vcube::V20220410::Model;
using namespace std;

XMagicFeature::XMagicFeature() :
    m_nameHasBeenSet(false),
    m_trialCountHasBeenSet(false),
    m_durationHasBeenSet(false),
    m_planHasBeenSet(false),
    m_xMagicTypeHasBeenSet(false),
    m_trialHasBeenSet(false),
    m_bizTypeHasBeenSet(false)
{
}

CoreInternalOutcome XMagicFeature::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `XMagicFeature.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("TrialCount") && !value["TrialCount"].IsNull())
    {
        if (!value["TrialCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `XMagicFeature.TrialCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_trialCount = value["TrialCount"].GetUint64();
        m_trialCountHasBeenSet = true;
    }

    if (value.HasMember("Duration") && !value["Duration"].IsNull())
    {
        if (!value["Duration"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `XMagicFeature.Duration` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_duration = value["Duration"].GetUint64();
        m_durationHasBeenSet = true;
    }

    if (value.HasMember("Plan") && !value["Plan"].IsNull())
    {
        if (!value["Plan"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `XMagicFeature.Plan` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_plan = string(value["Plan"].GetString());
        m_planHasBeenSet = true;
    }

    if (value.HasMember("XMagicType") && !value["XMagicType"].IsNull())
    {
        if (!value["XMagicType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `XMagicFeature.XMagicType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_xMagicType = string(value["XMagicType"].GetString());
        m_xMagicTypeHasBeenSet = true;
    }

    if (value.HasMember("Trial") && !value["Trial"].IsNull())
    {
        if (!value["Trial"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `XMagicFeature.Trial` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_trial = value["Trial"].GetBool();
        m_trialHasBeenSet = true;
    }

    if (value.HasMember("BizType") && !value["BizType"].IsNull())
    {
        if (!value["BizType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `XMagicFeature.BizType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bizType = string(value["BizType"].GetString());
        m_bizTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void XMagicFeature::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_trialCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TrialCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_trialCount, allocator);
    }

    if (m_durationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Duration";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_duration, allocator);
    }

    if (m_planHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Plan";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_plan.c_str(), allocator).Move(), allocator);
    }

    if (m_xMagicTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "XMagicType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_xMagicType.c_str(), allocator).Move(), allocator);
    }

    if (m_trialHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Trial";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_trial, allocator);
    }

    if (m_bizTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BizType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_bizType.c_str(), allocator).Move(), allocator);
    }

}


string XMagicFeature::GetName() const
{
    return m_name;
}

void XMagicFeature::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool XMagicFeature::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

uint64_t XMagicFeature::GetTrialCount() const
{
    return m_trialCount;
}

void XMagicFeature::SetTrialCount(const uint64_t& _trialCount)
{
    m_trialCount = _trialCount;
    m_trialCountHasBeenSet = true;
}

bool XMagicFeature::TrialCountHasBeenSet() const
{
    return m_trialCountHasBeenSet;
}

uint64_t XMagicFeature::GetDuration() const
{
    return m_duration;
}

void XMagicFeature::SetDuration(const uint64_t& _duration)
{
    m_duration = _duration;
    m_durationHasBeenSet = true;
}

bool XMagicFeature::DurationHasBeenSet() const
{
    return m_durationHasBeenSet;
}

string XMagicFeature::GetPlan() const
{
    return m_plan;
}

void XMagicFeature::SetPlan(const string& _plan)
{
    m_plan = _plan;
    m_planHasBeenSet = true;
}

bool XMagicFeature::PlanHasBeenSet() const
{
    return m_planHasBeenSet;
}

string XMagicFeature::GetXMagicType() const
{
    return m_xMagicType;
}

void XMagicFeature::SetXMagicType(const string& _xMagicType)
{
    m_xMagicType = _xMagicType;
    m_xMagicTypeHasBeenSet = true;
}

bool XMagicFeature::XMagicTypeHasBeenSet() const
{
    return m_xMagicTypeHasBeenSet;
}

bool XMagicFeature::GetTrial() const
{
    return m_trial;
}

void XMagicFeature::SetTrial(const bool& _trial)
{
    m_trial = _trial;
    m_trialHasBeenSet = true;
}

bool XMagicFeature::TrialHasBeenSet() const
{
    return m_trialHasBeenSet;
}

string XMagicFeature::GetBizType() const
{
    return m_bizType;
}

void XMagicFeature::SetBizType(const string& _bizType)
{
    m_bizType = _bizType;
    m_bizTypeHasBeenSet = true;
}

bool XMagicFeature::BizTypeHasBeenSet() const
{
    return m_bizTypeHasBeenSet;
}

