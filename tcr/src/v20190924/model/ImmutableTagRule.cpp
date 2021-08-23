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

#include <tencentcloud/tcr/v20190924/model/ImmutableTagRule.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcr::V20190924::Model;
using namespace std;

ImmutableTagRule::ImmutableTagRule() :
    m_repositoryPatternHasBeenSet(false),
    m_tagPatternHasBeenSet(false),
    m_repositoryDecorationHasBeenSet(false),
    m_tagDecorationHasBeenSet(false),
    m_disabledHasBeenSet(false),
    m_ruleIdHasBeenSet(false),
    m_nsNameHasBeenSet(false)
{
}

CoreInternalOutcome ImmutableTagRule::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RepositoryPattern") && !value["RepositoryPattern"].IsNull())
    {
        if (!value["RepositoryPattern"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImmutableTagRule.RepositoryPattern` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_repositoryPattern = string(value["RepositoryPattern"].GetString());
        m_repositoryPatternHasBeenSet = true;
    }

    if (value.HasMember("TagPattern") && !value["TagPattern"].IsNull())
    {
        if (!value["TagPattern"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImmutableTagRule.TagPattern` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tagPattern = string(value["TagPattern"].GetString());
        m_tagPatternHasBeenSet = true;
    }

    if (value.HasMember("RepositoryDecoration") && !value["RepositoryDecoration"].IsNull())
    {
        if (!value["RepositoryDecoration"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImmutableTagRule.RepositoryDecoration` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_repositoryDecoration = string(value["RepositoryDecoration"].GetString());
        m_repositoryDecorationHasBeenSet = true;
    }

    if (value.HasMember("TagDecoration") && !value["TagDecoration"].IsNull())
    {
        if (!value["TagDecoration"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImmutableTagRule.TagDecoration` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tagDecoration = string(value["TagDecoration"].GetString());
        m_tagDecorationHasBeenSet = true;
    }

    if (value.HasMember("Disabled") && !value["Disabled"].IsNull())
    {
        if (!value["Disabled"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ImmutableTagRule.Disabled` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_disabled = value["Disabled"].GetBool();
        m_disabledHasBeenSet = true;
    }

    if (value.HasMember("RuleId") && !value["RuleId"].IsNull())
    {
        if (!value["RuleId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ImmutableTagRule.RuleId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_ruleId = value["RuleId"].GetInt64();
        m_ruleIdHasBeenSet = true;
    }

    if (value.HasMember("NsName") && !value["NsName"].IsNull())
    {
        if (!value["NsName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImmutableTagRule.NsName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nsName = string(value["NsName"].GetString());
        m_nsNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ImmutableTagRule::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_repositoryPatternHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RepositoryPattern";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_repositoryPattern.c_str(), allocator).Move(), allocator);
    }

    if (m_tagPatternHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TagPattern";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tagPattern.c_str(), allocator).Move(), allocator);
    }

    if (m_repositoryDecorationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RepositoryDecoration";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_repositoryDecoration.c_str(), allocator).Move(), allocator);
    }

    if (m_tagDecorationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TagDecoration";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tagDecoration.c_str(), allocator).Move(), allocator);
    }

    if (m_disabledHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Disabled";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_disabled, allocator);
    }

    if (m_ruleIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_ruleId, allocator);
    }

    if (m_nsNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NsName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nsName.c_str(), allocator).Move(), allocator);
    }

}


string ImmutableTagRule::GetRepositoryPattern() const
{
    return m_repositoryPattern;
}

void ImmutableTagRule::SetRepositoryPattern(const string& _repositoryPattern)
{
    m_repositoryPattern = _repositoryPattern;
    m_repositoryPatternHasBeenSet = true;
}

bool ImmutableTagRule::RepositoryPatternHasBeenSet() const
{
    return m_repositoryPatternHasBeenSet;
}

string ImmutableTagRule::GetTagPattern() const
{
    return m_tagPattern;
}

void ImmutableTagRule::SetTagPattern(const string& _tagPattern)
{
    m_tagPattern = _tagPattern;
    m_tagPatternHasBeenSet = true;
}

bool ImmutableTagRule::TagPatternHasBeenSet() const
{
    return m_tagPatternHasBeenSet;
}

string ImmutableTagRule::GetRepositoryDecoration() const
{
    return m_repositoryDecoration;
}

void ImmutableTagRule::SetRepositoryDecoration(const string& _repositoryDecoration)
{
    m_repositoryDecoration = _repositoryDecoration;
    m_repositoryDecorationHasBeenSet = true;
}

bool ImmutableTagRule::RepositoryDecorationHasBeenSet() const
{
    return m_repositoryDecorationHasBeenSet;
}

string ImmutableTagRule::GetTagDecoration() const
{
    return m_tagDecoration;
}

void ImmutableTagRule::SetTagDecoration(const string& _tagDecoration)
{
    m_tagDecoration = _tagDecoration;
    m_tagDecorationHasBeenSet = true;
}

bool ImmutableTagRule::TagDecorationHasBeenSet() const
{
    return m_tagDecorationHasBeenSet;
}

bool ImmutableTagRule::GetDisabled() const
{
    return m_disabled;
}

void ImmutableTagRule::SetDisabled(const bool& _disabled)
{
    m_disabled = _disabled;
    m_disabledHasBeenSet = true;
}

bool ImmutableTagRule::DisabledHasBeenSet() const
{
    return m_disabledHasBeenSet;
}

int64_t ImmutableTagRule::GetRuleId() const
{
    return m_ruleId;
}

void ImmutableTagRule::SetRuleId(const int64_t& _ruleId)
{
    m_ruleId = _ruleId;
    m_ruleIdHasBeenSet = true;
}

bool ImmutableTagRule::RuleIdHasBeenSet() const
{
    return m_ruleIdHasBeenSet;
}

string ImmutableTagRule::GetNsName() const
{
    return m_nsName;
}

void ImmutableTagRule::SetNsName(const string& _nsName)
{
    m_nsName = _nsName;
    m_nsNameHasBeenSet = true;
}

bool ImmutableTagRule::NsNameHasBeenSet() const
{
    return m_nsNameHasBeenSet;
}

