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

#include <tencentcloud/clb/v20180317/model/ModifyKeyAttributesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Clb::V20180317::Model;
using namespace std;

ModifyKeyAttributesRequest::ModifyKeyAttributesRequest() :
    m_modelRouterIdHasBeenSet(false),
    m_keyIdHasBeenSet(false),
    m_keyNameHasBeenSet(false),
    m_rateLimitConfigHasBeenSet(false)
{
}

string ModifyKeyAttributesRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_modelRouterIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModelRouterId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_modelRouterId.c_str(), allocator).Move(), allocator);
    }

    if (m_keyIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KeyId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_keyId.c_str(), allocator).Move(), allocator);
    }

    if (m_keyNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KeyName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_keyName.c_str(), allocator).Move(), allocator);
    }

    if (m_rateLimitConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RateLimitConfig";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_rateLimitConfig.ToJsonObject(d[key.c_str()], allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyKeyAttributesRequest::GetModelRouterId() const
{
    return m_modelRouterId;
}

void ModifyKeyAttributesRequest::SetModelRouterId(const string& _modelRouterId)
{
    m_modelRouterId = _modelRouterId;
    m_modelRouterIdHasBeenSet = true;
}

bool ModifyKeyAttributesRequest::ModelRouterIdHasBeenSet() const
{
    return m_modelRouterIdHasBeenSet;
}

string ModifyKeyAttributesRequest::GetKeyId() const
{
    return m_keyId;
}

void ModifyKeyAttributesRequest::SetKeyId(const string& _keyId)
{
    m_keyId = _keyId;
    m_keyIdHasBeenSet = true;
}

bool ModifyKeyAttributesRequest::KeyIdHasBeenSet() const
{
    return m_keyIdHasBeenSet;
}

string ModifyKeyAttributesRequest::GetKeyName() const
{
    return m_keyName;
}

void ModifyKeyAttributesRequest::SetKeyName(const string& _keyName)
{
    m_keyName = _keyName;
    m_keyNameHasBeenSet = true;
}

bool ModifyKeyAttributesRequest::KeyNameHasBeenSet() const
{
    return m_keyNameHasBeenSet;
}

RateLimitConfigForKey ModifyKeyAttributesRequest::GetRateLimitConfig() const
{
    return m_rateLimitConfig;
}

void ModifyKeyAttributesRequest::SetRateLimitConfig(const RateLimitConfigForKey& _rateLimitConfig)
{
    m_rateLimitConfig = _rateLimitConfig;
    m_rateLimitConfigHasBeenSet = true;
}

bool ModifyKeyAttributesRequest::RateLimitConfigHasBeenSet() const
{
    return m_rateLimitConfigHasBeenSet;
}


