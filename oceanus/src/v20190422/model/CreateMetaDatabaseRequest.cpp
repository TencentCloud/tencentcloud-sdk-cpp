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

#include <tencentcloud/oceanus/v20190422/model/CreateMetaDatabaseRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Oceanus::V20190422::Model;
using namespace std;

CreateMetaDatabaseRequest::CreateMetaDatabaseRequest() :
    m_catalogIdHasBeenSet(false),
    m_databaseNameHasBeenSet(false),
    m_commentHasBeenSet(false),
    m_workSpaceIdHasBeenSet(false)
{
}

string CreateMetaDatabaseRequest::ToJsonString() const
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

    if (m_databaseNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DatabaseName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_databaseName.c_str(), allocator).Move(), allocator);
    }

    if (m_commentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Comment";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_comment.c_str(), allocator).Move(), allocator);
    }

    if (m_workSpaceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkSpaceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_workSpaceId.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t CreateMetaDatabaseRequest::GetCatalogId() const
{
    return m_catalogId;
}

void CreateMetaDatabaseRequest::SetCatalogId(const int64_t& _catalogId)
{
    m_catalogId = _catalogId;
    m_catalogIdHasBeenSet = true;
}

bool CreateMetaDatabaseRequest::CatalogIdHasBeenSet() const
{
    return m_catalogIdHasBeenSet;
}

string CreateMetaDatabaseRequest::GetDatabaseName() const
{
    return m_databaseName;
}

void CreateMetaDatabaseRequest::SetDatabaseName(const string& _databaseName)
{
    m_databaseName = _databaseName;
    m_databaseNameHasBeenSet = true;
}

bool CreateMetaDatabaseRequest::DatabaseNameHasBeenSet() const
{
    return m_databaseNameHasBeenSet;
}

string CreateMetaDatabaseRequest::GetComment() const
{
    return m_comment;
}

void CreateMetaDatabaseRequest::SetComment(const string& _comment)
{
    m_comment = _comment;
    m_commentHasBeenSet = true;
}

bool CreateMetaDatabaseRequest::CommentHasBeenSet() const
{
    return m_commentHasBeenSet;
}

string CreateMetaDatabaseRequest::GetWorkSpaceId() const
{
    return m_workSpaceId;
}

void CreateMetaDatabaseRequest::SetWorkSpaceId(const string& _workSpaceId)
{
    m_workSpaceId = _workSpaceId;
    m_workSpaceIdHasBeenSet = true;
}

bool CreateMetaDatabaseRequest::WorkSpaceIdHasBeenSet() const
{
    return m_workSpaceIdHasBeenSet;
}


