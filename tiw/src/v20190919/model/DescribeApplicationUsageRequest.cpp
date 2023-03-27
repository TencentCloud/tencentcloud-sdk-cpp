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

#include <tencentcloud/tiw/v20190919/model/DescribeApplicationUsageRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tiw::V20190919::Model;
using namespace std;

DescribeApplicationUsageRequest::DescribeApplicationUsageRequest() :
    m_beginTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_subProductHasBeenSet(false),
    m_timeLevelHasBeenSet(false),
    m_sdkAppIdHasBeenSet(false),
    m_isWeightedHasBeenSet(false)
{
}

string DescribeApplicationUsageRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


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

    if (m_subProductHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubProduct";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_subProduct.c_str(), allocator).Move(), allocator);
    }

    if (m_timeLevelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimeLevel";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_timeLevel.c_str(), allocator).Move(), allocator);
    }

    if (m_sdkAppIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SdkAppId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_sdkAppId, allocator);
    }

    if (m_isWeightedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsWeighted";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isWeighted, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeApplicationUsageRequest::GetBeginTime() const
{
    return m_beginTime;
}

void DescribeApplicationUsageRequest::SetBeginTime(const string& _beginTime)
{
    m_beginTime = _beginTime;
    m_beginTimeHasBeenSet = true;
}

bool DescribeApplicationUsageRequest::BeginTimeHasBeenSet() const
{
    return m_beginTimeHasBeenSet;
}

string DescribeApplicationUsageRequest::GetEndTime() const
{
    return m_endTime;
}

void DescribeApplicationUsageRequest::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool DescribeApplicationUsageRequest::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

string DescribeApplicationUsageRequest::GetSubProduct() const
{
    return m_subProduct;
}

void DescribeApplicationUsageRequest::SetSubProduct(const string& _subProduct)
{
    m_subProduct = _subProduct;
    m_subProductHasBeenSet = true;
}

bool DescribeApplicationUsageRequest::SubProductHasBeenSet() const
{
    return m_subProductHasBeenSet;
}

string DescribeApplicationUsageRequest::GetTimeLevel() const
{
    return m_timeLevel;
}

void DescribeApplicationUsageRequest::SetTimeLevel(const string& _timeLevel)
{
    m_timeLevel = _timeLevel;
    m_timeLevelHasBeenSet = true;
}

bool DescribeApplicationUsageRequest::TimeLevelHasBeenSet() const
{
    return m_timeLevelHasBeenSet;
}

int64_t DescribeApplicationUsageRequest::GetSdkAppId() const
{
    return m_sdkAppId;
}

void DescribeApplicationUsageRequest::SetSdkAppId(const int64_t& _sdkAppId)
{
    m_sdkAppId = _sdkAppId;
    m_sdkAppIdHasBeenSet = true;
}

bool DescribeApplicationUsageRequest::SdkAppIdHasBeenSet() const
{
    return m_sdkAppIdHasBeenSet;
}

bool DescribeApplicationUsageRequest::GetIsWeighted() const
{
    return m_isWeighted;
}

void DescribeApplicationUsageRequest::SetIsWeighted(const bool& _isWeighted)
{
    m_isWeighted = _isWeighted;
    m_isWeightedHasBeenSet = true;
}

bool DescribeApplicationUsageRequest::IsWeightedHasBeenSet() const
{
    return m_isWeightedHasBeenSet;
}


