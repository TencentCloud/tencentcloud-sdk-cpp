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

#include <tencentcloud/cls/v20201016/model/EBPFCollectRule.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cls::V20201016::Model;
using namespace std;

EBPFCollectRule::EBPFCollectRule() :
    m_ruleNameHasBeenSet(false),
    m_trackTargetHasBeenSet(false),
    m_filtersHasBeenSet(false)
{
}

CoreInternalOutcome EBPFCollectRule::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RuleName") && !value["RuleName"].IsNull())
    {
        if (!value["RuleName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EBPFCollectRule.RuleName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ruleName = string(value["RuleName"].GetString());
        m_ruleNameHasBeenSet = true;
    }

    if (value.HasMember("TrackTarget") && !value["TrackTarget"].IsNull())
    {
        if (!value["TrackTarget"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `EBPFCollectRule.TrackTarget` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_trackTarget = value["TrackTarget"].GetInt64();
        m_trackTargetHasBeenSet = true;
    }

    if (value.HasMember("Filters") && !value["Filters"].IsNull())
    {
        if (!value["Filters"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `EBPFCollectRule.Filters` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_filters.Deserialize(value["Filters"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_filtersHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void EBPFCollectRule::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_ruleNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ruleName.c_str(), allocator).Move(), allocator);
    }

    if (m_trackTargetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TrackTarget";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_trackTarget, allocator);
    }

    if (m_filtersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Filters";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_filters.ToJsonObject(value[key.c_str()], allocator);
    }

}


string EBPFCollectRule::GetRuleName() const
{
    return m_ruleName;
}

void EBPFCollectRule::SetRuleName(const string& _ruleName)
{
    m_ruleName = _ruleName;
    m_ruleNameHasBeenSet = true;
}

bool EBPFCollectRule::RuleNameHasBeenSet() const
{
    return m_ruleNameHasBeenSet;
}

int64_t EBPFCollectRule::GetTrackTarget() const
{
    return m_trackTarget;
}

void EBPFCollectRule::SetTrackTarget(const int64_t& _trackTarget)
{
    m_trackTarget = _trackTarget;
    m_trackTargetHasBeenSet = true;
}

bool EBPFCollectRule::TrackTargetHasBeenSet() const
{
    return m_trackTargetHasBeenSet;
}

EBPFCollectFilters EBPFCollectRule::GetFilters() const
{
    return m_filters;
}

void EBPFCollectRule::SetFilters(const EBPFCollectFilters& _filters)
{
    m_filters = _filters;
    m_filtersHasBeenSet = true;
}

bool EBPFCollectRule::FiltersHasBeenSet() const
{
    return m_filtersHasBeenSet;
}

