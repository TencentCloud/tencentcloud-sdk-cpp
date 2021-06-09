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

#include <tencentcloud/monitor/v20180724/model/PutMonitorDataRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Monitor::V20180724::Model;
using namespace std;

PutMonitorDataRequest::PutMonitorDataRequest() :
    m_metricsHasBeenSet(false),
    m_announceIpHasBeenSet(false),
    m_announceTimestampHasBeenSet(false),
    m_announceInstanceHasBeenSet(false)
{
}

string PutMonitorDataRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_metricsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Metrics";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_metrics.begin(); itr != m_metrics.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_announceIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AnnounceIp";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_announceIp.c_str(), allocator).Move(), allocator);
    }

    if (m_announceTimestampHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AnnounceTimestamp";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_announceTimestamp, allocator);
    }

    if (m_announceInstanceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AnnounceInstance";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_announceInstance.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


vector<MetricDatum> PutMonitorDataRequest::GetMetrics() const
{
    return m_metrics;
}

void PutMonitorDataRequest::SetMetrics(const vector<MetricDatum>& _metrics)
{
    m_metrics = _metrics;
    m_metricsHasBeenSet = true;
}

bool PutMonitorDataRequest::MetricsHasBeenSet() const
{
    return m_metricsHasBeenSet;
}

string PutMonitorDataRequest::GetAnnounceIp() const
{
    return m_announceIp;
}

void PutMonitorDataRequest::SetAnnounceIp(const string& _announceIp)
{
    m_announceIp = _announceIp;
    m_announceIpHasBeenSet = true;
}

bool PutMonitorDataRequest::AnnounceIpHasBeenSet() const
{
    return m_announceIpHasBeenSet;
}

uint64_t PutMonitorDataRequest::GetAnnounceTimestamp() const
{
    return m_announceTimestamp;
}

void PutMonitorDataRequest::SetAnnounceTimestamp(const uint64_t& _announceTimestamp)
{
    m_announceTimestamp = _announceTimestamp;
    m_announceTimestampHasBeenSet = true;
}

bool PutMonitorDataRequest::AnnounceTimestampHasBeenSet() const
{
    return m_announceTimestampHasBeenSet;
}

string PutMonitorDataRequest::GetAnnounceInstance() const
{
    return m_announceInstance;
}

void PutMonitorDataRequest::SetAnnounceInstance(const string& _announceInstance)
{
    m_announceInstance = _announceInstance;
    m_announceInstanceHasBeenSet = true;
}

bool PutMonitorDataRequest::AnnounceInstanceHasBeenSet() const
{
    return m_announceInstanceHasBeenSet;
}


