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

#include <tencentcloud/csip/v20221121/model/ProtectionDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

ProtectionDetail::ProtectionDetail() :
    m_configItemsHasBeenSet(false),
    m_eligibleAssetCountHasBeenSet(false),
    m_protectedAssetCountHasBeenSet(false),
    m_coveragePercentHasBeenSet(false),
    m_expiringProductsHasBeenSet(false)
{
}

CoreInternalOutcome ProtectionDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ConfigItems") && !value["ConfigItems"].IsNull())
    {
        if (!value["ConfigItems"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ProtectionDetail.ConfigItems` is not array type"));

        const rapidjson::Value &tmpValue = value["ConfigItems"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ProtectionConfigItem item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_configItems.push_back(item);
        }
        m_configItemsHasBeenSet = true;
    }

    if (value.HasMember("EligibleAssetCount") && !value["EligibleAssetCount"].IsNull())
    {
        if (!value["EligibleAssetCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ProtectionDetail.EligibleAssetCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_eligibleAssetCount = value["EligibleAssetCount"].GetInt64();
        m_eligibleAssetCountHasBeenSet = true;
    }

    if (value.HasMember("ProtectedAssetCount") && !value["ProtectedAssetCount"].IsNull())
    {
        if (!value["ProtectedAssetCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ProtectionDetail.ProtectedAssetCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_protectedAssetCount = value["ProtectedAssetCount"].GetInt64();
        m_protectedAssetCountHasBeenSet = true;
    }

    if (value.HasMember("CoveragePercent") && !value["CoveragePercent"].IsNull())
    {
        if (!value["CoveragePercent"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ProtectionDetail.CoveragePercent` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_coveragePercent = value["CoveragePercent"].GetInt64();
        m_coveragePercentHasBeenSet = true;
    }

    if (value.HasMember("ExpiringProducts") && !value["ExpiringProducts"].IsNull())
    {
        if (!value["ExpiringProducts"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ProtectionDetail.ExpiringProducts` is not array type"));

        const rapidjson::Value &tmpValue = value["ExpiringProducts"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ExpiringProduct item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_expiringProducts.push_back(item);
        }
        m_expiringProductsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ProtectionDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_configItemsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConfigItems";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_configItems.begin(); itr != m_configItems.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_eligibleAssetCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EligibleAssetCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_eligibleAssetCount, allocator);
    }

    if (m_protectedAssetCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProtectedAssetCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_protectedAssetCount, allocator);
    }

    if (m_coveragePercentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CoveragePercent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_coveragePercent, allocator);
    }

    if (m_expiringProductsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpiringProducts";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_expiringProducts.begin(); itr != m_expiringProducts.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


vector<ProtectionConfigItem> ProtectionDetail::GetConfigItems() const
{
    return m_configItems;
}

void ProtectionDetail::SetConfigItems(const vector<ProtectionConfigItem>& _configItems)
{
    m_configItems = _configItems;
    m_configItemsHasBeenSet = true;
}

bool ProtectionDetail::ConfigItemsHasBeenSet() const
{
    return m_configItemsHasBeenSet;
}

int64_t ProtectionDetail::GetEligibleAssetCount() const
{
    return m_eligibleAssetCount;
}

void ProtectionDetail::SetEligibleAssetCount(const int64_t& _eligibleAssetCount)
{
    m_eligibleAssetCount = _eligibleAssetCount;
    m_eligibleAssetCountHasBeenSet = true;
}

bool ProtectionDetail::EligibleAssetCountHasBeenSet() const
{
    return m_eligibleAssetCountHasBeenSet;
}

int64_t ProtectionDetail::GetProtectedAssetCount() const
{
    return m_protectedAssetCount;
}

void ProtectionDetail::SetProtectedAssetCount(const int64_t& _protectedAssetCount)
{
    m_protectedAssetCount = _protectedAssetCount;
    m_protectedAssetCountHasBeenSet = true;
}

bool ProtectionDetail::ProtectedAssetCountHasBeenSet() const
{
    return m_protectedAssetCountHasBeenSet;
}

int64_t ProtectionDetail::GetCoveragePercent() const
{
    return m_coveragePercent;
}

void ProtectionDetail::SetCoveragePercent(const int64_t& _coveragePercent)
{
    m_coveragePercent = _coveragePercent;
    m_coveragePercentHasBeenSet = true;
}

bool ProtectionDetail::CoveragePercentHasBeenSet() const
{
    return m_coveragePercentHasBeenSet;
}

vector<ExpiringProduct> ProtectionDetail::GetExpiringProducts() const
{
    return m_expiringProducts;
}

void ProtectionDetail::SetExpiringProducts(const vector<ExpiringProduct>& _expiringProducts)
{
    m_expiringProducts = _expiringProducts;
    m_expiringProductsHasBeenSet = true;
}

bool ProtectionDetail::ExpiringProductsHasBeenSet() const
{
    return m_expiringProductsHasBeenSet;
}

