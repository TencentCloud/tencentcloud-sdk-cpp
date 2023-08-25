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

#include <tencentcloud/dsgc/v20190723/model/ScanTaskCOSRules.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dsgc::V20190723::Model;
using namespace std;

ScanTaskCOSRules::ScanTaskCOSRules() :
    m_regexRuleHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_keywordRuleHasBeenSet(false),
    m_ignoreStringRuleHasBeenSet(false),
    m_maxMatchHasBeenSet(false)
{
}

CoreInternalOutcome ScanTaskCOSRules::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RegexRule") && !value["RegexRule"].IsNull())
    {
        if (!value["RegexRule"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ScanTaskCOSRules.RegexRule` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_regexRule.Deserialize(value["RegexRule"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_regexRuleHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ScanTaskCOSRules.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("KeywordRule") && !value["KeywordRule"].IsNull())
    {
        if (!value["KeywordRule"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ScanTaskCOSRules.KeywordRule` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_keywordRule.Deserialize(value["KeywordRule"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_keywordRuleHasBeenSet = true;
    }

    if (value.HasMember("IgnoreStringRule") && !value["IgnoreStringRule"].IsNull())
    {
        if (!value["IgnoreStringRule"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ScanTaskCOSRules.IgnoreStringRule` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_ignoreStringRule.Deserialize(value["IgnoreStringRule"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_ignoreStringRuleHasBeenSet = true;
    }

    if (value.HasMember("MaxMatch") && !value["MaxMatch"].IsNull())
    {
        if (!value["MaxMatch"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ScanTaskCOSRules.MaxMatch` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_maxMatch = value["MaxMatch"].GetInt64();
        m_maxMatchHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ScanTaskCOSRules::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_regexRuleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegexRule";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_regexRule.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_keywordRuleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KeywordRule";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_keywordRule.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_ignoreStringRuleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IgnoreStringRule";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_ignoreStringRule.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_maxMatchHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxMatch";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxMatch, allocator);
    }

}


COSDataRule ScanTaskCOSRules::GetRegexRule() const
{
    return m_regexRule;
}

void ScanTaskCOSRules::SetRegexRule(const COSDataRule& _regexRule)
{
    m_regexRule = _regexRule;
    m_regexRuleHasBeenSet = true;
}

bool ScanTaskCOSRules::RegexRuleHasBeenSet() const
{
    return m_regexRuleHasBeenSet;
}

int64_t ScanTaskCOSRules::GetStatus() const
{
    return m_status;
}

void ScanTaskCOSRules::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool ScanTaskCOSRules::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

COSDataRule ScanTaskCOSRules::GetKeywordRule() const
{
    return m_keywordRule;
}

void ScanTaskCOSRules::SetKeywordRule(const COSDataRule& _keywordRule)
{
    m_keywordRule = _keywordRule;
    m_keywordRuleHasBeenSet = true;
}

bool ScanTaskCOSRules::KeywordRuleHasBeenSet() const
{
    return m_keywordRuleHasBeenSet;
}

COSDataRule ScanTaskCOSRules::GetIgnoreStringRule() const
{
    return m_ignoreStringRule;
}

void ScanTaskCOSRules::SetIgnoreStringRule(const COSDataRule& _ignoreStringRule)
{
    m_ignoreStringRule = _ignoreStringRule;
    m_ignoreStringRuleHasBeenSet = true;
}

bool ScanTaskCOSRules::IgnoreStringRuleHasBeenSet() const
{
    return m_ignoreStringRuleHasBeenSet;
}

int64_t ScanTaskCOSRules::GetMaxMatch() const
{
    return m_maxMatch;
}

void ScanTaskCOSRules::SetMaxMatch(const int64_t& _maxMatch)
{
    m_maxMatch = _maxMatch;
    m_maxMatchHasBeenSet = true;
}

bool ScanTaskCOSRules::MaxMatchHasBeenSet() const
{
    return m_maxMatchHasBeenSet;
}

