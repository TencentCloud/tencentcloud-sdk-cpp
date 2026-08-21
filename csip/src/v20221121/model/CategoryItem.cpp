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

#include <tencentcloud/csip/v20221121/model/CategoryItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

CategoryItem::CategoryItem() :
    m_categoryIdHasBeenSet(false),
    m_categoryNameHasBeenSet(false),
    m_categoryDescHasBeenSet(false),
    m_maxDeductScoreHasBeenSet(false),
    m_deductScoreHasBeenSet(false),
    m_riskCountHasBeenSet(false),
    m_severityItemsHasBeenSet(false),
    m_deductReasonHasBeenSet(false),
    m_actionTextHasBeenSet(false),
    m_protectionDetailHasBeenSet(false)
{
}

CoreInternalOutcome CategoryItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CategoryId") && !value["CategoryId"].IsNull())
    {
        if (!value["CategoryId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CategoryItem.CategoryId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_categoryId = string(value["CategoryId"].GetString());
        m_categoryIdHasBeenSet = true;
    }

    if (value.HasMember("CategoryName") && !value["CategoryName"].IsNull())
    {
        if (!value["CategoryName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CategoryItem.CategoryName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_categoryName = string(value["CategoryName"].GetString());
        m_categoryNameHasBeenSet = true;
    }

    if (value.HasMember("CategoryDesc") && !value["CategoryDesc"].IsNull())
    {
        if (!value["CategoryDesc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CategoryItem.CategoryDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_categoryDesc = string(value["CategoryDesc"].GetString());
        m_categoryDescHasBeenSet = true;
    }

    if (value.HasMember("MaxDeductScore") && !value["MaxDeductScore"].IsNull())
    {
        if (!value["MaxDeductScore"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CategoryItem.MaxDeductScore` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_maxDeductScore = value["MaxDeductScore"].GetInt64();
        m_maxDeductScoreHasBeenSet = true;
    }

    if (value.HasMember("DeductScore") && !value["DeductScore"].IsNull())
    {
        if (!value["DeductScore"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CategoryItem.DeductScore` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_deductScore = value["DeductScore"].GetInt64();
        m_deductScoreHasBeenSet = true;
    }

    if (value.HasMember("RiskCount") && !value["RiskCount"].IsNull())
    {
        if (!value["RiskCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CategoryItem.RiskCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_riskCount = value["RiskCount"].GetInt64();
        m_riskCountHasBeenSet = true;
    }

    if (value.HasMember("SeverityItems") && !value["SeverityItems"].IsNull())
    {
        if (!value["SeverityItems"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CategoryItem.SeverityItems` is not array type"));

        const rapidjson::Value &tmpValue = value["SeverityItems"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            SeverityItem item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_severityItems.push_back(item);
        }
        m_severityItemsHasBeenSet = true;
    }

    if (value.HasMember("DeductReason") && !value["DeductReason"].IsNull())
    {
        if (!value["DeductReason"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CategoryItem.DeductReason` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deductReason = string(value["DeductReason"].GetString());
        m_deductReasonHasBeenSet = true;
    }

    if (value.HasMember("ActionText") && !value["ActionText"].IsNull())
    {
        if (!value["ActionText"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CategoryItem.ActionText` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_actionText = string(value["ActionText"].GetString());
        m_actionTextHasBeenSet = true;
    }

    if (value.HasMember("ProtectionDetail") && !value["ProtectionDetail"].IsNull())
    {
        if (!value["ProtectionDetail"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `CategoryItem.ProtectionDetail` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_protectionDetail.Deserialize(value["ProtectionDetail"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_protectionDetailHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CategoryItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_categoryIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CategoryId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_categoryId.c_str(), allocator).Move(), allocator);
    }

    if (m_categoryNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CategoryName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_categoryName.c_str(), allocator).Move(), allocator);
    }

    if (m_categoryDescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CategoryDesc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_categoryDesc.c_str(), allocator).Move(), allocator);
    }

    if (m_maxDeductScoreHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxDeductScore";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxDeductScore, allocator);
    }

    if (m_deductScoreHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeductScore";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_deductScore, allocator);
    }

    if (m_riskCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RiskCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_riskCount, allocator);
    }

    if (m_severityItemsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SeverityItems";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_severityItems.begin(); itr != m_severityItems.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_deductReasonHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeductReason";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_deductReason.c_str(), allocator).Move(), allocator);
    }

    if (m_actionTextHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ActionText";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_actionText.c_str(), allocator).Move(), allocator);
    }

    if (m_protectionDetailHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProtectionDetail";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_protectionDetail.ToJsonObject(value[key.c_str()], allocator);
    }

}


string CategoryItem::GetCategoryId() const
{
    return m_categoryId;
}

void CategoryItem::SetCategoryId(const string& _categoryId)
{
    m_categoryId = _categoryId;
    m_categoryIdHasBeenSet = true;
}

bool CategoryItem::CategoryIdHasBeenSet() const
{
    return m_categoryIdHasBeenSet;
}

string CategoryItem::GetCategoryName() const
{
    return m_categoryName;
}

void CategoryItem::SetCategoryName(const string& _categoryName)
{
    m_categoryName = _categoryName;
    m_categoryNameHasBeenSet = true;
}

bool CategoryItem::CategoryNameHasBeenSet() const
{
    return m_categoryNameHasBeenSet;
}

string CategoryItem::GetCategoryDesc() const
{
    return m_categoryDesc;
}

void CategoryItem::SetCategoryDesc(const string& _categoryDesc)
{
    m_categoryDesc = _categoryDesc;
    m_categoryDescHasBeenSet = true;
}

bool CategoryItem::CategoryDescHasBeenSet() const
{
    return m_categoryDescHasBeenSet;
}

int64_t CategoryItem::GetMaxDeductScore() const
{
    return m_maxDeductScore;
}

void CategoryItem::SetMaxDeductScore(const int64_t& _maxDeductScore)
{
    m_maxDeductScore = _maxDeductScore;
    m_maxDeductScoreHasBeenSet = true;
}

bool CategoryItem::MaxDeductScoreHasBeenSet() const
{
    return m_maxDeductScoreHasBeenSet;
}

int64_t CategoryItem::GetDeductScore() const
{
    return m_deductScore;
}

void CategoryItem::SetDeductScore(const int64_t& _deductScore)
{
    m_deductScore = _deductScore;
    m_deductScoreHasBeenSet = true;
}

bool CategoryItem::DeductScoreHasBeenSet() const
{
    return m_deductScoreHasBeenSet;
}

int64_t CategoryItem::GetRiskCount() const
{
    return m_riskCount;
}

void CategoryItem::SetRiskCount(const int64_t& _riskCount)
{
    m_riskCount = _riskCount;
    m_riskCountHasBeenSet = true;
}

bool CategoryItem::RiskCountHasBeenSet() const
{
    return m_riskCountHasBeenSet;
}

vector<SeverityItem> CategoryItem::GetSeverityItems() const
{
    return m_severityItems;
}

void CategoryItem::SetSeverityItems(const vector<SeverityItem>& _severityItems)
{
    m_severityItems = _severityItems;
    m_severityItemsHasBeenSet = true;
}

bool CategoryItem::SeverityItemsHasBeenSet() const
{
    return m_severityItemsHasBeenSet;
}

string CategoryItem::GetDeductReason() const
{
    return m_deductReason;
}

void CategoryItem::SetDeductReason(const string& _deductReason)
{
    m_deductReason = _deductReason;
    m_deductReasonHasBeenSet = true;
}

bool CategoryItem::DeductReasonHasBeenSet() const
{
    return m_deductReasonHasBeenSet;
}

string CategoryItem::GetActionText() const
{
    return m_actionText;
}

void CategoryItem::SetActionText(const string& _actionText)
{
    m_actionText = _actionText;
    m_actionTextHasBeenSet = true;
}

bool CategoryItem::ActionTextHasBeenSet() const
{
    return m_actionTextHasBeenSet;
}

ProtectionDetail CategoryItem::GetProtectionDetail() const
{
    return m_protectionDetail;
}

void CategoryItem::SetProtectionDetail(const ProtectionDetail& _protectionDetail)
{
    m_protectionDetail = _protectionDetail;
    m_protectionDetailHasBeenSet = true;
}

bool CategoryItem::ProtectionDetailHasBeenSet() const
{
    return m_protectionDetailHasBeenSet;
}

