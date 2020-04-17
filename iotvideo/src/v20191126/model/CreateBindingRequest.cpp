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
using namespace rapidjson;
using namespace std;

CreateBindingRequest::CreateBindingRequest() :
    m_accessIdHasBeenSet(false),
    m_tidHasBeenSet(false),
    m_roleHasBeenSet(false),
    m_forceBindHasBeenSet(false)
{
}

string CreateBindingRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_accessIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "AccessId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_accessId.c_str(), allocator).Move(), allocator);
    }

    if (m_tidHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Tid";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_tid.c_str(), allocator).Move(), allocator);
    }

    if (m_roleHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Role";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_role.c_str(), allocator).Move(), allocator);
    }

    if (m_forceBindHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ForceBind";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_forceBind, allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
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


