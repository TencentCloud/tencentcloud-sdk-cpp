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

#include <tencentcloud/cdb/v20170320/model/RollbackTableName.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cdb::V20170320::Model;
using namespace std;

RollbackTableName::RollbackTableName() :
    m_tableNameHasBeenSet(false),
    m_newTableNameHasBeenSet(false)
{
}

CoreInternalOutcome RollbackTableName::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TableName") && !value["TableName"].IsNull())
    {
        if (!value["TableName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RollbackTableName.TableName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tableName = string(value["TableName"].GetString());
        m_tableNameHasBeenSet = true;
    }

    if (value.HasMember("NewTableName") && !value["NewTableName"].IsNull())
    {
        if (!value["NewTableName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RollbackTableName.NewTableName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_newTableName = string(value["NewTableName"].GetString());
        m_newTableNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RollbackTableName::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_tableNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TableName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tableName.c_str(), allocator).Move(), allocator);
    }

    if (m_newTableNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NewTableName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_newTableName.c_str(), allocator).Move(), allocator);
    }

}


string RollbackTableName::GetTableName() const
{
    return m_tableName;
}

void RollbackTableName::SetTableName(const string& _tableName)
{
    m_tableName = _tableName;
    m_tableNameHasBeenSet = true;
}

bool RollbackTableName::TableNameHasBeenSet() const
{
    return m_tableNameHasBeenSet;
}

string RollbackTableName::GetNewTableName() const
{
    return m_newTableName;
}

void RollbackTableName::SetNewTableName(const string& _newTableName)
{
    m_newTableName = _newTableName;
    m_newTableNameHasBeenSet = true;
}

bool RollbackTableName::NewTableNameHasBeenSet() const
{
    return m_newTableNameHasBeenSet;
}

