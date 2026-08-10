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

#include <tencentcloud/csip/v20221121/model/VulVendorProduct.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

VulVendorProduct::VulVendorProduct() :
    m_vendorHasBeenSet(false),
    m_productHasBeenSet(false),
    m_versionRangeHasBeenSet(false)
{
}

CoreInternalOutcome VulVendorProduct::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Vendor") && !value["Vendor"].IsNull())
    {
        if (!value["Vendor"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VulVendorProduct.Vendor` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vendor = string(value["Vendor"].GetString());
        m_vendorHasBeenSet = true;
    }

    if (value.HasMember("Product") && !value["Product"].IsNull())
    {
        if (!value["Product"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VulVendorProduct.Product` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_product = string(value["Product"].GetString());
        m_productHasBeenSet = true;
    }

    if (value.HasMember("VersionRange") && !value["VersionRange"].IsNull())
    {
        if (!value["VersionRange"].IsArray())
            return CoreInternalOutcome(Core::Error("response `VulVendorProduct.VersionRange` is not array type"));

        const rapidjson::Value &tmpValue = value["VersionRange"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_versionRange.push_back((*itr).GetString());
        }
        m_versionRangeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void VulVendorProduct::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_vendorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Vendor";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vendor.c_str(), allocator).Move(), allocator);
    }

    if (m_productHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Product";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_product.c_str(), allocator).Move(), allocator);
    }

    if (m_versionRangeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VersionRange";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_versionRange.begin(); itr != m_versionRange.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


string VulVendorProduct::GetVendor() const
{
    return m_vendor;
}

void VulVendorProduct::SetVendor(const string& _vendor)
{
    m_vendor = _vendor;
    m_vendorHasBeenSet = true;
}

bool VulVendorProduct::VendorHasBeenSet() const
{
    return m_vendorHasBeenSet;
}

string VulVendorProduct::GetProduct() const
{
    return m_product;
}

void VulVendorProduct::SetProduct(const string& _product)
{
    m_product = _product;
    m_productHasBeenSet = true;
}

bool VulVendorProduct::ProductHasBeenSet() const
{
    return m_productHasBeenSet;
}

vector<string> VulVendorProduct::GetVersionRange() const
{
    return m_versionRange;
}

void VulVendorProduct::SetVersionRange(const vector<string>& _versionRange)
{
    m_versionRange = _versionRange;
    m_versionRangeHasBeenSet = true;
}

bool VulVendorProduct::VersionRangeHasBeenSet() const
{
    return m_versionRangeHasBeenSet;
}

