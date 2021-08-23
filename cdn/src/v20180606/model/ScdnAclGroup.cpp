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

#include <tencentcloud/cdn/v20180606/model/ScdnAclGroup.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cdn::V20180606::Model;
using namespace std;

ScdnAclGroup::ScdnAclGroup() :
    m_ruleNameHasBeenSet(false),
    m_configureHasBeenSet(false),
    m_resultHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_errorPageHasBeenSet(false)
{
}

CoreInternalOutcome ScdnAclGroup::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RuleName") && !value["RuleName"].IsNull())
    {
        if (!value["RuleName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ScdnAclGroup.RuleName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ruleName = string(value["RuleName"].GetString());
        m_ruleNameHasBeenSet = true;
    }

    if (value.HasMember("Configure") && !value["Configure"].IsNull())
    {
        if (!value["Configure"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ScdnAclGroup.Configure` is not array type"));

        const rapidjson::Value &tmpValue = value["Configure"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ScdnAclRule item;
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
            return CoreInternalOutcome(Core::Error("response `ScdnAclGroup.Result` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_result = string(value["Result"].GetString());
        m_resultHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ScdnAclGroup.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("ErrorPage") && !value["ErrorPage"].IsNull())
    {
        if (!value["ErrorPage"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ScdnAclGroup.ErrorPage` is not object type").SetRequestId(requestId));
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

void ScdnAclGroup::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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


string ScdnAclGroup::GetRuleName() const
{
    return m_ruleName;
}

void ScdnAclGroup::SetRuleName(const string& _ruleName)
{
    m_ruleName = _ruleName;
    m_ruleNameHasBeenSet = true;
}

bool ScdnAclGroup::RuleNameHasBeenSet() const
{
    return m_ruleNameHasBeenSet;
}

vector<ScdnAclRule> ScdnAclGroup::GetConfigure() const
{
    return m_configure;
}

void ScdnAclGroup::SetConfigure(const vector<ScdnAclRule>& _configure)
{
    m_configure = _configure;
    m_configureHasBeenSet = true;
}

bool ScdnAclGroup::ConfigureHasBeenSet() const
{
    return m_configureHasBeenSet;
}

string ScdnAclGroup::GetResult() const
{
    return m_result;
}

void ScdnAclGroup::SetResult(const string& _result)
{
    m_result = _result;
    m_resultHasBeenSet = true;
}

bool ScdnAclGroup::ResultHasBeenSet() const
{
    return m_resultHasBeenSet;
}

string ScdnAclGroup::GetStatus() const
{
    return m_status;
}

void ScdnAclGroup::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool ScdnAclGroup::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

ScdnErrorPage ScdnAclGroup::GetErrorPage() const
{
    return m_errorPage;
}

void ScdnAclGroup::SetErrorPage(const ScdnErrorPage& _errorPage)
{
    m_errorPage = _errorPage;
    m_errorPageHasBeenSet = true;
}

bool ScdnAclGroup::ErrorPageHasBeenSet() const
{
    return m_errorPageHasBeenSet;
}

