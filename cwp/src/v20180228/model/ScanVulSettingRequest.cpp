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

#include <tencentcloud/cwp/v20180228/model/ScanVulSettingRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cwp::V20180228::Model;
using namespace std;

ScanVulSettingRequest::ScanVulSettingRequest() :
    m_timerIntervalHasBeenSet(false),
    m_vulCategoriesHasBeenSet(false),
    m_vulLevelsHasBeenSet(false),
    m_timerTimeHasBeenSet(false),
    m_vulEmergencyHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_enableScanHasBeenSet(false),
    m_uuidsHasBeenSet(false),
    m_scanMethodHasBeenSet(false)
{
}

string ScanVulSettingRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_timerIntervalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimerInterval";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_timerInterval, allocator);
    }

    if (m_vulCategoriesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VulCategories";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_vulCategories.begin(); itr != m_vulCategories.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetUint64(*itr), allocator);
        }
    }

    if (m_vulLevelsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VulLevels";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_vulLevels.begin(); itr != m_vulLevels.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetUint64(*itr), allocator);
        }
    }

    if (m_timerTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimerTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_timerTime.c_str(), allocator).Move(), allocator);
    }

    if (m_vulEmergencyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VulEmergency";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_vulEmergency, allocator);
    }

    if (m_startTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_startTime.c_str(), allocator).Move(), allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_endTime.c_str(), allocator).Move(), allocator);
    }

    if (m_enableScanHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableScan";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_enableScan, allocator);
    }

    if (m_uuidsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Uuids";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_uuids.begin(); itr != m_uuids.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_scanMethodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScanMethod";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_scanMethod, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t ScanVulSettingRequest::GetTimerInterval() const
{
    return m_timerInterval;
}

void ScanVulSettingRequest::SetTimerInterval(const uint64_t& _timerInterval)
{
    m_timerInterval = _timerInterval;
    m_timerIntervalHasBeenSet = true;
}

bool ScanVulSettingRequest::TimerIntervalHasBeenSet() const
{
    return m_timerIntervalHasBeenSet;
}

vector<uint64_t> ScanVulSettingRequest::GetVulCategories() const
{
    return m_vulCategories;
}

void ScanVulSettingRequest::SetVulCategories(const vector<uint64_t>& _vulCategories)
{
    m_vulCategories = _vulCategories;
    m_vulCategoriesHasBeenSet = true;
}

bool ScanVulSettingRequest::VulCategoriesHasBeenSet() const
{
    return m_vulCategoriesHasBeenSet;
}

vector<uint64_t> ScanVulSettingRequest::GetVulLevels() const
{
    return m_vulLevels;
}

void ScanVulSettingRequest::SetVulLevels(const vector<uint64_t>& _vulLevels)
{
    m_vulLevels = _vulLevels;
    m_vulLevelsHasBeenSet = true;
}

bool ScanVulSettingRequest::VulLevelsHasBeenSet() const
{
    return m_vulLevelsHasBeenSet;
}

string ScanVulSettingRequest::GetTimerTime() const
{
    return m_timerTime;
}

void ScanVulSettingRequest::SetTimerTime(const string& _timerTime)
{
    m_timerTime = _timerTime;
    m_timerTimeHasBeenSet = true;
}

bool ScanVulSettingRequest::TimerTimeHasBeenSet() const
{
    return m_timerTimeHasBeenSet;
}

uint64_t ScanVulSettingRequest::GetVulEmergency() const
{
    return m_vulEmergency;
}

void ScanVulSettingRequest::SetVulEmergency(const uint64_t& _vulEmergency)
{
    m_vulEmergency = _vulEmergency;
    m_vulEmergencyHasBeenSet = true;
}

bool ScanVulSettingRequest::VulEmergencyHasBeenSet() const
{
    return m_vulEmergencyHasBeenSet;
}

string ScanVulSettingRequest::GetStartTime() const
{
    return m_startTime;
}

void ScanVulSettingRequest::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool ScanVulSettingRequest::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string ScanVulSettingRequest::GetEndTime() const
{
    return m_endTime;
}

void ScanVulSettingRequest::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool ScanVulSettingRequest::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

uint64_t ScanVulSettingRequest::GetEnableScan() const
{
    return m_enableScan;
}

void ScanVulSettingRequest::SetEnableScan(const uint64_t& _enableScan)
{
    m_enableScan = _enableScan;
    m_enableScanHasBeenSet = true;
}

bool ScanVulSettingRequest::EnableScanHasBeenSet() const
{
    return m_enableScanHasBeenSet;
}

vector<string> ScanVulSettingRequest::GetUuids() const
{
    return m_uuids;
}

void ScanVulSettingRequest::SetUuids(const vector<string>& _uuids)
{
    m_uuids = _uuids;
    m_uuidsHasBeenSet = true;
}

bool ScanVulSettingRequest::UuidsHasBeenSet() const
{
    return m_uuidsHasBeenSet;
}

uint64_t ScanVulSettingRequest::GetScanMethod() const
{
    return m_scanMethod;
}

void ScanVulSettingRequest::SetScanMethod(const uint64_t& _scanMethod)
{
    m_scanMethod = _scanMethod;
    m_scanMethodHasBeenSet = true;
}

bool ScanVulSettingRequest::ScanMethodHasBeenSet() const
{
    return m_scanMethodHasBeenSet;
}


