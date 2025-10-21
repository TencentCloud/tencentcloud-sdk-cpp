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

#include <tencentcloud/wedata/v20250806/model/SchemaInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20250806::Model;
using namespace std;

SchemaInfo::SchemaInfo() :
    m_guidHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_databaseNameHasBeenSet(false)
{
}

CoreInternalOutcome SchemaInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Guid") && !value["Guid"].IsNull())
    {
        if (!value["Guid"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SchemaInfo.Guid` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_guid = string(value["Guid"].GetString());
        m_guidHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SchemaInfo.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("DatabaseName") && !value["DatabaseName"].IsNull())
    {
        if (!value["DatabaseName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SchemaInfo.DatabaseName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_databaseName = string(value["DatabaseName"].GetString());
        m_databaseNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SchemaInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_guidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Guid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_guid.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_databaseNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DatabaseName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_databaseName.c_str(), allocator).Move(), allocator);
    }

}


string SchemaInfo::GetGuid() const
{
    return m_guid;
}

void SchemaInfo::SetGuid(const string& _guid)
{
    m_guid = _guid;
    m_guidHasBeenSet = true;
}

bool SchemaInfo::GuidHasBeenSet() const
{
    return m_guidHasBeenSet;
}

string SchemaInfo::GetName() const
{
    return m_name;
}

void SchemaInfo::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool SchemaInfo::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string SchemaInfo::GetDatabaseName() const
{
    return m_databaseName;
}

void SchemaInfo::SetDatabaseName(const string& _databaseName)
{
    m_databaseName = _databaseName;
    m_databaseNameHasBeenSet = true;
}

bool SchemaInfo::DatabaseNameHasBeenSet() const
{
    return m_databaseNameHasBeenSet;
}

