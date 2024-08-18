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

#include <tencentcloud/sqlserver/v20180328/model/DataBasePrivilegeModifyInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Sqlserver::V20180328::Model;
using namespace std;

DataBasePrivilegeModifyInfo::DataBasePrivilegeModifyInfo() :
    m_dataBaseNameHasBeenSet(false),
    m_accountPrivilegesHasBeenSet(false)
{
}

CoreInternalOutcome DataBasePrivilegeModifyInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DataBaseName") && !value["DataBaseName"].IsNull())
    {
        if (!value["DataBaseName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataBasePrivilegeModifyInfo.DataBaseName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dataBaseName = string(value["DataBaseName"].GetString());
        m_dataBaseNameHasBeenSet = true;
    }

    if (value.HasMember("AccountPrivileges") && !value["AccountPrivileges"].IsNull())
    {
        if (!value["AccountPrivileges"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DataBasePrivilegeModifyInfo.AccountPrivileges` is not array type"));

        const rapidjson::Value &tmpValue = value["AccountPrivileges"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            AccountPrivilege item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_accountPrivileges.push_back(item);
        }
        m_accountPrivilegesHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DataBasePrivilegeModifyInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_dataBaseNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataBaseName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dataBaseName.c_str(), allocator).Move(), allocator);
    }

    if (m_accountPrivilegesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccountPrivileges";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_accountPrivileges.begin(); itr != m_accountPrivileges.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string DataBasePrivilegeModifyInfo::GetDataBaseName() const
{
    return m_dataBaseName;
}

void DataBasePrivilegeModifyInfo::SetDataBaseName(const string& _dataBaseName)
{
    m_dataBaseName = _dataBaseName;
    m_dataBaseNameHasBeenSet = true;
}

bool DataBasePrivilegeModifyInfo::DataBaseNameHasBeenSet() const
{
    return m_dataBaseNameHasBeenSet;
}

vector<AccountPrivilege> DataBasePrivilegeModifyInfo::GetAccountPrivileges() const
{
    return m_accountPrivileges;
}

void DataBasePrivilegeModifyInfo::SetAccountPrivileges(const vector<AccountPrivilege>& _accountPrivileges)
{
    m_accountPrivileges = _accountPrivileges;
    m_accountPrivilegesHasBeenSet = true;
}

bool DataBasePrivilegeModifyInfo::AccountPrivilegesHasBeenSet() const
{
    return m_accountPrivilegesHasBeenSet;
}

