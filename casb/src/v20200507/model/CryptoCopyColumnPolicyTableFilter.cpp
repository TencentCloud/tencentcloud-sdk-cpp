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

#include <tencentcloud/casb/v20200507/model/CryptoCopyColumnPolicyTableFilter.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Casb::V20200507::Model;
using namespace std;

CryptoCopyColumnPolicyTableFilter::CryptoCopyColumnPolicyTableFilter() :
    m_databaseNameHasBeenSet(false),
    m_tableNameSetHasBeenSet(false)
{
}

CoreInternalOutcome CryptoCopyColumnPolicyTableFilter::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DatabaseName") && !value["DatabaseName"].IsNull())
    {
        if (!value["DatabaseName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CryptoCopyColumnPolicyTableFilter.DatabaseName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_databaseName = string(value["DatabaseName"].GetString());
        m_databaseNameHasBeenSet = true;
    }

    if (value.HasMember("TableNameSet") && !value["TableNameSet"].IsNull())
    {
        if (!value["TableNameSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CryptoCopyColumnPolicyTableFilter.TableNameSet` is not array type"));

        const rapidjson::Value &tmpValue = value["TableNameSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_tableNameSet.push_back((*itr).GetString());
        }
        m_tableNameSetHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CryptoCopyColumnPolicyTableFilter::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_databaseNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DatabaseName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_databaseName.c_str(), allocator).Move(), allocator);
    }

    if (m_tableNameSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TableNameSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_tableNameSet.begin(); itr != m_tableNameSet.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


string CryptoCopyColumnPolicyTableFilter::GetDatabaseName() const
{
    return m_databaseName;
}

void CryptoCopyColumnPolicyTableFilter::SetDatabaseName(const string& _databaseName)
{
    m_databaseName = _databaseName;
    m_databaseNameHasBeenSet = true;
}

bool CryptoCopyColumnPolicyTableFilter::DatabaseNameHasBeenSet() const
{
    return m_databaseNameHasBeenSet;
}

vector<string> CryptoCopyColumnPolicyTableFilter::GetTableNameSet() const
{
    return m_tableNameSet;
}

void CryptoCopyColumnPolicyTableFilter::SetTableNameSet(const vector<string>& _tableNameSet)
{
    m_tableNameSet = _tableNameSet;
    m_tableNameSetHasBeenSet = true;
}

bool CryptoCopyColumnPolicyTableFilter::TableNameSetHasBeenSet() const
{
    return m_tableNameSetHasBeenSet;
}

