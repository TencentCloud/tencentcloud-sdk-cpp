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

#include <tencentcloud/live/v20180801/model/ModifyLivePlayAuthKeyRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Live::V20180801::Model;
using namespace std;

ModifyLivePlayAuthKeyRequest::ModifyLivePlayAuthKeyRequest() :
    m_domainNameHasBeenSet(false),
    m_enableHasBeenSet(false),
    m_authKeyHasBeenSet(false),
    m_authDeltaHasBeenSet(false),
    m_authBackKeyHasBeenSet(false)
{
}

string ModifyLivePlayAuthKeyRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_domainNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DomainName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_domainName.c_str(), allocator).Move(), allocator);
    }

    if (m_enableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Enable";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_enable, allocator);
    }

    if (m_authKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuthKey";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_authKey.c_str(), allocator).Move(), allocator);
    }

    if (m_authDeltaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuthDelta";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_authDelta, allocator);
    }

    if (m_authBackKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuthBackKey";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_authBackKey.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyLivePlayAuthKeyRequest::GetDomainName() const
{
    return m_domainName;
}

void ModifyLivePlayAuthKeyRequest::SetDomainName(const string& _domainName)
{
    m_domainName = _domainName;
    m_domainNameHasBeenSet = true;
}

bool ModifyLivePlayAuthKeyRequest::DomainNameHasBeenSet() const
{
    return m_domainNameHasBeenSet;
}

int64_t ModifyLivePlayAuthKeyRequest::GetEnable() const
{
    return m_enable;
}

void ModifyLivePlayAuthKeyRequest::SetEnable(const int64_t& _enable)
{
    m_enable = _enable;
    m_enableHasBeenSet = true;
}

bool ModifyLivePlayAuthKeyRequest::EnableHasBeenSet() const
{
    return m_enableHasBeenSet;
}

string ModifyLivePlayAuthKeyRequest::GetAuthKey() const
{
    return m_authKey;
}

void ModifyLivePlayAuthKeyRequest::SetAuthKey(const string& _authKey)
{
    m_authKey = _authKey;
    m_authKeyHasBeenSet = true;
}

bool ModifyLivePlayAuthKeyRequest::AuthKeyHasBeenSet() const
{
    return m_authKeyHasBeenSet;
}

uint64_t ModifyLivePlayAuthKeyRequest::GetAuthDelta() const
{
    return m_authDelta;
}

void ModifyLivePlayAuthKeyRequest::SetAuthDelta(const uint64_t& _authDelta)
{
    m_authDelta = _authDelta;
    m_authDeltaHasBeenSet = true;
}

bool ModifyLivePlayAuthKeyRequest::AuthDeltaHasBeenSet() const
{
    return m_authDeltaHasBeenSet;
}

string ModifyLivePlayAuthKeyRequest::GetAuthBackKey() const
{
    return m_authBackKey;
}

void ModifyLivePlayAuthKeyRequest::SetAuthBackKey(const string& _authBackKey)
{
    m_authBackKey = _authBackKey;
    m_authBackKeyHasBeenSet = true;
}

bool ModifyLivePlayAuthKeyRequest::AuthBackKeyHasBeenSet() const
{
    return m_authBackKeyHasBeenSet;
}


