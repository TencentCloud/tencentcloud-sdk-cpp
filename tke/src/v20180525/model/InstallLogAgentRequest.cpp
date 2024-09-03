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

#include <tencentcloud/tke/v20180525/model/InstallLogAgentRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tke::V20180525::Model;
using namespace std;

InstallLogAgentRequest::InstallLogAgentRequest() :
    m_clusterIdHasBeenSet(false),
    m_kubeletRootDirHasBeenSet(false),
    m_clusterTypeHasBeenSet(false)
{
}

string InstallLogAgentRequest::ToJsonString() const
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

    if (m_kubeletRootDirHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KubeletRootDir";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_kubeletRootDir.c_str(), allocator).Move(), allocator);
    }

    if (m_clusterTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_clusterType.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string InstallLogAgentRequest::GetClusterId() const
{
    return m_clusterId;
}

void InstallLogAgentRequest::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool InstallLogAgentRequest::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

string InstallLogAgentRequest::GetKubeletRootDir() const
{
    return m_kubeletRootDir;
}

void InstallLogAgentRequest::SetKubeletRootDir(const string& _kubeletRootDir)
{
    m_kubeletRootDir = _kubeletRootDir;
    m_kubeletRootDirHasBeenSet = true;
}

bool InstallLogAgentRequest::KubeletRootDirHasBeenSet() const
{
    return m_kubeletRootDirHasBeenSet;
}

string InstallLogAgentRequest::GetClusterType() const
{
    return m_clusterType;
}

void InstallLogAgentRequest::SetClusterType(const string& _clusterType)
{
    m_clusterType = _clusterType;
    m_clusterTypeHasBeenSet = true;
}

bool InstallLogAgentRequest::ClusterTypeHasBeenSet() const
{
    return m_clusterTypeHasBeenSet;
}


