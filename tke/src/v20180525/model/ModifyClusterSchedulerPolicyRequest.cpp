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

#include <tencentcloud/tke/v20180525/model/ModifyClusterSchedulerPolicyRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tke::V20180525::Model;
using namespace std;

ModifyClusterSchedulerPolicyRequest::ModifyClusterSchedulerPolicyRequest() :
    m_clusterIdHasBeenSet(false),
    m_schedulerPolicyConfigHasBeenSet(false),
    m_clientConnectionHasBeenSet(false),
    m_extendersHasBeenSet(false),
    m_highPerformanceHasBeenSet(false)
{
}

string ModifyClusterSchedulerPolicyRequest::ToJsonString() const
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

    if (m_schedulerPolicyConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SchedulerPolicyConfig";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_schedulerPolicyConfig.begin(); itr != m_schedulerPolicyConfig.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_clientConnectionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClientConnection";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_clientConnection.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_extendersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Extenders";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_extenders.begin(); itr != m_extenders.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_highPerformanceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HighPerformance";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_highPerformance, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyClusterSchedulerPolicyRequest::GetClusterId() const
{
    return m_clusterId;
}

void ModifyClusterSchedulerPolicyRequest::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool ModifyClusterSchedulerPolicyRequest::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

vector<SchedulerPolicyConfig> ModifyClusterSchedulerPolicyRequest::GetSchedulerPolicyConfig() const
{
    return m_schedulerPolicyConfig;
}

void ModifyClusterSchedulerPolicyRequest::SetSchedulerPolicyConfig(const vector<SchedulerPolicyConfig>& _schedulerPolicyConfig)
{
    m_schedulerPolicyConfig = _schedulerPolicyConfig;
    m_schedulerPolicyConfigHasBeenSet = true;
}

bool ModifyClusterSchedulerPolicyRequest::SchedulerPolicyConfigHasBeenSet() const
{
    return m_schedulerPolicyConfigHasBeenSet;
}

ClientConnection ModifyClusterSchedulerPolicyRequest::GetClientConnection() const
{
    return m_clientConnection;
}

void ModifyClusterSchedulerPolicyRequest::SetClientConnection(const ClientConnection& _clientConnection)
{
    m_clientConnection = _clientConnection;
    m_clientConnectionHasBeenSet = true;
}

bool ModifyClusterSchedulerPolicyRequest::ClientConnectionHasBeenSet() const
{
    return m_clientConnectionHasBeenSet;
}

vector<Extenders> ModifyClusterSchedulerPolicyRequest::GetExtenders() const
{
    return m_extenders;
}

void ModifyClusterSchedulerPolicyRequest::SetExtenders(const vector<Extenders>& _extenders)
{
    m_extenders = _extenders;
    m_extendersHasBeenSet = true;
}

bool ModifyClusterSchedulerPolicyRequest::ExtendersHasBeenSet() const
{
    return m_extendersHasBeenSet;
}

bool ModifyClusterSchedulerPolicyRequest::GetHighPerformance() const
{
    return m_highPerformance;
}

void ModifyClusterSchedulerPolicyRequest::SetHighPerformance(const bool& _highPerformance)
{
    m_highPerformance = _highPerformance;
    m_highPerformanceHasBeenSet = true;
}

bool ModifyClusterSchedulerPolicyRequest::HighPerformanceHasBeenSet() const
{
    return m_highPerformanceHasBeenSet;
}


