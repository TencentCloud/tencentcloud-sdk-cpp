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

#include <tencentcloud/sms/v20190711/model/SendStatusStatisticsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Sms::V20190711::Model;
using namespace std;

SendStatusStatisticsRequest::SendStatusStatisticsRequest() :
    m_startDateTimeHasBeenSet(false),
    m_endDataTimeHasBeenSet(false),
    m_smsSdkAppidHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_offsetHasBeenSet(false)
{
}

string SendStatusStatisticsRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_startDateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartDateTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_startDateTime, allocator);
    }

    if (m_endDataTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndDataTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_endDataTime, allocator);
    }

    if (m_smsSdkAppidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SmsSdkAppid";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_smsSdkAppid.c_str(), allocator).Move(), allocator);
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


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t SendStatusStatisticsRequest::GetStartDateTime() const
{
    return m_startDateTime;
}

void SendStatusStatisticsRequest::SetStartDateTime(const uint64_t& _startDateTime)
{
    m_startDateTime = _startDateTime;
    m_startDateTimeHasBeenSet = true;
}

bool SendStatusStatisticsRequest::StartDateTimeHasBeenSet() const
{
    return m_startDateTimeHasBeenSet;
}

uint64_t SendStatusStatisticsRequest::GetEndDataTime() const
{
    return m_endDataTime;
}

void SendStatusStatisticsRequest::SetEndDataTime(const uint64_t& _endDataTime)
{
    m_endDataTime = _endDataTime;
    m_endDataTimeHasBeenSet = true;
}

bool SendStatusStatisticsRequest::EndDataTimeHasBeenSet() const
{
    return m_endDataTimeHasBeenSet;
}

string SendStatusStatisticsRequest::GetSmsSdkAppid() const
{
    return m_smsSdkAppid;
}

void SendStatusStatisticsRequest::SetSmsSdkAppid(const string& _smsSdkAppid)
{
    m_smsSdkAppid = _smsSdkAppid;
    m_smsSdkAppidHasBeenSet = true;
}

bool SendStatusStatisticsRequest::SmsSdkAppidHasBeenSet() const
{
    return m_smsSdkAppidHasBeenSet;
}

uint64_t SendStatusStatisticsRequest::GetLimit() const
{
    return m_limit;
}

void SendStatusStatisticsRequest::SetLimit(const uint64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool SendStatusStatisticsRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

uint64_t SendStatusStatisticsRequest::GetOffset() const
{
    return m_offset;
}

void SendStatusStatisticsRequest::SetOffset(const uint64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool SendStatusStatisticsRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}


