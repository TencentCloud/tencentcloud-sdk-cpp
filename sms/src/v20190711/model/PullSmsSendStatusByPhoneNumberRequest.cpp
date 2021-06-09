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

#include <tencentcloud/sms/v20190711/model/PullSmsSendStatusByPhoneNumberRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Sms::V20190711::Model;
using namespace std;

PullSmsSendStatusByPhoneNumberRequest::PullSmsSendStatusByPhoneNumberRequest() :
    m_sendDateTimeHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_phoneNumberHasBeenSet(false),
    m_smsSdkAppidHasBeenSet(false),
    m_endDateTimeHasBeenSet(false)
{
}

string PullSmsSendStatusByPhoneNumberRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_sendDateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SendDateTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_sendDateTime, allocator);
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

    if (m_phoneNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PhoneNumber";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_phoneNumber.c_str(), allocator).Move(), allocator);
    }

    if (m_smsSdkAppidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SmsSdkAppid";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_smsSdkAppid.c_str(), allocator).Move(), allocator);
    }

    if (m_endDateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndDateTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_endDateTime, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t PullSmsSendStatusByPhoneNumberRequest::GetSendDateTime() const
{
    return m_sendDateTime;
}

void PullSmsSendStatusByPhoneNumberRequest::SetSendDateTime(const uint64_t& _sendDateTime)
{
    m_sendDateTime = _sendDateTime;
    m_sendDateTimeHasBeenSet = true;
}

bool PullSmsSendStatusByPhoneNumberRequest::SendDateTimeHasBeenSet() const
{
    return m_sendDateTimeHasBeenSet;
}

uint64_t PullSmsSendStatusByPhoneNumberRequest::GetOffset() const
{
    return m_offset;
}

void PullSmsSendStatusByPhoneNumberRequest::SetOffset(const uint64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool PullSmsSendStatusByPhoneNumberRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

uint64_t PullSmsSendStatusByPhoneNumberRequest::GetLimit() const
{
    return m_limit;
}

void PullSmsSendStatusByPhoneNumberRequest::SetLimit(const uint64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool PullSmsSendStatusByPhoneNumberRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

string PullSmsSendStatusByPhoneNumberRequest::GetPhoneNumber() const
{
    return m_phoneNumber;
}

void PullSmsSendStatusByPhoneNumberRequest::SetPhoneNumber(const string& _phoneNumber)
{
    m_phoneNumber = _phoneNumber;
    m_phoneNumberHasBeenSet = true;
}

bool PullSmsSendStatusByPhoneNumberRequest::PhoneNumberHasBeenSet() const
{
    return m_phoneNumberHasBeenSet;
}

string PullSmsSendStatusByPhoneNumberRequest::GetSmsSdkAppid() const
{
    return m_smsSdkAppid;
}

void PullSmsSendStatusByPhoneNumberRequest::SetSmsSdkAppid(const string& _smsSdkAppid)
{
    m_smsSdkAppid = _smsSdkAppid;
    m_smsSdkAppidHasBeenSet = true;
}

bool PullSmsSendStatusByPhoneNumberRequest::SmsSdkAppidHasBeenSet() const
{
    return m_smsSdkAppidHasBeenSet;
}

uint64_t PullSmsSendStatusByPhoneNumberRequest::GetEndDateTime() const
{
    return m_endDateTime;
}

void PullSmsSendStatusByPhoneNumberRequest::SetEndDateTime(const uint64_t& _endDateTime)
{
    m_endDateTime = _endDateTime;
    m_endDateTimeHasBeenSet = true;
}

bool PullSmsSendStatusByPhoneNumberRequest::EndDateTimeHasBeenSet() const
{
    return m_endDateTimeHasBeenSet;
}


