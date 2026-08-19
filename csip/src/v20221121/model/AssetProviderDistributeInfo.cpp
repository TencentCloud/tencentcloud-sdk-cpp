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

#include <tencentcloud/csip/v20221121/model/AssetProviderDistributeInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

AssetProviderDistributeInfo::AssetProviderDistributeInfo() :
    m_tencentAssetCountHasBeenSet(false),
    m_aliAssetCountHasBeenSet(false),
    m_awsAssetCountHasBeenSet(false),
    m_otherAssetCountHasBeenSet(false),
    m_azureAssetCountHasBeenSet(false)
{
}

CoreInternalOutcome AssetProviderDistributeInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TencentAssetCount") && !value["TencentAssetCount"].IsNull())
    {
        if (!value["TencentAssetCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AssetProviderDistributeInfo.TencentAssetCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_tencentAssetCount = value["TencentAssetCount"].GetUint64();
        m_tencentAssetCountHasBeenSet = true;
    }

    if (value.HasMember("AliAssetCount") && !value["AliAssetCount"].IsNull())
    {
        if (!value["AliAssetCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AssetProviderDistributeInfo.AliAssetCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_aliAssetCount = value["AliAssetCount"].GetUint64();
        m_aliAssetCountHasBeenSet = true;
    }

    if (value.HasMember("AwsAssetCount") && !value["AwsAssetCount"].IsNull())
    {
        if (!value["AwsAssetCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AssetProviderDistributeInfo.AwsAssetCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_awsAssetCount = value["AwsAssetCount"].GetUint64();
        m_awsAssetCountHasBeenSet = true;
    }

    if (value.HasMember("OtherAssetCount") && !value["OtherAssetCount"].IsNull())
    {
        if (!value["OtherAssetCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AssetProviderDistributeInfo.OtherAssetCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_otherAssetCount = value["OtherAssetCount"].GetUint64();
        m_otherAssetCountHasBeenSet = true;
    }

    if (value.HasMember("AzureAssetCount") && !value["AzureAssetCount"].IsNull())
    {
        if (!value["AzureAssetCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AssetProviderDistributeInfo.AzureAssetCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_azureAssetCount = value["AzureAssetCount"].GetUint64();
        m_azureAssetCountHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AssetProviderDistributeInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_tencentAssetCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TencentAssetCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_tencentAssetCount, allocator);
    }

    if (m_aliAssetCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AliAssetCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_aliAssetCount, allocator);
    }

    if (m_awsAssetCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AwsAssetCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_awsAssetCount, allocator);
    }

    if (m_otherAssetCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OtherAssetCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_otherAssetCount, allocator);
    }

    if (m_azureAssetCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AzureAssetCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_azureAssetCount, allocator);
    }

}


uint64_t AssetProviderDistributeInfo::GetTencentAssetCount() const
{
    return m_tencentAssetCount;
}

void AssetProviderDistributeInfo::SetTencentAssetCount(const uint64_t& _tencentAssetCount)
{
    m_tencentAssetCount = _tencentAssetCount;
    m_tencentAssetCountHasBeenSet = true;
}

bool AssetProviderDistributeInfo::TencentAssetCountHasBeenSet() const
{
    return m_tencentAssetCountHasBeenSet;
}

uint64_t AssetProviderDistributeInfo::GetAliAssetCount() const
{
    return m_aliAssetCount;
}

void AssetProviderDistributeInfo::SetAliAssetCount(const uint64_t& _aliAssetCount)
{
    m_aliAssetCount = _aliAssetCount;
    m_aliAssetCountHasBeenSet = true;
}

bool AssetProviderDistributeInfo::AliAssetCountHasBeenSet() const
{
    return m_aliAssetCountHasBeenSet;
}

uint64_t AssetProviderDistributeInfo::GetAwsAssetCount() const
{
    return m_awsAssetCount;
}

void AssetProviderDistributeInfo::SetAwsAssetCount(const uint64_t& _awsAssetCount)
{
    m_awsAssetCount = _awsAssetCount;
    m_awsAssetCountHasBeenSet = true;
}

bool AssetProviderDistributeInfo::AwsAssetCountHasBeenSet() const
{
    return m_awsAssetCountHasBeenSet;
}

uint64_t AssetProviderDistributeInfo::GetOtherAssetCount() const
{
    return m_otherAssetCount;
}

void AssetProviderDistributeInfo::SetOtherAssetCount(const uint64_t& _otherAssetCount)
{
    m_otherAssetCount = _otherAssetCount;
    m_otherAssetCountHasBeenSet = true;
}

bool AssetProviderDistributeInfo::OtherAssetCountHasBeenSet() const
{
    return m_otherAssetCountHasBeenSet;
}

uint64_t AssetProviderDistributeInfo::GetAzureAssetCount() const
{
    return m_azureAssetCount;
}

void AssetProviderDistributeInfo::SetAzureAssetCount(const uint64_t& _azureAssetCount)
{
    m_azureAssetCount = _azureAssetCount;
    m_azureAssetCountHasBeenSet = true;
}

bool AssetProviderDistributeInfo::AzureAssetCountHasBeenSet() const
{
    return m_azureAssetCountHasBeenSet;
}

