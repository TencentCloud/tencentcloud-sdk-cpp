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

#include <tencentcloud/sms/v20210111/model/SmsPackagesStatisticsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Sms::V20210111::Model;
using namespace std;

SmsPackagesStatisticsRequest::SmsPackagesStatisticsRequest() :
    m_smsSdkAppIdHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_beginTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false)
{
}

string SmsPackagesStatisticsRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_smsSdkAppIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SmsSdkAppId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_smsSdkAppId.c_str(), allocator).Move(), allocator);
    }

    if (m_limitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Limit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_limit, allocator);
    }

    if (m_offsetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Offset";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_offset, allocator);
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


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string SmsPackagesStatisticsRequest::GetSmsSdkAppId() const
{
    return m_smsSdkAppId;
}

void SmsPackagesStatisticsRequest::SetSmsSdkAppId(const string& _smsSdkAppId)
{
    m_smsSdkAppId = _smsSdkAppId;
    m_smsSdkAppIdHasBeenSet = true;
}

bool SmsPackagesStatisticsRequest::SmsSdkAppIdHasBeenSet() const
{
    return m_smsSdkAppIdHasBeenSet;
}

uint64_t SmsPackagesStatisticsRequest::GetLimit() const
{
    return m_limit;
}

void SmsPackagesStatisticsRequest::SetLimit(const uint64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool SmsPackagesStatisticsRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

uint64_t SmsPackagesStatisticsRequest::GetOffset() const
{
    return m_offset;
}

void SmsPackagesStatisticsRequest::SetOffset(const uint64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool SmsPackagesStatisticsRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

string SmsPackagesStatisticsRequest::GetBeginTime() const
{
    return m_beginTime;
}

void SmsPackagesStatisticsRequest::SetBeginTime(const string& _beginTime)
{
    m_beginTime = _beginTime;
    m_beginTimeHasBeenSet = true;
}

bool SmsPackagesStatisticsRequest::BeginTimeHasBeenSet() const
{
    return m_beginTimeHasBeenSet;
}

string SmsPackagesStatisticsRequest::GetEndTime() const
{
    return m_endTime;
}

void SmsPackagesStatisticsRequest::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool SmsPackagesStatisticsRequest::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}


