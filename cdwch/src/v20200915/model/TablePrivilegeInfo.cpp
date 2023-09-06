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

#include <tencentcloud/cdwch/v20200915/model/TablePrivilegeInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cdwch::V20200915::Model;
using namespace std;

TablePrivilegeInfo::TablePrivilegeInfo() :
    m_tableNameHasBeenSet(false),
    m_tablePrivilegesHasBeenSet(false)
{
}

CoreInternalOutcome TablePrivilegeInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TableName") && !value["TableName"].IsNull())
    {
        if (!value["TableName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TablePrivilegeInfo.TableName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tableName = string(value["TableName"].GetString());
        m_tableNameHasBeenSet = true;
    }

    if (value.HasMember("TablePrivileges") && !value["TablePrivileges"].IsNull())
    {
        if (!value["TablePrivileges"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TablePrivilegeInfo.TablePrivileges` is not array type"));

        const rapidjson::Value &tmpValue = value["TablePrivileges"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_tablePrivileges.push_back((*itr).GetString());
        }
        m_tablePrivilegesHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TablePrivilegeInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_tableNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TableName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tableName.c_str(), allocator).Move(), allocator);
    }

    if (m_tablePrivilegesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TablePrivileges";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_tablePrivileges.begin(); itr != m_tablePrivileges.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


string TablePrivilegeInfo::GetTableName() const
{
    return m_tableName;
}

void TablePrivilegeInfo::SetTableName(const string& _tableName)
{
    m_tableName = _tableName;
    m_tableNameHasBeenSet = true;
}

bool TablePrivilegeInfo::TableNameHasBeenSet() const
{
    return m_tableNameHasBeenSet;
}

vector<string> TablePrivilegeInfo::GetTablePrivileges() const
{
    return m_tablePrivileges;
}

void TablePrivilegeInfo::SetTablePrivileges(const vector<string>& _tablePrivileges)
{
    m_tablePrivileges = _tablePrivileges;
    m_tablePrivilegesHasBeenSet = true;
}

bool TablePrivilegeInfo::TablePrivilegesHasBeenSet() const
{
    return m_tablePrivilegesHasBeenSet;
}

