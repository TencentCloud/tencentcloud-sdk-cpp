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

#include <tencentcloud/csip/v20221121/model/SkillScanEngineResult.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

SkillScanEngineResult::SkillScanEngineResult() :
    m_scanTypeHasBeenSet(false),
    m_ruleListHasBeenSet(false)
{
}

CoreInternalOutcome SkillScanEngineResult::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ScanType") && !value["ScanType"].IsNull())
    {
        if (!value["ScanType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SkillScanEngineResult.ScanType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_scanType = string(value["ScanType"].GetString());
        m_scanTypeHasBeenSet = true;
    }

    if (value.HasMember("RuleList") && !value["RuleList"].IsNull())
    {
        if (!value["RuleList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SkillScanEngineResult.RuleList` is not array type"));

        const rapidjson::Value &tmpValue = value["RuleList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            SkillScanRuleHit item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_ruleList.push_back(item);
        }
        m_ruleListHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SkillScanEngineResult::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_scanTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScanType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_scanType.c_str(), allocator).Move(), allocator);
    }

    if (m_ruleListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_ruleList.begin(); itr != m_ruleList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string SkillScanEngineResult::GetScanType() const
{
    return m_scanType;
}

void SkillScanEngineResult::SetScanType(const string& _scanType)
{
    m_scanType = _scanType;
    m_scanTypeHasBeenSet = true;
}

bool SkillScanEngineResult::ScanTypeHasBeenSet() const
{
    return m_scanTypeHasBeenSet;
}

vector<SkillScanRuleHit> SkillScanEngineResult::GetRuleList() const
{
    return m_ruleList;
}

void SkillScanEngineResult::SetRuleList(const vector<SkillScanRuleHit>& _ruleList)
{
    m_ruleList = _ruleList;
    m_ruleListHasBeenSet = true;
}

bool SkillScanEngineResult::RuleListHasBeenSet() const
{
    return m_ruleListHasBeenSet;
}

