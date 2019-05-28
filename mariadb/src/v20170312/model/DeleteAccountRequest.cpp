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

#include <tencentcloud/mariadb/v20170312/model/DeleteAccountRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Mariadb::V20170312::Model;
using namespace rapidjson;
using namespace std;

DeleteAccountRequest::DeleteAccountRequest() :
    m_instanceIdHasBeenSet(false),
    m_userNameHasBeenSet(false),
    m_hostHasBeenSet(false)
{
}

string DeleteAccountRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_instanceIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_userNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "UserName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_userName.c_str(), allocator).Move(), allocator);
    }

    if (m_hostHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Host";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_host.c_str(), allocator).Move(), allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DeleteAccountRequest::GetInstanceId() const
{
    return m_instanceId;
}

void DeleteAccountRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool DeleteAccountRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string DeleteAccountRequest::GetUserName() const
{
    return m_userName;
}

void DeleteAccountRequest::SetUserName(const string& _userName)
{
    m_userName = _userName;
    m_userNameHasBeenSet = true;
}

bool DeleteAccountRequest::UserNameHasBeenSet() const
{
    return m_userNameHasBeenSet;
}

string DeleteAccountRequest::GetHost() const
{
    return m_host;
}

void DeleteAccountRequest::SetHost(const string& _host)
{
    m_host = _host;
    m_hostHasBeenSet = true;
}

bool DeleteAccountRequest::HostHasBeenSet() const
{
    return m_hostHasBeenSet;
}


