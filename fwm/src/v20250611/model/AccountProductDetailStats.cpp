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

#include <tencentcloud/fwm/v20250611/model/AccountProductDetailStats.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Fwm::V20250611::Model;
using namespace std;

AccountProductDetailStats::AccountProductDetailStats() :
    m_productHasBeenSet(false),
    m_productNameHasBeenSet(false),
    m_policyCountHasBeenSet(false),
    m_untreatedRiskCountHasBeenSet(false),
    m_totalRiskCountHasBeenSet(false),
    m_treatedRiskCountHasBeenSet(false),
    m_ignoredRiskCountHasBeenSet(false),
    m_rectifyRateHasBeenSet(false),
    m_lastCheckTimeHasBeenSet(false),
    m_subcategoryIdsHasBeenSet(false),
    m_isOverdueHasBeenSet(false)
{
}

CoreInternalOutcome AccountProductDetailStats::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Product") && !value["Product"].IsNull())
    {
        if (!value["Product"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AccountProductDetailStats.Product` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_product = string(value["Product"].GetString());
        m_productHasBeenSet = true;
    }

    if (value.HasMember("ProductName") && !value["ProductName"].IsNull())
    {
        if (!value["ProductName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AccountProductDetailStats.ProductName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_productName = string(value["ProductName"].GetString());
        m_productNameHasBeenSet = true;
    }

    if (value.HasMember("PolicyCount") && !value["PolicyCount"].IsNull())
    {
        if (!value["PolicyCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AccountProductDetailStats.PolicyCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_policyCount = value["PolicyCount"].GetInt64();
        m_policyCountHasBeenSet = true;
    }

    if (value.HasMember("UntreatedRiskCount") && !value["UntreatedRiskCount"].IsNull())
    {
        if (!value["UntreatedRiskCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AccountProductDetailStats.UntreatedRiskCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_untreatedRiskCount = value["UntreatedRiskCount"].GetInt64();
        m_untreatedRiskCountHasBeenSet = true;
    }

    if (value.HasMember("TotalRiskCount") && !value["TotalRiskCount"].IsNull())
    {
        if (!value["TotalRiskCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AccountProductDetailStats.TotalRiskCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_totalRiskCount = value["TotalRiskCount"].GetInt64();
        m_totalRiskCountHasBeenSet = true;
    }

    if (value.HasMember("TreatedRiskCount") && !value["TreatedRiskCount"].IsNull())
    {
        if (!value["TreatedRiskCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AccountProductDetailStats.TreatedRiskCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_treatedRiskCount = value["TreatedRiskCount"].GetInt64();
        m_treatedRiskCountHasBeenSet = true;
    }

    if (value.HasMember("IgnoredRiskCount") && !value["IgnoredRiskCount"].IsNull())
    {
        if (!value["IgnoredRiskCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AccountProductDetailStats.IgnoredRiskCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_ignoredRiskCount = value["IgnoredRiskCount"].GetInt64();
        m_ignoredRiskCountHasBeenSet = true;
    }

    if (value.HasMember("RectifyRate") && !value["RectifyRate"].IsNull())
    {
        if (!value["RectifyRate"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AccountProductDetailStats.RectifyRate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_rectifyRate = string(value["RectifyRate"].GetString());
        m_rectifyRateHasBeenSet = true;
    }

    if (value.HasMember("LastCheckTime") && !value["LastCheckTime"].IsNull())
    {
        if (!value["LastCheckTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AccountProductDetailStats.LastCheckTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lastCheckTime = string(value["LastCheckTime"].GetString());
        m_lastCheckTimeHasBeenSet = true;
    }

    if (value.HasMember("SubcategoryIds") && !value["SubcategoryIds"].IsNull())
    {
        if (!value["SubcategoryIds"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AccountProductDetailStats.SubcategoryIds` is not array type"));

        const rapidjson::Value &tmpValue = value["SubcategoryIds"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_subcategoryIds.push_back((*itr).GetString());
        }
        m_subcategoryIdsHasBeenSet = true;
    }

    if (value.HasMember("IsOverdue") && !value["IsOverdue"].IsNull())
    {
        if (!value["IsOverdue"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `AccountProductDetailStats.IsOverdue` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isOverdue = value["IsOverdue"].GetBool();
        m_isOverdueHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AccountProductDetailStats::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_productHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Product";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_product.c_str(), allocator).Move(), allocator);
    }

    if (m_productNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProductName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_productName.c_str(), allocator).Move(), allocator);
    }

    if (m_policyCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PolicyCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_policyCount, allocator);
    }

    if (m_untreatedRiskCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UntreatedRiskCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_untreatedRiskCount, allocator);
    }

    if (m_totalRiskCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalRiskCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalRiskCount, allocator);
    }

    if (m_treatedRiskCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TreatedRiskCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_treatedRiskCount, allocator);
    }

    if (m_ignoredRiskCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IgnoredRiskCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_ignoredRiskCount, allocator);
    }

    if (m_rectifyRateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RectifyRate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_rectifyRate.c_str(), allocator).Move(), allocator);
    }

    if (m_lastCheckTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastCheckTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lastCheckTime.c_str(), allocator).Move(), allocator);
    }

    if (m_subcategoryIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubcategoryIds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_subcategoryIds.begin(); itr != m_subcategoryIds.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_isOverdueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsOverdue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isOverdue, allocator);
    }

}


string AccountProductDetailStats::GetProduct() const
{
    return m_product;
}

void AccountProductDetailStats::SetProduct(const string& _product)
{
    m_product = _product;
    m_productHasBeenSet = true;
}

bool AccountProductDetailStats::ProductHasBeenSet() const
{
    return m_productHasBeenSet;
}

string AccountProductDetailStats::GetProductName() const
{
    return m_productName;
}

void AccountProductDetailStats::SetProductName(const string& _productName)
{
    m_productName = _productName;
    m_productNameHasBeenSet = true;
}

bool AccountProductDetailStats::ProductNameHasBeenSet() const
{
    return m_productNameHasBeenSet;
}

int64_t AccountProductDetailStats::GetPolicyCount() const
{
    return m_policyCount;
}

void AccountProductDetailStats::SetPolicyCount(const int64_t& _policyCount)
{
    m_policyCount = _policyCount;
    m_policyCountHasBeenSet = true;
}

bool AccountProductDetailStats::PolicyCountHasBeenSet() const
{
    return m_policyCountHasBeenSet;
}

int64_t AccountProductDetailStats::GetUntreatedRiskCount() const
{
    return m_untreatedRiskCount;
}

void AccountProductDetailStats::SetUntreatedRiskCount(const int64_t& _untreatedRiskCount)
{
    m_untreatedRiskCount = _untreatedRiskCount;
    m_untreatedRiskCountHasBeenSet = true;
}

bool AccountProductDetailStats::UntreatedRiskCountHasBeenSet() const
{
    return m_untreatedRiskCountHasBeenSet;
}

int64_t AccountProductDetailStats::GetTotalRiskCount() const
{
    return m_totalRiskCount;
}

void AccountProductDetailStats::SetTotalRiskCount(const int64_t& _totalRiskCount)
{
    m_totalRiskCount = _totalRiskCount;
    m_totalRiskCountHasBeenSet = true;
}

bool AccountProductDetailStats::TotalRiskCountHasBeenSet() const
{
    return m_totalRiskCountHasBeenSet;
}

int64_t AccountProductDetailStats::GetTreatedRiskCount() const
{
    return m_treatedRiskCount;
}

void AccountProductDetailStats::SetTreatedRiskCount(const int64_t& _treatedRiskCount)
{
    m_treatedRiskCount = _treatedRiskCount;
    m_treatedRiskCountHasBeenSet = true;
}

bool AccountProductDetailStats::TreatedRiskCountHasBeenSet() const
{
    return m_treatedRiskCountHasBeenSet;
}

int64_t AccountProductDetailStats::GetIgnoredRiskCount() const
{
    return m_ignoredRiskCount;
}

void AccountProductDetailStats::SetIgnoredRiskCount(const int64_t& _ignoredRiskCount)
{
    m_ignoredRiskCount = _ignoredRiskCount;
    m_ignoredRiskCountHasBeenSet = true;
}

bool AccountProductDetailStats::IgnoredRiskCountHasBeenSet() const
{
    return m_ignoredRiskCountHasBeenSet;
}

string AccountProductDetailStats::GetRectifyRate() const
{
    return m_rectifyRate;
}

void AccountProductDetailStats::SetRectifyRate(const string& _rectifyRate)
{
    m_rectifyRate = _rectifyRate;
    m_rectifyRateHasBeenSet = true;
}

bool AccountProductDetailStats::RectifyRateHasBeenSet() const
{
    return m_rectifyRateHasBeenSet;
}

string AccountProductDetailStats::GetLastCheckTime() const
{
    return m_lastCheckTime;
}

void AccountProductDetailStats::SetLastCheckTime(const string& _lastCheckTime)
{
    m_lastCheckTime = _lastCheckTime;
    m_lastCheckTimeHasBeenSet = true;
}

bool AccountProductDetailStats::LastCheckTimeHasBeenSet() const
{
    return m_lastCheckTimeHasBeenSet;
}

vector<string> AccountProductDetailStats::GetSubcategoryIds() const
{
    return m_subcategoryIds;
}

void AccountProductDetailStats::SetSubcategoryIds(const vector<string>& _subcategoryIds)
{
    m_subcategoryIds = _subcategoryIds;
    m_subcategoryIdsHasBeenSet = true;
}

bool AccountProductDetailStats::SubcategoryIdsHasBeenSet() const
{
    return m_subcategoryIdsHasBeenSet;
}

bool AccountProductDetailStats::GetIsOverdue() const
{
    return m_isOverdue;
}

void AccountProductDetailStats::SetIsOverdue(const bool& _isOverdue)
{
    m_isOverdue = _isOverdue;
    m_isOverdueHasBeenSet = true;
}

bool AccountProductDetailStats::IsOverdueHasBeenSet() const
{
    return m_isOverdueHasBeenSet;
}

