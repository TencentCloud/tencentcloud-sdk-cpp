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

#include <tencentcloud/tchd/v20230306/model/DescribeEventsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tchd::V20230306::Model;
using namespace std;

DescribeEventsRequest::DescribeEventsRequest() :
    m_eventDateHasBeenSet(false),
    m_productIdsHasBeenSet(false),
    m_regionIdsHasBeenSet(false)
{
}

string DescribeEventsRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_eventDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EventDate";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_eventDate.c_str(), allocator).Move(), allocator);
    }

    if (m_productIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProductIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_productIds.begin(); itr != m_productIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_regionIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegionIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_regionIds.begin(); itr != m_regionIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeEventsRequest::GetEventDate() const
{
    return m_eventDate;
}

void DescribeEventsRequest::SetEventDate(const string& _eventDate)
{
    m_eventDate = _eventDate;
    m_eventDateHasBeenSet = true;
}

bool DescribeEventsRequest::EventDateHasBeenSet() const
{
    return m_eventDateHasBeenSet;
}

vector<string> DescribeEventsRequest::GetProductIds() const
{
    return m_productIds;
}

void DescribeEventsRequest::SetProductIds(const vector<string>& _productIds)
{
    m_productIds = _productIds;
    m_productIdsHasBeenSet = true;
}

bool DescribeEventsRequest::ProductIdsHasBeenSet() const
{
    return m_productIdsHasBeenSet;
}

vector<string> DescribeEventsRequest::GetRegionIds() const
{
    return m_regionIds;
}

void DescribeEventsRequest::SetRegionIds(const vector<string>& _regionIds)
{
    m_regionIds = _regionIds;
    m_regionIdsHasBeenSet = true;
}

bool DescribeEventsRequest::RegionIdsHasBeenSet() const
{
    return m_regionIdsHasBeenSet;
}


