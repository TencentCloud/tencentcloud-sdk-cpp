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

#include <tencentcloud/vod/v20180717/model/DescribeCDNUsageDataRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Vod::V20180717::Model;
using namespace std;

DescribeCDNUsageDataRequest::DescribeCDNUsageDataRequest() :
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_dataTypeHasBeenSet(false),
    m_subAppIdHasBeenSet(false),
    m_dataIntervalHasBeenSet(false),
    m_domainNamesHasBeenSet(false)
{
}

string DescribeCDNUsageDataRequest::ToJsonString() const
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

    if (m_dataTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_dataType.c_str(), allocator).Move(), allocator);
    }

    if (m_subAppIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubAppId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_subAppId, allocator);
    }

    if (m_dataIntervalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataInterval";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_dataInterval, allocator);
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


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeCDNUsageDataRequest::GetStartTime() const
{
    return m_startTime;
}

void DescribeCDNUsageDataRequest::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool DescribeCDNUsageDataRequest::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string DescribeCDNUsageDataRequest::GetEndTime() const
{
    return m_endTime;
}

void DescribeCDNUsageDataRequest::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool DescribeCDNUsageDataRequest::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

string DescribeCDNUsageDataRequest::GetDataType() const
{
    return m_dataType;
}

void DescribeCDNUsageDataRequest::SetDataType(const string& _dataType)
{
    m_dataType = _dataType;
    m_dataTypeHasBeenSet = true;
}

bool DescribeCDNUsageDataRequest::DataTypeHasBeenSet() const
{
    return m_dataTypeHasBeenSet;
}

uint64_t DescribeCDNUsageDataRequest::GetSubAppId() const
{
    return m_subAppId;
}

void DescribeCDNUsageDataRequest::SetSubAppId(const uint64_t& _subAppId)
{
    m_subAppId = _subAppId;
    m_subAppIdHasBeenSet = true;
}

bool DescribeCDNUsageDataRequest::SubAppIdHasBeenSet() const
{
    return m_subAppIdHasBeenSet;
}

uint64_t DescribeCDNUsageDataRequest::GetDataInterval() const
{
    return m_dataInterval;
}

void DescribeCDNUsageDataRequest::SetDataInterval(const uint64_t& _dataInterval)
{
    m_dataInterval = _dataInterval;
    m_dataIntervalHasBeenSet = true;
}

bool DescribeCDNUsageDataRequest::DataIntervalHasBeenSet() const
{
    return m_dataIntervalHasBeenSet;
}

vector<string> DescribeCDNUsageDataRequest::GetDomainNames() const
{
    return m_domainNames;
}

void DescribeCDNUsageDataRequest::SetDomainNames(const vector<string>& _domainNames)
{
    m_domainNames = _domainNames;
    m_domainNamesHasBeenSet = true;
}

bool DescribeCDNUsageDataRequest::DomainNamesHasBeenSet() const
{
    return m_domainNamesHasBeenSet;
}


