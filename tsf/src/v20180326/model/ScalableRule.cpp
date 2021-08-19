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

#include <tencentcloud/tsf/v20180326/model/ScalableRule.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tsf::V20180326::Model;
using namespace std;

ScalableRule::ScalableRule() :
    m_ruleIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_expandVmCountLimitHasBeenSet(false),
    m_shrinkVmCountLimitHasBeenSet(false),
    m_groupCountHasBeenSet(false),
    m_descHasBeenSet(false)
{
}

CoreInternalOutcome ScalableRule::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RuleId") && !value["RuleId"].IsNull())
    {
        if (!value["RuleId"].IsString())
        {
            return CoreInternalOutcome(Error("response `ScalableRule.RuleId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ruleId = string(value["RuleId"].GetString());
        m_ruleIdHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Error("response `ScalableRule.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("ExpandVmCountLimit") && !value["ExpandVmCountLimit"].IsNull())
    {
        if (!value["ExpandVmCountLimit"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `ScalableRule.ExpandVmCountLimit` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_expandVmCountLimit = value["ExpandVmCountLimit"].GetInt64();
        m_expandVmCountLimitHasBeenSet = true;
    }

    if (value.HasMember("ShrinkVmCountLimit") && !value["ShrinkVmCountLimit"].IsNull())
    {
        if (!value["ShrinkVmCountLimit"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `ScalableRule.ShrinkVmCountLimit` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_shrinkVmCountLimit = value["ShrinkVmCountLimit"].GetInt64();
        m_shrinkVmCountLimitHasBeenSet = true;
    }

    if (value.HasMember("GroupCount") && !value["GroupCount"].IsNull())
    {
        if (!value["GroupCount"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `ScalableRule.GroupCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_groupCount = value["GroupCount"].GetInt64();
        m_groupCountHasBeenSet = true;
    }

    if (value.HasMember("Desc") && !value["Desc"].IsNull())
    {
        if (!value["Desc"].IsString())
        {
            return CoreInternalOutcome(Error("response `ScalableRule.Desc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_desc = string(value["Desc"].GetString());
        m_descHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ScalableRule::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_ruleIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ruleId.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_expandVmCountLimitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpandVmCountLimit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_expandVmCountLimit, allocator);
    }

    if (m_shrinkVmCountLimitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ShrinkVmCountLimit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_shrinkVmCountLimit, allocator);
    }

    if (m_groupCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_groupCount, allocator);
    }

    if (m_descHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Desc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_desc.c_str(), allocator).Move(), allocator);
    }

}


string ScalableRule::GetRuleId() const
{
    return m_ruleId;
}

void ScalableRule::SetRuleId(const string& _ruleId)
{
    m_ruleId = _ruleId;
    m_ruleIdHasBeenSet = true;
}

bool ScalableRule::RuleIdHasBeenSet() const
{
    return m_ruleIdHasBeenSet;
}

string ScalableRule::GetName() const
{
    return m_name;
}

void ScalableRule::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool ScalableRule::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

int64_t ScalableRule::GetExpandVmCountLimit() const
{
    return m_expandVmCountLimit;
}

void ScalableRule::SetExpandVmCountLimit(const int64_t& _expandVmCountLimit)
{
    m_expandVmCountLimit = _expandVmCountLimit;
    m_expandVmCountLimitHasBeenSet = true;
}

bool ScalableRule::ExpandVmCountLimitHasBeenSet() const
{
    return m_expandVmCountLimitHasBeenSet;
}

int64_t ScalableRule::GetShrinkVmCountLimit() const
{
    return m_shrinkVmCountLimit;
}

void ScalableRule::SetShrinkVmCountLimit(const int64_t& _shrinkVmCountLimit)
{
    m_shrinkVmCountLimit = _shrinkVmCountLimit;
    m_shrinkVmCountLimitHasBeenSet = true;
}

bool ScalableRule::ShrinkVmCountLimitHasBeenSet() const
{
    return m_shrinkVmCountLimitHasBeenSet;
}

int64_t ScalableRule::GetGroupCount() const
{
    return m_groupCount;
}

void ScalableRule::SetGroupCount(const int64_t& _groupCount)
{
    m_groupCount = _groupCount;
    m_groupCountHasBeenSet = true;
}

bool ScalableRule::GroupCountHasBeenSet() const
{
    return m_groupCountHasBeenSet;
}

string ScalableRule::GetDesc() const
{
    return m_desc;
}

void ScalableRule::SetDesc(const string& _desc)
{
    m_desc = _desc;
    m_descHasBeenSet = true;
}

bool ScalableRule::DescHasBeenSet() const
{
    return m_descHasBeenSet;
}

