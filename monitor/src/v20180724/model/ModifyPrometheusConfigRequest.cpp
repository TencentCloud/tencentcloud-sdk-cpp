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

#include <tencentcloud/monitor/v20180724/model/ModifyPrometheusConfigRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Monitor::V20180724::Model;
using namespace std;

ModifyPrometheusConfigRequest::ModifyPrometheusConfigRequest() :
    m_instanceIdHasBeenSet(false),
    m_clusterTypeHasBeenSet(false),
    m_clusterIdHasBeenSet(false),
    m_serviceMonitorsHasBeenSet(false),
    m_podMonitorsHasBeenSet(false),
    m_rawJobsHasBeenSet(false),
    m_updateImageHasBeenSet(false)
{
}

string ModifyPrometheusConfigRequest::ToJsonString() const
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

        int i=0;
        for (auto itr = m_serviceMonitors.begin(); itr != m_serviceMonitors.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_podMonitorsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PodMonitors";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_podMonitors.begin(); itr != m_podMonitors.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_rawJobsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RawJobs";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_rawJobs.begin(); itr != m_rawJobs.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_updateImageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateImage";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_updateImage, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyPrometheusConfigRequest::GetInstanceId() const
{
    return m_instanceId;
}

void ModifyPrometheusConfigRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool ModifyPrometheusConfigRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string ModifyPrometheusConfigRequest::GetClusterType() const
{
    return m_clusterType;
}

void ModifyPrometheusConfigRequest::SetClusterType(const string& _clusterType)
{
    m_clusterType = _clusterType;
    m_clusterTypeHasBeenSet = true;
}

bool ModifyPrometheusConfigRequest::ClusterTypeHasBeenSet() const
{
    return m_clusterTypeHasBeenSet;
}

string ModifyPrometheusConfigRequest::GetClusterId() const
{
    return m_clusterId;
}

void ModifyPrometheusConfigRequest::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool ModifyPrometheusConfigRequest::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

vector<PrometheusConfigItem> ModifyPrometheusConfigRequest::GetServiceMonitors() const
{
    return m_serviceMonitors;
}

void ModifyPrometheusConfigRequest::SetServiceMonitors(const vector<PrometheusConfigItem>& _serviceMonitors)
{
    m_serviceMonitors = _serviceMonitors;
    m_serviceMonitorsHasBeenSet = true;
}

bool ModifyPrometheusConfigRequest::ServiceMonitorsHasBeenSet() const
{
    return m_serviceMonitorsHasBeenSet;
}

vector<PrometheusConfigItem> ModifyPrometheusConfigRequest::GetPodMonitors() const
{
    return m_podMonitors;
}

void ModifyPrometheusConfigRequest::SetPodMonitors(const vector<PrometheusConfigItem>& _podMonitors)
{
    m_podMonitors = _podMonitors;
    m_podMonitorsHasBeenSet = true;
}

bool ModifyPrometheusConfigRequest::PodMonitorsHasBeenSet() const
{
    return m_podMonitorsHasBeenSet;
}

vector<PrometheusConfigItem> ModifyPrometheusConfigRequest::GetRawJobs() const
{
    return m_rawJobs;
}

void ModifyPrometheusConfigRequest::SetRawJobs(const vector<PrometheusConfigItem>& _rawJobs)
{
    m_rawJobs = _rawJobs;
    m_rawJobsHasBeenSet = true;
}

bool ModifyPrometheusConfigRequest::RawJobsHasBeenSet() const
{
    return m_rawJobsHasBeenSet;
}

int64_t ModifyPrometheusConfigRequest::GetUpdateImage() const
{
    return m_updateImage;
}

void ModifyPrometheusConfigRequest::SetUpdateImage(const int64_t& _updateImage)
{
    m_updateImage = _updateImage;
    m_updateImageHasBeenSet = true;
}

bool ModifyPrometheusConfigRequest::UpdateImageHasBeenSet() const
{
    return m_updateImageHasBeenSet;
}


