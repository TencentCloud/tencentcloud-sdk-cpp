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

#include <tencentcloud/tcss/v20201101/model/DeleteComplianceAssetPolicySetFromWhitelistRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tcss::V20201101::Model;
using namespace std;

DeleteComplianceAssetPolicySetFromWhitelistRequest::DeleteComplianceAssetPolicySetFromWhitelistRequest() :
    m_assetItemIdHasBeenSet(false),
    m_customerPolicyItemIdSetHasBeenSet(false),
    m_assetTypeHasBeenSet(false)
{
}

string DeleteComplianceAssetPolicySetFromWhitelistRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_assetItemIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssetItemId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_assetItemId, allocator);
    }

    if (m_customerPolicyItemIdSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CustomerPolicyItemIdSet";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_customerPolicyItemIdSet.begin(); itr != m_customerPolicyItemIdSet.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetUint64(*itr), allocator);
        }
    }

    if (m_assetTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssetType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_assetType.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t DeleteComplianceAssetPolicySetFromWhitelistRequest::GetAssetItemId() const
{
    return m_assetItemId;
}

void DeleteComplianceAssetPolicySetFromWhitelistRequest::SetAssetItemId(const uint64_t& _assetItemId)
{
    m_assetItemId = _assetItemId;
    m_assetItemIdHasBeenSet = true;
}

bool DeleteComplianceAssetPolicySetFromWhitelistRequest::AssetItemIdHasBeenSet() const
{
    return m_assetItemIdHasBeenSet;
}

vector<uint64_t> DeleteComplianceAssetPolicySetFromWhitelistRequest::GetCustomerPolicyItemIdSet() const
{
    return m_customerPolicyItemIdSet;
}

void DeleteComplianceAssetPolicySetFromWhitelistRequest::SetCustomerPolicyItemIdSet(const vector<uint64_t>& _customerPolicyItemIdSet)
{
    m_customerPolicyItemIdSet = _customerPolicyItemIdSet;
    m_customerPolicyItemIdSetHasBeenSet = true;
}

bool DeleteComplianceAssetPolicySetFromWhitelistRequest::CustomerPolicyItemIdSetHasBeenSet() const
{
    return m_customerPolicyItemIdSetHasBeenSet;
}

string DeleteComplianceAssetPolicySetFromWhitelistRequest::GetAssetType() const
{
    return m_assetType;
}

void DeleteComplianceAssetPolicySetFromWhitelistRequest::SetAssetType(const string& _assetType)
{
    m_assetType = _assetType;
    m_assetTypeHasBeenSet = true;
}

bool DeleteComplianceAssetPolicySetFromWhitelistRequest::AssetTypeHasBeenSet() const
{
    return m_assetTypeHasBeenSet;
}


