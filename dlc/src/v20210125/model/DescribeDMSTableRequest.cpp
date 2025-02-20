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

#include <tencentcloud/dlc/v20210125/model/DescribeDMSTableRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Dlc::V20210125::Model;
using namespace std;

DescribeDMSTableRequest::DescribeDMSTableRequest() :
    m_dbNameHasBeenSet(false),
    m_schemaNameHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_catalogHasBeenSet(false),
    m_keywordHasBeenSet(false),
    m_patternHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_datasourceConnectionNameHasBeenSet(false)
{
}

string DescribeDMSTableRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_dbNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DbName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_dbName.c_str(), allocator).Move(), allocator);
    }

    if (m_schemaNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SchemaName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_schemaName.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_catalogHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Catalog";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_catalog.c_str(), allocator).Move(), allocator);
    }

    if (m_keywordHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Keyword";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_keyword.c_str(), allocator).Move(), allocator);
    }

    if (m_patternHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Pattern";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_pattern.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_datasourceConnectionNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DatasourceConnectionName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_datasourceConnectionName.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeDMSTableRequest::GetDbName() const
{
    return m_dbName;
}

void DescribeDMSTableRequest::SetDbName(const string& _dbName)
{
    m_dbName = _dbName;
    m_dbNameHasBeenSet = true;
}

bool DescribeDMSTableRequest::DbNameHasBeenSet() const
{
    return m_dbNameHasBeenSet;
}

string DescribeDMSTableRequest::GetSchemaName() const
{
    return m_schemaName;
}

void DescribeDMSTableRequest::SetSchemaName(const string& _schemaName)
{
    m_schemaName = _schemaName;
    m_schemaNameHasBeenSet = true;
}

bool DescribeDMSTableRequest::SchemaNameHasBeenSet() const
{
    return m_schemaNameHasBeenSet;
}

string DescribeDMSTableRequest::GetName() const
{
    return m_name;
}

void DescribeDMSTableRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool DescribeDMSTableRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string DescribeDMSTableRequest::GetCatalog() const
{
    return m_catalog;
}

void DescribeDMSTableRequest::SetCatalog(const string& _catalog)
{
    m_catalog = _catalog;
    m_catalogHasBeenSet = true;
}

bool DescribeDMSTableRequest::CatalogHasBeenSet() const
{
    return m_catalogHasBeenSet;
}

string DescribeDMSTableRequest::GetKeyword() const
{
    return m_keyword;
}

void DescribeDMSTableRequest::SetKeyword(const string& _keyword)
{
    m_keyword = _keyword;
    m_keywordHasBeenSet = true;
}

bool DescribeDMSTableRequest::KeywordHasBeenSet() const
{
    return m_keywordHasBeenSet;
}

string DescribeDMSTableRequest::GetPattern() const
{
    return m_pattern;
}

void DescribeDMSTableRequest::SetPattern(const string& _pattern)
{
    m_pattern = _pattern;
    m_patternHasBeenSet = true;
}

bool DescribeDMSTableRequest::PatternHasBeenSet() const
{
    return m_patternHasBeenSet;
}

string DescribeDMSTableRequest::GetType() const
{
    return m_type;
}

void DescribeDMSTableRequest::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool DescribeDMSTableRequest::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string DescribeDMSTableRequest::GetDatasourceConnectionName() const
{
    return m_datasourceConnectionName;
}

void DescribeDMSTableRequest::SetDatasourceConnectionName(const string& _datasourceConnectionName)
{
    m_datasourceConnectionName = _datasourceConnectionName;
    m_datasourceConnectionNameHasBeenSet = true;
}

bool DescribeDMSTableRequest::DatasourceConnectionNameHasBeenSet() const
{
    return m_datasourceConnectionNameHasBeenSet;
}


