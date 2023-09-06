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

#include <tencentcloud/cdwch/v20200915/model/DatabasePrivilegeInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cdwch::V20200915::Model;
using namespace std;

DatabasePrivilegeInfo::DatabasePrivilegeInfo() :
    m_databaseNameHasBeenSet(false),
    m_databasePrivilegesHasBeenSet(false),
    m_tablePrivilegeListHasBeenSet(false)
{
}

CoreInternalOutcome DatabasePrivilegeInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DatabaseName") && !value["DatabaseName"].IsNull())
    {
        if (!value["DatabaseName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DatabasePrivilegeInfo.DatabaseName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_databaseName = string(value["DatabaseName"].GetString());
        m_databaseNameHasBeenSet = true;
    }

    if (value.HasMember("DatabasePrivileges") && !value["DatabasePrivileges"].IsNull())
    {
        if (!value["DatabasePrivileges"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DatabasePrivilegeInfo.DatabasePrivileges` is not array type"));

        const rapidjson::Value &tmpValue = value["DatabasePrivileges"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_databasePrivileges.push_back((*itr).GetString());
        }
        m_databasePrivilegesHasBeenSet = true;
    }

    if (value.HasMember("TablePrivilegeList") && !value["TablePrivilegeList"].IsNull())
    {
        if (!value["TablePrivilegeList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DatabasePrivilegeInfo.TablePrivilegeList` is not array type"));

        const rapidjson::Value &tmpValue = value["TablePrivilegeList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            TablePrivilegeInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_tablePrivilegeList.push_back(item);
        }
        m_tablePrivilegeListHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DatabasePrivilegeInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_databaseNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DatabaseName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_databaseName.c_str(), allocator).Move(), allocator);
    }

    if (m_databasePrivilegesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DatabasePrivileges";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_databasePrivileges.begin(); itr != m_databasePrivileges.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_tablePrivilegeListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TablePrivilegeList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tablePrivilegeList.begin(); itr != m_tablePrivilegeList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string DatabasePrivilegeInfo::GetDatabaseName() const
{
    return m_databaseName;
}

void DatabasePrivilegeInfo::SetDatabaseName(const string& _databaseName)
{
    m_databaseName = _databaseName;
    m_databaseNameHasBeenSet = true;
}

bool DatabasePrivilegeInfo::DatabaseNameHasBeenSet() const
{
    return m_databaseNameHasBeenSet;
}

vector<string> DatabasePrivilegeInfo::GetDatabasePrivileges() const
{
    return m_databasePrivileges;
}

void DatabasePrivilegeInfo::SetDatabasePrivileges(const vector<string>& _databasePrivileges)
{
    m_databasePrivileges = _databasePrivileges;
    m_databasePrivilegesHasBeenSet = true;
}

bool DatabasePrivilegeInfo::DatabasePrivilegesHasBeenSet() const
{
    return m_databasePrivilegesHasBeenSet;
}

vector<TablePrivilegeInfo> DatabasePrivilegeInfo::GetTablePrivilegeList() const
{
    return m_tablePrivilegeList;
}

void DatabasePrivilegeInfo::SetTablePrivilegeList(const vector<TablePrivilegeInfo>& _tablePrivilegeList)
{
    m_tablePrivilegeList = _tablePrivilegeList;
    m_tablePrivilegeListHasBeenSet = true;
}

bool DatabasePrivilegeInfo::TablePrivilegeListHasBeenSet() const
{
    return m_tablePrivilegeListHasBeenSet;
}

