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

#include <tencentcloud/csip/v20221121/model/DspmIdentifyComplianceCategoryRelation.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

DspmIdentifyComplianceCategoryRelation::DspmIdentifyComplianceCategoryRelation() :
    m_categoryIdHasBeenSet(false),
    m_categoryNameHasBeenSet(false),
    m_categoryParentIdHasBeenSet(false),
    m_isLeafHasBeenSet(false),
    m_categoryTypeHasBeenSet(false),
    m_categoryGradeHasBeenSet(false),
    m_ruleRelationsHasBeenSet(false),
    m_childrenHasBeenSet(false)
{
}

CoreInternalOutcome DspmIdentifyComplianceCategoryRelation::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CategoryId") && !value["CategoryId"].IsNull())
    {
        if (!value["CategoryId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DspmIdentifyComplianceCategoryRelation.CategoryId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_categoryId = value["CategoryId"].GetUint64();
        m_categoryIdHasBeenSet = true;
    }

    if (value.HasMember("CategoryName") && !value["CategoryName"].IsNull())
    {
        if (!value["CategoryName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DspmIdentifyComplianceCategoryRelation.CategoryName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_categoryName = string(value["CategoryName"].GetString());
        m_categoryNameHasBeenSet = true;
    }

    if (value.HasMember("CategoryParentId") && !value["CategoryParentId"].IsNull())
    {
        if (!value["CategoryParentId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DspmIdentifyComplianceCategoryRelation.CategoryParentId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_categoryParentId = string(value["CategoryParentId"].GetString());
        m_categoryParentIdHasBeenSet = true;
    }

    if (value.HasMember("IsLeaf") && !value["IsLeaf"].IsNull())
    {
        if (!value["IsLeaf"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `DspmIdentifyComplianceCategoryRelation.IsLeaf` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isLeaf = value["IsLeaf"].GetBool();
        m_isLeafHasBeenSet = true;
    }

    if (value.HasMember("CategoryType") && !value["CategoryType"].IsNull())
    {
        if (!value["CategoryType"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DspmIdentifyComplianceCategoryRelation.CategoryType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_categoryType = value["CategoryType"].GetUint64();
        m_categoryTypeHasBeenSet = true;
    }

    if (value.HasMember("CategoryGrade") && !value["CategoryGrade"].IsNull())
    {
        if (!value["CategoryGrade"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DspmIdentifyComplianceCategoryRelation.CategoryGrade` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_categoryGrade = value["CategoryGrade"].GetUint64();
        m_categoryGradeHasBeenSet = true;
    }

    if (value.HasMember("RuleRelations") && !value["RuleRelations"].IsNull())
    {
        if (!value["RuleRelations"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DspmIdentifyComplianceCategoryRelation.RuleRelations` is not array type"));

        const rapidjson::Value &tmpValue = value["RuleRelations"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            DspmIdentifyComplianceRuleRelation item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_ruleRelations.push_back(item);
        }
        m_ruleRelationsHasBeenSet = true;
    }

    if (value.HasMember("Children") && !value["Children"].IsNull())
    {
        if (!value["Children"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DspmIdentifyComplianceCategoryRelation.Children` is not array type"));

        const rapidjson::Value &tmpValue = value["Children"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            DspmIdentifyComplianceCategoryRelation item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_children.push_back(item);
        }
        m_childrenHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DspmIdentifyComplianceCategoryRelation::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_categoryIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CategoryId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_categoryId, allocator);
    }

    if (m_categoryNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CategoryName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_categoryName.c_str(), allocator).Move(), allocator);
    }

    if (m_categoryParentIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CategoryParentId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_categoryParentId.c_str(), allocator).Move(), allocator);
    }

    if (m_isLeafHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsLeaf";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isLeaf, allocator);
    }

    if (m_categoryTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CategoryType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_categoryType, allocator);
    }

    if (m_categoryGradeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CategoryGrade";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_categoryGrade, allocator);
    }

    if (m_ruleRelationsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleRelations";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_ruleRelations.begin(); itr != m_ruleRelations.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_childrenHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Children";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_children.begin(); itr != m_children.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


uint64_t DspmIdentifyComplianceCategoryRelation::GetCategoryId() const
{
    return m_categoryId;
}

void DspmIdentifyComplianceCategoryRelation::SetCategoryId(const uint64_t& _categoryId)
{
    m_categoryId = _categoryId;
    m_categoryIdHasBeenSet = true;
}

bool DspmIdentifyComplianceCategoryRelation::CategoryIdHasBeenSet() const
{
    return m_categoryIdHasBeenSet;
}

string DspmIdentifyComplianceCategoryRelation::GetCategoryName() const
{
    return m_categoryName;
}

void DspmIdentifyComplianceCategoryRelation::SetCategoryName(const string& _categoryName)
{
    m_categoryName = _categoryName;
    m_categoryNameHasBeenSet = true;
}

bool DspmIdentifyComplianceCategoryRelation::CategoryNameHasBeenSet() const
{
    return m_categoryNameHasBeenSet;
}

string DspmIdentifyComplianceCategoryRelation::GetCategoryParentId() const
{
    return m_categoryParentId;
}

void DspmIdentifyComplianceCategoryRelation::SetCategoryParentId(const string& _categoryParentId)
{
    m_categoryParentId = _categoryParentId;
    m_categoryParentIdHasBeenSet = true;
}

bool DspmIdentifyComplianceCategoryRelation::CategoryParentIdHasBeenSet() const
{
    return m_categoryParentIdHasBeenSet;
}

bool DspmIdentifyComplianceCategoryRelation::GetIsLeaf() const
{
    return m_isLeaf;
}

void DspmIdentifyComplianceCategoryRelation::SetIsLeaf(const bool& _isLeaf)
{
    m_isLeaf = _isLeaf;
    m_isLeafHasBeenSet = true;
}

bool DspmIdentifyComplianceCategoryRelation::IsLeafHasBeenSet() const
{
    return m_isLeafHasBeenSet;
}

uint64_t DspmIdentifyComplianceCategoryRelation::GetCategoryType() const
{
    return m_categoryType;
}

void DspmIdentifyComplianceCategoryRelation::SetCategoryType(const uint64_t& _categoryType)
{
    m_categoryType = _categoryType;
    m_categoryTypeHasBeenSet = true;
}

bool DspmIdentifyComplianceCategoryRelation::CategoryTypeHasBeenSet() const
{
    return m_categoryTypeHasBeenSet;
}

uint64_t DspmIdentifyComplianceCategoryRelation::GetCategoryGrade() const
{
    return m_categoryGrade;
}

void DspmIdentifyComplianceCategoryRelation::SetCategoryGrade(const uint64_t& _categoryGrade)
{
    m_categoryGrade = _categoryGrade;
    m_categoryGradeHasBeenSet = true;
}

bool DspmIdentifyComplianceCategoryRelation::CategoryGradeHasBeenSet() const
{
    return m_categoryGradeHasBeenSet;
}

vector<DspmIdentifyComplianceRuleRelation> DspmIdentifyComplianceCategoryRelation::GetRuleRelations() const
{
    return m_ruleRelations;
}

void DspmIdentifyComplianceCategoryRelation::SetRuleRelations(const vector<DspmIdentifyComplianceRuleRelation>& _ruleRelations)
{
    m_ruleRelations = _ruleRelations;
    m_ruleRelationsHasBeenSet = true;
}

bool DspmIdentifyComplianceCategoryRelation::RuleRelationsHasBeenSet() const
{
    return m_ruleRelationsHasBeenSet;
}

vector<DspmIdentifyComplianceCategoryRelation> DspmIdentifyComplianceCategoryRelation::GetChildren() const
{
    return m_children;
}

void DspmIdentifyComplianceCategoryRelation::SetChildren(const vector<DspmIdentifyComplianceCategoryRelation>& _children)
{
    m_children = _children;
    m_childrenHasBeenSet = true;
}

bool DspmIdentifyComplianceCategoryRelation::ChildrenHasBeenSet() const
{
    return m_childrenHasBeenSet;
}

