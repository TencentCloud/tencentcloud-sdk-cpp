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

#include <tencentcloud/cngw/v20230418/model/UnbindCloudNativeAPIGatewaySecretKeyRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cngw::V20230418::Model;
using namespace std;

UnbindCloudNativeAPIGatewaySecretKeyRequest::UnbindCloudNativeAPIGatewaySecretKeyRequest() :
    m_gatewayIdHasBeenSet(false),
    m_resourceTypeHasBeenSet(false),
    m_resourceIdsHasBeenSet(false),
    m_secretKeyIdHasBeenSet(false)
{
}

string UnbindCloudNativeAPIGatewaySecretKeyRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_gatewayIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GatewayId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_gatewayId.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_resourceType.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_resourceIds.begin(); itr != m_resourceIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_secretKeyIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SecretKeyId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_secretKeyId.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string UnbindCloudNativeAPIGatewaySecretKeyRequest::GetGatewayId() const
{
    return m_gatewayId;
}

void UnbindCloudNativeAPIGatewaySecretKeyRequest::SetGatewayId(const string& _gatewayId)
{
    m_gatewayId = _gatewayId;
    m_gatewayIdHasBeenSet = true;
}

bool UnbindCloudNativeAPIGatewaySecretKeyRequest::GatewayIdHasBeenSet() const
{
    return m_gatewayIdHasBeenSet;
}

string UnbindCloudNativeAPIGatewaySecretKeyRequest::GetResourceType() const
{
    return m_resourceType;
}

void UnbindCloudNativeAPIGatewaySecretKeyRequest::SetResourceType(const string& _resourceType)
{
    m_resourceType = _resourceType;
    m_resourceTypeHasBeenSet = true;
}

bool UnbindCloudNativeAPIGatewaySecretKeyRequest::ResourceTypeHasBeenSet() const
{
    return m_resourceTypeHasBeenSet;
}

vector<string> UnbindCloudNativeAPIGatewaySecretKeyRequest::GetResourceIds() const
{
    return m_resourceIds;
}

void UnbindCloudNativeAPIGatewaySecretKeyRequest::SetResourceIds(const vector<string>& _resourceIds)
{
    m_resourceIds = _resourceIds;
    m_resourceIdsHasBeenSet = true;
}

bool UnbindCloudNativeAPIGatewaySecretKeyRequest::ResourceIdsHasBeenSet() const
{
    return m_resourceIdsHasBeenSet;
}

string UnbindCloudNativeAPIGatewaySecretKeyRequest::GetSecretKeyId() const
{
    return m_secretKeyId;
}

void UnbindCloudNativeAPIGatewaySecretKeyRequest::SetSecretKeyId(const string& _secretKeyId)
{
    m_secretKeyId = _secretKeyId;
    m_secretKeyIdHasBeenSet = true;
}

bool UnbindCloudNativeAPIGatewaySecretKeyRequest::SecretKeyIdHasBeenSet() const
{
    return m_secretKeyIdHasBeenSet;
}


