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

#include <tencentcloud/oceanus/v20190422/model/CreateMetaTableRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Oceanus::V20190422::Model;
using namespace std;

CreateMetaTableRequest::CreateMetaTableRequest() :
    m_catalogIdHasBeenSet(false),
    m_databaseIdHasBeenSet(false),
    m_sqlCodeHasBeenSet(false),
    m_commentHasBeenSet(false),
    m_clusterIdHasBeenSet(false),
    m_resourceRefsHasBeenSet(false),
    m_flinkVersionHasBeenSet(false),
    m_workSpaceIdHasBeenSet(false),
    m_asyncTaskIdHasBeenSet(false)
{
}

string CreateMetaTableRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_catalogIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CatalogId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_catalogId, allocator);
    }

    if (m_databaseIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DatabaseId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_databaseId, allocator);
    }

    if (m_sqlCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SqlCode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sqlCode.c_str(), allocator).Move(), allocator);
    }

    if (m_commentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Comment";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_comment.c_str(), allocator).Move(), allocator);
    }

    if (m_clusterIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_clusterId.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceRefsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceRefs";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_resourceRefs.begin(); itr != m_resourceRefs.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_flinkVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FlinkVersion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_flinkVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_workSpaceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkSpaceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_workSpaceId.c_str(), allocator).Move(), allocator);
    }

    if (m_asyncTaskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AsyncTaskId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_asyncTaskId.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t CreateMetaTableRequest::GetCatalogId() const
{
    return m_catalogId;
}

void CreateMetaTableRequest::SetCatalogId(const int64_t& _catalogId)
{
    m_catalogId = _catalogId;
    m_catalogIdHasBeenSet = true;
}

bool CreateMetaTableRequest::CatalogIdHasBeenSet() const
{
    return m_catalogIdHasBeenSet;
}

int64_t CreateMetaTableRequest::GetDatabaseId() const
{
    return m_databaseId;
}

void CreateMetaTableRequest::SetDatabaseId(const int64_t& _databaseId)
{
    m_databaseId = _databaseId;
    m_databaseIdHasBeenSet = true;
}

bool CreateMetaTableRequest::DatabaseIdHasBeenSet() const
{
    return m_databaseIdHasBeenSet;
}

string CreateMetaTableRequest::GetSqlCode() const
{
    return m_sqlCode;
}

void CreateMetaTableRequest::SetSqlCode(const string& _sqlCode)
{
    m_sqlCode = _sqlCode;
    m_sqlCodeHasBeenSet = true;
}

bool CreateMetaTableRequest::SqlCodeHasBeenSet() const
{
    return m_sqlCodeHasBeenSet;
}

string CreateMetaTableRequest::GetComment() const
{
    return m_comment;
}

void CreateMetaTableRequest::SetComment(const string& _comment)
{
    m_comment = _comment;
    m_commentHasBeenSet = true;
}

bool CreateMetaTableRequest::CommentHasBeenSet() const
{
    return m_commentHasBeenSet;
}

string CreateMetaTableRequest::GetClusterId() const
{
    return m_clusterId;
}

void CreateMetaTableRequest::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool CreateMetaTableRequest::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

vector<ResourceRef> CreateMetaTableRequest::GetResourceRefs() const
{
    return m_resourceRefs;
}

void CreateMetaTableRequest::SetResourceRefs(const vector<ResourceRef>& _resourceRefs)
{
    m_resourceRefs = _resourceRefs;
    m_resourceRefsHasBeenSet = true;
}

bool CreateMetaTableRequest::ResourceRefsHasBeenSet() const
{
    return m_resourceRefsHasBeenSet;
}

string CreateMetaTableRequest::GetFlinkVersion() const
{
    return m_flinkVersion;
}

void CreateMetaTableRequest::SetFlinkVersion(const string& _flinkVersion)
{
    m_flinkVersion = _flinkVersion;
    m_flinkVersionHasBeenSet = true;
}

bool CreateMetaTableRequest::FlinkVersionHasBeenSet() const
{
    return m_flinkVersionHasBeenSet;
}

string CreateMetaTableRequest::GetWorkSpaceId() const
{
    return m_workSpaceId;
}

void CreateMetaTableRequest::SetWorkSpaceId(const string& _workSpaceId)
{
    m_workSpaceId = _workSpaceId;
    m_workSpaceIdHasBeenSet = true;
}

bool CreateMetaTableRequest::WorkSpaceIdHasBeenSet() const
{
    return m_workSpaceIdHasBeenSet;
}

string CreateMetaTableRequest::GetAsyncTaskId() const
{
    return m_asyncTaskId;
}

void CreateMetaTableRequest::SetAsyncTaskId(const string& _asyncTaskId)
{
    m_asyncTaskId = _asyncTaskId;
    m_asyncTaskIdHasBeenSet = true;
}

bool CreateMetaTableRequest::AsyncTaskIdHasBeenSet() const
{
    return m_asyncTaskIdHasBeenSet;
}


