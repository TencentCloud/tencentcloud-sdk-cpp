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

#include <tencentcloud/cls/v20201016/model/ResourceGraphTkeClusterInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cls::V20201016::Model;
using namespace std;

ResourceGraphTkeClusterInfo::ResourceGraphTkeClusterInfo() :
    m_clusterIdHasBeenSet(false),
    m_resourceGraphIdHasBeenSet(false),
    m_resourceGraphNameHasBeenSet(false),
    m_taskIdHasBeenSet(false),
    m_taskNameHasBeenSet(false)
{
}

CoreInternalOutcome ResourceGraphTkeClusterInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ClusterId") && !value["ClusterId"].IsNull())
    {
        if (!value["ClusterId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceGraphTkeClusterInfo.ClusterId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterId = string(value["ClusterId"].GetString());
        m_clusterIdHasBeenSet = true;
    }

    if (value.HasMember("ResourceGraphId") && !value["ResourceGraphId"].IsNull())
    {
        if (!value["ResourceGraphId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceGraphTkeClusterInfo.ResourceGraphId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceGraphId = string(value["ResourceGraphId"].GetString());
        m_resourceGraphIdHasBeenSet = true;
    }

    if (value.HasMember("ResourceGraphName") && !value["ResourceGraphName"].IsNull())
    {
        if (!value["ResourceGraphName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceGraphTkeClusterInfo.ResourceGraphName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceGraphName = string(value["ResourceGraphName"].GetString());
        m_resourceGraphNameHasBeenSet = true;
    }

    if (value.HasMember("TaskId") && !value["TaskId"].IsNull())
    {
        if (!value["TaskId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceGraphTkeClusterInfo.TaskId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskId = string(value["TaskId"].GetString());
        m_taskIdHasBeenSet = true;
    }

    if (value.HasMember("TaskName") && !value["TaskName"].IsNull())
    {
        if (!value["TaskName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceGraphTkeClusterInfo.TaskName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskName = string(value["TaskName"].GetString());
        m_taskNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ResourceGraphTkeClusterInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_clusterIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clusterId.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceGraphIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceGraphId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceGraphId.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceGraphNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceGraphName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceGraphName.c_str(), allocator).Move(), allocator);
    }

    if (m_taskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskId.c_str(), allocator).Move(), allocator);
    }

    if (m_taskNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskName.c_str(), allocator).Move(), allocator);
    }

}


string ResourceGraphTkeClusterInfo::GetClusterId() const
{
    return m_clusterId;
}

void ResourceGraphTkeClusterInfo::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool ResourceGraphTkeClusterInfo::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

string ResourceGraphTkeClusterInfo::GetResourceGraphId() const
{
    return m_resourceGraphId;
}

void ResourceGraphTkeClusterInfo::SetResourceGraphId(const string& _resourceGraphId)
{
    m_resourceGraphId = _resourceGraphId;
    m_resourceGraphIdHasBeenSet = true;
}

bool ResourceGraphTkeClusterInfo::ResourceGraphIdHasBeenSet() const
{
    return m_resourceGraphIdHasBeenSet;
}

string ResourceGraphTkeClusterInfo::GetResourceGraphName() const
{
    return m_resourceGraphName;
}

void ResourceGraphTkeClusterInfo::SetResourceGraphName(const string& _resourceGraphName)
{
    m_resourceGraphName = _resourceGraphName;
    m_resourceGraphNameHasBeenSet = true;
}

bool ResourceGraphTkeClusterInfo::ResourceGraphNameHasBeenSet() const
{
    return m_resourceGraphNameHasBeenSet;
}

string ResourceGraphTkeClusterInfo::GetTaskId() const
{
    return m_taskId;
}

void ResourceGraphTkeClusterInfo::SetTaskId(const string& _taskId)
{
    m_taskId = _taskId;
    m_taskIdHasBeenSet = true;
}

bool ResourceGraphTkeClusterInfo::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

string ResourceGraphTkeClusterInfo::GetTaskName() const
{
    return m_taskName;
}

void ResourceGraphTkeClusterInfo::SetTaskName(const string& _taskName)
{
    m_taskName = _taskName;
    m_taskNameHasBeenSet = true;
}

bool ResourceGraphTkeClusterInfo::TaskNameHasBeenSet() const
{
    return m_taskNameHasBeenSet;
}

