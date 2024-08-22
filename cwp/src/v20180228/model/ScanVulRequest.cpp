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

#include <tencentcloud/cwp/v20180228/model/ScanVulRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cwp::V20180228::Model;
using namespace std;

ScanVulRequest::ScanVulRequest() :
    m_vulLevelsHasBeenSet(false),
    m_hostTypeHasBeenSet(false),
    m_vulCategoriesHasBeenSet(false),
    m_quuidListHasBeenSet(false),
    m_vulEmergencyHasBeenSet(false),
    m_timeoutPeriodHasBeenSet(false),
    m_vulIdsHasBeenSet(false),
    m_scanMethodHasBeenSet(false)
{
}

string ScanVulRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_vulLevelsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VulLevels";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_vulLevels.c_str(), allocator).Move(), allocator);
    }

    if (m_hostTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HostType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_hostType, allocator);
    }

    if (m_vulCategoriesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VulCategories";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_vulCategories.c_str(), allocator).Move(), allocator);
    }

    if (m_quuidListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QuuidList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_quuidList.begin(); itr != m_quuidList.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_vulEmergencyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VulEmergency";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_vulEmergency, allocator);
    }

    if (m_timeoutPeriodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimeoutPeriod";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_timeoutPeriod, allocator);
    }

    if (m_vulIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VulIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_vulIds.begin(); itr != m_vulIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetUint64(*itr), allocator);
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


string ScanVulRequest::GetVulLevels() const
{
    return m_vulLevels;
}

void ScanVulRequest::SetVulLevels(const string& _vulLevels)
{
    m_vulLevels = _vulLevels;
    m_vulLevelsHasBeenSet = true;
}

bool ScanVulRequest::VulLevelsHasBeenSet() const
{
    return m_vulLevelsHasBeenSet;
}

uint64_t ScanVulRequest::GetHostType() const
{
    return m_hostType;
}

void ScanVulRequest::SetHostType(const uint64_t& _hostType)
{
    m_hostType = _hostType;
    m_hostTypeHasBeenSet = true;
}

bool ScanVulRequest::HostTypeHasBeenSet() const
{
    return m_hostTypeHasBeenSet;
}

string ScanVulRequest::GetVulCategories() const
{
    return m_vulCategories;
}

void ScanVulRequest::SetVulCategories(const string& _vulCategories)
{
    m_vulCategories = _vulCategories;
    m_vulCategoriesHasBeenSet = true;
}

bool ScanVulRequest::VulCategoriesHasBeenSet() const
{
    return m_vulCategoriesHasBeenSet;
}

vector<string> ScanVulRequest::GetQuuidList() const
{
    return m_quuidList;
}

void ScanVulRequest::SetQuuidList(const vector<string>& _quuidList)
{
    m_quuidList = _quuidList;
    m_quuidListHasBeenSet = true;
}

bool ScanVulRequest::QuuidListHasBeenSet() const
{
    return m_quuidListHasBeenSet;
}

uint64_t ScanVulRequest::GetVulEmergency() const
{
    return m_vulEmergency;
}

void ScanVulRequest::SetVulEmergency(const uint64_t& _vulEmergency)
{
    m_vulEmergency = _vulEmergency;
    m_vulEmergencyHasBeenSet = true;
}

bool ScanVulRequest::VulEmergencyHasBeenSet() const
{
    return m_vulEmergencyHasBeenSet;
}

uint64_t ScanVulRequest::GetTimeoutPeriod() const
{
    return m_timeoutPeriod;
}

void ScanVulRequest::SetTimeoutPeriod(const uint64_t& _timeoutPeriod)
{
    m_timeoutPeriod = _timeoutPeriod;
    m_timeoutPeriodHasBeenSet = true;
}

bool ScanVulRequest::TimeoutPeriodHasBeenSet() const
{
    return m_timeoutPeriodHasBeenSet;
}

vector<uint64_t> ScanVulRequest::GetVulIds() const
{
    return m_vulIds;
}

void ScanVulRequest::SetVulIds(const vector<uint64_t>& _vulIds)
{
    m_vulIds = _vulIds;
    m_vulIdsHasBeenSet = true;
}

bool ScanVulRequest::VulIdsHasBeenSet() const
{
    return m_vulIdsHasBeenSet;
}

uint64_t ScanVulRequest::GetScanMethod() const
{
    return m_scanMethod;
}

void ScanVulRequest::SetScanMethod(const uint64_t& _scanMethod)
{
    m_scanMethod = _scanMethod;
    m_scanMethodHasBeenSet = true;
}

bool ScanVulRequest::ScanMethodHasBeenSet() const
{
    return m_scanMethodHasBeenSet;
}


