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

#include <tencentcloud/ic/v20190307/model/DescribeSmsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ic::V20190307::Model;
using namespace std;

DescribeSmsRequest::DescribeSmsRequest() :
    m_sdkappidHasBeenSet(false),
    m_iccidHasBeenSet(false),
    m_msisdnHasBeenSet(false),
    m_smsTypeHasBeenSet(false),
    m_beginTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_limitHasBeenSet(false)
{
}

string DescribeSmsRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_sdkappidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Sdkappid";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_sdkappid, allocator);
    }

    if (m_iccidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Iccid";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_iccid.c_str(), allocator).Move(), allocator);
    }

    if (m_msisdnHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Msisdn";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_msisdn.c_str(), allocator).Move(), allocator);
    }

    if (m_smsTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SmsType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_smsType, allocator);
    }

    if (m_beginTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BeginTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_beginTime.c_str(), allocator).Move(), allocator);
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


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t DescribeSmsRequest::GetSdkappid() const
{
    return m_sdkappid;
}

void DescribeSmsRequest::SetSdkappid(const int64_t& _sdkappid)
{
    m_sdkappid = _sdkappid;
    m_sdkappidHasBeenSet = true;
}

bool DescribeSmsRequest::SdkappidHasBeenSet() const
{
    return m_sdkappidHasBeenSet;
}

string DescribeSmsRequest::GetIccid() const
{
    return m_iccid;
}

void DescribeSmsRequest::SetIccid(const string& _iccid)
{
    m_iccid = _iccid;
    m_iccidHasBeenSet = true;
}

bool DescribeSmsRequest::IccidHasBeenSet() const
{
    return m_iccidHasBeenSet;
}

string DescribeSmsRequest::GetMsisdn() const
{
    return m_msisdn;
}

void DescribeSmsRequest::SetMsisdn(const string& _msisdn)
{
    m_msisdn = _msisdn;
    m_msisdnHasBeenSet = true;
}

bool DescribeSmsRequest::MsisdnHasBeenSet() const
{
    return m_msisdnHasBeenSet;
}

int64_t DescribeSmsRequest::GetSmsType() const
{
    return m_smsType;
}

void DescribeSmsRequest::SetSmsType(const int64_t& _smsType)
{
    m_smsType = _smsType;
    m_smsTypeHasBeenSet = true;
}

bool DescribeSmsRequest::SmsTypeHasBeenSet() const
{
    return m_smsTypeHasBeenSet;
}

string DescribeSmsRequest::GetBeginTime() const
{
    return m_beginTime;
}

void DescribeSmsRequest::SetBeginTime(const string& _beginTime)
{
    m_beginTime = _beginTime;
    m_beginTimeHasBeenSet = true;
}

bool DescribeSmsRequest::BeginTimeHasBeenSet() const
{
    return m_beginTimeHasBeenSet;
}

string DescribeSmsRequest::GetEndTime() const
{
    return m_endTime;
}

void DescribeSmsRequest::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool DescribeSmsRequest::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

uint64_t DescribeSmsRequest::GetOffset() const
{
    return m_offset;
}

void DescribeSmsRequest::SetOffset(const uint64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeSmsRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

uint64_t DescribeSmsRequest::GetLimit() const
{
    return m_limit;
}

void DescribeSmsRequest::SetLimit(const uint64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeSmsRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}


