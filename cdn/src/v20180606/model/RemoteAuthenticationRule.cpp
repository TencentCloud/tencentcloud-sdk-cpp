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

#include <tencentcloud/cdn/v20180606/model/RemoteAuthenticationRule.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cdn::V20180606::Model;
using namespace std;

RemoteAuthenticationRule::RemoteAuthenticationRule() :
    m_serverHasBeenSet(false),
    m_authMethodHasBeenSet(false),
    m_ruleTypeHasBeenSet(false),
    m_rulePathsHasBeenSet(false),
    m_authTimeoutHasBeenSet(false),
    m_authTimeoutActionHasBeenSet(false)
{
}

CoreInternalOutcome RemoteAuthenticationRule::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Server") && !value["Server"].IsNull())
    {
        if (!value["Server"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RemoteAuthenticationRule.Server` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_server = string(value["Server"].GetString());
        m_serverHasBeenSet = true;
    }

    if (value.HasMember("AuthMethod") && !value["AuthMethod"].IsNull())
    {
        if (!value["AuthMethod"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RemoteAuthenticationRule.AuthMethod` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_authMethod = string(value["AuthMethod"].GetString());
        m_authMethodHasBeenSet = true;
    }

    if (value.HasMember("RuleType") && !value["RuleType"].IsNull())
    {
        if (!value["RuleType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RemoteAuthenticationRule.RuleType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ruleType = string(value["RuleType"].GetString());
        m_ruleTypeHasBeenSet = true;
    }

    if (value.HasMember("RulePaths") && !value["RulePaths"].IsNull())
    {
        if (!value["RulePaths"].IsArray())
            return CoreInternalOutcome(Core::Error("response `RemoteAuthenticationRule.RulePaths` is not array type"));

        const rapidjson::Value &tmpValue = value["RulePaths"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_rulePaths.push_back((*itr).GetString());
        }
        m_rulePathsHasBeenSet = true;
    }

    if (value.HasMember("AuthTimeout") && !value["AuthTimeout"].IsNull())
    {
        if (!value["AuthTimeout"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RemoteAuthenticationRule.AuthTimeout` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_authTimeout = value["AuthTimeout"].GetInt64();
        m_authTimeoutHasBeenSet = true;
    }

    if (value.HasMember("AuthTimeoutAction") && !value["AuthTimeoutAction"].IsNull())
    {
        if (!value["AuthTimeoutAction"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RemoteAuthenticationRule.AuthTimeoutAction` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_authTimeoutAction = string(value["AuthTimeoutAction"].GetString());
        m_authTimeoutActionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RemoteAuthenticationRule::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_serverHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Server";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_server.c_str(), allocator).Move(), allocator);
    }

    if (m_authMethodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuthMethod";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_authMethod.c_str(), allocator).Move(), allocator);
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

    if (m_authTimeoutHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuthTimeout";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_authTimeout, allocator);
    }

    if (m_authTimeoutActionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuthTimeoutAction";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_authTimeoutAction.c_str(), allocator).Move(), allocator);
    }

}


string RemoteAuthenticationRule::GetServer() const
{
    return m_server;
}

void RemoteAuthenticationRule::SetServer(const string& _server)
{
    m_server = _server;
    m_serverHasBeenSet = true;
}

bool RemoteAuthenticationRule::ServerHasBeenSet() const
{
    return m_serverHasBeenSet;
}

string RemoteAuthenticationRule::GetAuthMethod() const
{
    return m_authMethod;
}

void RemoteAuthenticationRule::SetAuthMethod(const string& _authMethod)
{
    m_authMethod = _authMethod;
    m_authMethodHasBeenSet = true;
}

bool RemoteAuthenticationRule::AuthMethodHasBeenSet() const
{
    return m_authMethodHasBeenSet;
}

string RemoteAuthenticationRule::GetRuleType() const
{
    return m_ruleType;
}

void RemoteAuthenticationRule::SetRuleType(const string& _ruleType)
{
    m_ruleType = _ruleType;
    m_ruleTypeHasBeenSet = true;
}

bool RemoteAuthenticationRule::RuleTypeHasBeenSet() const
{
    return m_ruleTypeHasBeenSet;
}

vector<string> RemoteAuthenticationRule::GetRulePaths() const
{
    return m_rulePaths;
}

void RemoteAuthenticationRule::SetRulePaths(const vector<string>& _rulePaths)
{
    m_rulePaths = _rulePaths;
    m_rulePathsHasBeenSet = true;
}

bool RemoteAuthenticationRule::RulePathsHasBeenSet() const
{
    return m_rulePathsHasBeenSet;
}

int64_t RemoteAuthenticationRule::GetAuthTimeout() const
{
    return m_authTimeout;
}

void RemoteAuthenticationRule::SetAuthTimeout(const int64_t& _authTimeout)
{
    m_authTimeout = _authTimeout;
    m_authTimeoutHasBeenSet = true;
}

bool RemoteAuthenticationRule::AuthTimeoutHasBeenSet() const
{
    return m_authTimeoutHasBeenSet;
}

string RemoteAuthenticationRule::GetAuthTimeoutAction() const
{
    return m_authTimeoutAction;
}

void RemoteAuthenticationRule::SetAuthTimeoutAction(const string& _authTimeoutAction)
{
    m_authTimeoutAction = _authTimeoutAction;
    m_authTimeoutActionHasBeenSet = true;
}

bool RemoteAuthenticationRule::AuthTimeoutActionHasBeenSet() const
{
    return m_authTimeoutActionHasBeenSet;
}

