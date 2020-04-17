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

#include <tencentcloud/cam/v20190116/model/DetectAuthRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cam::V20190116::Model;
using namespace rapidjson;
using namespace std;

DetectAuthRequest::DetectAuthRequest() :
    m_skeyHasBeenSet(false),
    m_clientIPHasBeenSet(false),
    m_clientUAHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_idcardHasBeenSet(false),
    m_useAuthInfoHasBeenSet(false),
    m_sceneHasBeenSet(false),
    m_ownerUinHasBeenSet(false)
{
}

string DetectAuthRequest::ToJsonString() const
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

    if (m_useAuthInfoHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "UseAuthInfo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_useAuthInfo, allocator);
    }

    if (m_sceneHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Scene";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_scene.c_str(), allocator).Move(), allocator);
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


string DetectAuthRequest::GetSkey() const
{
    return m_skey;
}

void DetectAuthRequest::SetSkey(const string& _skey)
{
    m_skey = _skey;
    m_skeyHasBeenSet = true;
}

bool DetectAuthRequest::SkeyHasBeenSet() const
{
    return m_skeyHasBeenSet;
}

string DetectAuthRequest::GetClientIP() const
{
    return m_clientIP;
}

void DetectAuthRequest::SetClientIP(const string& _clientIP)
{
    m_clientIP = _clientIP;
    m_clientIPHasBeenSet = true;
}

bool DetectAuthRequest::ClientIPHasBeenSet() const
{
    return m_clientIPHasBeenSet;
}

string DetectAuthRequest::GetClientUA() const
{
    return m_clientUA;
}

void DetectAuthRequest::SetClientUA(const string& _clientUA)
{
    m_clientUA = _clientUA;
    m_clientUAHasBeenSet = true;
}

bool DetectAuthRequest::ClientUAHasBeenSet() const
{
    return m_clientUAHasBeenSet;
}

string DetectAuthRequest::GetType() const
{
    return m_type;
}

void DetectAuthRequest::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool DetectAuthRequest::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string DetectAuthRequest::GetName() const
{
    return m_name;
}

void DetectAuthRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool DetectAuthRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string DetectAuthRequest::GetIdcard() const
{
    return m_idcard;
}

void DetectAuthRequest::SetIdcard(const string& _idcard)
{
    m_idcard = _idcard;
    m_idcardHasBeenSet = true;
}

bool DetectAuthRequest::IdcardHasBeenSet() const
{
    return m_idcardHasBeenSet;
}

uint64_t DetectAuthRequest::GetUseAuthInfo() const
{
    return m_useAuthInfo;
}

void DetectAuthRequest::SetUseAuthInfo(const uint64_t& _useAuthInfo)
{
    m_useAuthInfo = _useAuthInfo;
    m_useAuthInfoHasBeenSet = true;
}

bool DetectAuthRequest::UseAuthInfoHasBeenSet() const
{
    return m_useAuthInfoHasBeenSet;
}

string DetectAuthRequest::GetScene() const
{
    return m_scene;
}

void DetectAuthRequest::SetScene(const string& _scene)
{
    m_scene = _scene;
    m_sceneHasBeenSet = true;
}

bool DetectAuthRequest::SceneHasBeenSet() const
{
    return m_sceneHasBeenSet;
}

uint64_t DetectAuthRequest::GetOwnerUin() const
{
    return m_ownerUin;
}

void DetectAuthRequest::SetOwnerUin(const uint64_t& _ownerUin)
{
    m_ownerUin = _ownerUin;
    m_ownerUinHasBeenSet = true;
}

bool DetectAuthRequest::OwnerUinHasBeenSet() const
{
    return m_ownerUinHasBeenSet;
}


