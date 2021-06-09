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

#include <tencentcloud/sms/v20210111/model/PullSmsReplyStatusByPhoneNumberRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Sms::V20210111::Model;
using namespace std;

PullSmsReplyStatusByPhoneNumberRequest::PullSmsReplyStatusByPhoneNumberRequest() :
    m_beginTimeHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_phoneNumberHasBeenSet(false),
    m_smsSdkAppIdHasBeenSet(false),
    m_endTimeHasBeenSet(false)
{
}

string PullSmsReplyStatusByPhoneNumberRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_beginTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BeginTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_beginTime, allocator);
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

    if (m_smsSdkAppIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SmsSdkAppId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_smsSdkAppId.c_str(), allocator).Move(), allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_endTime, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t PullSmsReplyStatusByPhoneNumberRequest::GetBeginTime() const
{
    return m_beginTime;
}

void PullSmsReplyStatusByPhoneNumberRequest::SetBeginTime(const uint64_t& _beginTime)
{
    m_beginTime = _beginTime;
    m_beginTimeHasBeenSet = true;
}

bool PullSmsReplyStatusByPhoneNumberRequest::BeginTimeHasBeenSet() const
{
    return m_beginTimeHasBeenSet;
}

uint64_t PullSmsReplyStatusByPhoneNumberRequest::GetOffset() const
{
    return m_offset;
}

void PullSmsReplyStatusByPhoneNumberRequest::SetOffset(const uint64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool PullSmsReplyStatusByPhoneNumberRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

uint64_t PullSmsReplyStatusByPhoneNumberRequest::GetLimit() const
{
    return m_limit;
}

void PullSmsReplyStatusByPhoneNumberRequest::SetLimit(const uint64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool PullSmsReplyStatusByPhoneNumberRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

string PullSmsReplyStatusByPhoneNumberRequest::GetPhoneNumber() const
{
    return m_phoneNumber;
}

void PullSmsReplyStatusByPhoneNumberRequest::SetPhoneNumber(const string& _phoneNumber)
{
    m_phoneNumber = _phoneNumber;
    m_phoneNumberHasBeenSet = true;
}

bool PullSmsReplyStatusByPhoneNumberRequest::PhoneNumberHasBeenSet() const
{
    return m_phoneNumberHasBeenSet;
}

string PullSmsReplyStatusByPhoneNumberRequest::GetSmsSdkAppId() const
{
    return m_smsSdkAppId;
}

void PullSmsReplyStatusByPhoneNumberRequest::SetSmsSdkAppId(const string& _smsSdkAppId)
{
    m_smsSdkAppId = _smsSdkAppId;
    m_smsSdkAppIdHasBeenSet = true;
}

bool PullSmsReplyStatusByPhoneNumberRequest::SmsSdkAppIdHasBeenSet() const
{
    return m_smsSdkAppIdHasBeenSet;
}

uint64_t PullSmsReplyStatusByPhoneNumberRequest::GetEndTime() const
{
    return m_endTime;
}

void PullSmsReplyStatusByPhoneNumberRequest::SetEndTime(const uint64_t& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool PullSmsReplyStatusByPhoneNumberRequest::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}


