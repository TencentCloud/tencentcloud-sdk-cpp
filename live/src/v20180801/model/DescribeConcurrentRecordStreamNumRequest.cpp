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

#include <tencentcloud/live/v20180801/model/DescribeConcurrentRecordStreamNumRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Live::V20180801::Model;
using namespace std;

DescribeConcurrentRecordStreamNumRequest::DescribeConcurrentRecordStreamNumRequest() :
    m_liveTypeHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_mainlandOrOverseaHasBeenSet(false),
    m_pushDomainsHasBeenSet(false)
{
}

string DescribeConcurrentRecordStreamNumRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_liveTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LiveType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_liveType.c_str(), allocator).Move(), allocator);
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

    if (m_mainlandOrOverseaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MainlandOrOversea";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_mainlandOrOversea.c_str(), allocator).Move(), allocator);
    }

    if (m_pushDomainsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PushDomains";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_pushDomains.begin(); itr != m_pushDomains.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeConcurrentRecordStreamNumRequest::GetLiveType() const
{
    return m_liveType;
}

void DescribeConcurrentRecordStreamNumRequest::SetLiveType(const string& _liveType)
{
    m_liveType = _liveType;
    m_liveTypeHasBeenSet = true;
}

bool DescribeConcurrentRecordStreamNumRequest::LiveTypeHasBeenSet() const
{
    return m_liveTypeHasBeenSet;
}

string DescribeConcurrentRecordStreamNumRequest::GetStartTime() const
{
    return m_startTime;
}

void DescribeConcurrentRecordStreamNumRequest::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool DescribeConcurrentRecordStreamNumRequest::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string DescribeConcurrentRecordStreamNumRequest::GetEndTime() const
{
    return m_endTime;
}

void DescribeConcurrentRecordStreamNumRequest::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool DescribeConcurrentRecordStreamNumRequest::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

string DescribeConcurrentRecordStreamNumRequest::GetMainlandOrOversea() const
{
    return m_mainlandOrOversea;
}

void DescribeConcurrentRecordStreamNumRequest::SetMainlandOrOversea(const string& _mainlandOrOversea)
{
    m_mainlandOrOversea = _mainlandOrOversea;
    m_mainlandOrOverseaHasBeenSet = true;
}

bool DescribeConcurrentRecordStreamNumRequest::MainlandOrOverseaHasBeenSet() const
{
    return m_mainlandOrOverseaHasBeenSet;
}

vector<string> DescribeConcurrentRecordStreamNumRequest::GetPushDomains() const
{
    return m_pushDomains;
}

void DescribeConcurrentRecordStreamNumRequest::SetPushDomains(const vector<string>& _pushDomains)
{
    m_pushDomains = _pushDomains;
    m_pushDomainsHasBeenSet = true;
}

bool DescribeConcurrentRecordStreamNumRequest::PushDomainsHasBeenSet() const
{
    return m_pushDomainsHasBeenSet;
}


