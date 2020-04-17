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

#include <tencentcloud/cam/v20190116/model/DescribeMfaCodeStatusRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cam::V20190116::Model;
using namespace rapidjson;
using namespace std;

DescribeMfaCodeStatusRequest::DescribeMfaCodeStatusRequest() :
    m_tmpcodeHasBeenSet(false),
    m_skeyHasBeenSet(false),
    m_clientUAHasBeenSet(false),
    m_interfaceHasBeenSet(false),
    m_clientIPHasBeenSet(false),
    m_ownerUinHasBeenSet(false)
{
}

string DescribeMfaCodeStatusRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_tmpcodeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Tmpcode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_tmpcode.c_str(), allocator).Move(), allocator);
    }

    if (m_skeyHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Skey";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_skey.c_str(), allocator).Move(), allocator);
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

    if (m_clientIPHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ClientIP";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_clientIP.c_str(), allocator).Move(), allocator);
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


string DescribeMfaCodeStatusRequest::GetTmpcode() const
{
    return m_tmpcode;
}

void DescribeMfaCodeStatusRequest::SetTmpcode(const string& _tmpcode)
{
    m_tmpcode = _tmpcode;
    m_tmpcodeHasBeenSet = true;
}

bool DescribeMfaCodeStatusRequest::TmpcodeHasBeenSet() const
{
    return m_tmpcodeHasBeenSet;
}

string DescribeMfaCodeStatusRequest::GetSkey() const
{
    return m_skey;
}

void DescribeMfaCodeStatusRequest::SetSkey(const string& _skey)
{
    m_skey = _skey;
    m_skeyHasBeenSet = true;
}

bool DescribeMfaCodeStatusRequest::SkeyHasBeenSet() const
{
    return m_skeyHasBeenSet;
}

string DescribeMfaCodeStatusRequest::GetClientUA() const
{
    return m_clientUA;
}

void DescribeMfaCodeStatusRequest::SetClientUA(const string& _clientUA)
{
    m_clientUA = _clientUA;
    m_clientUAHasBeenSet = true;
}

bool DescribeMfaCodeStatusRequest::ClientUAHasBeenSet() const
{
    return m_clientUAHasBeenSet;
}

string DescribeMfaCodeStatusRequest::GetInterface() const
{
    return m_interface;
}

void DescribeMfaCodeStatusRequest::SetInterface(const string& _interface)
{
    m_interface = _interface;
    m_interfaceHasBeenSet = true;
}

bool DescribeMfaCodeStatusRequest::InterfaceHasBeenSet() const
{
    return m_interfaceHasBeenSet;
}

string DescribeMfaCodeStatusRequest::GetClientIP() const
{
    return m_clientIP;
}

void DescribeMfaCodeStatusRequest::SetClientIP(const string& _clientIP)
{
    m_clientIP = _clientIP;
    m_clientIPHasBeenSet = true;
}

bool DescribeMfaCodeStatusRequest::ClientIPHasBeenSet() const
{
    return m_clientIPHasBeenSet;
}

uint64_t DescribeMfaCodeStatusRequest::GetOwnerUin() const
{
    return m_ownerUin;
}

void DescribeMfaCodeStatusRequest::SetOwnerUin(const uint64_t& _ownerUin)
{
    m_ownerUin = _ownerUin;
    m_ownerUinHasBeenSet = true;
}

bool DescribeMfaCodeStatusRequest::OwnerUinHasBeenSet() const
{
    return m_ownerUinHasBeenSet;
}


