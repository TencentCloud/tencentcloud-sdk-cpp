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

#include <tencentcloud/cynosdb/v20190107/model/OpenClusterTransparentEncryptRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cynosdb::V20190107::Model;
using namespace std;

OpenClusterTransparentEncryptRequest::OpenClusterTransparentEncryptRequest() :
    m_clusterIdHasBeenSet(false),
    m_keyTypeHasBeenSet(false),
    m_keyIdHasBeenSet(false),
    m_keyRegionHasBeenSet(false)
{
}

string OpenClusterTransparentEncryptRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_clusterIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_clusterId.c_str(), allocator).Move(), allocator);
    }

    if (m_keyTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KeyType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_keyType.c_str(), allocator).Move(), allocator);
    }

    if (m_keyIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KeyId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_keyId.c_str(), allocator).Move(), allocator);
    }

    if (m_keyRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KeyRegion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_keyRegion.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string OpenClusterTransparentEncryptRequest::GetClusterId() const
{
    return m_clusterId;
}

void OpenClusterTransparentEncryptRequest::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool OpenClusterTransparentEncryptRequest::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

string OpenClusterTransparentEncryptRequest::GetKeyType() const
{
    return m_keyType;
}

void OpenClusterTransparentEncryptRequest::SetKeyType(const string& _keyType)
{
    m_keyType = _keyType;
    m_keyTypeHasBeenSet = true;
}

bool OpenClusterTransparentEncryptRequest::KeyTypeHasBeenSet() const
{
    return m_keyTypeHasBeenSet;
}

string OpenClusterTransparentEncryptRequest::GetKeyId() const
{
    return m_keyId;
}

void OpenClusterTransparentEncryptRequest::SetKeyId(const string& _keyId)
{
    m_keyId = _keyId;
    m_keyIdHasBeenSet = true;
}

bool OpenClusterTransparentEncryptRequest::KeyIdHasBeenSet() const
{
    return m_keyIdHasBeenSet;
}

string OpenClusterTransparentEncryptRequest::GetKeyRegion() const
{
    return m_keyRegion;
}

void OpenClusterTransparentEncryptRequest::SetKeyRegion(const string& _keyRegion)
{
    m_keyRegion = _keyRegion;
    m_keyRegionHasBeenSet = true;
}

bool OpenClusterTransparentEncryptRequest::KeyRegionHasBeenSet() const
{
    return m_keyRegionHasBeenSet;
}


