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

#include <tencentcloud/cwp/v20180228/model/NetAttackTrend.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cwp::V20180228::Model;
using namespace std;

NetAttackTrend::NetAttackTrend() :
    m_dateTimeHasBeenSet(false),
    m_attackCountHasBeenSet(false),
    m_tryAttackCountHasBeenSet(false),
    m_succAttackCountHasBeenSet(false)
{
}

CoreInternalOutcome NetAttackTrend::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DateTime") && !value["DateTime"].IsNull())
    {
        if (!value["DateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NetAttackTrend.DateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dateTime = string(value["DateTime"].GetString());
        m_dateTimeHasBeenSet = true;
    }

    if (value.HasMember("AttackCount") && !value["AttackCount"].IsNull())
    {
        if (!value["AttackCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `NetAttackTrend.AttackCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_attackCount = value["AttackCount"].GetUint64();
        m_attackCountHasBeenSet = true;
    }

    if (value.HasMember("TryAttackCount") && !value["TryAttackCount"].IsNull())
    {
        if (!value["TryAttackCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `NetAttackTrend.TryAttackCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_tryAttackCount = value["TryAttackCount"].GetUint64();
        m_tryAttackCountHasBeenSet = true;
    }

    if (value.HasMember("SuccAttackCount") && !value["SuccAttackCount"].IsNull())
    {
        if (!value["SuccAttackCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `NetAttackTrend.SuccAttackCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_succAttackCount = value["SuccAttackCount"].GetUint64();
        m_succAttackCountHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void NetAttackTrend::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_dateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dateTime.c_str(), allocator).Move(), allocator);
    }

    if (m_attackCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AttackCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_attackCount, allocator);
    }

    if (m_tryAttackCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TryAttackCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_tryAttackCount, allocator);
    }

    if (m_succAttackCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SuccAttackCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_succAttackCount, allocator);
    }

}


string NetAttackTrend::GetDateTime() const
{
    return m_dateTime;
}

void NetAttackTrend::SetDateTime(const string& _dateTime)
{
    m_dateTime = _dateTime;
    m_dateTimeHasBeenSet = true;
}

bool NetAttackTrend::DateTimeHasBeenSet() const
{
    return m_dateTimeHasBeenSet;
}

uint64_t NetAttackTrend::GetAttackCount() const
{
    return m_attackCount;
}

void NetAttackTrend::SetAttackCount(const uint64_t& _attackCount)
{
    m_attackCount = _attackCount;
    m_attackCountHasBeenSet = true;
}

bool NetAttackTrend::AttackCountHasBeenSet() const
{
    return m_attackCountHasBeenSet;
}

uint64_t NetAttackTrend::GetTryAttackCount() const
{
    return m_tryAttackCount;
}

void NetAttackTrend::SetTryAttackCount(const uint64_t& _tryAttackCount)
{
    m_tryAttackCount = _tryAttackCount;
    m_tryAttackCountHasBeenSet = true;
}

bool NetAttackTrend::TryAttackCountHasBeenSet() const
{
    return m_tryAttackCountHasBeenSet;
}

uint64_t NetAttackTrend::GetSuccAttackCount() const
{
    return m_succAttackCount;
}

void NetAttackTrend::SetSuccAttackCount(const uint64_t& _succAttackCount)
{
    m_succAttackCount = _succAttackCount;
    m_succAttackCountHasBeenSet = true;
}

bool NetAttackTrend::SuccAttackCountHasBeenSet() const
{
    return m_succAttackCountHasBeenSet;
}

