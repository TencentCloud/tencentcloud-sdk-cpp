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

#include <tencentcloud/cdb/v20170320/model/ModifyAccountMaxUserConnectionsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cdb::V20170320::Model;
using namespace rapidjson;
using namespace std;

ModifyAccountMaxUserConnectionsRequest::ModifyAccountMaxUserConnectionsRequest() :
    m_accountsHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_maxUserConnectionsHasBeenSet(false)
{
}

string ModifyAccountMaxUserConnectionsRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_accountsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Accounts";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_accounts.begin(); itr != m_accounts.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(Value(kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_instanceIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_maxUserConnectionsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "MaxUserConnections";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_maxUserConnections, allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


vector<Account> ModifyAccountMaxUserConnectionsRequest::GetAccounts() const
{
    return m_accounts;
}

void ModifyAccountMaxUserConnectionsRequest::SetAccounts(const vector<Account>& _accounts)
{
    m_accounts = _accounts;
    m_accountsHasBeenSet = true;
}

bool ModifyAccountMaxUserConnectionsRequest::AccountsHasBeenSet() const
{
    return m_accountsHasBeenSet;
}

string ModifyAccountMaxUserConnectionsRequest::GetInstanceId() const
{
    return m_instanceId;
}

void ModifyAccountMaxUserConnectionsRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool ModifyAccountMaxUserConnectionsRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

int64_t ModifyAccountMaxUserConnectionsRequest::GetMaxUserConnections() const
{
    return m_maxUserConnections;
}

void ModifyAccountMaxUserConnectionsRequest::SetMaxUserConnections(const int64_t& _maxUserConnections)
{
    m_maxUserConnections = _maxUserConnections;
    m_maxUserConnectionsHasBeenSet = true;
}

bool ModifyAccountMaxUserConnectionsRequest::MaxUserConnectionsHasBeenSet() const
{
    return m_maxUserConnectionsHasBeenSet;
}


