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

#include <tencentcloud/tdid/v20210519/model/CreateTDidByPublicKeyRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tdid::V20210519::Model;
using namespace std;

CreateTDidByPublicKeyRequest::CreateTDidByPublicKeyRequest() :
    m_clusterIdHasBeenSet(false),
    m_groupIdHasBeenSet(false),
    m_publicKeyHasBeenSet(false),
    m_encryptPubKeyHasBeenSet(false)
{
}

string CreateTDidByPublicKeyRequest::ToJsonString() const
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

    if (m_groupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_groupId, allocator);
    }

    if (m_publicKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PublicKey";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_publicKey.c_str(), allocator).Move(), allocator);
    }

    if (m_encryptPubKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EncryptPubKey";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_encryptPubKey.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateTDidByPublicKeyRequest::GetClusterId() const
{
    return m_clusterId;
}

void CreateTDidByPublicKeyRequest::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool CreateTDidByPublicKeyRequest::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

uint64_t CreateTDidByPublicKeyRequest::GetGroupId() const
{
    return m_groupId;
}

void CreateTDidByPublicKeyRequest::SetGroupId(const uint64_t& _groupId)
{
    m_groupId = _groupId;
    m_groupIdHasBeenSet = true;
}

bool CreateTDidByPublicKeyRequest::GroupIdHasBeenSet() const
{
    return m_groupIdHasBeenSet;
}

string CreateTDidByPublicKeyRequest::GetPublicKey() const
{
    return m_publicKey;
}

void CreateTDidByPublicKeyRequest::SetPublicKey(const string& _publicKey)
{
    m_publicKey = _publicKey;
    m_publicKeyHasBeenSet = true;
}

bool CreateTDidByPublicKeyRequest::PublicKeyHasBeenSet() const
{
    return m_publicKeyHasBeenSet;
}

string CreateTDidByPublicKeyRequest::GetEncryptPubKey() const
{
    return m_encryptPubKey;
}

void CreateTDidByPublicKeyRequest::SetEncryptPubKey(const string& _encryptPubKey)
{
    m_encryptPubKey = _encryptPubKey;
    m_encryptPubKeyHasBeenSet = true;
}

bool CreateTDidByPublicKeyRequest::EncryptPubKeyHasBeenSet() const
{
    return m_encryptPubKeyHasBeenSet;
}


