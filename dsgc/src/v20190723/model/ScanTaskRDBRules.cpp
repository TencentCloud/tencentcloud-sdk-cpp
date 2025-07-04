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

#include <tencentcloud/dsgc/v20190723/model/ScanTaskRDBRules.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dsgc::V20190723::Model;
using namespace std;

ScanTaskRDBRules::ScanTaskRDBRules() :
    m_statusHasBeenSet(false),
    m_matchOperatorHasBeenSet(false),
    m_metaRuleHasBeenSet(false),
    m_contentRuleHasBeenSet(false)
{
}

CoreInternalOutcome ScanTaskRDBRules::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ScanTaskRDBRules.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("MatchOperator") && !value["MatchOperator"].IsNull())
    {
        if (!value["MatchOperator"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ScanTaskRDBRules.MatchOperator` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_matchOperator = string(value["MatchOperator"].GetString());
        m_matchOperatorHasBeenSet = true;
    }

    if (value.HasMember("MetaRule") && !value["MetaRule"].IsNull())
    {
        if (!value["MetaRule"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ScanTaskRDBRules.MetaRule` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_metaRule.Deserialize(value["MetaRule"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_metaRuleHasBeenSet = true;
    }

    if (value.HasMember("ContentRule") && !value["ContentRule"].IsNull())
    {
        if (!value["ContentRule"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ScanTaskRDBRules.ContentRule` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_contentRule.Deserialize(value["ContentRule"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_contentRuleHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ScanTaskRDBRules::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_matchOperatorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MatchOperator";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_matchOperator.c_str(), allocator).Move(), allocator);
    }

    if (m_metaRuleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MetaRule";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_metaRule.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_contentRuleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContentRule";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_contentRule.ToJsonObject(value[key.c_str()], allocator);
    }

}


int64_t ScanTaskRDBRules::GetStatus() const
{
    return m_status;
}

void ScanTaskRDBRules::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool ScanTaskRDBRules::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string ScanTaskRDBRules::GetMatchOperator() const
{
    return m_matchOperator;
}

void ScanTaskRDBRules::SetMatchOperator(const string& _matchOperator)
{
    m_matchOperator = _matchOperator;
    m_matchOperatorHasBeenSet = true;
}

bool ScanTaskRDBRules::MatchOperatorHasBeenSet() const
{
    return m_matchOperatorHasBeenSet;
}

DataRules ScanTaskRDBRules::GetMetaRule() const
{
    return m_metaRule;
}

void ScanTaskRDBRules::SetMetaRule(const DataRules& _metaRule)
{
    m_metaRule = _metaRule;
    m_metaRuleHasBeenSet = true;
}

bool ScanTaskRDBRules::MetaRuleHasBeenSet() const
{
    return m_metaRuleHasBeenSet;
}

DataRules ScanTaskRDBRules::GetContentRule() const
{
    return m_contentRule;
}

void ScanTaskRDBRules::SetContentRule(const DataRules& _contentRule)
{
    m_contentRule = _contentRule;
    m_contentRuleHasBeenSet = true;
}

bool ScanTaskRDBRules::ContentRuleHasBeenSet() const
{
    return m_contentRuleHasBeenSet;
}

