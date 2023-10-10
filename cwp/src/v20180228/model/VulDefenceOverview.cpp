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

#include <tencentcloud/cwp/v20180228/model/VulDefenceOverview.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cwp::V20180228::Model;
using namespace std;

VulDefenceOverview::VulDefenceOverview() :
    m_enableHasBeenSet(false),
    m_defendHostCountHasBeenSet(false),
    m_exceptionCountHasBeenSet(false),
    m_attackCountsHasBeenSet(false),
    m_defendCountsHasBeenSet(false),
    m_dateHasBeenSet(false)
{
}

CoreInternalOutcome VulDefenceOverview::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Enable") && !value["Enable"].IsNull())
    {
        if (!value["Enable"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `VulDefenceOverview.Enable` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_enable = value["Enable"].GetInt64();
        m_enableHasBeenSet = true;
    }

    if (value.HasMember("DefendHostCount") && !value["DefendHostCount"].IsNull())
    {
        if (!value["DefendHostCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `VulDefenceOverview.DefendHostCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_defendHostCount = value["DefendHostCount"].GetInt64();
        m_defendHostCountHasBeenSet = true;
    }

    if (value.HasMember("ExceptionCount") && !value["ExceptionCount"].IsNull())
    {
        if (!value["ExceptionCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `VulDefenceOverview.ExceptionCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_exceptionCount = value["ExceptionCount"].GetInt64();
        m_exceptionCountHasBeenSet = true;
    }

    if (value.HasMember("AttackCounts") && !value["AttackCounts"].IsNull())
    {
        if (!value["AttackCounts"].IsArray())
            return CoreInternalOutcome(Core::Error("response `VulDefenceOverview.AttackCounts` is not array type"));

        const rapidjson::Value &tmpValue = value["AttackCounts"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_attackCounts.push_back((*itr).GetInt64());
        }
        m_attackCountsHasBeenSet = true;
    }

    if (value.HasMember("DefendCounts") && !value["DefendCounts"].IsNull())
    {
        if (!value["DefendCounts"].IsArray())
            return CoreInternalOutcome(Core::Error("response `VulDefenceOverview.DefendCounts` is not array type"));

        const rapidjson::Value &tmpValue = value["DefendCounts"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_defendCounts.push_back((*itr).GetInt64());
        }
        m_defendCountsHasBeenSet = true;
    }

    if (value.HasMember("Date") && !value["Date"].IsNull())
    {
        if (!value["Date"].IsArray())
            return CoreInternalOutcome(Core::Error("response `VulDefenceOverview.Date` is not array type"));

        const rapidjson::Value &tmpValue = value["Date"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_date.push_back((*itr).GetString());
        }
        m_dateHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void VulDefenceOverview::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_enableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Enable";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enable, allocator);
    }

    if (m_defendHostCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DefendHostCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_defendHostCount, allocator);
    }

    if (m_exceptionCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExceptionCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_exceptionCount, allocator);
    }

    if (m_attackCountsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AttackCounts";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_attackCounts.begin(); itr != m_attackCounts.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

    if (m_defendCountsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DefendCounts";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_defendCounts.begin(); itr != m_defendCounts.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

    if (m_dateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Date";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_date.begin(); itr != m_date.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


int64_t VulDefenceOverview::GetEnable() const
{
    return m_enable;
}

void VulDefenceOverview::SetEnable(const int64_t& _enable)
{
    m_enable = _enable;
    m_enableHasBeenSet = true;
}

bool VulDefenceOverview::EnableHasBeenSet() const
{
    return m_enableHasBeenSet;
}

int64_t VulDefenceOverview::GetDefendHostCount() const
{
    return m_defendHostCount;
}

void VulDefenceOverview::SetDefendHostCount(const int64_t& _defendHostCount)
{
    m_defendHostCount = _defendHostCount;
    m_defendHostCountHasBeenSet = true;
}

bool VulDefenceOverview::DefendHostCountHasBeenSet() const
{
    return m_defendHostCountHasBeenSet;
}

int64_t VulDefenceOverview::GetExceptionCount() const
{
    return m_exceptionCount;
}

void VulDefenceOverview::SetExceptionCount(const int64_t& _exceptionCount)
{
    m_exceptionCount = _exceptionCount;
    m_exceptionCountHasBeenSet = true;
}

bool VulDefenceOverview::ExceptionCountHasBeenSet() const
{
    return m_exceptionCountHasBeenSet;
}

vector<int64_t> VulDefenceOverview::GetAttackCounts() const
{
    return m_attackCounts;
}

void VulDefenceOverview::SetAttackCounts(const vector<int64_t>& _attackCounts)
{
    m_attackCounts = _attackCounts;
    m_attackCountsHasBeenSet = true;
}

bool VulDefenceOverview::AttackCountsHasBeenSet() const
{
    return m_attackCountsHasBeenSet;
}

vector<int64_t> VulDefenceOverview::GetDefendCounts() const
{
    return m_defendCounts;
}

void VulDefenceOverview::SetDefendCounts(const vector<int64_t>& _defendCounts)
{
    m_defendCounts = _defendCounts;
    m_defendCountsHasBeenSet = true;
}

bool VulDefenceOverview::DefendCountsHasBeenSet() const
{
    return m_defendCountsHasBeenSet;
}

vector<string> VulDefenceOverview::GetDate() const
{
    return m_date;
}

void VulDefenceOverview::SetDate(const vector<string>& _date)
{
    m_date = _date;
    m_dateHasBeenSet = true;
}

bool VulDefenceOverview::DateHasBeenSet() const
{
    return m_dateHasBeenSet;
}

