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

#include <tencentcloud/live/v20180801/model/DescribeLiveEnhanceInfoListRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Live::V20180801::Model;
using namespace std;

DescribeLiveEnhanceInfoListRequest::DescribeLiveEnhanceInfoListRequest() :
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_granularityHasBeenSet(false),
    m_domainNamesHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_resolutionHasBeenSet(false),
    m_fpsHasBeenSet(false)
{
}

string DescribeLiveEnhanceInfoListRequest::ToJsonString() const
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

    if (m_granularityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Granularity";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_granularity, allocator);
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

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_type.begin(); itr != m_type.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_resolutionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Resolution";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_resolution.begin(); itr != m_resolution.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_fpsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Fps";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_fps.begin(); itr != m_fps.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeLiveEnhanceInfoListRequest::GetStartTime() const
{
    return m_startTime;
}

void DescribeLiveEnhanceInfoListRequest::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool DescribeLiveEnhanceInfoListRequest::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string DescribeLiveEnhanceInfoListRequest::GetEndTime() const
{
    return m_endTime;
}

void DescribeLiveEnhanceInfoListRequest::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool DescribeLiveEnhanceInfoListRequest::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

int64_t DescribeLiveEnhanceInfoListRequest::GetGranularity() const
{
    return m_granularity;
}

void DescribeLiveEnhanceInfoListRequest::SetGranularity(const int64_t& _granularity)
{
    m_granularity = _granularity;
    m_granularityHasBeenSet = true;
}

bool DescribeLiveEnhanceInfoListRequest::GranularityHasBeenSet() const
{
    return m_granularityHasBeenSet;
}

vector<string> DescribeLiveEnhanceInfoListRequest::GetDomainNames() const
{
    return m_domainNames;
}

void DescribeLiveEnhanceInfoListRequest::SetDomainNames(const vector<string>& _domainNames)
{
    m_domainNames = _domainNames;
    m_domainNamesHasBeenSet = true;
}

bool DescribeLiveEnhanceInfoListRequest::DomainNamesHasBeenSet() const
{
    return m_domainNamesHasBeenSet;
}

vector<string> DescribeLiveEnhanceInfoListRequest::GetType() const
{
    return m_type;
}

void DescribeLiveEnhanceInfoListRequest::SetType(const vector<string>& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool DescribeLiveEnhanceInfoListRequest::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

vector<string> DescribeLiveEnhanceInfoListRequest::GetResolution() const
{
    return m_resolution;
}

void DescribeLiveEnhanceInfoListRequest::SetResolution(const vector<string>& _resolution)
{
    m_resolution = _resolution;
    m_resolutionHasBeenSet = true;
}

bool DescribeLiveEnhanceInfoListRequest::ResolutionHasBeenSet() const
{
    return m_resolutionHasBeenSet;
}

vector<string> DescribeLiveEnhanceInfoListRequest::GetFps() const
{
    return m_fps;
}

void DescribeLiveEnhanceInfoListRequest::SetFps(const vector<string>& _fps)
{
    m_fps = _fps;
    m_fpsHasBeenSet = true;
}

bool DescribeLiveEnhanceInfoListRequest::FpsHasBeenSet() const
{
    return m_fpsHasBeenSet;
}


