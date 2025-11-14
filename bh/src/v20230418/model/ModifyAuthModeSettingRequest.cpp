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

#include <tencentcloud/bh/v20230418/model/ModifyAuthModeSettingRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Bh::V20230418::Model;
using namespace std;

ModifyAuthModeSettingRequest::ModifyAuthModeSettingRequest() :
    m_authModeHasBeenSet(false),
    m_resourceTypeHasBeenSet(false)
{
}

string ModifyAuthModeSettingRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_authModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuthMode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_authMode, allocator);
    }

    if (m_resourceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_resourceType, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t ModifyAuthModeSettingRequest::GetAuthMode() const
{
    return m_authMode;
}

void ModifyAuthModeSettingRequest::SetAuthMode(const uint64_t& _authMode)
{
    m_authMode = _authMode;
    m_authModeHasBeenSet = true;
}

bool ModifyAuthModeSettingRequest::AuthModeHasBeenSet() const
{
    return m_authModeHasBeenSet;
}

int64_t ModifyAuthModeSettingRequest::GetResourceType() const
{
    return m_resourceType;
}

void ModifyAuthModeSettingRequest::SetResourceType(const int64_t& _resourceType)
{
    m_resourceType = _resourceType;
    m_resourceTypeHasBeenSet = true;
}

bool ModifyAuthModeSettingRequest::ResourceTypeHasBeenSet() const
{
    return m_resourceTypeHasBeenSet;
}


