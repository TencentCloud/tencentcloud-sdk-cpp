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

#include <tencentcloud/tke/v20180525/model/DeletePrometheusConfigRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tke::V20180525::Model;
using namespace std;

DeletePrometheusConfigRequest::DeletePrometheusConfigRequest() :
    m_instanceIdHasBeenSet(false),
    m_clusterTypeHasBeenSet(false),
    m_clusterIdHasBeenSet(false),
    m_serviceMonitorsHasBeenSet(false),
    m_podMonitorsHasBeenSet(false),
    m_rawJobsHasBeenSet(false),
    m_probesHasBeenSet(false)
{
}

string DeletePrometheusConfigRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_clusterTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_clusterType.c_str(), allocator).Move(), allocator);
    }

    if (m_clusterIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_clusterId.c_str(), allocator).Move(), allocator);
    }

    if (m_serviceMonitorsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceMonitors";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_serviceMonitors.begin(); itr != m_serviceMonitors.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_podMonitorsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PodMonitors";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_podMonitors.begin(); itr != m_podMonitors.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_rawJobsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RawJobs";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_rawJobs.begin(); itr != m_rawJobs.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_probesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Probes";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_probes.begin(); itr != m_probes.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DeletePrometheusConfigRequest::GetInstanceId() const
{
    return m_instanceId;
}

void DeletePrometheusConfigRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool DeletePrometheusConfigRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string DeletePrometheusConfigRequest::GetClusterType() const
{
    return m_clusterType;
}

void DeletePrometheusConfigRequest::SetClusterType(const string& _clusterType)
{
    m_clusterType = _clusterType;
    m_clusterTypeHasBeenSet = true;
}

bool DeletePrometheusConfigRequest::ClusterTypeHasBeenSet() const
{
    return m_clusterTypeHasBeenSet;
}

string DeletePrometheusConfigRequest::GetClusterId() const
{
    return m_clusterId;
}

void DeletePrometheusConfigRequest::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool DeletePrometheusConfigRequest::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

vector<string> DeletePrometheusConfigRequest::GetServiceMonitors() const
{
    return m_serviceMonitors;
}

void DeletePrometheusConfigRequest::SetServiceMonitors(const vector<string>& _serviceMonitors)
{
    m_serviceMonitors = _serviceMonitors;
    m_serviceMonitorsHasBeenSet = true;
}

bool DeletePrometheusConfigRequest::ServiceMonitorsHasBeenSet() const
{
    return m_serviceMonitorsHasBeenSet;
}

vector<string> DeletePrometheusConfigRequest::GetPodMonitors() const
{
    return m_podMonitors;
}

void DeletePrometheusConfigRequest::SetPodMonitors(const vector<string>& _podMonitors)
{
    m_podMonitors = _podMonitors;
    m_podMonitorsHasBeenSet = true;
}

bool DeletePrometheusConfigRequest::PodMonitorsHasBeenSet() const
{
    return m_podMonitorsHasBeenSet;
}

vector<string> DeletePrometheusConfigRequest::GetRawJobs() const
{
    return m_rawJobs;
}

void DeletePrometheusConfigRequest::SetRawJobs(const vector<string>& _rawJobs)
{
    m_rawJobs = _rawJobs;
    m_rawJobsHasBeenSet = true;
}

bool DeletePrometheusConfigRequest::RawJobsHasBeenSet() const
{
    return m_rawJobsHasBeenSet;
}

vector<string> DeletePrometheusConfigRequest::GetProbes() const
{
    return m_probes;
}

void DeletePrometheusConfigRequest::SetProbes(const vector<string>& _probes)
{
    m_probes = _probes;
    m_probesHasBeenSet = true;
}

bool DeletePrometheusConfigRequest::ProbesHasBeenSet() const
{
    return m_probesHasBeenSet;
}


