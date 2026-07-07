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

#include <tencentcloud/csip/v20221121/model/DescribeDspmAssetFieldSamplesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

DescribeDspmAssetFieldSamplesRequest::DescribeDspmAssetFieldSamplesRequest() :
    m_assetIdHasBeenSet(false),
    m_dbNameHasBeenSet(false),
    m_tableNameHasBeenSet(false),
    m_fieldNameHasBeenSet(false),
    m_memberIdHasBeenSet(false),
    m_schemaNameHasBeenSet(false)
{
}

string DescribeDspmAssetFieldSamplesRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_assetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssetId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_assetId.c_str(), allocator).Move(), allocator);
    }

    if (m_dbNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DbName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_dbName.c_str(), allocator).Move(), allocator);
    }

    if (m_tableNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TableName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_tableName.c_str(), allocator).Move(), allocator);
    }

    if (m_fieldNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FieldName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_fieldName.c_str(), allocator).Move(), allocator);
    }

    if (m_memberIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MemberId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_memberId.begin(); itr != m_memberId.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_schemaNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SchemaName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_schemaName.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeDspmAssetFieldSamplesRequest::GetAssetId() const
{
    return m_assetId;
}

void DescribeDspmAssetFieldSamplesRequest::SetAssetId(const string& _assetId)
{
    m_assetId = _assetId;
    m_assetIdHasBeenSet = true;
}

bool DescribeDspmAssetFieldSamplesRequest::AssetIdHasBeenSet() const
{
    return m_assetIdHasBeenSet;
}

string DescribeDspmAssetFieldSamplesRequest::GetDbName() const
{
    return m_dbName;
}

void DescribeDspmAssetFieldSamplesRequest::SetDbName(const string& _dbName)
{
    m_dbName = _dbName;
    m_dbNameHasBeenSet = true;
}

bool DescribeDspmAssetFieldSamplesRequest::DbNameHasBeenSet() const
{
    return m_dbNameHasBeenSet;
}

string DescribeDspmAssetFieldSamplesRequest::GetTableName() const
{
    return m_tableName;
}

void DescribeDspmAssetFieldSamplesRequest::SetTableName(const string& _tableName)
{
    m_tableName = _tableName;
    m_tableNameHasBeenSet = true;
}

bool DescribeDspmAssetFieldSamplesRequest::TableNameHasBeenSet() const
{
    return m_tableNameHasBeenSet;
}

string DescribeDspmAssetFieldSamplesRequest::GetFieldName() const
{
    return m_fieldName;
}

void DescribeDspmAssetFieldSamplesRequest::SetFieldName(const string& _fieldName)
{
    m_fieldName = _fieldName;
    m_fieldNameHasBeenSet = true;
}

bool DescribeDspmAssetFieldSamplesRequest::FieldNameHasBeenSet() const
{
    return m_fieldNameHasBeenSet;
}

vector<string> DescribeDspmAssetFieldSamplesRequest::GetMemberId() const
{
    return m_memberId;
}

void DescribeDspmAssetFieldSamplesRequest::SetMemberId(const vector<string>& _memberId)
{
    m_memberId = _memberId;
    m_memberIdHasBeenSet = true;
}

bool DescribeDspmAssetFieldSamplesRequest::MemberIdHasBeenSet() const
{
    return m_memberIdHasBeenSet;
}

string DescribeDspmAssetFieldSamplesRequest::GetSchemaName() const
{
    return m_schemaName;
}

void DescribeDspmAssetFieldSamplesRequest::SetSchemaName(const string& _schemaName)
{
    m_schemaName = _schemaName;
    m_schemaNameHasBeenSet = true;
}

bool DescribeDspmAssetFieldSamplesRequest::SchemaNameHasBeenSet() const
{
    return m_schemaNameHasBeenSet;
}


