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

#include <tencentcloud/dsgc/v20190723/model/PrivilegeRisk.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dsgc::V20190723::Model;
using namespace std;

PrivilegeRisk::PrivilegeRisk() :
    m_accountNameHasBeenSet(false),
    m_tableNameHasBeenSet(false),
    m_descriptionHasBeenSet(false)
{
}

CoreInternalOutcome PrivilegeRisk::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AccountName") && !value["AccountName"].IsNull())
    {
        if (!value["AccountName"].IsArray())
            return CoreInternalOutcome(Core::Error("response `PrivilegeRisk.AccountName` is not array type"));

        const rapidjson::Value &tmpValue = value["AccountName"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_accountName.push_back((*itr).GetString());
        }
        m_accountNameHasBeenSet = true;
    }

    if (value.HasMember("TableName") && !value["TableName"].IsNull())
    {
        if (!value["TableName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PrivilegeRisk.TableName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tableName = string(value["TableName"].GetString());
        m_tableNameHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PrivilegeRisk.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PrivilegeRisk::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_accountNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccountName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_accountName.begin(); itr != m_accountName.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_tableNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TableName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tableName.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

}


vector<string> PrivilegeRisk::GetAccountName() const
{
    return m_accountName;
}

void PrivilegeRisk::SetAccountName(const vector<string>& _accountName)
{
    m_accountName = _accountName;
    m_accountNameHasBeenSet = true;
}

bool PrivilegeRisk::AccountNameHasBeenSet() const
{
    return m_accountNameHasBeenSet;
}

string PrivilegeRisk::GetTableName() const
{
    return m_tableName;
}

void PrivilegeRisk::SetTableName(const string& _tableName)
{
    m_tableName = _tableName;
    m_tableNameHasBeenSet = true;
}

bool PrivilegeRisk::TableNameHasBeenSet() const
{
    return m_tableNameHasBeenSet;
}

string PrivilegeRisk::GetDescription() const
{
    return m_description;
}

void PrivilegeRisk::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool PrivilegeRisk::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

