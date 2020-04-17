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

#include <tencentcloud/cam/v20190116/model/DetectMaskAuthRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cam::V20190116::Model;
using namespace rapidjson;
using namespace std;

DetectMaskAuthRequest::DetectMaskAuthRequest() :
    m_skeyHasBeenSet(false),
    m_clientIPHasBeenSet(false),
    m_clientUAHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_idcardHasBeenSet(false),
    m_ownerUinHasBeenSet(false)
{
}

string DetectMaskAuthRequest::ToJsonString() const
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

    if (m_typeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_idcardHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Idcard";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_idcard.c_str(), allocator).Move(), allocator);
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


string DetectMaskAuthRequest::GetSkey() const
{
    return m_skey;
}

void DetectMaskAuthRequest::SetSkey(const string& _skey)
{
    m_skey = _skey;
    m_skeyHasBeenSet = true;
}

bool DetectMaskAuthRequest::SkeyHasBeenSet() const
{
    return m_skeyHasBeenSet;
}

string DetectMaskAuthRequest::GetClientIP() const
{
    return m_clientIP;
}

void DetectMaskAuthRequest::SetClientIP(const string& _clientIP)
{
    m_clientIP = _clientIP;
    m_clientIPHasBeenSet = true;
}

bool DetectMaskAuthRequest::ClientIPHasBeenSet() const
{
    return m_clientIPHasBeenSet;
}

string DetectMaskAuthRequest::GetClientUA() const
{
    return m_clientUA;
}

void DetectMaskAuthRequest::SetClientUA(const string& _clientUA)
{
    m_clientUA = _clientUA;
    m_clientUAHasBeenSet = true;
}

bool DetectMaskAuthRequest::ClientUAHasBeenSet() const
{
    return m_clientUAHasBeenSet;
}

string DetectMaskAuthRequest::GetType() const
{
    return m_type;
}

void DetectMaskAuthRequest::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool DetectMaskAuthRequest::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string DetectMaskAuthRequest::GetName() const
{
    return m_name;
}

void DetectMaskAuthRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool DetectMaskAuthRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string DetectMaskAuthRequest::GetIdcard() const
{
    return m_idcard;
}

void DetectMaskAuthRequest::SetIdcard(const string& _idcard)
{
    m_idcard = _idcard;
    m_idcardHasBeenSet = true;
}

bool DetectMaskAuthRequest::IdcardHasBeenSet() const
{
    return m_idcardHasBeenSet;
}

uint64_t DetectMaskAuthRequest::GetOwnerUin() const
{
    return m_ownerUin;
}

void DetectMaskAuthRequest::SetOwnerUin(const uint64_t& _ownerUin)
{
    m_ownerUin = _ownerUin;
    m_ownerUinHasBeenSet = true;
}

bool DetectMaskAuthRequest::OwnerUinHasBeenSet() const
{
    return m_ownerUinHasBeenSet;
}


