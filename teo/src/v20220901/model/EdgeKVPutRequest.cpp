/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#include <tencentcloud/teo/v20220901/model/EdgeKVPutRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Teo::V20220901::Model;
using namespace std;

EdgeKVPutRequest::EdgeKVPutRequest() :
    m_zoneIdHasBeenSet(false),
    m_namespaceHasBeenSet(false),
    m_keyHasBeenSet(false),
    m_valueHasBeenSet(false),
    m_expirationHasBeenSet(false),
    m_expirationTTLHasBeenSet(false)
{
}

string EdgeKVPutRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_zoneIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ZoneId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_zoneId.c_str(), allocator).Move(), allocator);
    }

    if (m_namespaceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Namespace";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_namespace.c_str(), allocator).Move(), allocator);
    }

    if (m_keyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Key";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_key.c_str(), allocator).Move(), allocator);
    }

    if (m_valueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Value";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_value.c_str(), allocator).Move(), allocator);
    }

    if (m_expirationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Expiration";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_expiration, allocator);
    }

    if (m_expirationTTLHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpirationTTL";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_expirationTTL, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string EdgeKVPutRequest::GetZoneId() const
{
    return m_zoneId;
}

void EdgeKVPutRequest::SetZoneId(const string& _zoneId)
{
    m_zoneId = _zoneId;
    m_zoneIdHasBeenSet = true;
}

bool EdgeKVPutRequest::ZoneIdHasBeenSet() const
{
    return m_zoneIdHasBeenSet;
}

string EdgeKVPutRequest::GetNamespace() const
{
    return m_namespace;
}

void EdgeKVPutRequest::SetNamespace(const string& _namespace)
{
    m_namespace = _namespace;
    m_namespaceHasBeenSet = true;
}

bool EdgeKVPutRequest::NamespaceHasBeenSet() const
{
    return m_namespaceHasBeenSet;
}

string EdgeKVPutRequest::GetKey() const
{
    return m_key;
}

void EdgeKVPutRequest::SetKey(const string& _key)
{
    m_key = _key;
    m_keyHasBeenSet = true;
}

bool EdgeKVPutRequest::KeyHasBeenSet() const
{
    return m_keyHasBeenSet;
}

string EdgeKVPutRequest::GetValue() const
{
    return m_value;
}

void EdgeKVPutRequest::SetValue(const string& _value)
{
    m_value = _value;
    m_valueHasBeenSet = true;
}

bool EdgeKVPutRequest::ValueHasBeenSet() const
{
    return m_valueHasBeenSet;
}

int64_t EdgeKVPutRequest::GetExpiration() const
{
    return m_expiration;
}

void EdgeKVPutRequest::SetExpiration(const int64_t& _expiration)
{
    m_expiration = _expiration;
    m_expirationHasBeenSet = true;
}

bool EdgeKVPutRequest::ExpirationHasBeenSet() const
{
    return m_expirationHasBeenSet;
}

int64_t EdgeKVPutRequest::GetExpirationTTL() const
{
    return m_expirationTTL;
}

void EdgeKVPutRequest::SetExpirationTTL(const int64_t& _expirationTTL)
{
    m_expirationTTL = _expirationTTL;
    m_expirationTTLHasBeenSet = true;
}

bool EdgeKVPutRequest::ExpirationTTLHasBeenSet() const
{
    return m_expirationTTLHasBeenSet;
}


