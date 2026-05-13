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

#include <tencentcloud/csip/v20221121/model/DescribeDspmAssetAccountPresetPrivilegesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

DescribeDspmAssetAccountPresetPrivilegesRequest::DescribeDspmAssetAccountPresetPrivilegesRequest() :
    m_assetIdHasBeenSet(false),
    m_accountHasBeenSet(false),
    m_hostHasBeenSet(false),
    m_filterHasBeenSet(false)
{
}

string DescribeDspmAssetAccountPresetPrivilegesRequest::ToJsonString() const
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

    if (m_accountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Account";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_account.c_str(), allocator).Move(), allocator);
    }

    if (m_hostHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Host";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_host.c_str(), allocator).Move(), allocator);
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


string DescribeDspmAssetAccountPresetPrivilegesRequest::GetAssetId() const
{
    return m_assetId;
}

void DescribeDspmAssetAccountPresetPrivilegesRequest::SetAssetId(const string& _assetId)
{
    m_assetId = _assetId;
    m_assetIdHasBeenSet = true;
}

bool DescribeDspmAssetAccountPresetPrivilegesRequest::AssetIdHasBeenSet() const
{
    return m_assetIdHasBeenSet;
}

string DescribeDspmAssetAccountPresetPrivilegesRequest::GetAccount() const
{
    return m_account;
}

void DescribeDspmAssetAccountPresetPrivilegesRequest::SetAccount(const string& _account)
{
    m_account = _account;
    m_accountHasBeenSet = true;
}

bool DescribeDspmAssetAccountPresetPrivilegesRequest::AccountHasBeenSet() const
{
    return m_accountHasBeenSet;
}

string DescribeDspmAssetAccountPresetPrivilegesRequest::GetHost() const
{
    return m_host;
}

void DescribeDspmAssetAccountPresetPrivilegesRequest::SetHost(const string& _host)
{
    m_host = _host;
    m_hostHasBeenSet = true;
}

bool DescribeDspmAssetAccountPresetPrivilegesRequest::HostHasBeenSet() const
{
    return m_hostHasBeenSet;
}

Filter DescribeDspmAssetAccountPresetPrivilegesRequest::GetFilter() const
{
    return m_filter;
}

void DescribeDspmAssetAccountPresetPrivilegesRequest::SetFilter(const Filter& _filter)
{
    m_filter = _filter;
    m_filterHasBeenSet = true;
}

bool DescribeDspmAssetAccountPresetPrivilegesRequest::FilterHasBeenSet() const
{
    return m_filterHasBeenSet;
}


