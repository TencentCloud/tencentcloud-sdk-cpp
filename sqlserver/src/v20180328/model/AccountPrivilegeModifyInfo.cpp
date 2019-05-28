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

#include <tencentcloud/sqlserver/v20180328/model/AccountPrivilegeModifyInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Sqlserver::V20180328::Model;
using namespace rapidjson;
using namespace std;

AccountPrivilegeModifyInfo::AccountPrivilegeModifyInfo() :
    m_userNameHasBeenSet(false),
    m_dBPrivilegesHasBeenSet(false)
{
}

CoreInternalOutcome AccountPrivilegeModifyInfo::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("UserName") && !value["UserName"].IsNull())
    {
        if (!value["UserName"].IsString())
        {
            return CoreInternalOutcome(Error("response `AccountPrivilegeModifyInfo.UserName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userName = string(value["UserName"].GetString());
        m_userNameHasBeenSet = true;
    }

    if (value.HasMember("DBPrivileges") && !value["DBPrivileges"].IsNull())
    {
        if (!value["DBPrivileges"].IsArray())
            return CoreInternalOutcome(Error("response `AccountPrivilegeModifyInfo.DBPrivileges` is not array type"));

        const Value &tmpValue = value["DBPrivileges"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            DBPrivilegeModifyInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_dBPrivileges.push_back(item);
        }
        m_dBPrivilegesHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AccountPrivilegeModifyInfo::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_userNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "UserName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_userName.c_str(), allocator).Move(), allocator);
    }

    if (m_dBPrivilegesHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "DBPrivileges";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_dBPrivileges.begin(); itr != m_dBPrivileges.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(Value(kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string AccountPrivilegeModifyInfo::GetUserName() const
{
    return m_userName;
}

void AccountPrivilegeModifyInfo::SetUserName(const string& _userName)
{
    m_userName = _userName;
    m_userNameHasBeenSet = true;
}

bool AccountPrivilegeModifyInfo::UserNameHasBeenSet() const
{
    return m_userNameHasBeenSet;
}

vector<DBPrivilegeModifyInfo> AccountPrivilegeModifyInfo::GetDBPrivileges() const
{
    return m_dBPrivileges;
}

void AccountPrivilegeModifyInfo::SetDBPrivileges(const vector<DBPrivilegeModifyInfo>& _dBPrivileges)
{
    m_dBPrivileges = _dBPrivileges;
    m_dBPrivilegesHasBeenSet = true;
}

bool AccountPrivilegeModifyInfo::DBPrivilegesHasBeenSet() const
{
    return m_dBPrivilegesHasBeenSet;
}

