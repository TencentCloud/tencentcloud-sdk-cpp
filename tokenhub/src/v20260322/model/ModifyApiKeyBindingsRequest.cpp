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

#include <tencentcloud/tokenhub/v20260322/model/ModifyApiKeyBindingsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tokenhub::V20260322::Model;
using namespace std;

ModifyApiKeyBindingsRequest::ModifyApiKeyBindingsRequest() :
    m_apiKeyIdHasBeenSet(false),
    m_platformHasBeenSet(false),
    m_bindTypeHasBeenSet(false),
    m_bindingsHasBeenSet(false)
{
}

string ModifyApiKeyBindingsRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_apiKeyIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApiKeyId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_apiKeyId.c_str(), allocator).Move(), allocator);
    }

    if (m_platformHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Platform";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_platform.c_str(), allocator).Move(), allocator);
    }

    if (m_bindTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BindType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_bindType.c_str(), allocator).Move(), allocator);
    }

    if (m_bindingsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Bindings";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_bindings.begin(); itr != m_bindings.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyApiKeyBindingsRequest::GetApiKeyId() const
{
    return m_apiKeyId;
}

void ModifyApiKeyBindingsRequest::SetApiKeyId(const string& _apiKeyId)
{
    m_apiKeyId = _apiKeyId;
    m_apiKeyIdHasBeenSet = true;
}

bool ModifyApiKeyBindingsRequest::ApiKeyIdHasBeenSet() const
{
    return m_apiKeyIdHasBeenSet;
}

string ModifyApiKeyBindingsRequest::GetPlatform() const
{
    return m_platform;
}

void ModifyApiKeyBindingsRequest::SetPlatform(const string& _platform)
{
    m_platform = _platform;
    m_platformHasBeenSet = true;
}

bool ModifyApiKeyBindingsRequest::PlatformHasBeenSet() const
{
    return m_platformHasBeenSet;
}

string ModifyApiKeyBindingsRequest::GetBindType() const
{
    return m_bindType;
}

void ModifyApiKeyBindingsRequest::SetBindType(const string& _bindType)
{
    m_bindType = _bindType;
    m_bindTypeHasBeenSet = true;
}

bool ModifyApiKeyBindingsRequest::BindTypeHasBeenSet() const
{
    return m_bindTypeHasBeenSet;
}

vector<BindingItem> ModifyApiKeyBindingsRequest::GetBindings() const
{
    return m_bindings;
}

void ModifyApiKeyBindingsRequest::SetBindings(const vector<BindingItem>& _bindings)
{
    m_bindings = _bindings;
    m_bindingsHasBeenSet = true;
}

bool ModifyApiKeyBindingsRequest::BindingsHasBeenSet() const
{
    return m_bindingsHasBeenSet;
}


