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

#include <tencentcloud/tiw/v20190919/model/DescribeTIWRoomDailyUsageRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tiw::V20190919::Model;
using namespace std;

DescribeTIWRoomDailyUsageRequest::DescribeTIWRoomDailyUsageRequest() :
    m_sdkAppIdHasBeenSet(false),
    m_subProductHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_roomIDsHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_limitHasBeenSet(false)
{
}

string DescribeTIWRoomDailyUsageRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_sdkAppIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SdkAppId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_sdkAppId, allocator);
    }

    if (m_subProductHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubProduct";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_subProduct.c_str(), allocator).Move(), allocator);
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

    if (m_roomIDsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RoomIDs";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_roomIDs.begin(); itr != m_roomIDs.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetUint64(*itr), allocator);
        }
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


int64_t DescribeTIWRoomDailyUsageRequest::GetSdkAppId() const
{
    return m_sdkAppId;
}

void DescribeTIWRoomDailyUsageRequest::SetSdkAppId(const int64_t& _sdkAppId)
{
    m_sdkAppId = _sdkAppId;
    m_sdkAppIdHasBeenSet = true;
}

bool DescribeTIWRoomDailyUsageRequest::SdkAppIdHasBeenSet() const
{
    return m_sdkAppIdHasBeenSet;
}

string DescribeTIWRoomDailyUsageRequest::GetSubProduct() const
{
    return m_subProduct;
}

void DescribeTIWRoomDailyUsageRequest::SetSubProduct(const string& _subProduct)
{
    m_subProduct = _subProduct;
    m_subProductHasBeenSet = true;
}

bool DescribeTIWRoomDailyUsageRequest::SubProductHasBeenSet() const
{
    return m_subProductHasBeenSet;
}

string DescribeTIWRoomDailyUsageRequest::GetStartTime() const
{
    return m_startTime;
}

void DescribeTIWRoomDailyUsageRequest::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool DescribeTIWRoomDailyUsageRequest::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string DescribeTIWRoomDailyUsageRequest::GetEndTime() const
{
    return m_endTime;
}

void DescribeTIWRoomDailyUsageRequest::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool DescribeTIWRoomDailyUsageRequest::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

vector<uint64_t> DescribeTIWRoomDailyUsageRequest::GetRoomIDs() const
{
    return m_roomIDs;
}

void DescribeTIWRoomDailyUsageRequest::SetRoomIDs(const vector<uint64_t>& _roomIDs)
{
    m_roomIDs = _roomIDs;
    m_roomIDsHasBeenSet = true;
}

bool DescribeTIWRoomDailyUsageRequest::RoomIDsHasBeenSet() const
{
    return m_roomIDsHasBeenSet;
}

uint64_t DescribeTIWRoomDailyUsageRequest::GetOffset() const
{
    return m_offset;
}

void DescribeTIWRoomDailyUsageRequest::SetOffset(const uint64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeTIWRoomDailyUsageRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

uint64_t DescribeTIWRoomDailyUsageRequest::GetLimit() const
{
    return m_limit;
}

void DescribeTIWRoomDailyUsageRequest::SetLimit(const uint64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeTIWRoomDailyUsageRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}


