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

#include <tencentcloud/tke/v20180525/model/DisableControlPlaneLogsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tke::V20180525::Model;
using namespace std;

DisableControlPlaneLogsRequest::DisableControlPlaneLogsRequest() :
    m_clusterIdHasBeenSet(false),
    m_clusterTypeHasBeenSet(false),
    m_componentNamesHasBeenSet(false),
    m_deleteLogSetAndTopicHasBeenSet(false)
{
}

string DisableControlPlaneLogsRequest::ToJsonString() const
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

    if (m_clusterTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_clusterType.c_str(), allocator).Move(), allocator);
    }

    if (m_componentNamesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ComponentNames";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_componentNames.begin(); itr != m_componentNames.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_deleteLogSetAndTopicHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeleteLogSetAndTopic";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_deleteLogSetAndTopic, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DisableControlPlaneLogsRequest::GetClusterId() const
{
    return m_clusterId;
}

void DisableControlPlaneLogsRequest::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool DisableControlPlaneLogsRequest::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

string DisableControlPlaneLogsRequest::GetClusterType() const
{
    return m_clusterType;
}

void DisableControlPlaneLogsRequest::SetClusterType(const string& _clusterType)
{
    m_clusterType = _clusterType;
    m_clusterTypeHasBeenSet = true;
}

bool DisableControlPlaneLogsRequest::ClusterTypeHasBeenSet() const
{
    return m_clusterTypeHasBeenSet;
}

vector<string> DisableControlPlaneLogsRequest::GetComponentNames() const
{
    return m_componentNames;
}

void DisableControlPlaneLogsRequest::SetComponentNames(const vector<string>& _componentNames)
{
    m_componentNames = _componentNames;
    m_componentNamesHasBeenSet = true;
}

bool DisableControlPlaneLogsRequest::ComponentNamesHasBeenSet() const
{
    return m_componentNamesHasBeenSet;
}

bool DisableControlPlaneLogsRequest::GetDeleteLogSetAndTopic() const
{
    return m_deleteLogSetAndTopic;
}

void DisableControlPlaneLogsRequest::SetDeleteLogSetAndTopic(const bool& _deleteLogSetAndTopic)
{
    m_deleteLogSetAndTopic = _deleteLogSetAndTopic;
    m_deleteLogSetAndTopicHasBeenSet = true;
}

bool DisableControlPlaneLogsRequest::DeleteLogSetAndTopicHasBeenSet() const
{
    return m_deleteLogSetAndTopicHasBeenSet;
}


