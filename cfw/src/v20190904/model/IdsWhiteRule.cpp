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

#include <tencentcloud/cfw/v20190904/model/IdsWhiteRule.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cfw::V20190904::Model;
using namespace std;

IdsWhiteRule::IdsWhiteRule() :
    m_commentHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_fwTypeHasBeenSet(false),
    m_infoHasBeenSet(false),
    m_ruleNameHasBeenSet(false)
{
}

CoreInternalOutcome IdsWhiteRule::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Comment") && !value["Comment"].IsNull())
    {
        if (!value["Comment"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IdsWhiteRule.Comment` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_comment = string(value["Comment"].GetString());
        m_commentHasBeenSet = true;
    }

    if (value.HasMember("EndTime") && !value["EndTime"].IsNull())
    {
        if (!value["EndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IdsWhiteRule.EndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endTime = string(value["EndTime"].GetString());
        m_endTimeHasBeenSet = true;
    }

    if (value.HasMember("FwType") && !value["FwType"].IsNull())
    {
        if (!value["FwType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `IdsWhiteRule.FwType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_fwType = value["FwType"].GetInt64();
        m_fwTypeHasBeenSet = true;
    }

    if (value.HasMember("Info") && !value["Info"].IsNull())
    {
        if (!value["Info"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `IdsWhiteRule.Info` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_info.Deserialize(value["Info"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_infoHasBeenSet = true;
    }

    if (value.HasMember("RuleName") && !value["RuleName"].IsNull())
    {
        if (!value["RuleName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IdsWhiteRule.RuleName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ruleName = string(value["RuleName"].GetString());
        m_ruleNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void IdsWhiteRule::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_commentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Comment";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_comment.c_str(), allocator).Move(), allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_endTime.c_str(), allocator).Move(), allocator);
    }

    if (m_fwTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FwType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_fwType, allocator);
    }

    if (m_infoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Info";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_info.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_ruleNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ruleName.c_str(), allocator).Move(), allocator);
    }

}


string IdsWhiteRule::GetComment() const
{
    return m_comment;
}

void IdsWhiteRule::SetComment(const string& _comment)
{
    m_comment = _comment;
    m_commentHasBeenSet = true;
}

bool IdsWhiteRule::CommentHasBeenSet() const
{
    return m_commentHasBeenSet;
}

string IdsWhiteRule::GetEndTime() const
{
    return m_endTime;
}

void IdsWhiteRule::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool IdsWhiteRule::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

int64_t IdsWhiteRule::GetFwType() const
{
    return m_fwType;
}

void IdsWhiteRule::SetFwType(const int64_t& _fwType)
{
    m_fwType = _fwType;
    m_fwTypeHasBeenSet = true;
}

bool IdsWhiteRule::FwTypeHasBeenSet() const
{
    return m_fwTypeHasBeenSet;
}

WhiteRuleInfo IdsWhiteRule::GetInfo() const
{
    return m_info;
}

void IdsWhiteRule::SetInfo(const WhiteRuleInfo& _info)
{
    m_info = _info;
    m_infoHasBeenSet = true;
}

bool IdsWhiteRule::InfoHasBeenSet() const
{
    return m_infoHasBeenSet;
}

string IdsWhiteRule::GetRuleName() const
{
    return m_ruleName;
}

void IdsWhiteRule::SetRuleName(const string& _ruleName)
{
    m_ruleName = _ruleName;
    m_ruleNameHasBeenSet = true;
}

bool IdsWhiteRule::RuleNameHasBeenSet() const
{
    return m_ruleNameHasBeenSet;
}

