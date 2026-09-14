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

#include <tencentcloud/adp/v20260520/model/DocParseConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Adp::V20260520::Model;
using namespace std;

DocParseConfig::DocParseConfig() :
    m_contentFilterHasBeenSet(false),
    m_splitRuleHasBeenSet(false)
{
}

CoreInternalOutcome DocParseConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ContentFilter") && !value["ContentFilter"].IsNull())
    {
        if (!value["ContentFilter"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DocParseConfig.ContentFilter` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_contentFilter.Deserialize(value["ContentFilter"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_contentFilterHasBeenSet = true;
    }

    if (value.HasMember("SplitRule") && !value["SplitRule"].IsNull())
    {
        if (!value["SplitRule"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DocParseConfig.SplitRule` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_splitRule = string(value["SplitRule"].GetString());
        m_splitRuleHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DocParseConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_contentFilterHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContentFilter";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_contentFilter.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_splitRuleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SplitRule";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_splitRule.c_str(), allocator).Move(), allocator);
    }

}


ContentFilter DocParseConfig::GetContentFilter() const
{
    return m_contentFilter;
}

void DocParseConfig::SetContentFilter(const ContentFilter& _contentFilter)
{
    m_contentFilter = _contentFilter;
    m_contentFilterHasBeenSet = true;
}

bool DocParseConfig::ContentFilterHasBeenSet() const
{
    return m_contentFilterHasBeenSet;
}

string DocParseConfig::GetSplitRule() const
{
    return m_splitRule;
}

void DocParseConfig::SetSplitRule(const string& _splitRule)
{
    m_splitRule = _splitRule;
    m_splitRuleHasBeenSet = true;
}

bool DocParseConfig::SplitRuleHasBeenSet() const
{
    return m_splitRuleHasBeenSet;
}

