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

#include <tencentcloud/cam/v20190116/model/CheckRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cam::V20190116::Model;
using namespace rapidjson;
using namespace std;

CheckRequest::CheckRequest() :
    m_skeyHasBeenSet(false),
    m_clientIPHasBeenSet(false),
    m_clientUAHasBeenSet(false),
    m_interfaceHasBeenSet(false),
    m_authTypeHasBeenSet(false),
    m_codeHasBeenSet(false),
    m_ownerUinHasBeenSet(false)
{
}

string CheckRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_skeyHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Skey";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_skey.c_str(), allocator).Move(), allocator);
    }

    if (m_clientIPHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ClientIP";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_clientIP.c_str(), allocator).Move(), allocator);
    }

    if (m_clientUAHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ClientUA";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_clientUA.c_str(), allocator).Move(), allocator);
    }

    if (m_interfaceHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Interface";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_interface.c_str(), allocator).Move(), allocator);
    }

    if (m_authTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "AuthType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_authType, allocator);
    }

    if (m_codeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Code";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_code.c_str(), allocator).Move(), allocator);
    }

    if (m_ownerUinHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "OwnerUin";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_ownerUin, allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CheckRequest::GetSkey() const
{
    return m_skey;
}

void CheckRequest::SetSkey(const string& _skey)
{
    m_skey = _skey;
    m_skeyHasBeenSet = true;
}

bool CheckRequest::SkeyHasBeenSet() const
{
    return m_skeyHasBeenSet;
}

string CheckRequest::GetClientIP() const
{
    return m_clientIP;
}

void CheckRequest::SetClientIP(const string& _clientIP)
{
    m_clientIP = _clientIP;
    m_clientIPHasBeenSet = true;
}

bool CheckRequest::ClientIPHasBeenSet() const
{
    return m_clientIPHasBeenSet;
}

string CheckRequest::GetClientUA() const
{
    return m_clientUA;
}

void CheckRequest::SetClientUA(const string& _clientUA)
{
    m_clientUA = _clientUA;
    m_clientUAHasBeenSet = true;
}

bool CheckRequest::ClientUAHasBeenSet() const
{
    return m_clientUAHasBeenSet;
}

string CheckRequest::GetInterface() const
{
    return m_interface;
}

void CheckRequest::SetInterface(const string& _interface)
{
    m_interface = _interface;
    m_interfaceHasBeenSet = true;
}

bool CheckRequest::InterfaceHasBeenSet() const
{
    return m_interfaceHasBeenSet;
}

uint64_t CheckRequest::GetAuthType() const
{
    return m_authType;
}

void CheckRequest::SetAuthType(const uint64_t& _authType)
{
    m_authType = _authType;
    m_authTypeHasBeenSet = true;
}

bool CheckRequest::AuthTypeHasBeenSet() const
{
    return m_authTypeHasBeenSet;
}

string CheckRequest::GetCode() const
{
    return m_code;
}

void CheckRequest::SetCode(const string& _code)
{
    m_code = _code;
    m_codeHasBeenSet = true;
}

bool CheckRequest::CodeHasBeenSet() const
{
    return m_codeHasBeenSet;
}

uint64_t CheckRequest::GetOwnerUin() const
{
    return m_ownerUin;
}

void CheckRequest::SetOwnerUin(const uint64_t& _ownerUin)
{
    m_ownerUin = _ownerUin;
    m_ownerUinHasBeenSet = true;
}

bool CheckRequest::OwnerUinHasBeenSet() const
{
    return m_ownerUinHasBeenSet;
}


