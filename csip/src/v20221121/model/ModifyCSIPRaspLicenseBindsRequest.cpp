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

#include <tencentcloud/csip/v20221121/model/ModifyCSIPRaspLicenseBindsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

ModifyCSIPRaspLicenseBindsRequest::ModifyCSIPRaspLicenseBindsRequest() :
    m_resourceIdHasBeenSet(false),
    m_licenseTypeHasBeenSet(false),
    m_assetTypeHasBeenSet(false),
    m_instanceIDsHasBeenSet(false),
    m_isAllHasBeenSet(false)
{
}

string ModifyCSIPRaspLicenseBindsRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_resourceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_resourceId.c_str(), allocator).Move(), allocator);
    }

    if (m_licenseTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LicenseType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_licenseType.c_str(), allocator).Move(), allocator);
    }

    if (m_assetTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssetType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_assetType.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceIDsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceIDs";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_instanceIDs.begin(); itr != m_instanceIDs.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_isAllHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsAll";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isAll, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyCSIPRaspLicenseBindsRequest::GetResourceId() const
{
    return m_resourceId;
}

void ModifyCSIPRaspLicenseBindsRequest::SetResourceId(const string& _resourceId)
{
    m_resourceId = _resourceId;
    m_resourceIdHasBeenSet = true;
}

bool ModifyCSIPRaspLicenseBindsRequest::ResourceIdHasBeenSet() const
{
    return m_resourceIdHasBeenSet;
}

string ModifyCSIPRaspLicenseBindsRequest::GetLicenseType() const
{
    return m_licenseType;
}

void ModifyCSIPRaspLicenseBindsRequest::SetLicenseType(const string& _licenseType)
{
    m_licenseType = _licenseType;
    m_licenseTypeHasBeenSet = true;
}

bool ModifyCSIPRaspLicenseBindsRequest::LicenseTypeHasBeenSet() const
{
    return m_licenseTypeHasBeenSet;
}

string ModifyCSIPRaspLicenseBindsRequest::GetAssetType() const
{
    return m_assetType;
}

void ModifyCSIPRaspLicenseBindsRequest::SetAssetType(const string& _assetType)
{
    m_assetType = _assetType;
    m_assetTypeHasBeenSet = true;
}

bool ModifyCSIPRaspLicenseBindsRequest::AssetTypeHasBeenSet() const
{
    return m_assetTypeHasBeenSet;
}

vector<string> ModifyCSIPRaspLicenseBindsRequest::GetInstanceIDs() const
{
    return m_instanceIDs;
}

void ModifyCSIPRaspLicenseBindsRequest::SetInstanceIDs(const vector<string>& _instanceIDs)
{
    m_instanceIDs = _instanceIDs;
    m_instanceIDsHasBeenSet = true;
}

bool ModifyCSIPRaspLicenseBindsRequest::InstanceIDsHasBeenSet() const
{
    return m_instanceIDsHasBeenSet;
}

bool ModifyCSIPRaspLicenseBindsRequest::GetIsAll() const
{
    return m_isAll;
}

void ModifyCSIPRaspLicenseBindsRequest::SetIsAll(const bool& _isAll)
{
    m_isAll = _isAll;
    m_isAllHasBeenSet = true;
}

bool ModifyCSIPRaspLicenseBindsRequest::IsAllHasBeenSet() const
{
    return m_isAllHasBeenSet;
}


