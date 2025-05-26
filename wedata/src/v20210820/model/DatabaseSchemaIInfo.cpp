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

#include <tencentcloud/wedata/v20210820/model/DatabaseSchemaIInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

DatabaseSchemaIInfo::DatabaseSchemaIInfo() :
    m_schemaNameHasBeenSet(false),
    m_originDatabaseNameHasBeenSet(false)
{
}

CoreInternalOutcome DatabaseSchemaIInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SchemaName") && !value["SchemaName"].IsNull())
    {
        if (!value["SchemaName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DatabaseSchemaIInfo.SchemaName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_schemaName = string(value["SchemaName"].GetString());
        m_schemaNameHasBeenSet = true;
    }

    if (value.HasMember("OriginDatabaseName") && !value["OriginDatabaseName"].IsNull())
    {
        if (!value["OriginDatabaseName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DatabaseSchemaIInfo.OriginDatabaseName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_originDatabaseName = string(value["OriginDatabaseName"].GetString());
        m_originDatabaseNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DatabaseSchemaIInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_schemaNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SchemaName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_schemaName.c_str(), allocator).Move(), allocator);
    }

    if (m_originDatabaseNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OriginDatabaseName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_originDatabaseName.c_str(), allocator).Move(), allocator);
    }

}


string DatabaseSchemaIInfo::GetSchemaName() const
{
    return m_schemaName;
}

void DatabaseSchemaIInfo::SetSchemaName(const string& _schemaName)
{
    m_schemaName = _schemaName;
    m_schemaNameHasBeenSet = true;
}

bool DatabaseSchemaIInfo::SchemaNameHasBeenSet() const
{
    return m_schemaNameHasBeenSet;
}

string DatabaseSchemaIInfo::GetOriginDatabaseName() const
{
    return m_originDatabaseName;
}

void DatabaseSchemaIInfo::SetOriginDatabaseName(const string& _originDatabaseName)
{
    m_originDatabaseName = _originDatabaseName;
    m_originDatabaseNameHasBeenSet = true;
}

bool DatabaseSchemaIInfo::OriginDatabaseNameHasBeenSet() const
{
    return m_originDatabaseNameHasBeenSet;
}

