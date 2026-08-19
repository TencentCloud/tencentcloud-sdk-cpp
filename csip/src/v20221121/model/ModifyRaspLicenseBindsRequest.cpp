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

#include <tencentcloud/csip/v20221121/model/ModifyRaspLicenseBindsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

ModifyRaspLicenseBindsRequest::ModifyRaspLicenseBindsRequest() :
    m_assetTypeHasBeenSet(false),
    m_resourceIDHasBeenSet(false),
    m_inquireKeyHasBeenSet(false),
    m_qUUIDHasBeenSet(false),
    m_isALLHasBeenSet(false),
    m_filtersHasBeenSet(false)
{
}

string ModifyRaspLicenseBindsRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_assetTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssetType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_assetType.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceID";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_resourceID.c_str(), allocator).Move(), allocator);
    }

    if (m_inquireKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InquireKey";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_inquireKey.c_str(), allocator).Move(), allocator);
    }

    if (m_qUUIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QUUID";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_qUUID.begin(); itr != m_qUUID.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_isALLHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsALL";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isALL, allocator);
    }

    if (m_filtersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Filters";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_filters.begin(); itr != m_filters.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyRaspLicenseBindsRequest::GetAssetType() const
{
    return m_assetType;
}

void ModifyRaspLicenseBindsRequest::SetAssetType(const string& _assetType)
{
    m_assetType = _assetType;
    m_assetTypeHasBeenSet = true;
}

bool ModifyRaspLicenseBindsRequest::AssetTypeHasBeenSet() const
{
    return m_assetTypeHasBeenSet;
}

string ModifyRaspLicenseBindsRequest::GetResourceID() const
{
    return m_resourceID;
}

void ModifyRaspLicenseBindsRequest::SetResourceID(const string& _resourceID)
{
    m_resourceID = _resourceID;
    m_resourceIDHasBeenSet = true;
}

bool ModifyRaspLicenseBindsRequest::ResourceIDHasBeenSet() const
{
    return m_resourceIDHasBeenSet;
}

string ModifyRaspLicenseBindsRequest::GetInquireKey() const
{
    return m_inquireKey;
}

void ModifyRaspLicenseBindsRequest::SetInquireKey(const string& _inquireKey)
{
    m_inquireKey = _inquireKey;
    m_inquireKeyHasBeenSet = true;
}

bool ModifyRaspLicenseBindsRequest::InquireKeyHasBeenSet() const
{
    return m_inquireKeyHasBeenSet;
}

vector<string> ModifyRaspLicenseBindsRequest::GetQUUID() const
{
    return m_qUUID;
}

void ModifyRaspLicenseBindsRequest::SetQUUID(const vector<string>& _qUUID)
{
    m_qUUID = _qUUID;
    m_qUUIDHasBeenSet = true;
}

bool ModifyRaspLicenseBindsRequest::QUUIDHasBeenSet() const
{
    return m_qUUIDHasBeenSet;
}

bool ModifyRaspLicenseBindsRequest::GetIsALL() const
{
    return m_isALL;
}

void ModifyRaspLicenseBindsRequest::SetIsALL(const bool& _isALL)
{
    m_isALL = _isALL;
    m_isALLHasBeenSet = true;
}

bool ModifyRaspLicenseBindsRequest::IsALLHasBeenSet() const
{
    return m_isALLHasBeenSet;
}

vector<Filters> ModifyRaspLicenseBindsRequest::GetFilters() const
{
    return m_filters;
}

void ModifyRaspLicenseBindsRequest::SetFilters(const vector<Filters>& _filters)
{
    m_filters = _filters;
    m_filtersHasBeenSet = true;
}

bool ModifyRaspLicenseBindsRequest::FiltersHasBeenSet() const
{
    return m_filtersHasBeenSet;
}


