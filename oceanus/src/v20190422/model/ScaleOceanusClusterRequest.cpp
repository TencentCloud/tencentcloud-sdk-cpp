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

#include <tencentcloud/oceanus/v20190422/model/ScaleOceanusClusterRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Oceanus::V20190422::Model;
using namespace std;

ScaleOceanusClusterRequest::ScaleOceanusClusterRequest() :
    m_clusterIdHasBeenSet(false),
    m_newCUHasBeenSet(false),
    m_scaleModeHasBeenSet(false)
{
}

string ScaleOceanusClusterRequest::ToJsonString() const
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

    if (m_newCUHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NewCU";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_newCU, allocator);
    }

    if (m_scaleModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScaleMode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_scaleMode.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ScaleOceanusClusterRequest::GetClusterId() const
{
    return m_clusterId;
}

void ScaleOceanusClusterRequest::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool ScaleOceanusClusterRequest::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

int64_t ScaleOceanusClusterRequest::GetNewCU() const
{
    return m_newCU;
}

void ScaleOceanusClusterRequest::SetNewCU(const int64_t& _newCU)
{
    m_newCU = _newCU;
    m_newCUHasBeenSet = true;
}

bool ScaleOceanusClusterRequest::NewCUHasBeenSet() const
{
    return m_newCUHasBeenSet;
}

string ScaleOceanusClusterRequest::GetScaleMode() const
{
    return m_scaleMode;
}

void ScaleOceanusClusterRequest::SetScaleMode(const string& _scaleMode)
{
    m_scaleMode = _scaleMode;
    m_scaleModeHasBeenSet = true;
}

bool ScaleOceanusClusterRequest::ScaleModeHasBeenSet() const
{
    return m_scaleModeHasBeenSet;
}


