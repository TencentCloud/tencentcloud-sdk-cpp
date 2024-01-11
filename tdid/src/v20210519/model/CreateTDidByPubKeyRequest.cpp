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

#include <tencentcloud/tdid/v20210519/model/CreateTDidByPubKeyRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tdid::V20210519::Model;
using namespace std;

CreateTDidByPubKeyRequest::CreateTDidByPubKeyRequest() :
    m_dAPIdHasBeenSet(false),
    m_publicKeyHasBeenSet(false),
    m_customAttributeHasBeenSet(false),
    m_ignoreExistedHasBeenSet(false)
{
}

string CreateTDidByPubKeyRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_dAPIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DAPId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_dAPId, allocator);
    }

    if (m_publicKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PublicKey";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_publicKey.c_str(), allocator).Move(), allocator);
    }

    if (m_customAttributeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CustomAttribute";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_customAttribute.c_str(), allocator).Move(), allocator);
    }

    if (m_ignoreExistedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IgnoreExisted";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_ignoreExisted, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t CreateTDidByPubKeyRequest::GetDAPId() const
{
    return m_dAPId;
}

void CreateTDidByPubKeyRequest::SetDAPId(const uint64_t& _dAPId)
{
    m_dAPId = _dAPId;
    m_dAPIdHasBeenSet = true;
}

bool CreateTDidByPubKeyRequest::DAPIdHasBeenSet() const
{
    return m_dAPIdHasBeenSet;
}

string CreateTDidByPubKeyRequest::GetPublicKey() const
{
    return m_publicKey;
}

void CreateTDidByPubKeyRequest::SetPublicKey(const string& _publicKey)
{
    m_publicKey = _publicKey;
    m_publicKeyHasBeenSet = true;
}

bool CreateTDidByPubKeyRequest::PublicKeyHasBeenSet() const
{
    return m_publicKeyHasBeenSet;
}

string CreateTDidByPubKeyRequest::GetCustomAttribute() const
{
    return m_customAttribute;
}

void CreateTDidByPubKeyRequest::SetCustomAttribute(const string& _customAttribute)
{
    m_customAttribute = _customAttribute;
    m_customAttributeHasBeenSet = true;
}

bool CreateTDidByPubKeyRequest::CustomAttributeHasBeenSet() const
{
    return m_customAttributeHasBeenSet;
}

uint64_t CreateTDidByPubKeyRequest::GetIgnoreExisted() const
{
    return m_ignoreExisted;
}

void CreateTDidByPubKeyRequest::SetIgnoreExisted(const uint64_t& _ignoreExisted)
{
    m_ignoreExisted = _ignoreExisted;
    m_ignoreExistedHasBeenSet = true;
}

bool CreateTDidByPubKeyRequest::IgnoreExistedHasBeenSet() const
{
    return m_ignoreExistedHasBeenSet;
}


