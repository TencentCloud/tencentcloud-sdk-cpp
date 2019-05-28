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

#include <tencentcloud/cvm/v20170312/model/InquiryPriceResetInstancesInternetMaxBandwidthRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cvm::V20170312::Model;
using namespace rapidjson;
using namespace std;

InquiryPriceResetInstancesInternetMaxBandwidthRequest::InquiryPriceResetInstancesInternetMaxBandwidthRequest() :
    m_instanceIdsHasBeenSet(false),
    m_internetAccessibleHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false)
{
}

string InquiryPriceResetInstancesInternetMaxBandwidthRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_instanceIdsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "InstanceIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kArrayType).Move(), allocator);

        for (auto itr = m_instanceIds.begin(); itr != m_instanceIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_internetAccessibleHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "InternetAccessible";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_internetAccessible.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_startTimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_startTime.c_str(), allocator).Move(), allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_endTime.c_str(), allocator).Move(), allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


vector<string> InquiryPriceResetInstancesInternetMaxBandwidthRequest::GetInstanceIds() const
{
    return m_instanceIds;
}

void InquiryPriceResetInstancesInternetMaxBandwidthRequest::SetInstanceIds(const vector<string>& _instanceIds)
{
    m_instanceIds = _instanceIds;
    m_instanceIdsHasBeenSet = true;
}

bool InquiryPriceResetInstancesInternetMaxBandwidthRequest::InstanceIdsHasBeenSet() const
{
    return m_instanceIdsHasBeenSet;
}

InternetAccessible InquiryPriceResetInstancesInternetMaxBandwidthRequest::GetInternetAccessible() const
{
    return m_internetAccessible;
}

void InquiryPriceResetInstancesInternetMaxBandwidthRequest::SetInternetAccessible(const InternetAccessible& _internetAccessible)
{
    m_internetAccessible = _internetAccessible;
    m_internetAccessibleHasBeenSet = true;
}

bool InquiryPriceResetInstancesInternetMaxBandwidthRequest::InternetAccessibleHasBeenSet() const
{
    return m_internetAccessibleHasBeenSet;
}

string InquiryPriceResetInstancesInternetMaxBandwidthRequest::GetStartTime() const
{
    return m_startTime;
}

void InquiryPriceResetInstancesInternetMaxBandwidthRequest::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool InquiryPriceResetInstancesInternetMaxBandwidthRequest::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string InquiryPriceResetInstancesInternetMaxBandwidthRequest::GetEndTime() const
{
    return m_endTime;
}

void InquiryPriceResetInstancesInternetMaxBandwidthRequest::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool InquiryPriceResetInstancesInternetMaxBandwidthRequest::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}


