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

#include <tencentcloud/live/v20180801/model/DescribeLiveTimeShiftWriteSizeInfoListRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Live::V20180801::Model;
using namespace std;

DescribeLiveTimeShiftWriteSizeInfoListRequest::DescribeLiveTimeShiftWriteSizeInfoListRequest() :
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_domainNamesHasBeenSet(false),
    m_dimensionsHasBeenSet(false),
    m_storageDaysHasBeenSet(false),
    m_granularityHasBeenSet(false),
    m_mainlandOrOverseaHasBeenSet(false)
{
}

string DescribeLiveTimeShiftWriteSizeInfoListRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


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

    if (m_domainNamesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DomainNames";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_domainNames.begin(); itr != m_domainNames.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_dimensionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Dimensions";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_dimensions.begin(); itr != m_dimensions.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_storageDaysHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StorageDays";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_storageDays.begin(); itr != m_storageDays.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

    if (m_granularityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Granularity";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_granularity, allocator);
    }

    if (m_mainlandOrOverseaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MainlandOrOversea";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_mainlandOrOversea.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeLiveTimeShiftWriteSizeInfoListRequest::GetStartTime() const
{
    return m_startTime;
}

void DescribeLiveTimeShiftWriteSizeInfoListRequest::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool DescribeLiveTimeShiftWriteSizeInfoListRequest::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string DescribeLiveTimeShiftWriteSizeInfoListRequest::GetEndTime() const
{
    return m_endTime;
}

void DescribeLiveTimeShiftWriteSizeInfoListRequest::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool DescribeLiveTimeShiftWriteSizeInfoListRequest::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

vector<string> DescribeLiveTimeShiftWriteSizeInfoListRequest::GetDomainNames() const
{
    return m_domainNames;
}

void DescribeLiveTimeShiftWriteSizeInfoListRequest::SetDomainNames(const vector<string>& _domainNames)
{
    m_domainNames = _domainNames;
    m_domainNamesHasBeenSet = true;
}

bool DescribeLiveTimeShiftWriteSizeInfoListRequest::DomainNamesHasBeenSet() const
{
    return m_domainNamesHasBeenSet;
}

vector<string> DescribeLiveTimeShiftWriteSizeInfoListRequest::GetDimensions() const
{
    return m_dimensions;
}

void DescribeLiveTimeShiftWriteSizeInfoListRequest::SetDimensions(const vector<string>& _dimensions)
{
    m_dimensions = _dimensions;
    m_dimensionsHasBeenSet = true;
}

bool DescribeLiveTimeShiftWriteSizeInfoListRequest::DimensionsHasBeenSet() const
{
    return m_dimensionsHasBeenSet;
}

vector<int64_t> DescribeLiveTimeShiftWriteSizeInfoListRequest::GetStorageDays() const
{
    return m_storageDays;
}

void DescribeLiveTimeShiftWriteSizeInfoListRequest::SetStorageDays(const vector<int64_t>& _storageDays)
{
    m_storageDays = _storageDays;
    m_storageDaysHasBeenSet = true;
}

bool DescribeLiveTimeShiftWriteSizeInfoListRequest::StorageDaysHasBeenSet() const
{
    return m_storageDaysHasBeenSet;
}

int64_t DescribeLiveTimeShiftWriteSizeInfoListRequest::GetGranularity() const
{
    return m_granularity;
}

void DescribeLiveTimeShiftWriteSizeInfoListRequest::SetGranularity(const int64_t& _granularity)
{
    m_granularity = _granularity;
    m_granularityHasBeenSet = true;
}

bool DescribeLiveTimeShiftWriteSizeInfoListRequest::GranularityHasBeenSet() const
{
    return m_granularityHasBeenSet;
}

string DescribeLiveTimeShiftWriteSizeInfoListRequest::GetMainlandOrOversea() const
{
    return m_mainlandOrOversea;
}

void DescribeLiveTimeShiftWriteSizeInfoListRequest::SetMainlandOrOversea(const string& _mainlandOrOversea)
{
    m_mainlandOrOversea = _mainlandOrOversea;
    m_mainlandOrOverseaHasBeenSet = true;
}

bool DescribeLiveTimeShiftWriteSizeInfoListRequest::MainlandOrOverseaHasBeenSet() const
{
    return m_mainlandOrOverseaHasBeenSet;
}


