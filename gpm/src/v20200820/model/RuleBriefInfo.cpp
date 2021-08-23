/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
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

#include <tencentcloud/gpm/v20200820/model/RuleBriefInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Gpm::V20200820::Model;
using namespace std;

RuleBriefInfo::RuleBriefInfo() :
    m_ruleNameHasBeenSet(false),
    m_matchCodeListHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_ruleCodeHasBeenSet(false)
{
}

CoreInternalOutcome RuleBriefInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RuleName") && !value["RuleName"].IsNull())
    {
        if (!value["RuleName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RuleBriefInfo.RuleName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ruleName = string(value["RuleName"].GetString());
        m_ruleNameHasBeenSet = true;
    }

    if (value.HasMember("MatchCodeList") && !value["MatchCodeList"].IsNull())
    {
        if (!value["MatchCodeList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `RuleBriefInfo.MatchCodeList` is not array type"));

        const rapidjson::Value &tmpValue = value["MatchCodeList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            StringKV item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_matchCodeList.push_back(item);
        }
        m_matchCodeListHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RuleBriefInfo.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("RuleCode") && !value["RuleCode"].IsNull())
    {
        if (!value["RuleCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RuleBriefInfo.RuleCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ruleCode = string(value["RuleCode"].GetString());
        m_ruleCodeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RuleBriefInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_ruleNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ruleName.c_str(), allocator).Move(), allocator);
    }

    if (m_matchCodeListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MatchCodeList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_matchCodeList.begin(); itr != m_matchCodeList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_ruleCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ruleCode.c_str(), allocator).Move(), allocator);
    }

}


string RuleBriefInfo::GetRuleName() const
{
    return m_ruleName;
}

void RuleBriefInfo::SetRuleName(const string& _ruleName)
{
    m_ruleName = _ruleName;
    m_ruleNameHasBeenSet = true;
}

bool RuleBriefInfo::RuleNameHasBeenSet() const
{
    return m_ruleNameHasBeenSet;
}

vector<StringKV> RuleBriefInfo::GetMatchCodeList() const
{
    return m_matchCodeList;
}

void RuleBriefInfo::SetMatchCodeList(const vector<StringKV>& _matchCodeList)
{
    m_matchCodeList = _matchCodeList;
    m_matchCodeListHasBeenSet = true;
}

bool RuleBriefInfo::MatchCodeListHasBeenSet() const
{
    return m_matchCodeListHasBeenSet;
}

string RuleBriefInfo::GetCreateTime() const
{
    return m_createTime;
}

void RuleBriefInfo::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool RuleBriefInfo::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string RuleBriefInfo::GetRuleCode() const
{
    return m_ruleCode;
}

void RuleBriefInfo::SetRuleCode(const string& _ruleCode)
{
    m_ruleCode = _ruleCode;
    m_ruleCodeHasBeenSet = true;
}

bool RuleBriefInfo::RuleCodeHasBeenSet() const
{
    return m_ruleCodeHasBeenSet;
}

