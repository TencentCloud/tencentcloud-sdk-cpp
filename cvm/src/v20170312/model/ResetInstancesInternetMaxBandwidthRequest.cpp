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

#include <tencentcloud/cvm/v20170312/model/ResetInstancesInternetMaxBandwidthRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cvm::V20170312::Model;
using namespace rapidjson;
using namespace std;

ResetInstancesInternetMaxBandwidthRequest::ResetInstancesInternetMaxBandwidthRequest() :
    m_instanceIdsHasBeenSet(false),
    m_internetAccessibleHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false)
{
}

string ResetInstancesInternetMaxBandwidthRequest::ToJsonString() const
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


vector<string> ResetInstancesInternetMaxBandwidthRequest::GetInstanceIds() const
{
    return m_instanceIds;
}

void ResetInstancesInternetMaxBandwidthRequest::SetInstanceIds(const vector<string>& _instanceIds)
{
    m_instanceIds = _instanceIds;
    m_instanceIdsHasBeenSet = true;
}

bool ResetInstancesInternetMaxBandwidthRequest::InstanceIdsHasBeenSet() const
{
    return m_instanceIdsHasBeenSet;
}

InternetAccessible ResetInstancesInternetMaxBandwidthRequest::GetInternetAccessible() const
{
    return m_internetAccessible;
}

void ResetInstancesInternetMaxBandwidthRequest::SetInternetAccessible(const InternetAccessible& _internetAccessible)
{
    m_internetAccessible = _internetAccessible;
    m_internetAccessibleHasBeenSet = true;
}

bool ResetInstancesInternetMaxBandwidthRequest::InternetAccessibleHasBeenSet() const
{
    return m_internetAccessibleHasBeenSet;
}

string ResetInstancesInternetMaxBandwidthRequest::GetStartTime() const
{
    return m_startTime;
}

void ResetInstancesInternetMaxBandwidthRequest::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool ResetInstancesInternetMaxBandwidthRequest::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string ResetInstancesInternetMaxBandwidthRequest::GetEndTime() const
{
    return m_endTime;
}

void ResetInstancesInternetMaxBandwidthRequest::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool ResetInstancesInternetMaxBandwidthRequest::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}


