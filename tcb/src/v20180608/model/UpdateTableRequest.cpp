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

#include <tencentcloud/tcb/v20180608/model/UpdateTableRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tcb::V20180608::Model;
using namespace std;

UpdateTableRequest::UpdateTableRequest() :
    m_tableNameHasBeenSet(false),
    m_tagHasBeenSet(false),
    m_dropIndexesHasBeenSet(false),
    m_createIndexesHasBeenSet(false),
    m_envIdHasBeenSet(false),
    m_mongoConnectorHasBeenSet(false)
{
}

string UpdateTableRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_tableNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TableName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_tableName.c_str(), allocator).Move(), allocator);
    }

    if (m_tagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tag";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_tag.c_str(), allocator).Move(), allocator);
    }

    if (m_dropIndexesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DropIndexes";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_dropIndexes.begin(); itr != m_dropIndexes.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_createIndexesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateIndexes";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_createIndexes.begin(); itr != m_createIndexes.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_envIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnvId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_envId.c_str(), allocator).Move(), allocator);
    }

    if (m_mongoConnectorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MongoConnector";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_mongoConnector.ToJsonObject(d[key.c_str()], allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string UpdateTableRequest::GetTableName() const
{
    return m_tableName;
}

void UpdateTableRequest::SetTableName(const string& _tableName)
{
    m_tableName = _tableName;
    m_tableNameHasBeenSet = true;
}

bool UpdateTableRequest::TableNameHasBeenSet() const
{
    return m_tableNameHasBeenSet;
}

string UpdateTableRequest::GetTag() const
{
    return m_tag;
}

void UpdateTableRequest::SetTag(const string& _tag)
{
    m_tag = _tag;
    m_tagHasBeenSet = true;
}

bool UpdateTableRequest::TagHasBeenSet() const
{
    return m_tagHasBeenSet;
}

vector<DropIndex> UpdateTableRequest::GetDropIndexes() const
{
    return m_dropIndexes;
}

void UpdateTableRequest::SetDropIndexes(const vector<DropIndex>& _dropIndexes)
{
    m_dropIndexes = _dropIndexes;
    m_dropIndexesHasBeenSet = true;
}

bool UpdateTableRequest::DropIndexesHasBeenSet() const
{
    return m_dropIndexesHasBeenSet;
}

vector<CreateIndex> UpdateTableRequest::GetCreateIndexes() const
{
    return m_createIndexes;
}

void UpdateTableRequest::SetCreateIndexes(const vector<CreateIndex>& _createIndexes)
{
    m_createIndexes = _createIndexes;
    m_createIndexesHasBeenSet = true;
}

bool UpdateTableRequest::CreateIndexesHasBeenSet() const
{
    return m_createIndexesHasBeenSet;
}

string UpdateTableRequest::GetEnvId() const
{
    return m_envId;
}

void UpdateTableRequest::SetEnvId(const string& _envId)
{
    m_envId = _envId;
    m_envIdHasBeenSet = true;
}

bool UpdateTableRequest::EnvIdHasBeenSet() const
{
    return m_envIdHasBeenSet;
}

MongoConnector UpdateTableRequest::GetMongoConnector() const
{
    return m_mongoConnector;
}

void UpdateTableRequest::SetMongoConnector(const MongoConnector& _mongoConnector)
{
    m_mongoConnector = _mongoConnector;
    m_mongoConnectorHasBeenSet = true;
}

bool UpdateTableRequest::MongoConnectorHasBeenSet() const
{
    return m_mongoConnectorHasBeenSet;
}


