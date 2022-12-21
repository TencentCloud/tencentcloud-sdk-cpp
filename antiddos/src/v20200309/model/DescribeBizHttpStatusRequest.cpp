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

#include <tencentcloud/antiddos/v20200309/model/DescribeBizHttpStatusRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Antiddos::V20200309::Model;
using namespace std;

DescribeBizHttpStatusRequest::DescribeBizHttpStatusRequest() :
    m_statisticsHasBeenSet(false),
    m_businessHasBeenSet(false),
    m_periodHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_idHasBeenSet(false),
    m_domainHasBeenSet(false),
    m_protoInfoHasBeenSet(false)
{
}

string DescribeBizHttpStatusRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_statisticsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Statistics";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_statistics.c_str(), allocator).Move(), allocator);
    }

    if (m_businessHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Business";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_business.c_str(), allocator).Move(), allocator);
    }

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
        d.AddMember(iKey, rapidjson::Value(m_startTime.c_str(), allocator).Move(), allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_endTime.c_str(), allocator).Move(), allocator);
    }

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_id.c_str(), allocator).Move(), allocator);
    }

    if (m_domainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Domain";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_domain.c_str(), allocator).Move(), allocator);
    }

    if (m_protoInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProtoInfo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_protoInfo.begin(); itr != m_protoInfo.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeBizHttpStatusRequest::GetStatistics() const
{
    return m_statistics;
}

void DescribeBizHttpStatusRequest::SetStatistics(const string& _statistics)
{
    m_statistics = _statistics;
    m_statisticsHasBeenSet = true;
}

bool DescribeBizHttpStatusRequest::StatisticsHasBeenSet() const
{
    return m_statisticsHasBeenSet;
}

string DescribeBizHttpStatusRequest::GetBusiness() const
{
    return m_business;
}

void DescribeBizHttpStatusRequest::SetBusiness(const string& _business)
{
    m_business = _business;
    m_businessHasBeenSet = true;
}

bool DescribeBizHttpStatusRequest::BusinessHasBeenSet() const
{
    return m_businessHasBeenSet;
}

int64_t DescribeBizHttpStatusRequest::GetPeriod() const
{
    return m_period;
}

void DescribeBizHttpStatusRequest::SetPeriod(const int64_t& _period)
{
    m_period = _period;
    m_periodHasBeenSet = true;
}

bool DescribeBizHttpStatusRequest::PeriodHasBeenSet() const
{
    return m_periodHasBeenSet;
}

string DescribeBizHttpStatusRequest::GetStartTime() const
{
    return m_startTime;
}

void DescribeBizHttpStatusRequest::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool DescribeBizHttpStatusRequest::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string DescribeBizHttpStatusRequest::GetEndTime() const
{
    return m_endTime;
}

void DescribeBizHttpStatusRequest::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool DescribeBizHttpStatusRequest::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

string DescribeBizHttpStatusRequest::GetId() const
{
    return m_id;
}

void DescribeBizHttpStatusRequest::SetId(const string& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool DescribeBizHttpStatusRequest::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string DescribeBizHttpStatusRequest::GetDomain() const
{
    return m_domain;
}

void DescribeBizHttpStatusRequest::SetDomain(const string& _domain)
{
    m_domain = _domain;
    m_domainHasBeenSet = true;
}

bool DescribeBizHttpStatusRequest::DomainHasBeenSet() const
{
    return m_domainHasBeenSet;
}

vector<ProtocolPort> DescribeBizHttpStatusRequest::GetProtoInfo() const
{
    return m_protoInfo;
}

void DescribeBizHttpStatusRequest::SetProtoInfo(const vector<ProtocolPort>& _protoInfo)
{
    m_protoInfo = _protoInfo;
    m_protoInfoHasBeenSet = true;
}

bool DescribeBizHttpStatusRequest::ProtoInfoHasBeenSet() const
{
    return m_protoInfoHasBeenSet;
}


