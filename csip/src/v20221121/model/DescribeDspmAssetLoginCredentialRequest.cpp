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

#include <tencentcloud/csip/v20221121/model/DescribeDspmAssetLoginCredentialRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

DescribeDspmAssetLoginCredentialRequest::DescribeDspmAssetLoginCredentialRequest() :
    m_assetIdHasBeenSet(false),
    m_hostHasBeenSet(false),
    m_encryptMethodHasBeenSet(false)
{
}

string DescribeDspmAssetLoginCredentialRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_assetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssetId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_assetId.c_str(), allocator).Move(), allocator);
    }

    if (m_hostHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Host";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_host.c_str(), allocator).Move(), allocator);
    }

    if (m_encryptMethodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EncryptMethod";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_encryptMethod.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeDspmAssetLoginCredentialRequest::GetAssetId() const
{
    return m_assetId;
}

void DescribeDspmAssetLoginCredentialRequest::SetAssetId(const string& _assetId)
{
    m_assetId = _assetId;
    m_assetIdHasBeenSet = true;
}

bool DescribeDspmAssetLoginCredentialRequest::AssetIdHasBeenSet() const
{
    return m_assetIdHasBeenSet;
}

string DescribeDspmAssetLoginCredentialRequest::GetHost() const
{
    return m_host;
}

void DescribeDspmAssetLoginCredentialRequest::SetHost(const string& _host)
{
    m_host = _host;
    m_hostHasBeenSet = true;
}

bool DescribeDspmAssetLoginCredentialRequest::HostHasBeenSet() const
{
    return m_hostHasBeenSet;
}

string DescribeDspmAssetLoginCredentialRequest::GetEncryptMethod() const
{
    return m_encryptMethod;
}

void DescribeDspmAssetLoginCredentialRequest::SetEncryptMethod(const string& _encryptMethod)
{
    m_encryptMethod = _encryptMethod;
    m_encryptMethodHasBeenSet = true;
}

bool DescribeDspmAssetLoginCredentialRequest::EncryptMethodHasBeenSet() const
{
    return m_encryptMethodHasBeenSet;
}


