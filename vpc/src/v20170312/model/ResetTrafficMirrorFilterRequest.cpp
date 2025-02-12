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

#include <tencentcloud/vpc/v20170312/model/ResetTrafficMirrorFilterRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Vpc::V20170312::Model;
using namespace std;

ResetTrafficMirrorFilterRequest::ResetTrafficMirrorFilterRequest() :
    m_trafficMirrorIdHasBeenSet(false),
    m_natIdHasBeenSet(false),
    m_collectorNormalFiltersHasBeenSet(false)
{
}

string ResetTrafficMirrorFilterRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_trafficMirrorIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TrafficMirrorId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_trafficMirrorId.c_str(), allocator).Move(), allocator);
    }

    if (m_natIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NatId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_natId.c_str(), allocator).Move(), allocator);
    }

    if (m_collectorNormalFiltersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CollectorNormalFilters";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_collectorNormalFilters.begin(); itr != m_collectorNormalFilters.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ResetTrafficMirrorFilterRequest::GetTrafficMirrorId() const
{
    return m_trafficMirrorId;
}

void ResetTrafficMirrorFilterRequest::SetTrafficMirrorId(const string& _trafficMirrorId)
{
    m_trafficMirrorId = _trafficMirrorId;
    m_trafficMirrorIdHasBeenSet = true;
}

bool ResetTrafficMirrorFilterRequest::TrafficMirrorIdHasBeenSet() const
{
    return m_trafficMirrorIdHasBeenSet;
}

string ResetTrafficMirrorFilterRequest::GetNatId() const
{
    return m_natId;
}

void ResetTrafficMirrorFilterRequest::SetNatId(const string& _natId)
{
    m_natId = _natId;
    m_natIdHasBeenSet = true;
}

bool ResetTrafficMirrorFilterRequest::NatIdHasBeenSet() const
{
    return m_natIdHasBeenSet;
}

vector<TrafficMirrorFilter> ResetTrafficMirrorFilterRequest::GetCollectorNormalFilters() const
{
    return m_collectorNormalFilters;
}

void ResetTrafficMirrorFilterRequest::SetCollectorNormalFilters(const vector<TrafficMirrorFilter>& _collectorNormalFilters)
{
    m_collectorNormalFilters = _collectorNormalFilters;
    m_collectorNormalFiltersHasBeenSet = true;
}

bool ResetTrafficMirrorFilterRequest::CollectorNormalFiltersHasBeenSet() const
{
    return m_collectorNormalFiltersHasBeenSet;
}


