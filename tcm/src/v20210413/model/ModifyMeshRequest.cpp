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

#include <tencentcloud/tcm/v20210413/model/ModifyMeshRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tcm::V20210413::Model;
using namespace std;

ModifyMeshRequest::ModifyMeshRequest() :
    m_meshIdHasBeenSet(false),
    m_displayNameHasBeenSet(false),
    m_configHasBeenSet(false),
    m_clusterListHasBeenSet(false)
{
}

string ModifyMeshRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_meshIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MeshId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_meshId.c_str(), allocator).Move(), allocator);
    }

    if (m_displayNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DisplayName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_displayName.c_str(), allocator).Move(), allocator);
    }

    if (m_configHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Config";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_config.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_clusterListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_clusterList.begin(); itr != m_clusterList.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyMeshRequest::GetMeshId() const
{
    return m_meshId;
}

void ModifyMeshRequest::SetMeshId(const string& _meshId)
{
    m_meshId = _meshId;
    m_meshIdHasBeenSet = true;
}

bool ModifyMeshRequest::MeshIdHasBeenSet() const
{
    return m_meshIdHasBeenSet;
}

string ModifyMeshRequest::GetDisplayName() const
{
    return m_displayName;
}

void ModifyMeshRequest::SetDisplayName(const string& _displayName)
{
    m_displayName = _displayName;
    m_displayNameHasBeenSet = true;
}

bool ModifyMeshRequest::DisplayNameHasBeenSet() const
{
    return m_displayNameHasBeenSet;
}

MeshConfig ModifyMeshRequest::GetConfig() const
{
    return m_config;
}

void ModifyMeshRequest::SetConfig(const MeshConfig& _config)
{
    m_config = _config;
    m_configHasBeenSet = true;
}

bool ModifyMeshRequest::ConfigHasBeenSet() const
{
    return m_configHasBeenSet;
}

vector<Cluster> ModifyMeshRequest::GetClusterList() const
{
    return m_clusterList;
}

void ModifyMeshRequest::SetClusterList(const vector<Cluster>& _clusterList)
{
    m_clusterList = _clusterList;
    m_clusterListHasBeenSet = true;
}

bool ModifyMeshRequest::ClusterListHasBeenSet() const
{
    return m_clusterListHasBeenSet;
}


