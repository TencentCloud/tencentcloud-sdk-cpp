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

#include <tencentcloud/dayu/v20180709/model/L4RuleHealth.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dayu::V20180709::Model;
using namespace std;

L4RuleHealth::L4RuleHealth() :
    m_ruleIdHasBeenSet(false),
    m_enableHasBeenSet(false),
    m_timeOutHasBeenSet(false),
    m_intervalHasBeenSet(false),
    m_kickNumHasBeenSet(false),
    m_aliveNumHasBeenSet(false)
{
}

CoreInternalOutcome L4RuleHealth::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RuleId") && !value["RuleId"].IsNull())
    {
        if (!value["RuleId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `L4RuleHealth.RuleId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ruleId = string(value["RuleId"].GetString());
        m_ruleIdHasBeenSet = true;
    }

    if (value.HasMember("Enable") && !value["Enable"].IsNull())
    {
        if (!value["Enable"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `L4RuleHealth.Enable` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_enable = value["Enable"].GetUint64();
        m_enableHasBeenSet = true;
    }

    if (value.HasMember("TimeOut") && !value["TimeOut"].IsNull())
    {
        if (!value["TimeOut"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `L4RuleHealth.TimeOut` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_timeOut = value["TimeOut"].GetUint64();
        m_timeOutHasBeenSet = true;
    }

    if (value.HasMember("Interval") && !value["Interval"].IsNull())
    {
        if (!value["Interval"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `L4RuleHealth.Interval` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_interval = value["Interval"].GetUint64();
        m_intervalHasBeenSet = true;
    }

    if (value.HasMember("KickNum") && !value["KickNum"].IsNull())
    {
        if (!value["KickNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `L4RuleHealth.KickNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_kickNum = value["KickNum"].GetUint64();
        m_kickNumHasBeenSet = true;
    }

    if (value.HasMember("AliveNum") && !value["AliveNum"].IsNull())
    {
        if (!value["AliveNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `L4RuleHealth.AliveNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_aliveNum = value["AliveNum"].GetUint64();
        m_aliveNumHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void L4RuleHealth::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_ruleIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ruleId.c_str(), allocator).Move(), allocator);
    }

    if (m_enableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Enable";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enable, allocator);
    }

    if (m_timeOutHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimeOut";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_timeOut, allocator);
    }

    if (m_intervalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Interval";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_interval, allocator);
    }

    if (m_kickNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KickNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_kickNum, allocator);
    }

    if (m_aliveNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AliveNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_aliveNum, allocator);
    }

}


string L4RuleHealth::GetRuleId() const
{
    return m_ruleId;
}

void L4RuleHealth::SetRuleId(const string& _ruleId)
{
    m_ruleId = _ruleId;
    m_ruleIdHasBeenSet = true;
}

bool L4RuleHealth::RuleIdHasBeenSet() const
{
    return m_ruleIdHasBeenSet;
}

uint64_t L4RuleHealth::GetEnable() const
{
    return m_enable;
}

void L4RuleHealth::SetEnable(const uint64_t& _enable)
{
    m_enable = _enable;
    m_enableHasBeenSet = true;
}

bool L4RuleHealth::EnableHasBeenSet() const
{
    return m_enableHasBeenSet;
}

uint64_t L4RuleHealth::GetTimeOut() const
{
    return m_timeOut;
}

void L4RuleHealth::SetTimeOut(const uint64_t& _timeOut)
{
    m_timeOut = _timeOut;
    m_timeOutHasBeenSet = true;
}

bool L4RuleHealth::TimeOutHasBeenSet() const
{
    return m_timeOutHasBeenSet;
}

uint64_t L4RuleHealth::GetInterval() const
{
    return m_interval;
}

void L4RuleHealth::SetInterval(const uint64_t& _interval)
{
    m_interval = _interval;
    m_intervalHasBeenSet = true;
}

bool L4RuleHealth::IntervalHasBeenSet() const
{
    return m_intervalHasBeenSet;
}

uint64_t L4RuleHealth::GetKickNum() const
{
    return m_kickNum;
}

void L4RuleHealth::SetKickNum(const uint64_t& _kickNum)
{
    m_kickNum = _kickNum;
    m_kickNumHasBeenSet = true;
}

bool L4RuleHealth::KickNumHasBeenSet() const
{
    return m_kickNumHasBeenSet;
}

uint64_t L4RuleHealth::GetAliveNum() const
{
    return m_aliveNum;
}

void L4RuleHealth::SetAliveNum(const uint64_t& _aliveNum)
{
    m_aliveNum = _aliveNum;
    m_aliveNumHasBeenSet = true;
}

bool L4RuleHealth::AliveNumHasBeenSet() const
{
    return m_aliveNumHasBeenSet;
}

