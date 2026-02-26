/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#include <tencentcloud/ses/v20201002/model/GetAbuseReportRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ses::V20201002::Model;
using namespace std;

GetAbuseReportRequest::GetAbuseReportRequest() :
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_fromDomainHasBeenSet(false),
    m_fromAddressHasBeenSet(false),
    m_mtaHasBeenSet(false),
    m_toAddressHasBeenSet(false),
    m_templateIdHasBeenSet(false)
{
}

string GetAbuseReportRequest::ToJsonString() const
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

    if (m_offsetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Offset";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_offset, allocator);
    }

    if (m_limitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Limit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_limit, allocator);
    }

    if (m_fromDomainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FromDomain";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_fromDomain.c_str(), allocator).Move(), allocator);
    }

    if (m_fromAddressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FromAddress";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_fromAddress.c_str(), allocator).Move(), allocator);
    }

    if (m_mtaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Mta";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_mta.c_str(), allocator).Move(), allocator);
    }

    if (m_toAddressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ToAddress";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_toAddress.c_str(), allocator).Move(), allocator);
    }

    if (m_templateIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TemplateId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_templateId.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string GetAbuseReportRequest::GetStartTime() const
{
    return m_startTime;
}

void GetAbuseReportRequest::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool GetAbuseReportRequest::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string GetAbuseReportRequest::GetEndTime() const
{
    return m_endTime;
}

void GetAbuseReportRequest::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool GetAbuseReportRequest::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

int64_t GetAbuseReportRequest::GetOffset() const
{
    return m_offset;
}

void GetAbuseReportRequest::SetOffset(const int64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool GetAbuseReportRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

int64_t GetAbuseReportRequest::GetLimit() const
{
    return m_limit;
}

void GetAbuseReportRequest::SetLimit(const int64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool GetAbuseReportRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

string GetAbuseReportRequest::GetFromDomain() const
{
    return m_fromDomain;
}

void GetAbuseReportRequest::SetFromDomain(const string& _fromDomain)
{
    m_fromDomain = _fromDomain;
    m_fromDomainHasBeenSet = true;
}

bool GetAbuseReportRequest::FromDomainHasBeenSet() const
{
    return m_fromDomainHasBeenSet;
}

string GetAbuseReportRequest::GetFromAddress() const
{
    return m_fromAddress;
}

void GetAbuseReportRequest::SetFromAddress(const string& _fromAddress)
{
    m_fromAddress = _fromAddress;
    m_fromAddressHasBeenSet = true;
}

bool GetAbuseReportRequest::FromAddressHasBeenSet() const
{
    return m_fromAddressHasBeenSet;
}

string GetAbuseReportRequest::GetMta() const
{
    return m_mta;
}

void GetAbuseReportRequest::SetMta(const string& _mta)
{
    m_mta = _mta;
    m_mtaHasBeenSet = true;
}

bool GetAbuseReportRequest::MtaHasBeenSet() const
{
    return m_mtaHasBeenSet;
}

string GetAbuseReportRequest::GetToAddress() const
{
    return m_toAddress;
}

void GetAbuseReportRequest::SetToAddress(const string& _toAddress)
{
    m_toAddress = _toAddress;
    m_toAddressHasBeenSet = true;
}

bool GetAbuseReportRequest::ToAddressHasBeenSet() const
{
    return m_toAddressHasBeenSet;
}

string GetAbuseReportRequest::GetTemplateId() const
{
    return m_templateId;
}

void GetAbuseReportRequest::SetTemplateId(const string& _templateId)
{
    m_templateId = _templateId;
    m_templateIdHasBeenSet = true;
}

bool GetAbuseReportRequest::TemplateIdHasBeenSet() const
{
    return m_templateIdHasBeenSet;
}


