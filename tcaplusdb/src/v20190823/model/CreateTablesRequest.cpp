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

#include <tencentcloud/tcaplusdb/v20190823/model/CreateTablesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tcaplusdb::V20190823::Model;
using namespace std;

CreateTablesRequest::CreateTablesRequest() :
    m_clusterIdHasBeenSet(false),
    m_idlFilesHasBeenSet(false),
    m_selectedTablesHasBeenSet(false),
    m_resourceTagsHasBeenSet(false)
{
}

string CreateTablesRequest::ToJsonString() const
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

    if (m_idlFilesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IdlFiles";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_idlFiles.begin(); itr != m_idlFiles.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_selectedTablesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SelectedTables";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_selectedTables.begin(); itr != m_selectedTables.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_resourceTagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceTags";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_resourceTags.begin(); itr != m_resourceTags.end(); ++itr, ++i)
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


string CreateTablesRequest::GetClusterId() const
{
    return m_clusterId;
}

void CreateTablesRequest::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool CreateTablesRequest::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

vector<IdlFileInfo> CreateTablesRequest::GetIdlFiles() const
{
    return m_idlFiles;
}

void CreateTablesRequest::SetIdlFiles(const vector<IdlFileInfo>& _idlFiles)
{
    m_idlFiles = _idlFiles;
    m_idlFilesHasBeenSet = true;
}

bool CreateTablesRequest::IdlFilesHasBeenSet() const
{
    return m_idlFilesHasBeenSet;
}

vector<SelectedTableInfoNew> CreateTablesRequest::GetSelectedTables() const
{
    return m_selectedTables;
}

void CreateTablesRequest::SetSelectedTables(const vector<SelectedTableInfoNew>& _selectedTables)
{
    m_selectedTables = _selectedTables;
    m_selectedTablesHasBeenSet = true;
}

bool CreateTablesRequest::SelectedTablesHasBeenSet() const
{
    return m_selectedTablesHasBeenSet;
}

vector<TagInfoUnit> CreateTablesRequest::GetResourceTags() const
{
    return m_resourceTags;
}

void CreateTablesRequest::SetResourceTags(const vector<TagInfoUnit>& _resourceTags)
{
    m_resourceTags = _resourceTags;
    m_resourceTagsHasBeenSet = true;
}

bool CreateTablesRequest::ResourceTagsHasBeenSet() const
{
    return m_resourceTagsHasBeenSet;
}


