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

#include <tencentcloud/gpm/v20200820/model/RuleInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Gpm::V20200820::Model;
using namespace std;

RuleInfo::RuleInfo() :
    m_ruleNameHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_ruleDescHasBeenSet(false),
    m_ruleScriptHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_matchCodeListHasBeenSet(false),
    m_ruleCodeHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_appIdHasBeenSet(false),
    m_uinHasBeenSet(false),
    m_createUinHasBeenSet(false)
{
}

CoreInternalOutcome RuleInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RuleName") && !value["RuleName"].IsNull())
    {
        if (!value["RuleName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RuleInfo.RuleName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ruleName = string(value["RuleName"].GetString());
        m_ruleNameHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RuleInfo.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("RuleDesc") && !value["RuleDesc"].IsNull())
    {
        if (!value["RuleDesc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RuleInfo.RuleDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ruleDesc = string(value["RuleDesc"].GetString());
        m_ruleDescHasBeenSet = true;
    }

    if (value.HasMember("RuleScript") && !value["RuleScript"].IsNull())
    {
        if (!value["RuleScript"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RuleInfo.RuleScript` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ruleScript = string(value["RuleScript"].GetString());
        m_ruleScriptHasBeenSet = true;
    }

    if (value.HasMember("Tags") && !value["Tags"].IsNull())
    {
        if (!value["Tags"].IsArray())
            return CoreInternalOutcome(Core::Error("response `RuleInfo.Tags` is not array type"));

        const rapidjson::Value &tmpValue = value["Tags"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            StringKV item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_tags.push_back(item);
        }
        m_tagsHasBeenSet = true;
    }

    if (value.HasMember("MatchCodeList") && !value["MatchCodeList"].IsNull())
    {
        if (!value["MatchCodeList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `RuleInfo.MatchCodeList` is not array type"));

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

    if (value.HasMember("RuleCode") && !value["RuleCode"].IsNull())
    {
        if (!value["RuleCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RuleInfo.RuleCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ruleCode = string(value["RuleCode"].GetString());
        m_ruleCodeHasBeenSet = true;
    }

    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RuleInfo.Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(value["Region"].GetString());
        m_regionHasBeenSet = true;
    }

    if (value.HasMember("AppId") && !value["AppId"].IsNull())
    {
        if (!value["AppId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RuleInfo.AppId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_appId = string(value["AppId"].GetString());
        m_appIdHasBeenSet = true;
    }

    if (value.HasMember("Uin") && !value["Uin"].IsNull())
    {
        if (!value["Uin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RuleInfo.Uin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uin = string(value["Uin"].GetString());
        m_uinHasBeenSet = true;
    }

    if (value.HasMember("CreateUin") && !value["CreateUin"].IsNull())
    {
        if (!value["CreateUin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RuleInfo.CreateUin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createUin = string(value["CreateUin"].GetString());
        m_createUinHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RuleInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_ruleNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ruleName.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_ruleDescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleDesc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ruleDesc.c_str(), allocator).Move(), allocator);
    }

    if (m_ruleScriptHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleScript";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ruleScript.c_str(), allocator).Move(), allocator);
    }

    if (m_tagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tags";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tags.begin(); itr != m_tags.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
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

    if (m_ruleCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ruleCode.c_str(), allocator).Move(), allocator);
    }

    if (m_regionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Region";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_region.c_str(), allocator).Move(), allocator);
    }

    if (m_appIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_appId.c_str(), allocator).Move(), allocator);
    }

    if (m_uinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Uin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_uin.c_str(), allocator).Move(), allocator);
    }

    if (m_createUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createUin.c_str(), allocator).Move(), allocator);
    }

}


string RuleInfo::GetRuleName() const
{
    return m_ruleName;
}

void RuleInfo::SetRuleName(const string& _ruleName)
{
    m_ruleName = _ruleName;
    m_ruleNameHasBeenSet = true;
}

bool RuleInfo::RuleNameHasBeenSet() const
{
    return m_ruleNameHasBeenSet;
}

string RuleInfo::GetCreateTime() const
{
    return m_createTime;
}

void RuleInfo::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool RuleInfo::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string RuleInfo::GetRuleDesc() const
{
    return m_ruleDesc;
}

void RuleInfo::SetRuleDesc(const string& _ruleDesc)
{
    m_ruleDesc = _ruleDesc;
    m_ruleDescHasBeenSet = true;
}

bool RuleInfo::RuleDescHasBeenSet() const
{
    return m_ruleDescHasBeenSet;
}

string RuleInfo::GetRuleScript() const
{
    return m_ruleScript;
}

void RuleInfo::SetRuleScript(const string& _ruleScript)
{
    m_ruleScript = _ruleScript;
    m_ruleScriptHasBeenSet = true;
}

bool RuleInfo::RuleScriptHasBeenSet() const
{
    return m_ruleScriptHasBeenSet;
}

vector<StringKV> RuleInfo::GetTags() const
{
    return m_tags;
}

void RuleInfo::SetTags(const vector<StringKV>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool RuleInfo::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

vector<StringKV> RuleInfo::GetMatchCodeList() const
{
    return m_matchCodeList;
}

void RuleInfo::SetMatchCodeList(const vector<StringKV>& _matchCodeList)
{
    m_matchCodeList = _matchCodeList;
    m_matchCodeListHasBeenSet = true;
}

bool RuleInfo::MatchCodeListHasBeenSet() const
{
    return m_matchCodeListHasBeenSet;
}

string RuleInfo::GetRuleCode() const
{
    return m_ruleCode;
}

void RuleInfo::SetRuleCode(const string& _ruleCode)
{
    m_ruleCode = _ruleCode;
    m_ruleCodeHasBeenSet = true;
}

bool RuleInfo::RuleCodeHasBeenSet() const
{
    return m_ruleCodeHasBeenSet;
}

string RuleInfo::GetRegion() const
{
    return m_region;
}

void RuleInfo::SetRegion(const string& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool RuleInfo::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

string RuleInfo::GetAppId() const
{
    return m_appId;
}

void RuleInfo::SetAppId(const string& _appId)
{
    m_appId = _appId;
    m_appIdHasBeenSet = true;
}

bool RuleInfo::AppIdHasBeenSet() const
{
    return m_appIdHasBeenSet;
}

string RuleInfo::GetUin() const
{
    return m_uin;
}

void RuleInfo::SetUin(const string& _uin)
{
    m_uin = _uin;
    m_uinHasBeenSet = true;
}

bool RuleInfo::UinHasBeenSet() const
{
    return m_uinHasBeenSet;
}

string RuleInfo::GetCreateUin() const
{
    return m_createUin;
}

void RuleInfo::SetCreateUin(const string& _createUin)
{
    m_createUin = _createUin;
    m_createUinHasBeenSet = true;
}

bool RuleInfo::CreateUinHasBeenSet() const
{
    return m_createUinHasBeenSet;
}

