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

#include <tencentcloud/bh/v20230418/model/BindDeviceAccountPrivateKeyRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Bh::V20230418::Model;
using namespace std;

BindDeviceAccountPrivateKeyRequest::BindDeviceAccountPrivateKeyRequest() :
    m_idHasBeenSet(false),
    m_privateKeyHasBeenSet(false),
    m_privateKeyPasswordHasBeenSet(false)
{
}

string BindDeviceAccountPrivateKeyRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_id, allocator);
    }

    if (m_privateKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PrivateKey";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_privateKey.c_str(), allocator).Move(), allocator);
    }

    if (m_privateKeyPasswordHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PrivateKeyPassword";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_privateKeyPassword.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t BindDeviceAccountPrivateKeyRequest::GetId() const
{
    return m_id;
}

void BindDeviceAccountPrivateKeyRequest::SetId(const uint64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool BindDeviceAccountPrivateKeyRequest::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string BindDeviceAccountPrivateKeyRequest::GetPrivateKey() const
{
    return m_privateKey;
}

void BindDeviceAccountPrivateKeyRequest::SetPrivateKey(const string& _privateKey)
{
    m_privateKey = _privateKey;
    m_privateKeyHasBeenSet = true;
}

bool BindDeviceAccountPrivateKeyRequest::PrivateKeyHasBeenSet() const
{
    return m_privateKeyHasBeenSet;
}

string BindDeviceAccountPrivateKeyRequest::GetPrivateKeyPassword() const
{
    return m_privateKeyPassword;
}

void BindDeviceAccountPrivateKeyRequest::SetPrivateKeyPassword(const string& _privateKeyPassword)
{
    m_privateKeyPassword = _privateKeyPassword;
    m_privateKeyPasswordHasBeenSet = true;
}

bool BindDeviceAccountPrivateKeyRequest::PrivateKeyPasswordHasBeenSet() const
{
    return m_privateKeyPasswordHasBeenSet;
}


