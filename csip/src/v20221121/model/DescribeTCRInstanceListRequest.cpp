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

#include <tencentcloud/csip/v20221121/model/DescribeTCRInstanceListRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

DescribeTCRInstanceListRequest::DescribeTCRInstanceListRequest() :
    m_accessKeyHasBeenSet(false),
    m_secretKeyHasBeenSet(false),
    m_memberIdHasBeenSet(false),
    m_registryRegionHasBeenSet(false),
    m_registryIdHasBeenSet(false),
    m_filterHasBeenSet(false)
{
}

string DescribeTCRInstanceListRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_accessKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccessKey";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_accessKey.c_str(), allocator).Move(), allocator);
    }

    if (m_secretKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SecretKey";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_secretKey.c_str(), allocator).Move(), allocator);
    }

    if (m_memberIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MemberId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_memberId.begin(); itr != m_memberId.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_registryRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegistryRegion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_registryRegion.begin(); itr != m_registryRegion.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_registryIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegistryId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_registryId.c_str(), allocator).Move(), allocator);
    }

    if (m_filterHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Filter";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_filter.ToJsonObject(d[key.c_str()], allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeTCRInstanceListRequest::GetAccessKey() const
{
    return m_accessKey;
}

void DescribeTCRInstanceListRequest::SetAccessKey(const string& _accessKey)
{
    m_accessKey = _accessKey;
    m_accessKeyHasBeenSet = true;
}

bool DescribeTCRInstanceListRequest::AccessKeyHasBeenSet() const
{
    return m_accessKeyHasBeenSet;
}

string DescribeTCRInstanceListRequest::GetSecretKey() const
{
    return m_secretKey;
}

void DescribeTCRInstanceListRequest::SetSecretKey(const string& _secretKey)
{
    m_secretKey = _secretKey;
    m_secretKeyHasBeenSet = true;
}

bool DescribeTCRInstanceListRequest::SecretKeyHasBeenSet() const
{
    return m_secretKeyHasBeenSet;
}

vector<string> DescribeTCRInstanceListRequest::GetMemberId() const
{
    return m_memberId;
}

void DescribeTCRInstanceListRequest::SetMemberId(const vector<string>& _memberId)
{
    m_memberId = _memberId;
    m_memberIdHasBeenSet = true;
}

bool DescribeTCRInstanceListRequest::MemberIdHasBeenSet() const
{
    return m_memberIdHasBeenSet;
}

vector<string> DescribeTCRInstanceListRequest::GetRegistryRegion() const
{
    return m_registryRegion;
}

void DescribeTCRInstanceListRequest::SetRegistryRegion(const vector<string>& _registryRegion)
{
    m_registryRegion = _registryRegion;
    m_registryRegionHasBeenSet = true;
}

bool DescribeTCRInstanceListRequest::RegistryRegionHasBeenSet() const
{
    return m_registryRegionHasBeenSet;
}

string DescribeTCRInstanceListRequest::GetRegistryId() const
{
    return m_registryId;
}

void DescribeTCRInstanceListRequest::SetRegistryId(const string& _registryId)
{
    m_registryId = _registryId;
    m_registryIdHasBeenSet = true;
}

bool DescribeTCRInstanceListRequest::RegistryIdHasBeenSet() const
{
    return m_registryIdHasBeenSet;
}

Filter DescribeTCRInstanceListRequest::GetFilter() const
{
    return m_filter;
}

void DescribeTCRInstanceListRequest::SetFilter(const Filter& _filter)
{
    m_filter = _filter;
    m_filterHasBeenSet = true;
}

bool DescribeTCRInstanceListRequest::FilterHasBeenSet() const
{
    return m_filterHasBeenSet;
}


