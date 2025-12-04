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

#include <tencentcloud/cynosdb/v20190107/model/ModifyClusterGlobalEncryptionRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cynosdb::V20190107::Model;
using namespace std;

ModifyClusterGlobalEncryptionRequest::ModifyClusterGlobalEncryptionRequest() :
    m_clusterIdHasBeenSet(false),
    m_isOpenGlobalEncryptionHasBeenSet(false)
{
}

string ModifyClusterGlobalEncryptionRequest::ToJsonString() const
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

    if (m_isOpenGlobalEncryptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsOpenGlobalEncryption";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isOpenGlobalEncryption, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyClusterGlobalEncryptionRequest::GetClusterId() const
{
    return m_clusterId;
}

void ModifyClusterGlobalEncryptionRequest::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool ModifyClusterGlobalEncryptionRequest::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

bool ModifyClusterGlobalEncryptionRequest::GetIsOpenGlobalEncryption() const
{
    return m_isOpenGlobalEncryption;
}

void ModifyClusterGlobalEncryptionRequest::SetIsOpenGlobalEncryption(const bool& _isOpenGlobalEncryption)
{
    m_isOpenGlobalEncryption = _isOpenGlobalEncryption;
    m_isOpenGlobalEncryptionHasBeenSet = true;
}

bool ModifyClusterGlobalEncryptionRequest::IsOpenGlobalEncryptionHasBeenSet() const
{
    return m_isOpenGlobalEncryptionHasBeenSet;
}


