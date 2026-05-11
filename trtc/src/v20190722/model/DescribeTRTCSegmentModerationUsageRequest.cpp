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

#include <tencentcloud/trtc/v20190722/model/DescribeTRTCSegmentModerationUsageRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Trtc::V20190722::Model;
using namespace std;

DescribeTRTCSegmentModerationUsageRequest::DescribeTRTCSegmentModerationUsageRequest() :
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_businessHasBeenSet(false),
    m_sdkAppIdHasBeenSet(false)
{
}

string DescribeTRTCSegmentModerationUsageRequest::ToJsonString() const
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

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_businessHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Business";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_business, allocator);
    }

    if (m_sdkAppIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SdkAppId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_sdkAppId, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeTRTCSegmentModerationUsageRequest::GetStartTime() const
{
    return m_startTime;
}

void DescribeTRTCSegmentModerationUsageRequest::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool DescribeTRTCSegmentModerationUsageRequest::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string DescribeTRTCSegmentModerationUsageRequest::GetEndTime() const
{
    return m_endTime;
}

void DescribeTRTCSegmentModerationUsageRequest::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool DescribeTRTCSegmentModerationUsageRequest::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

string DescribeTRTCSegmentModerationUsageRequest::GetType() const
{
    return m_type;
}

void DescribeTRTCSegmentModerationUsageRequest::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool DescribeTRTCSegmentModerationUsageRequest::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

uint64_t DescribeTRTCSegmentModerationUsageRequest::GetBusiness() const
{
    return m_business;
}

void DescribeTRTCSegmentModerationUsageRequest::SetBusiness(const uint64_t& _business)
{
    m_business = _business;
    m_businessHasBeenSet = true;
}

bool DescribeTRTCSegmentModerationUsageRequest::BusinessHasBeenSet() const
{
    return m_businessHasBeenSet;
}

uint64_t DescribeTRTCSegmentModerationUsageRequest::GetSdkAppId() const
{
    return m_sdkAppId;
}

void DescribeTRTCSegmentModerationUsageRequest::SetSdkAppId(const uint64_t& _sdkAppId)
{
    m_sdkAppId = _sdkAppId;
    m_sdkAppIdHasBeenSet = true;
}

bool DescribeTRTCSegmentModerationUsageRequest::SdkAppIdHasBeenSet() const
{
    return m_sdkAppIdHasBeenSet;
}


