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

#include <tencentcloud/tke/v20180525/model/UpdateEdgeClusterVersionRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tke::V20180525::Model;
using namespace std;

UpdateEdgeClusterVersionRequest::UpdateEdgeClusterVersionRequest() :
    m_clusterIdHasBeenSet(false),
    m_edgeVersionHasBeenSet(false),
    m_registryPrefixHasBeenSet(false),
    m_skipPreCheckHasBeenSet(false)
{
}

string UpdateEdgeClusterVersionRequest::ToJsonString() const
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

    if (m_edgeVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EdgeVersion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_edgeVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_registryPrefixHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegistryPrefix";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_registryPrefix.c_str(), allocator).Move(), allocator);
    }

    if (m_skipPreCheckHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SkipPreCheck";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_skipPreCheck, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string UpdateEdgeClusterVersionRequest::GetClusterId() const
{
    return m_clusterId;
}

void UpdateEdgeClusterVersionRequest::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool UpdateEdgeClusterVersionRequest::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

string UpdateEdgeClusterVersionRequest::GetEdgeVersion() const
{
    return m_edgeVersion;
}

void UpdateEdgeClusterVersionRequest::SetEdgeVersion(const string& _edgeVersion)
{
    m_edgeVersion = _edgeVersion;
    m_edgeVersionHasBeenSet = true;
}

bool UpdateEdgeClusterVersionRequest::EdgeVersionHasBeenSet() const
{
    return m_edgeVersionHasBeenSet;
}

string UpdateEdgeClusterVersionRequest::GetRegistryPrefix() const
{
    return m_registryPrefix;
}

void UpdateEdgeClusterVersionRequest::SetRegistryPrefix(const string& _registryPrefix)
{
    m_registryPrefix = _registryPrefix;
    m_registryPrefixHasBeenSet = true;
}

bool UpdateEdgeClusterVersionRequest::RegistryPrefixHasBeenSet() const
{
    return m_registryPrefixHasBeenSet;
}

bool UpdateEdgeClusterVersionRequest::GetSkipPreCheck() const
{
    return m_skipPreCheck;
}

void UpdateEdgeClusterVersionRequest::SetSkipPreCheck(const bool& _skipPreCheck)
{
    m_skipPreCheck = _skipPreCheck;
    m_skipPreCheckHasBeenSet = true;
}

bool UpdateEdgeClusterVersionRequest::SkipPreCheckHasBeenSet() const
{
    return m_skipPreCheckHasBeenSet;
}


