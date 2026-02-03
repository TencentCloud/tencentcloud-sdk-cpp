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

#include <tencentcloud/cynosdb/v20190107/model/ModifyLibraDBClusterProjectRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cynosdb::V20190107::Model;
using namespace std;

ModifyLibraDBClusterProjectRequest::ModifyLibraDBClusterProjectRequest() :
    m_clusterIdSetHasBeenSet(false),
    m_projectIdHasBeenSet(false)
{
}

string ModifyLibraDBClusterProjectRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_clusterIdSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterIdSet";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_clusterIdSet.begin(); itr != m_clusterIdSet.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_projectId, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


vector<string> ModifyLibraDBClusterProjectRequest::GetClusterIdSet() const
{
    return m_clusterIdSet;
}

void ModifyLibraDBClusterProjectRequest::SetClusterIdSet(const vector<string>& _clusterIdSet)
{
    m_clusterIdSet = _clusterIdSet;
    m_clusterIdSetHasBeenSet = true;
}

bool ModifyLibraDBClusterProjectRequest::ClusterIdSetHasBeenSet() const
{
    return m_clusterIdSetHasBeenSet;
}

int64_t ModifyLibraDBClusterProjectRequest::GetProjectId() const
{
    return m_projectId;
}

void ModifyLibraDBClusterProjectRequest::SetProjectId(const int64_t& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool ModifyLibraDBClusterProjectRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}


