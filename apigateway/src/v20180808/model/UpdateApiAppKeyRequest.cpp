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

#include <tencentcloud/apigateway/v20180808/model/UpdateApiAppKeyRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Apigateway::V20180808::Model;
using namespace std;

UpdateApiAppKeyRequest::UpdateApiAppKeyRequest() :
    m_apiAppIdHasBeenSet(false),
    m_apiAppKeyHasBeenSet(false),
    m_apiAppSecretHasBeenSet(false)
{
}

string UpdateApiAppKeyRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_apiAppIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApiAppId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_apiAppId.c_str(), allocator).Move(), allocator);
    }

    if (m_apiAppKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApiAppKey";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_apiAppKey.c_str(), allocator).Move(), allocator);
    }

    if (m_apiAppSecretHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApiAppSecret";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_apiAppSecret.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string UpdateApiAppKeyRequest::GetApiAppId() const
{
    return m_apiAppId;
}

void UpdateApiAppKeyRequest::SetApiAppId(const string& _apiAppId)
{
    m_apiAppId = _apiAppId;
    m_apiAppIdHasBeenSet = true;
}

bool UpdateApiAppKeyRequest::ApiAppIdHasBeenSet() const
{
    return m_apiAppIdHasBeenSet;
}

string UpdateApiAppKeyRequest::GetApiAppKey() const
{
    return m_apiAppKey;
}

void UpdateApiAppKeyRequest::SetApiAppKey(const string& _apiAppKey)
{
    m_apiAppKey = _apiAppKey;
    m_apiAppKeyHasBeenSet = true;
}

bool UpdateApiAppKeyRequest::ApiAppKeyHasBeenSet() const
{
    return m_apiAppKeyHasBeenSet;
}

string UpdateApiAppKeyRequest::GetApiAppSecret() const
{
    return m_apiAppSecret;
}

void UpdateApiAppKeyRequest::SetApiAppSecret(const string& _apiAppSecret)
{
    m_apiAppSecret = _apiAppSecret;
    m_apiAppSecretHasBeenSet = true;
}

bool UpdateApiAppKeyRequest::ApiAppSecretHasBeenSet() const
{
    return m_apiAppSecretHasBeenSet;
}


