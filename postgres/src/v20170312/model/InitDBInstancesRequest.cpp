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

#include <tencentcloud/postgres/v20170312/model/InitDBInstancesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Postgres::V20170312::Model;
using namespace rapidjson;
using namespace std;

InitDBInstancesRequest::InitDBInstancesRequest() :
    m_dBInstanceIdSetHasBeenSet(false),
    m_adminNameHasBeenSet(false),
    m_adminPasswordHasBeenSet(false),
    m_charsetHasBeenSet(false)
{
}

string InitDBInstancesRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_dBInstanceIdSetHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "DBInstanceIdSet";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kArrayType).Move(), allocator);

        for (auto itr = m_dBInstanceIdSet.begin(); itr != m_dBInstanceIdSet.end(); ++itr)
        {
            d[key.c_str()].PushBack(Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_adminNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "AdminName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_adminName.c_str(), allocator).Move(), allocator);
    }

    if (m_adminPasswordHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "AdminPassword";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_adminPassword.c_str(), allocator).Move(), allocator);
    }

    if (m_charsetHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Charset";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_charset.c_str(), allocator).Move(), allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


vector<string> InitDBInstancesRequest::GetDBInstanceIdSet() const
{
    return m_dBInstanceIdSet;
}

void InitDBInstancesRequest::SetDBInstanceIdSet(const vector<string>& _dBInstanceIdSet)
{
    m_dBInstanceIdSet = _dBInstanceIdSet;
    m_dBInstanceIdSetHasBeenSet = true;
}

bool InitDBInstancesRequest::DBInstanceIdSetHasBeenSet() const
{
    return m_dBInstanceIdSetHasBeenSet;
}

string InitDBInstancesRequest::GetAdminName() const
{
    return m_adminName;
}

void InitDBInstancesRequest::SetAdminName(const string& _adminName)
{
    m_adminName = _adminName;
    m_adminNameHasBeenSet = true;
}

bool InitDBInstancesRequest::AdminNameHasBeenSet() const
{
    return m_adminNameHasBeenSet;
}

string InitDBInstancesRequest::GetAdminPassword() const
{
    return m_adminPassword;
}

void InitDBInstancesRequest::SetAdminPassword(const string& _adminPassword)
{
    m_adminPassword = _adminPassword;
    m_adminPasswordHasBeenSet = true;
}

bool InitDBInstancesRequest::AdminPasswordHasBeenSet() const
{
    return m_adminPasswordHasBeenSet;
}

string InitDBInstancesRequest::GetCharset() const
{
    return m_charset;
}

void InitDBInstancesRequest::SetCharset(const string& _charset)
{
    m_charset = _charset;
    m_charsetHasBeenSet = true;
}

bool InitDBInstancesRequest::CharsetHasBeenSet() const
{
    return m_charsetHasBeenSet;
}


