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

#include <tencentcloud/antiddos/v20250903/model/ResourceProtection.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Antiddos::V20250903::Model;
using namespace std;

ResourceProtection::ResourceProtection() :
    m_resourceHasBeenSet(false),
    m_protectionIdHasBeenSet(false)
{
}

CoreInternalOutcome ResourceProtection::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Resource") && !value["Resource"].IsNull())
    {
        if (!value["Resource"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceProtection.Resource` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resource = string(value["Resource"].GetString());
        m_resourceHasBeenSet = true;
    }

    if (value.HasMember("ProtectionId") && !value["ProtectionId"].IsNull())
    {
        if (!value["ProtectionId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceProtection.ProtectionId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_protectionId = string(value["ProtectionId"].GetString());
        m_protectionIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ResourceProtection::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_resourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Resource";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resource.c_str(), allocator).Move(), allocator);
    }

    if (m_protectionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProtectionId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_protectionId.c_str(), allocator).Move(), allocator);
    }

}


string ResourceProtection::GetResource() const
{
    return m_resource;
}

void ResourceProtection::SetResource(const string& _resource)
{
    m_resource = _resource;
    m_resourceHasBeenSet = true;
}

bool ResourceProtection::ResourceHasBeenSet() const
{
    return m_resourceHasBeenSet;
}

string ResourceProtection::GetProtectionId() const
{
    return m_protectionId;
}

void ResourceProtection::SetProtectionId(const string& _protectionId)
{
    m_protectionId = _protectionId;
    m_protectionIdHasBeenSet = true;
}

bool ResourceProtection::ProtectionIdHasBeenSet() const
{
    return m_protectionIdHasBeenSet;
}

