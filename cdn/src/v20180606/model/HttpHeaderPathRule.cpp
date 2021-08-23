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

#include <tencentcloud/cdn/v20180606/model/HttpHeaderPathRule.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cdn::V20180606::Model;
using namespace std;

HttpHeaderPathRule::HttpHeaderPathRule() :
    m_headerModeHasBeenSet(false),
    m_headerNameHasBeenSet(false),
    m_headerValueHasBeenSet(false),
    m_ruleTypeHasBeenSet(false),
    m_rulePathsHasBeenSet(false)
{
}

CoreInternalOutcome HttpHeaderPathRule::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("HeaderMode") && !value["HeaderMode"].IsNull())
    {
        if (!value["HeaderMode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HttpHeaderPathRule.HeaderMode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_headerMode = string(value["HeaderMode"].GetString());
        m_headerModeHasBeenSet = true;
    }

    if (value.HasMember("HeaderName") && !value["HeaderName"].IsNull())
    {
        if (!value["HeaderName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HttpHeaderPathRule.HeaderName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_headerName = string(value["HeaderName"].GetString());
        m_headerNameHasBeenSet = true;
    }

    if (value.HasMember("HeaderValue") && !value["HeaderValue"].IsNull())
    {
        if (!value["HeaderValue"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HttpHeaderPathRule.HeaderValue` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_headerValue = string(value["HeaderValue"].GetString());
        m_headerValueHasBeenSet = true;
    }

    if (value.HasMember("RuleType") && !value["RuleType"].IsNull())
    {
        if (!value["RuleType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HttpHeaderPathRule.RuleType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ruleType = string(value["RuleType"].GetString());
        m_ruleTypeHasBeenSet = true;
    }

    if (value.HasMember("RulePaths") && !value["RulePaths"].IsNull())
    {
        if (!value["RulePaths"].IsArray())
            return CoreInternalOutcome(Core::Error("response `HttpHeaderPathRule.RulePaths` is not array type"));

        const rapidjson::Value &tmpValue = value["RulePaths"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_rulePaths.push_back((*itr).GetString());
        }
        m_rulePathsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void HttpHeaderPathRule::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_headerModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HeaderMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_headerMode.c_str(), allocator).Move(), allocator);
    }

    if (m_headerNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HeaderName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_headerName.c_str(), allocator).Move(), allocator);
    }

    if (m_headerValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HeaderValue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_headerValue.c_str(), allocator).Move(), allocator);
    }

    if (m_ruleTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ruleType.c_str(), allocator).Move(), allocator);
    }

    if (m_rulePathsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RulePaths";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_rulePaths.begin(); itr != m_rulePaths.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


string HttpHeaderPathRule::GetHeaderMode() const
{
    return m_headerMode;
}

void HttpHeaderPathRule::SetHeaderMode(const string& _headerMode)
{
    m_headerMode = _headerMode;
    m_headerModeHasBeenSet = true;
}

bool HttpHeaderPathRule::HeaderModeHasBeenSet() const
{
    return m_headerModeHasBeenSet;
}

string HttpHeaderPathRule::GetHeaderName() const
{
    return m_headerName;
}

void HttpHeaderPathRule::SetHeaderName(const string& _headerName)
{
    m_headerName = _headerName;
    m_headerNameHasBeenSet = true;
}

bool HttpHeaderPathRule::HeaderNameHasBeenSet() const
{
    return m_headerNameHasBeenSet;
}

string HttpHeaderPathRule::GetHeaderValue() const
{
    return m_headerValue;
}

void HttpHeaderPathRule::SetHeaderValue(const string& _headerValue)
{
    m_headerValue = _headerValue;
    m_headerValueHasBeenSet = true;
}

bool HttpHeaderPathRule::HeaderValueHasBeenSet() const
{
    return m_headerValueHasBeenSet;
}

string HttpHeaderPathRule::GetRuleType() const
{
    return m_ruleType;
}

void HttpHeaderPathRule::SetRuleType(const string& _ruleType)
{
    m_ruleType = _ruleType;
    m_ruleTypeHasBeenSet = true;
}

bool HttpHeaderPathRule::RuleTypeHasBeenSet() const
{
    return m_ruleTypeHasBeenSet;
}

vector<string> HttpHeaderPathRule::GetRulePaths() const
{
    return m_rulePaths;
}

void HttpHeaderPathRule::SetRulePaths(const vector<string>& _rulePaths)
{
    m_rulePaths = _rulePaths;
    m_rulePathsHasBeenSet = true;
}

bool HttpHeaderPathRule::RulePathsHasBeenSet() const
{
    return m_rulePathsHasBeenSet;
}

