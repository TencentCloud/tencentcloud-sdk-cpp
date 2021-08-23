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

#include <tencentcloud/tms/v20200713/model/Overview.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tms::V20200713::Model;
using namespace std;

Overview::Overview() :
    m_totalCountHasBeenSet(false),
    m_totalHourHasBeenSet(false),
    m_passCountHasBeenSet(false),
    m_passHourHasBeenSet(false),
    m_evilCountHasBeenSet(false),
    m_evilHourHasBeenSet(false),
    m_suspectCountHasBeenSet(false),
    m_suspectHourHasBeenSet(false)
{
}

CoreInternalOutcome Overview::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TotalCount") && !value["TotalCount"].IsNull())
    {
        if (!value["TotalCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Overview.TotalCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_totalCount = value["TotalCount"].GetInt64();
        m_totalCountHasBeenSet = true;
    }

    if (value.HasMember("TotalHour") && !value["TotalHour"].IsNull())
    {
        if (!value["TotalHour"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Overview.TotalHour` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_totalHour = value["TotalHour"].GetInt64();
        m_totalHourHasBeenSet = true;
    }

    if (value.HasMember("PassCount") && !value["PassCount"].IsNull())
    {
        if (!value["PassCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Overview.PassCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_passCount = value["PassCount"].GetInt64();
        m_passCountHasBeenSet = true;
    }

    if (value.HasMember("PassHour") && !value["PassHour"].IsNull())
    {
        if (!value["PassHour"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Overview.PassHour` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_passHour = value["PassHour"].GetInt64();
        m_passHourHasBeenSet = true;
    }

    if (value.HasMember("EvilCount") && !value["EvilCount"].IsNull())
    {
        if (!value["EvilCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Overview.EvilCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_evilCount = value["EvilCount"].GetInt64();
        m_evilCountHasBeenSet = true;
    }

    if (value.HasMember("EvilHour") && !value["EvilHour"].IsNull())
    {
        if (!value["EvilHour"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Overview.EvilHour` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_evilHour = value["EvilHour"].GetInt64();
        m_evilHourHasBeenSet = true;
    }

    if (value.HasMember("SuspectCount") && !value["SuspectCount"].IsNull())
    {
        if (!value["SuspectCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Overview.SuspectCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_suspectCount = value["SuspectCount"].GetInt64();
        m_suspectCountHasBeenSet = true;
    }

    if (value.HasMember("SuspectHour") && !value["SuspectHour"].IsNull())
    {
        if (!value["SuspectHour"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Overview.SuspectHour` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_suspectHour = value["SuspectHour"].GetInt64();
        m_suspectHourHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Overview::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

}


int64_t Overview::GetTotalCount() const
{
    return m_totalCount;
}

void Overview::SetTotalCount(const int64_t& _totalCount)
{
    m_totalCount = _totalCount;
    m_totalCountHasBeenSet = true;
}

bool Overview::TotalCountHasBeenSet() const
{
    return m_totalCountHasBeenSet;
}

int64_t Overview::GetTotalHour() const
{
    return m_totalHour;
}

void Overview::SetTotalHour(const int64_t& _totalHour)
{
    m_totalHour = _totalHour;
    m_totalHourHasBeenSet = true;
}

bool Overview::TotalHourHasBeenSet() const
{
    return m_totalHourHasBeenSet;
}

int64_t Overview::GetPassCount() const
{
    return m_passCount;
}

void Overview::SetPassCount(const int64_t& _passCount)
{
    m_passCount = _passCount;
    m_passCountHasBeenSet = true;
}

bool Overview::PassCountHasBeenSet() const
{
    return m_passCountHasBeenSet;
}

int64_t Overview::GetPassHour() const
{
    return m_passHour;
}

void Overview::SetPassHour(const int64_t& _passHour)
{
    m_passHour = _passHour;
    m_passHourHasBeenSet = true;
}

bool Overview::PassHourHasBeenSet() const
{
    return m_passHourHasBeenSet;
}

int64_t Overview::GetEvilCount() const
{
    return m_evilCount;
}

void Overview::SetEvilCount(const int64_t& _evilCount)
{
    m_evilCount = _evilCount;
    m_evilCountHasBeenSet = true;
}

bool Overview::EvilCountHasBeenSet() const
{
    return m_evilCountHasBeenSet;
}

int64_t Overview::GetEvilHour() const
{
    return m_evilHour;
}

void Overview::SetEvilHour(const int64_t& _evilHour)
{
    m_evilHour = _evilHour;
    m_evilHourHasBeenSet = true;
}

bool Overview::EvilHourHasBeenSet() const
{
    return m_evilHourHasBeenSet;
}

int64_t Overview::GetSuspectCount() const
{
    return m_suspectCount;
}

void Overview::SetSuspectCount(const int64_t& _suspectCount)
{
    m_suspectCount = _suspectCount;
    m_suspectCountHasBeenSet = true;
}

bool Overview::SuspectCountHasBeenSet() const
{
    return m_suspectCountHasBeenSet;
}

int64_t Overview::GetSuspectHour() const
{
    return m_suspectHour;
}

void Overview::SetSuspectHour(const int64_t& _suspectHour)
{
    m_suspectHour = _suspectHour;
    m_suspectHourHasBeenSet = true;
}

bool Overview::SuspectHourHasBeenSet() const
{
    return m_suspectHourHasBeenSet;
}

