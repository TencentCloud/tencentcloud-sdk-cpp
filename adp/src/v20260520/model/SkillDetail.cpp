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

#include <tencentcloud/adp/v20260520/model/SkillDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Adp::V20260520::Model;
using namespace std;

SkillDetail::SkillDetail() :
    m_referenceSummaryListHasBeenSet(false),
    m_skillSummaryHasBeenSet(false),
    m_versionListHasBeenSet(false)
{
}

CoreInternalOutcome SkillDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ReferenceSummaryList") && !value["ReferenceSummaryList"].IsNull())
    {
        if (!value["ReferenceSummaryList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SkillDetail.ReferenceSummaryList` is not array type"));

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

    if (value.HasMember("SkillSummary") && !value["SkillSummary"].IsNull())
    {
        if (!value["SkillSummary"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `SkillDetail.SkillSummary` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_skillSummary.Deserialize(value["SkillSummary"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_skillSummaryHasBeenSet = true;
    }

    if (value.HasMember("VersionList") && !value["VersionList"].IsNull())
    {
        if (!value["VersionList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SkillDetail.VersionList` is not array type"));

        const rapidjson::Value &tmpValue = value["VersionList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            SkillVersion item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_versionList.push_back(item);
        }
        m_versionListHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SkillDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_skillSummaryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SkillSummary";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_skillSummary.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_versionListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VersionList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_versionList.begin(); itr != m_versionList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


vector<SkillReferenceSummary> SkillDetail::GetReferenceSummaryList() const
{
    return m_referenceSummaryList;
}

void SkillDetail::SetReferenceSummaryList(const vector<SkillReferenceSummary>& _referenceSummaryList)
{
    m_referenceSummaryList = _referenceSummaryList;
    m_referenceSummaryListHasBeenSet = true;
}

bool SkillDetail::ReferenceSummaryListHasBeenSet() const
{
    return m_referenceSummaryListHasBeenSet;
}

SkillSummary SkillDetail::GetSkillSummary() const
{
    return m_skillSummary;
}

void SkillDetail::SetSkillSummary(const SkillSummary& _skillSummary)
{
    m_skillSummary = _skillSummary;
    m_skillSummaryHasBeenSet = true;
}

bool SkillDetail::SkillSummaryHasBeenSet() const
{
    return m_skillSummaryHasBeenSet;
}

vector<SkillVersion> SkillDetail::GetVersionList() const
{
    return m_versionList;
}

void SkillDetail::SetVersionList(const vector<SkillVersion>& _versionList)
{
    m_versionList = _versionList;
    m_versionListHasBeenSet = true;
}

bool SkillDetail::VersionListHasBeenSet() const
{
    return m_versionListHasBeenSet;
}

