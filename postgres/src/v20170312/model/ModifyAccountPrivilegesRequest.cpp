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

#include <tencentcloud/postgres/v20170312/model/ModifyAccountPrivilegesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Postgres::V20170312::Model;
using namespace std;

ModifyAccountPrivilegesRequest::ModifyAccountPrivilegesRequest() :
    m_dBInstanceIdHasBeenSet(false),
    m_userNameHasBeenSet(false),
    m_modifyPrivilegeSetHasBeenSet(false)
{
}

string ModifyAccountPrivilegesRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_dBInstanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DBInstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_dBInstanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_userNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_userName.c_str(), allocator).Move(), allocator);
    }

    if (m_modifyPrivilegeSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModifyPrivilegeSet";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_modifyPrivilegeSet.begin(); itr != m_modifyPrivilegeSet.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyAccountPrivilegesRequest::GetDBInstanceId() const
{
    return m_dBInstanceId;
}

void ModifyAccountPrivilegesRequest::SetDBInstanceId(const string& _dBInstanceId)
{
    m_dBInstanceId = _dBInstanceId;
    m_dBInstanceIdHasBeenSet = true;
}

bool ModifyAccountPrivilegesRequest::DBInstanceIdHasBeenSet() const
{
    return m_dBInstanceIdHasBeenSet;
}

string ModifyAccountPrivilegesRequest::GetUserName() const
{
    return m_userName;
}

void ModifyAccountPrivilegesRequest::SetUserName(const string& _userName)
{
    m_userName = _userName;
    m_userNameHasBeenSet = true;
}

bool ModifyAccountPrivilegesRequest::UserNameHasBeenSet() const
{
    return m_userNameHasBeenSet;
}

vector<ModifyPrivilege> ModifyAccountPrivilegesRequest::GetModifyPrivilegeSet() const
{
    return m_modifyPrivilegeSet;
}

void ModifyAccountPrivilegesRequest::SetModifyPrivilegeSet(const vector<ModifyPrivilege>& _modifyPrivilegeSet)
{
    m_modifyPrivilegeSet = _modifyPrivilegeSet;
    m_modifyPrivilegeSetHasBeenSet = true;
}

bool ModifyAccountPrivilegesRequest::ModifyPrivilegeSetHasBeenSet() const
{
    return m_modifyPrivilegeSetHasBeenSet;
}


