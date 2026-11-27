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

#include <tencentcloud/antiddos/v20250903/model/ModifyProtectionResourceRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Antiddos::V20250903::Model;
using namespace std;

ModifyProtectionResourceRequest::ModifyProtectionResourceRequest() :
    m_protectionIdHasBeenSet(false),
    m_modeHasBeenSet(false),
    m_resourcesHasBeenSet(false),
    m_conflictStrategyHasBeenSet(false)
{
}

string ModifyProtectionResourceRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_protectionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProtectionId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_protectionId.c_str(), allocator).Move(), allocator);
    }

    if (m_modeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Mode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_mode.c_str(), allocator).Move(), allocator);
    }

    if (m_resourcesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Resources";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_resources.begin(); itr != m_resources.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_conflictStrategyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConflictStrategy";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_conflictStrategy.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyProtectionResourceRequest::GetProtectionId() const
{
    return m_protectionId;
}

void ModifyProtectionResourceRequest::SetProtectionId(const string& _protectionId)
{
    m_protectionId = _protectionId;
    m_protectionIdHasBeenSet = true;
}

bool ModifyProtectionResourceRequest::ProtectionIdHasBeenSet() const
{
    return m_protectionIdHasBeenSet;
}

string ModifyProtectionResourceRequest::GetMode() const
{
    return m_mode;
}

void ModifyProtectionResourceRequest::SetMode(const string& _mode)
{
    m_mode = _mode;
    m_modeHasBeenSet = true;
}

bool ModifyProtectionResourceRequest::ModeHasBeenSet() const
{
    return m_modeHasBeenSet;
}

vector<string> ModifyProtectionResourceRequest::GetResources() const
{
    return m_resources;
}

void ModifyProtectionResourceRequest::SetResources(const vector<string>& _resources)
{
    m_resources = _resources;
    m_resourcesHasBeenSet = true;
}

bool ModifyProtectionResourceRequest::ResourcesHasBeenSet() const
{
    return m_resourcesHasBeenSet;
}

string ModifyProtectionResourceRequest::GetConflictStrategy() const
{
    return m_conflictStrategy;
}

void ModifyProtectionResourceRequest::SetConflictStrategy(const string& _conflictStrategy)
{
    m_conflictStrategy = _conflictStrategy;
    m_conflictStrategyHasBeenSet = true;
}

bool ModifyProtectionResourceRequest::ConflictStrategyHasBeenSet() const
{
    return m_conflictStrategyHasBeenSet;
}


