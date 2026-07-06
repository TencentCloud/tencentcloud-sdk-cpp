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

#include <tencentcloud/adp/v20260520/model/SkillReferenceGroup.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Adp::V20260520::Model;
using namespace std;

SkillReferenceGroup::SkillReferenceGroup() :
    m_referenceSummaryListHasBeenSet(false),
    m_referenceTypeHasBeenSet(false),
    m_totalCountHasBeenSet(false)
{
}

CoreInternalOutcome SkillReferenceGroup::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ReferenceSummaryList") && !value["ReferenceSummaryList"].IsNull())
    {
        if (!value["ReferenceSummaryList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SkillReferenceGroup.ReferenceSummaryList` is not array type"));

        const rapidjson::Value &tmpValue = value["ReferenceSummaryList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            SkillReferenceSummary item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_referenceSummaryList.push_back(item);
        }
        m_referenceSummaryListHasBeenSet = true;
    }

    if (value.HasMember("ReferenceType") && !value["ReferenceType"].IsNull())
    {
        if (!value["ReferenceType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SkillReferenceGroup.ReferenceType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_referenceType = value["ReferenceType"].GetInt64();
        m_referenceTypeHasBeenSet = true;
    }

    if (value.HasMember("TotalCount") && !value["TotalCount"].IsNull())
    {
        if (!value["TotalCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SkillReferenceGroup.TotalCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_totalCount = value["TotalCount"].GetUint64();
        m_totalCountHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SkillReferenceGroup::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_referenceSummaryListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReferenceSummaryList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_referenceSummaryList.begin(); itr != m_referenceSummaryList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_referenceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReferenceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_referenceType, allocator);
    }

    if (m_totalCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalCount, allocator);
    }

}


vector<SkillReferenceSummary> SkillReferenceGroup::GetReferenceSummaryList() const
{
    return m_referenceSummaryList;
}

void SkillReferenceGroup::SetReferenceSummaryList(const vector<SkillReferenceSummary>& _referenceSummaryList)
{
    m_referenceSummaryList = _referenceSummaryList;
    m_referenceSummaryListHasBeenSet = true;
}

bool SkillReferenceGroup::ReferenceSummaryListHasBeenSet() const
{
    return m_referenceSummaryListHasBeenSet;
}

int64_t SkillReferenceGroup::GetReferenceType() const
{
    return m_referenceType;
}

void SkillReferenceGroup::SetReferenceType(const int64_t& _referenceType)
{
    m_referenceType = _referenceType;
    m_referenceTypeHasBeenSet = true;
}

bool SkillReferenceGroup::ReferenceTypeHasBeenSet() const
{
    return m_referenceTypeHasBeenSet;
}

uint64_t SkillReferenceGroup::GetTotalCount() const
{
    return m_totalCount;
}

void SkillReferenceGroup::SetTotalCount(const uint64_t& _totalCount)
{
    m_totalCount = _totalCount;
    m_totalCountHasBeenSet = true;
}

bool SkillReferenceGroup::TotalCountHasBeenSet() const
{
    return m_totalCountHasBeenSet;
}

