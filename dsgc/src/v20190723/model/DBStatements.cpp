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

#include <tencentcloud/dsgc/v20190723/model/DBStatements.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dsgc::V20190723::Model;
using namespace std;

DBStatements::DBStatements() :
    m_dBNameHasBeenSet(false),
    m_dBSchemaHasBeenSet(false)
{
}

CoreInternalOutcome DBStatements::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DBName") && !value["DBName"].IsNull())
    {
        if (!value["DBName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DBStatements.DBName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dBName = string(value["DBName"].GetString());
        m_dBNameHasBeenSet = true;
    }

    if (value.HasMember("DBSchema") && !value["DBSchema"].IsNull())
    {
        if (!value["DBSchema"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DBStatements.DBSchema` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dBSchema = string(value["DBSchema"].GetString());
        m_dBSchemaHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DBStatements::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_dBNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DBName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dBName.c_str(), allocator).Move(), allocator);
    }

    if (m_dBSchemaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DBSchema";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dBSchema.c_str(), allocator).Move(), allocator);
    }

}


string DBStatements::GetDBName() const
{
    return m_dBName;
}

void DBStatements::SetDBName(const string& _dBName)
{
    m_dBName = _dBName;
    m_dBNameHasBeenSet = true;
}

bool DBStatements::DBNameHasBeenSet() const
{
    return m_dBNameHasBeenSet;
}

string DBStatements::GetDBSchema() const
{
    return m_dBSchema;
}

void DBStatements::SetDBSchema(const string& _dBSchema)
{
    m_dBSchema = _dBSchema;
    m_dBSchemaHasBeenSet = true;
}

bool DBStatements::DBSchemaHasBeenSet() const
{
    return m_dBSchemaHasBeenSet;
}

