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

#include <tencentcloud/ams/v20200608/model/TrendCount.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ams::V20200608::Model;
using namespace std;

TrendCount::TrendCount() :
    m_totalCountHasBeenSet(false),
    m_totalHourHasBeenSet(false),
    m_passCountHasBeenSet(false),
    m_passHourHasBeenSet(false),
    m_evilCountHasBeenSet(false),
    m_evilHourHasBeenSet(false),
    m_suspectCountHasBeenSet(false),
    m_suspectHourHasBeenSet(false),
    m_dateHasBeenSet(false)
{
}

CoreInternalOutcome TrendCount::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TotalCount") && !value["TotalCount"].IsNull())
    {
        if (!value["TotalCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TrendCount.TotalCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_totalCount = value["TotalCount"].GetInt64();
        m_totalCountHasBeenSet = true;
    }

    if (value.HasMember("TotalHour") && !value["TotalHour"].IsNull())
    {
        if (!value["TotalHour"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TrendCount.TotalHour` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_totalHour = value["TotalHour"].GetInt64();
        m_totalHourHasBeenSet = true;
    }

    if (value.HasMember("PassCount") && !value["PassCount"].IsNull())
    {
        if (!value["PassCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TrendCount.PassCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_passCount = value["PassCount"].GetInt64();
        m_passCountHasBeenSet = true;
    }

    if (value.HasMember("PassHour") && !value["PassHour"].IsNull())
    {
        if (!value["PassHour"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TrendCount.PassHour` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_passHour = value["PassHour"].GetInt64();
        m_passHourHasBeenSet = true;
    }

    if (value.HasMember("EvilCount") && !value["EvilCount"].IsNull())
    {
        if (!value["EvilCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TrendCount.EvilCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_evilCount = value["EvilCount"].GetInt64();
        m_evilCountHasBeenSet = true;
    }

    if (value.HasMember("EvilHour") && !value["EvilHour"].IsNull())
    {
        if (!value["EvilHour"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TrendCount.EvilHour` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_evilHour = value["EvilHour"].GetInt64();
        m_evilHourHasBeenSet = true;
    }

    if (value.HasMember("SuspectCount") && !value["SuspectCount"].IsNull())
    {
        if (!value["SuspectCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TrendCount.SuspectCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_suspectCount = value["SuspectCount"].GetInt64();
        m_suspectCountHasBeenSet = true;
    }

    if (value.HasMember("SuspectHour") && !value["SuspectHour"].IsNull())
    {
        if (!value["SuspectHour"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TrendCount.SuspectHour` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_suspectHour = value["SuspectHour"].GetInt64();
        m_suspectHourHasBeenSet = true;
    }

    if (value.HasMember("Date") && !value["Date"].IsNull())
    {
        if (!value["Date"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TrendCount.Date` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_date = string(value["Date"].GetString());
        m_dateHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TrendCount::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_totalCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalCount, allocator);
    }

    if (m_totalHourHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalHour";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalHour, allocator);
    }

    if (m_passCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PassCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_passCount, allocator);
    }

    if (m_passHourHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PassHour";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_passHour, allocator);
    }

    if (m_evilCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EvilCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_evilCount, allocator);
    }

    if (m_evilHourHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EvilHour";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_evilHour, allocator);
    }

    if (m_suspectCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SuspectCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_suspectCount, allocator);
    }

    if (m_suspectHourHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SuspectHour";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_suspectHour, allocator);
    }

    if (m_dateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Date";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_date.c_str(), allocator).Move(), allocator);
    }

}


int64_t TrendCount::GetTotalCount() const
{
    return m_totalCount;
}

void TrendCount::SetTotalCount(const int64_t& _totalCount)
{
    m_totalCount = _totalCount;
    m_totalCountHasBeenSet = true;
}

bool TrendCount::TotalCountHasBeenSet() const
{
    return m_totalCountHasBeenSet;
}

int64_t TrendCount::GetTotalHour() const
{
    return m_totalHour;
}

void TrendCount::SetTotalHour(const int64_t& _totalHour)
{
    m_totalHour = _totalHour;
    m_totalHourHasBeenSet = true;
}

bool TrendCount::TotalHourHasBeenSet() const
{
    return m_totalHourHasBeenSet;
}

int64_t TrendCount::GetPassCount() const
{
    return m_passCount;
}

void TrendCount::SetPassCount(const int64_t& _passCount)
{
    m_passCount = _passCount;
    m_passCountHasBeenSet = true;
}

bool TrendCount::PassCountHasBeenSet() const
{
    return m_passCountHasBeenSet;
}

int64_t TrendCount::GetPassHour() const
{
    return m_passHour;
}

void TrendCount::SetPassHour(const int64_t& _passHour)
{
    m_passHour = _passHour;
    m_passHourHasBeenSet = true;
}

bool TrendCount::PassHourHasBeenSet() const
{
    return m_passHourHasBeenSet;
}

int64_t TrendCount::GetEvilCount() const
{
    return m_evilCount;
}

void TrendCount::SetEvilCount(const int64_t& _evilCount)
{
    m_evilCount = _evilCount;
    m_evilCountHasBeenSet = true;
}

bool TrendCount::EvilCountHasBeenSet() const
{
    return m_evilCountHasBeenSet;
}

int64_t TrendCount::GetEvilHour() const
{
    return m_evilHour;
}

void TrendCount::SetEvilHour(const int64_t& _evilHour)
{
    m_evilHour = _evilHour;
    m_evilHourHasBeenSet = true;
}

bool TrendCount::EvilHourHasBeenSet() const
{
    return m_evilHourHasBeenSet;
}

int64_t TrendCount::GetSuspectCount() const
{
    return m_suspectCount;
}

void TrendCount::SetSuspectCount(const int64_t& _suspectCount)
{
    m_suspectCount = _suspectCount;
    m_suspectCountHasBeenSet = true;
}

bool TrendCount::SuspectCountHasBeenSet() const
{
    return m_suspectCountHasBeenSet;
}

int64_t TrendCount::GetSuspectHour() const
{
    return m_suspectHour;
}

void TrendCount::SetSuspectHour(const int64_t& _suspectHour)
{
    m_suspectHour = _suspectHour;
    m_suspectHourHasBeenSet = true;
}

bool TrendCount::SuspectHourHasBeenSet() const
{
    return m_suspectHourHasBeenSet;
}

string TrendCount::GetDate() const
{
    return m_date;
}

void TrendCount::SetDate(const string& _date)
{
    m_date = _date;
    m_dateHasBeenSet = true;
}

bool TrendCount::DateHasBeenSet() const
{
    return m_dateHasBeenSet;
}

