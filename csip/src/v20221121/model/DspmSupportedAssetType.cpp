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

#include <tencentcloud/csip/v20221121/model/DspmSupportedAssetType.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

DspmSupportedAssetType::DspmSupportedAssetType() :
    m_productHasBeenSet(false),
    m_regionsHasBeenSet(false),
    m_productDisplayNameHasBeenSet(false),
    m_productGroupHasBeenSet(false),
    m_assetTotalHasBeenSet(false)
{
}

CoreInternalOutcome DspmSupportedAssetType::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Product") && !value["Product"].IsNull())
    {
        if (!value["Product"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DspmSupportedAssetType.Product` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_product = string(value["Product"].GetString());
        m_productHasBeenSet = true;
    }

    if (value.HasMember("Regions") && !value["Regions"].IsNull())
    {
        if (!value["Regions"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DspmSupportedAssetType.Regions` is not array type"));

        const rapidjson::Value &tmpValue = value["Regions"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            RegionConfig item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_regions.push_back(item);
        }
        m_regionsHasBeenSet = true;
    }

    if (value.HasMember("ProductDisplayName") && !value["ProductDisplayName"].IsNull())
    {
        if (!value["ProductDisplayName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DspmSupportedAssetType.ProductDisplayName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_productDisplayName = string(value["ProductDisplayName"].GetString());
        m_productDisplayNameHasBeenSet = true;
    }

    if (value.HasMember("ProductGroup") && !value["ProductGroup"].IsNull())
    {
        if (!value["ProductGroup"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DspmSupportedAssetType.ProductGroup` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_productGroup = string(value["ProductGroup"].GetString());
        m_productGroupHasBeenSet = true;
    }

    if (value.HasMember("AssetTotal") && !value["AssetTotal"].IsNull())
    {
        if (!value["AssetTotal"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DspmSupportedAssetType.AssetTotal` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_assetTotal = value["AssetTotal"].GetInt64();
        m_assetTotalHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DspmSupportedAssetType::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_productHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Product";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_product.c_str(), allocator).Move(), allocator);
    }

    if (m_regionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Regions";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_regions.begin(); itr != m_regions.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_productDisplayNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProductDisplayName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_productDisplayName.c_str(), allocator).Move(), allocator);
    }

    if (m_productGroupHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProductGroup";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_productGroup.c_str(), allocator).Move(), allocator);
    }

    if (m_assetTotalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssetTotal";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_assetTotal, allocator);
    }

}


string DspmSupportedAssetType::GetProduct() const
{
    return m_product;
}

void DspmSupportedAssetType::SetProduct(const string& _product)
{
    m_product = _product;
    m_productHasBeenSet = true;
}

bool DspmSupportedAssetType::ProductHasBeenSet() const
{
    return m_productHasBeenSet;
}

vector<RegionConfig> DspmSupportedAssetType::GetRegions() const
{
    return m_regions;
}

void DspmSupportedAssetType::SetRegions(const vector<RegionConfig>& _regions)
{
    m_regions = _regions;
    m_regionsHasBeenSet = true;
}

bool DspmSupportedAssetType::RegionsHasBeenSet() const
{
    return m_regionsHasBeenSet;
}

string DspmSupportedAssetType::GetProductDisplayName() const
{
    return m_productDisplayName;
}

void DspmSupportedAssetType::SetProductDisplayName(const string& _productDisplayName)
{
    m_productDisplayName = _productDisplayName;
    m_productDisplayNameHasBeenSet = true;
}

bool DspmSupportedAssetType::ProductDisplayNameHasBeenSet() const
{
    return m_productDisplayNameHasBeenSet;
}

string DspmSupportedAssetType::GetProductGroup() const
{
    return m_productGroup;
}

void DspmSupportedAssetType::SetProductGroup(const string& _productGroup)
{
    m_productGroup = _productGroup;
    m_productGroupHasBeenSet = true;
}

bool DspmSupportedAssetType::ProductGroupHasBeenSet() const
{
    return m_productGroupHasBeenSet;
}

int64_t DspmSupportedAssetType::GetAssetTotal() const
{
    return m_assetTotal;
}

void DspmSupportedAssetType::SetAssetTotal(const int64_t& _assetTotal)
{
    m_assetTotal = _assetTotal;
    m_assetTotalHasBeenSet = true;
}

bool DspmSupportedAssetType::AssetTotalHasBeenSet() const
{
    return m_assetTotalHasBeenSet;
}

