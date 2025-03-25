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

#include <tencentcloud/vcube/v20220410/model/XMagicTrial.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vcube::V20220410::Model;
using namespace std;

XMagicTrial::XMagicTrial() :
    m_nameHasBeenSet(false),
    m_trialCountHasBeenSet(false),
    m_durationHasBeenSet(false),
    m_planHasBeenSet(false),
    m_xMagicTypeHasBeenSet(false),
    m_bizTypeHasBeenSet(false)
{
}

CoreInternalOutcome XMagicTrial::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `XMagicTrial.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("TrialCount") && !value["TrialCount"].IsNull())
    {
        if (!value["TrialCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `XMagicTrial.TrialCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_trialCount = value["TrialCount"].GetUint64();
        m_trialCountHasBeenSet = true;
    }

    if (value.HasMember("Duration") && !value["Duration"].IsNull())
    {
        if (!value["Duration"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `XMagicTrial.Duration` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_duration = value["Duration"].GetUint64();
        m_durationHasBeenSet = true;
    }

    if (value.HasMember("Plan") && !value["Plan"].IsNull())
    {
        if (!value["Plan"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `XMagicTrial.Plan` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_plan = string(value["Plan"].GetString());
        m_planHasBeenSet = true;
    }

    if (value.HasMember("XMagicType") && !value["XMagicType"].IsNull())
    {
        if (!value["XMagicType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `XMagicTrial.XMagicType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_xMagicType = string(value["XMagicType"].GetString());
        m_xMagicTypeHasBeenSet = true;
    }

    if (value.HasMember("BizType") && !value["BizType"].IsNull())
    {
        if (!value["BizType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `XMagicTrial.BizType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bizType = string(value["BizType"].GetString());
        m_bizTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void XMagicTrial::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_bizTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BizType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_bizType.c_str(), allocator).Move(), allocator);
    }

}


string XMagicTrial::GetName() const
{
    return m_name;
}

void XMagicTrial::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool XMagicTrial::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

uint64_t XMagicTrial::GetTrialCount() const
{
    return m_trialCount;
}

void XMagicTrial::SetTrialCount(const uint64_t& _trialCount)
{
    m_trialCount = _trialCount;
    m_trialCountHasBeenSet = true;
}

bool XMagicTrial::TrialCountHasBeenSet() const
{
    return m_trialCountHasBeenSet;
}

uint64_t XMagicTrial::GetDuration() const
{
    return m_duration;
}

void XMagicTrial::SetDuration(const uint64_t& _duration)
{
    m_duration = _duration;
    m_durationHasBeenSet = true;
}

bool XMagicTrial::DurationHasBeenSet() const
{
    return m_durationHasBeenSet;
}

string XMagicTrial::GetPlan() const
{
    return m_plan;
}

void XMagicTrial::SetPlan(const string& _plan)
{
    m_plan = _plan;
    m_planHasBeenSet = true;
}

bool XMagicTrial::PlanHasBeenSet() const
{
    return m_planHasBeenSet;
}

string XMagicTrial::GetXMagicType() const
{
    return m_xMagicType;
}

void XMagicTrial::SetXMagicType(const string& _xMagicType)
{
    m_xMagicType = _xMagicType;
    m_xMagicTypeHasBeenSet = true;
}

bool XMagicTrial::XMagicTypeHasBeenSet() const
{
    return m_xMagicTypeHasBeenSet;
}

string XMagicTrial::GetBizType() const
{
    return m_bizType;
}

void XMagicTrial::SetBizType(const string& _bizType)
{
    m_bizType = _bizType;
    m_bizTypeHasBeenSet = true;
}

bool XMagicTrial::BizTypeHasBeenSet() const
{
    return m_bizTypeHasBeenSet;
}

