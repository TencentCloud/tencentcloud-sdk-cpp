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

#include <tencentcloud/iotvideo/v20191126/model/CreateBindingRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Iotvideo::V20191126::Model;
using namespace std;

CreateBindingRequest::CreateBindingRequest() :
    m_accessIdHasBeenSet(false),
    m_tidHasBeenSet(false),
    m_roleHasBeenSet(false),
    m_forceBindHasBeenSet(false),
    m_nickHasBeenSet(false),
    m_bindTokenHasBeenSet(false)
{
}

string CreateBindingRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_accessIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccessId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_accessId.c_str(), allocator).Move(), allocator);
    }

    if (m_tidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tid";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_tid.c_str(), allocator).Move(), allocator);
    }

    if (m_roleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Role";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_role.c_str(), allocator).Move(), allocator);
    }

    if (m_forceBindHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ForceBind";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_forceBind, allocator);
    }

    if (m_nickHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Nick";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_nick.c_str(), allocator).Move(), allocator);
    }

    if (m_bindTokenHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BindToken";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_bindToken.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateBindingRequest::GetAccessId() const
{
    return m_accessId;
}

void CreateBindingRequest::SetAccessId(const string& _accessId)
{
    m_accessId = _accessId;
    m_accessIdHasBeenSet = true;
}

bool CreateBindingRequest::AccessIdHasBeenSet() const
{
    return m_accessIdHasBeenSet;
}

string CreateBindingRequest::GetTid() const
{
    return m_tid;
}

void CreateBindingRequest::SetTid(const string& _tid)
{
    m_tid = _tid;
    m_tidHasBeenSet = true;
}

bool CreateBindingRequest::TidHasBeenSet() const
{
    return m_tidHasBeenSet;
}

string CreateBindingRequest::GetRole() const
{
    return m_role;
}

void CreateBindingRequest::SetRole(const string& _role)
{
    m_role = _role;
    m_roleHasBeenSet = true;
}

bool CreateBindingRequest::RoleHasBeenSet() const
{
    return m_roleHasBeenSet;
}

bool CreateBindingRequest::GetForceBind() const
{
    return m_forceBind;
}

void CreateBindingRequest::SetForceBind(const bool& _forceBind)
{
    m_forceBind = _forceBind;
    m_forceBindHasBeenSet = true;
}

bool CreateBindingRequest::ForceBindHasBeenSet() const
{
    return m_forceBindHasBeenSet;
}

string CreateBindingRequest::GetNick() const
{
    return m_nick;
}

void CreateBindingRequest::SetNick(const string& _nick)
{
    m_nick = _nick;
    m_nickHasBeenSet = true;
}

bool CreateBindingRequest::NickHasBeenSet() const
{
    return m_nickHasBeenSet;
}

string CreateBindingRequest::GetBindToken() const
{
    return m_bindToken;
}

void CreateBindingRequest::SetBindToken(const string& _bindToken)
{
    m_bindToken = _bindToken;
    m_bindTokenHasBeenSet = true;
}

bool CreateBindingRequest::BindTokenHasBeenSet() const
{
    return m_bindTokenHasBeenSet;
}


