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

#include <tencentcloud/emr/v20190103/model/ClusterExternalServiceInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Emr::V20190103::Model;
using namespace std;

ClusterExternalServiceInfo::ClusterExternalServiceInfo() :
    m_dependTypeHasBeenSet(false),
    m_serviceHasBeenSet(false),
    m_clusterIdHasBeenSet(false),
    m_clusterStatusHasBeenSet(false)
{
}

CoreInternalOutcome ClusterExternalServiceInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DependType") && !value["DependType"].IsNull())
    {
        if (!value["DependType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterExternalServiceInfo.DependType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_dependType = value["DependType"].GetInt64();
        m_dependTypeHasBeenSet = true;
    }

    if (value.HasMember("Service") && !value["Service"].IsNull())
    {
        if (!value["Service"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterExternalServiceInfo.Service` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_service = string(value["Service"].GetString());
        m_serviceHasBeenSet = true;
    }

    if (value.HasMember("ClusterId") && !value["ClusterId"].IsNull())
    {
        if (!value["ClusterId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterExternalServiceInfo.ClusterId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterId = string(value["ClusterId"].GetString());
        m_clusterIdHasBeenSet = true;
    }

    if (value.HasMember("ClusterStatus") && !value["ClusterStatus"].IsNull())
    {
        if (!value["ClusterStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterExternalServiceInfo.ClusterStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_clusterStatus = value["ClusterStatus"].GetInt64();
        m_clusterStatusHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ClusterExternalServiceInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_dependTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DependType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_dependType, allocator);
    }

    if (m_serviceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Service";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_service.c_str(), allocator).Move(), allocator);
    }

    if (m_clusterIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clusterId.c_str(), allocator).Move(), allocator);
    }

    if (m_clusterStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_clusterStatus, allocator);
    }

}


int64_t ClusterExternalServiceInfo::GetDependType() const
{
    return m_dependType;
}

void ClusterExternalServiceInfo::SetDependType(const int64_t& _dependType)
{
    m_dependType = _dependType;
    m_dependTypeHasBeenSet = true;
}

bool ClusterExternalServiceInfo::DependTypeHasBeenSet() const
{
    return m_dependTypeHasBeenSet;
}

string ClusterExternalServiceInfo::GetService() const
{
    return m_service;
}

void ClusterExternalServiceInfo::SetService(const string& _service)
{
    m_service = _service;
    m_serviceHasBeenSet = true;
}

bool ClusterExternalServiceInfo::ServiceHasBeenSet() const
{
    return m_serviceHasBeenSet;
}

string ClusterExternalServiceInfo::GetClusterId() const
{
    return m_clusterId;
}

void ClusterExternalServiceInfo::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool ClusterExternalServiceInfo::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

int64_t ClusterExternalServiceInfo::GetClusterStatus() const
{
    return m_clusterStatus;
}

void ClusterExternalServiceInfo::SetClusterStatus(const int64_t& _clusterStatus)
{
    m_clusterStatus = _clusterStatus;
    m_clusterStatusHasBeenSet = true;
}

bool ClusterExternalServiceInfo::ClusterStatusHasBeenSet() const
{
    return m_clusterStatusHasBeenSet;
}

