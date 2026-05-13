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

#include <tencentcloud/csip/v20221121/model/VerifyDspmAssetLoginCodeRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

VerifyDspmAssetLoginCodeRequest::VerifyDspmAssetLoginCodeRequest() :
    m_personIdHasBeenSet(false),
    m_assetIdHasBeenSet(false),
    m_codeHasBeenSet(false),
    m_hostHasBeenSet(false)
{
}

string VerifyDspmAssetLoginCodeRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_personIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PersonId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_personId.c_str(), allocator).Move(), allocator);
    }

    if (m_assetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssetId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_assetId.c_str(), allocator).Move(), allocator);
    }

    if (m_codeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Code";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_code.c_str(), allocator).Move(), allocator);
    }

    if (m_hostHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Host";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_host.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string VerifyDspmAssetLoginCodeRequest::GetPersonId() const
{
    return m_personId;
}

void VerifyDspmAssetLoginCodeRequest::SetPersonId(const string& _personId)
{
    m_personId = _personId;
    m_personIdHasBeenSet = true;
}

bool VerifyDspmAssetLoginCodeRequest::PersonIdHasBeenSet() const
{
    return m_personIdHasBeenSet;
}

string VerifyDspmAssetLoginCodeRequest::GetAssetId() const
{
    return m_assetId;
}

void VerifyDspmAssetLoginCodeRequest::SetAssetId(const string& _assetId)
{
    m_assetId = _assetId;
    m_assetIdHasBeenSet = true;
}

bool VerifyDspmAssetLoginCodeRequest::AssetIdHasBeenSet() const
{
    return m_assetIdHasBeenSet;
}

string VerifyDspmAssetLoginCodeRequest::GetCode() const
{
    return m_code;
}

void VerifyDspmAssetLoginCodeRequest::SetCode(const string& _code)
{
    m_code = _code;
    m_codeHasBeenSet = true;
}

bool VerifyDspmAssetLoginCodeRequest::CodeHasBeenSet() const
{
    return m_codeHasBeenSet;
}

string VerifyDspmAssetLoginCodeRequest::GetHost() const
{
    return m_host;
}

void VerifyDspmAssetLoginCodeRequest::SetHost(const string& _host)
{
    m_host = _host;
    m_hostHasBeenSet = true;
}

bool VerifyDspmAssetLoginCodeRequest::HostHasBeenSet() const
{
    return m_hostHasBeenSet;
}


