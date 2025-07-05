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

#include <tencentcloud/cdn/v20180606/model/AdvancedScdnAclGroup.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cdn::V20180606::Model;
using namespace std;

AdvancedScdnAclGroup::AdvancedScdnAclGroup() :
    m_ruleNameHasBeenSet(false),
    m_configureHasBeenSet(false),
    m_resultHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_errorPageHasBeenSet(false)
{
}

CoreInternalOutcome AdvancedScdnAclGroup::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RuleName") && !value["RuleName"].IsNull())
    {
        if (!value["RuleName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AdvancedScdnAclGroup.RuleName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ruleName = string(value["RuleName"].GetString());
        m_ruleNameHasBeenSet = true;
    }

    if (value.HasMember("Configure") && !value["Configure"].IsNull())
    {
        if (!value["Configure"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AdvancedScdnAclGroup.Configure` is not array type"));

        const rapidjson::Value &tmpValue = value["Configure"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            AdvancedScdnAclRule item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_configure.push_back(item);
        }
        m_configureHasBeenSet = true;
    }

    if (value.HasMember("Result") && !value["Result"].IsNull())
    {
        if (!value["Result"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AdvancedScdnAclGroup.Result` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_result = string(value["Result"].GetString());
        m_resultHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AdvancedScdnAclGroup.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("ErrorPage") && !value["ErrorPage"].IsNull())
    {
        if (!value["ErrorPage"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AdvancedScdnAclGroup.ErrorPage` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_errorPage.Deserialize(value["ErrorPage"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_errorPageHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AdvancedScdnAclGroup::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_ruleNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ruleName.c_str(), allocator).Move(), allocator);
    }

    if (m_configureHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Configure";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_configure.begin(); itr != m_configure.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_resultHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Result";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_result.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_errorPageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ErrorPage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_errorPage.ToJsonObject(value[key.c_str()], allocator);
    }

}


string AdvancedScdnAclGroup::GetRuleName() const
{
    return m_ruleName;
}

void AdvancedScdnAclGroup::SetRuleName(const string& _ruleName)
{
    m_ruleName = _ruleName;
    m_ruleNameHasBeenSet = true;
}

bool AdvancedScdnAclGroup::RuleNameHasBeenSet() const
{
    return m_ruleNameHasBeenSet;
}

vector<AdvancedScdnAclRule> AdvancedScdnAclGroup::GetConfigure() const
{
    return m_configure;
}

void AdvancedScdnAclGroup::SetConfigure(const vector<AdvancedScdnAclRule>& _configure)
{
    m_configure = _configure;
    m_configureHasBeenSet = true;
}

bool AdvancedScdnAclGroup::ConfigureHasBeenSet() const
{
    return m_configureHasBeenSet;
}

string AdvancedScdnAclGroup::GetResult() const
{
    return m_result;
}

void AdvancedScdnAclGroup::SetResult(const string& _result)
{
    m_result = _result;
    m_resultHasBeenSet = true;
}

bool AdvancedScdnAclGroup::ResultHasBeenSet() const
{
    return m_resultHasBeenSet;
}

string AdvancedScdnAclGroup::GetStatus() const
{
    return m_status;
}

void AdvancedScdnAclGroup::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool AdvancedScdnAclGroup::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

ScdnErrorPage AdvancedScdnAclGroup::GetErrorPage() const
{
    return m_errorPage;
}

void AdvancedScdnAclGroup::SetErrorPage(const ScdnErrorPage& _errorPage)
{
    m_errorPage = _errorPage;
    m_errorPageHasBeenSet = true;
}

bool AdvancedScdnAclGroup::ErrorPageHasBeenSet() const
{
    return m_errorPageHasBeenSet;
}

