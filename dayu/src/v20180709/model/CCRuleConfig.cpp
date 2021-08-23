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

#include <tencentcloud/dayu/v20180709/model/CCRuleConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dayu::V20180709::Model;
using namespace std;

CCRuleConfig::CCRuleConfig() :
    m_periodHasBeenSet(false),
    m_reqNumberHasBeenSet(false),
    m_actionHasBeenSet(false),
    m_exeDurationHasBeenSet(false)
{
}

CoreInternalOutcome CCRuleConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Period") && !value["Period"].IsNull())
    {
        if (!value["Period"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CCRuleConfig.Period` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_period = value["Period"].GetUint64();
        m_periodHasBeenSet = true;
    }

    if (value.HasMember("ReqNumber") && !value["ReqNumber"].IsNull())
    {
        if (!value["ReqNumber"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CCRuleConfig.ReqNumber` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_reqNumber = value["ReqNumber"].GetUint64();
        m_reqNumberHasBeenSet = true;
    }

    if (value.HasMember("Action") && !value["Action"].IsNull())
    {
        if (!value["Action"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CCRuleConfig.Action` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_action = string(value["Action"].GetString());
        m_actionHasBeenSet = true;
    }

    if (value.HasMember("ExeDuration") && !value["ExeDuration"].IsNull())
    {
        if (!value["ExeDuration"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CCRuleConfig.ExeDuration` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_exeDuration = value["ExeDuration"].GetUint64();
        m_exeDurationHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CCRuleConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_periodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Period";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_period, allocator);
    }

    if (m_reqNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReqNumber";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_reqNumber, allocator);
    }

    if (m_actionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Action";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_action.c_str(), allocator).Move(), allocator);
    }

    if (m_exeDurationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExeDuration";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_exeDuration, allocator);
    }

}


uint64_t CCRuleConfig::GetPeriod() const
{
    return m_period;
}

void CCRuleConfig::SetPeriod(const uint64_t& _period)
{
    m_period = _period;
    m_periodHasBeenSet = true;
}

bool CCRuleConfig::PeriodHasBeenSet() const
{
    return m_periodHasBeenSet;
}

uint64_t CCRuleConfig::GetReqNumber() const
{
    return m_reqNumber;
}

void CCRuleConfig::SetReqNumber(const uint64_t& _reqNumber)
{
    m_reqNumber = _reqNumber;
    m_reqNumberHasBeenSet = true;
}

bool CCRuleConfig::ReqNumberHasBeenSet() const
{
    return m_reqNumberHasBeenSet;
}

string CCRuleConfig::GetAction() const
{
    return m_action;
}

void CCRuleConfig::SetAction(const string& _action)
{
    m_action = _action;
    m_actionHasBeenSet = true;
}

bool CCRuleConfig::ActionHasBeenSet() const
{
    return m_actionHasBeenSet;
}

uint64_t CCRuleConfig::GetExeDuration() const
{
    return m_exeDuration;
}

void CCRuleConfig::SetExeDuration(const uint64_t& _exeDuration)
{
    m_exeDuration = _exeDuration;
    m_exeDurationHasBeenSet = true;
}

bool CCRuleConfig::ExeDurationHasBeenSet() const
{
    return m_exeDurationHasBeenSet;
}

