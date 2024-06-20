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

#include <tencentcloud/cynosdb/v20190107/model/RenewClustersRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cynosdb::V20190107::Model;
using namespace std;

RenewClustersRequest::RenewClustersRequest() :
    m_clusterIdHasBeenSet(false),
    m_timeSpanHasBeenSet(false),
    m_timeUnitHasBeenSet(false),
    m_dealModeHasBeenSet(false)
{
}

string RenewClustersRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_clusterIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_clusterId.c_str(), allocator).Move(), allocator);
    }

    if (m_timeSpanHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimeSpan";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_timeSpan, allocator);
    }

    if (m_timeUnitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimeUnit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_timeUnit.c_str(), allocator).Move(), allocator);
    }

    if (m_dealModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DealMode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_dealMode, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string RenewClustersRequest::GetClusterId() const
{
    return m_clusterId;
}

void RenewClustersRequest::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool RenewClustersRequest::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

double RenewClustersRequest::GetTimeSpan() const
{
    return m_timeSpan;
}

void RenewClustersRequest::SetTimeSpan(const double& _timeSpan)
{
    m_timeSpan = _timeSpan;
    m_timeSpanHasBeenSet = true;
}

bool RenewClustersRequest::TimeSpanHasBeenSet() const
{
    return m_timeSpanHasBeenSet;
}

string RenewClustersRequest::GetTimeUnit() const
{
    return m_timeUnit;
}

void RenewClustersRequest::SetTimeUnit(const string& _timeUnit)
{
    m_timeUnit = _timeUnit;
    m_timeUnitHasBeenSet = true;
}

bool RenewClustersRequest::TimeUnitHasBeenSet() const
{
    return m_timeUnitHasBeenSet;
}

int64_t RenewClustersRequest::GetDealMode() const
{
    return m_dealMode;
}

void RenewClustersRequest::SetDealMode(const int64_t& _dealMode)
{
    m_dealMode = _dealMode;
    m_dealModeHasBeenSet = true;
}

bool RenewClustersRequest::DealModeHasBeenSet() const
{
    return m_dealModeHasBeenSet;
}


