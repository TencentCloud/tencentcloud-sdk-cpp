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

#include <tencentcloud/mna/v20210119/model/GetActiveDeviceCountRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Mna::V20210119::Model;
using namespace std;

GetActiveDeviceCountRequest::GetActiveDeviceCountRequest() :
    m_periodHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_devGroupHasBeenSet(false),
    m_licenseTypeHasBeenSet(false)
{
}

string GetActiveDeviceCountRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_periodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Period";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_period, allocator);
    }

    if (m_startTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_startTime, allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_endTime, allocator);
    }

    if (m_devGroupHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DevGroup";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_devGroup.c_str(), allocator).Move(), allocator);
    }

    if (m_licenseTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LicenseType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_licenseType, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t GetActiveDeviceCountRequest::GetPeriod() const
{
    return m_period;
}

void GetActiveDeviceCountRequest::SetPeriod(const int64_t& _period)
{
    m_period = _period;
    m_periodHasBeenSet = true;
}

bool GetActiveDeviceCountRequest::PeriodHasBeenSet() const
{
    return m_periodHasBeenSet;
}

int64_t GetActiveDeviceCountRequest::GetStartTime() const
{
    return m_startTime;
}

void GetActiveDeviceCountRequest::SetStartTime(const int64_t& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool GetActiveDeviceCountRequest::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

int64_t GetActiveDeviceCountRequest::GetEndTime() const
{
    return m_endTime;
}

void GetActiveDeviceCountRequest::SetEndTime(const int64_t& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool GetActiveDeviceCountRequest::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

string GetActiveDeviceCountRequest::GetDevGroup() const
{
    return m_devGroup;
}

void GetActiveDeviceCountRequest::SetDevGroup(const string& _devGroup)
{
    m_devGroup = _devGroup;
    m_devGroupHasBeenSet = true;
}

bool GetActiveDeviceCountRequest::DevGroupHasBeenSet() const
{
    return m_devGroupHasBeenSet;
}

int64_t GetActiveDeviceCountRequest::GetLicenseType() const
{
    return m_licenseType;
}

void GetActiveDeviceCountRequest::SetLicenseType(const int64_t& _licenseType)
{
    m_licenseType = _licenseType;
    m_licenseTypeHasBeenSet = true;
}

bool GetActiveDeviceCountRequest::LicenseTypeHasBeenSet() const
{
    return m_licenseTypeHasBeenSet;
}


