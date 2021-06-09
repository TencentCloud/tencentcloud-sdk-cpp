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

#include <tencentcloud/ses/v20201002/model/GetStatisticsReportRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ses::V20201002::Model;
using namespace std;

GetStatisticsReportRequest::GetStatisticsReportRequest() :
    m_startDateHasBeenSet(false),
    m_endDateHasBeenSet(false),
    m_domainHasBeenSet(false),
    m_receivingMailboxTypeHasBeenSet(false)
{
}

string GetStatisticsReportRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_startDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartDate";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_startDate.c_str(), allocator).Move(), allocator);
    }

    if (m_endDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndDate";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_endDate.c_str(), allocator).Move(), allocator);
    }

    if (m_domainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Domain";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_domain.c_str(), allocator).Move(), allocator);
    }

    if (m_receivingMailboxTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReceivingMailboxType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_receivingMailboxType.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string GetStatisticsReportRequest::GetStartDate() const
{
    return m_startDate;
}

void GetStatisticsReportRequest::SetStartDate(const string& _startDate)
{
    m_startDate = _startDate;
    m_startDateHasBeenSet = true;
}

bool GetStatisticsReportRequest::StartDateHasBeenSet() const
{
    return m_startDateHasBeenSet;
}

string GetStatisticsReportRequest::GetEndDate() const
{
    return m_endDate;
}

void GetStatisticsReportRequest::SetEndDate(const string& _endDate)
{
    m_endDate = _endDate;
    m_endDateHasBeenSet = true;
}

bool GetStatisticsReportRequest::EndDateHasBeenSet() const
{
    return m_endDateHasBeenSet;
}

string GetStatisticsReportRequest::GetDomain() const
{
    return m_domain;
}

void GetStatisticsReportRequest::SetDomain(const string& _domain)
{
    m_domain = _domain;
    m_domainHasBeenSet = true;
}

bool GetStatisticsReportRequest::DomainHasBeenSet() const
{
    return m_domainHasBeenSet;
}

string GetStatisticsReportRequest::GetReceivingMailboxType() const
{
    return m_receivingMailboxType;
}

void GetStatisticsReportRequest::SetReceivingMailboxType(const string& _receivingMailboxType)
{
    m_receivingMailboxType = _receivingMailboxType;
    m_receivingMailboxTypeHasBeenSet = true;
}

bool GetStatisticsReportRequest::ReceivingMailboxTypeHasBeenSet() const
{
    return m_receivingMailboxTypeHasBeenSet;
}


