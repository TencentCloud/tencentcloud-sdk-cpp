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

#include <tencentcloud/tia/v20180226/model/InstallAgentRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tia::V20180226::Model;
using namespace std;

InstallAgentRequest::InstallAgentRequest() :
    m_clusterHasBeenSet(false),
    m_tiaVersionHasBeenSet(false),
    m_updateHasBeenSet(false)
{
}

string InstallAgentRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_clusterHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Cluster";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_cluster.c_str(), allocator).Move(), allocator);
    }

    if (m_tiaVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TiaVersion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_tiaVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_updateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Update";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_update, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string InstallAgentRequest::GetCluster() const
{
    return m_cluster;
}

void InstallAgentRequest::SetCluster(const string& _cluster)
{
    m_cluster = _cluster;
    m_clusterHasBeenSet = true;
}

bool InstallAgentRequest::ClusterHasBeenSet() const
{
    return m_clusterHasBeenSet;
}

string InstallAgentRequest::GetTiaVersion() const
{
    return m_tiaVersion;
}

void InstallAgentRequest::SetTiaVersion(const string& _tiaVersion)
{
    m_tiaVersion = _tiaVersion;
    m_tiaVersionHasBeenSet = true;
}

bool InstallAgentRequest::TiaVersionHasBeenSet() const
{
    return m_tiaVersionHasBeenSet;
}

bool InstallAgentRequest::GetUpdate() const
{
    return m_update;
}

void InstallAgentRequest::SetUpdate(const bool& _update)
{
    m_update = _update;
    m_updateHasBeenSet = true;
}

bool InstallAgentRequest::UpdateHasBeenSet() const
{
    return m_updateHasBeenSet;
}


