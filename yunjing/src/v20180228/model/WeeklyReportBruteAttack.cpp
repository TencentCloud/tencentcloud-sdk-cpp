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

#include <tencentcloud/yunjing/v20180228/model/WeeklyReportBruteAttack.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Yunjing::V20180228::Model;
using namespace std;

WeeklyReportBruteAttack::WeeklyReportBruteAttack() :
    m_machineIpHasBeenSet(false),
    m_usernameHasBeenSet(false),
    m_srcIpHasBeenSet(false),
    m_countHasBeenSet(false),
    m_attackTimeHasBeenSet(false)
{
}

CoreInternalOutcome WeeklyReportBruteAttack::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("MachineIp") && !value["MachineIp"].IsNull())
    {
        if (!value["MachineIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WeeklyReportBruteAttack.MachineIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_machineIp = string(value["MachineIp"].GetString());
        m_machineIpHasBeenSet = true;
    }

    if (value.HasMember("Username") && !value["Username"].IsNull())
    {
        if (!value["Username"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WeeklyReportBruteAttack.Username` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_username = string(value["Username"].GetString());
        m_usernameHasBeenSet = true;
    }

    if (value.HasMember("SrcIp") && !value["SrcIp"].IsNull())
    {
        if (!value["SrcIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WeeklyReportBruteAttack.SrcIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_srcIp = string(value["SrcIp"].GetString());
        m_srcIpHasBeenSet = true;
    }

    if (value.HasMember("Count") && !value["Count"].IsNull())
    {
        if (!value["Count"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `WeeklyReportBruteAttack.Count` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_count = value["Count"].GetUint64();
        m_countHasBeenSet = true;
    }

    if (value.HasMember("AttackTime") && !value["AttackTime"].IsNull())
    {
        if (!value["AttackTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WeeklyReportBruteAttack.AttackTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_attackTime = string(value["AttackTime"].GetString());
        m_attackTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void WeeklyReportBruteAttack::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_machineIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MachineIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_machineIp.c_str(), allocator).Move(), allocator);
    }

    if (m_usernameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Username";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_username.c_str(), allocator).Move(), allocator);
    }

    if (m_srcIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SrcIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_srcIp.c_str(), allocator).Move(), allocator);
    }

    if (m_countHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Count";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_count, allocator);
    }

    if (m_attackTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AttackTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_attackTime.c_str(), allocator).Move(), allocator);
    }

}


string WeeklyReportBruteAttack::GetMachineIp() const
{
    return m_machineIp;
}

void WeeklyReportBruteAttack::SetMachineIp(const string& _machineIp)
{
    m_machineIp = _machineIp;
    m_machineIpHasBeenSet = true;
}

bool WeeklyReportBruteAttack::MachineIpHasBeenSet() const
{
    return m_machineIpHasBeenSet;
}

string WeeklyReportBruteAttack::GetUsername() const
{
    return m_username;
}

void WeeklyReportBruteAttack::SetUsername(const string& _username)
{
    m_username = _username;
    m_usernameHasBeenSet = true;
}

bool WeeklyReportBruteAttack::UsernameHasBeenSet() const
{
    return m_usernameHasBeenSet;
}

string WeeklyReportBruteAttack::GetSrcIp() const
{
    return m_srcIp;
}

void WeeklyReportBruteAttack::SetSrcIp(const string& _srcIp)
{
    m_srcIp = _srcIp;
    m_srcIpHasBeenSet = true;
}

bool WeeklyReportBruteAttack::SrcIpHasBeenSet() const
{
    return m_srcIpHasBeenSet;
}

uint64_t WeeklyReportBruteAttack::GetCount() const
{
    return m_count;
}

void WeeklyReportBruteAttack::SetCount(const uint64_t& _count)
{
    m_count = _count;
    m_countHasBeenSet = true;
}

bool WeeklyReportBruteAttack::CountHasBeenSet() const
{
    return m_countHasBeenSet;
}

string WeeklyReportBruteAttack::GetAttackTime() const
{
    return m_attackTime;
}

void WeeklyReportBruteAttack::SetAttackTime(const string& _attackTime)
{
    m_attackTime = _attackTime;
    m_attackTimeHasBeenSet = true;
}

bool WeeklyReportBruteAttack::AttackTimeHasBeenSet() const
{
    return m_attackTimeHasBeenSet;
}

