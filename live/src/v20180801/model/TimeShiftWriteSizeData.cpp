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

#include <tencentcloud/live/v20180801/model/TimeShiftWriteSizeData.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Live::V20180801::Model;
using namespace std;

TimeShiftWriteSizeData::TimeShiftWriteSizeData() :
    m_areaHasBeenSet(false),
    m_timeHasBeenSet(false),
    m_writeSizeHasBeenSet(false),
    m_domainHasBeenSet(false),
    m_storageDaysHasBeenSet(false)
{
}

CoreInternalOutcome TimeShiftWriteSizeData::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Area") && !value["Area"].IsNull())
    {
        if (!value["Area"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TimeShiftWriteSizeData.Area` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_area = string(value["Area"].GetString());
        m_areaHasBeenSet = true;
    }

    if (value.HasMember("Time") && !value["Time"].IsNull())
    {
        if (!value["Time"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TimeShiftWriteSizeData.Time` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_time = string(value["Time"].GetString());
        m_timeHasBeenSet = true;
    }

    if (value.HasMember("WriteSize") && !value["WriteSize"].IsNull())
    {
        if (!value["WriteSize"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `TimeShiftWriteSizeData.WriteSize` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_writeSize = value["WriteSize"].GetDouble();
        m_writeSizeHasBeenSet = true;
    }

    if (value.HasMember("Domain") && !value["Domain"].IsNull())
    {
        if (!value["Domain"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TimeShiftWriteSizeData.Domain` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_domain = string(value["Domain"].GetString());
        m_domainHasBeenSet = true;
    }

    if (value.HasMember("StorageDays") && !value["StorageDays"].IsNull())
    {
        if (!value["StorageDays"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TimeShiftWriteSizeData.StorageDays` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_storageDays = value["StorageDays"].GetInt64();
        m_storageDaysHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TimeShiftWriteSizeData::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_areaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Area";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_area.c_str(), allocator).Move(), allocator);
    }

    if (m_timeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Time";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_time.c_str(), allocator).Move(), allocator);
    }

    if (m_writeSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WriteSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_writeSize, allocator);
    }

    if (m_domainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Domain";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_domain.c_str(), allocator).Move(), allocator);
    }

    if (m_storageDaysHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StorageDays";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_storageDays, allocator);
    }

}


string TimeShiftWriteSizeData::GetArea() const
{
    return m_area;
}

void TimeShiftWriteSizeData::SetArea(const string& _area)
{
    m_area = _area;
    m_areaHasBeenSet = true;
}

bool TimeShiftWriteSizeData::AreaHasBeenSet() const
{
    return m_areaHasBeenSet;
}

string TimeShiftWriteSizeData::GetTime() const
{
    return m_time;
}

void TimeShiftWriteSizeData::SetTime(const string& _time)
{
    m_time = _time;
    m_timeHasBeenSet = true;
}

bool TimeShiftWriteSizeData::TimeHasBeenSet() const
{
    return m_timeHasBeenSet;
}

double TimeShiftWriteSizeData::GetWriteSize() const
{
    return m_writeSize;
}

void TimeShiftWriteSizeData::SetWriteSize(const double& _writeSize)
{
    m_writeSize = _writeSize;
    m_writeSizeHasBeenSet = true;
}

bool TimeShiftWriteSizeData::WriteSizeHasBeenSet() const
{
    return m_writeSizeHasBeenSet;
}

string TimeShiftWriteSizeData::GetDomain() const
{
    return m_domain;
}

void TimeShiftWriteSizeData::SetDomain(const string& _domain)
{
    m_domain = _domain;
    m_domainHasBeenSet = true;
}

bool TimeShiftWriteSizeData::DomainHasBeenSet() const
{
    return m_domainHasBeenSet;
}

int64_t TimeShiftWriteSizeData::GetStorageDays() const
{
    return m_storageDays;
}

void TimeShiftWriteSizeData::SetStorageDays(const int64_t& _storageDays)
{
    m_storageDays = _storageDays;
    m_storageDaysHasBeenSet = true;
}

bool TimeShiftWriteSizeData::StorageDaysHasBeenSet() const
{
    return m_storageDaysHasBeenSet;
}

