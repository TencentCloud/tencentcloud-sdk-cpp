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

#include <tencentcloud/essbasic/v20210526/model/Agent.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Essbasic::V20210526::Model;
using namespace std;

Agent::Agent() :
    m_appIdHasBeenSet(false),
    m_proxyOrganizationOpenIdHasBeenSet(false),
    m_proxyOperatorHasBeenSet(false),
    m_proxyAppIdHasBeenSet(false),
    m_proxyOrganizationIdHasBeenSet(false)
{
}

CoreInternalOutcome Agent::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AppId") && !value["AppId"].IsNull())
    {
        if (!value["AppId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Agent.AppId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_appId = string(value["AppId"].GetString());
        m_appIdHasBeenSet = true;
    }

    if (value.HasMember("ProxyOrganizationOpenId") && !value["ProxyOrganizationOpenId"].IsNull())
    {
        if (!value["ProxyOrganizationOpenId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Agent.ProxyOrganizationOpenId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_proxyOrganizationOpenId = string(value["ProxyOrganizationOpenId"].GetString());
        m_proxyOrganizationOpenIdHasBeenSet = true;
    }

    if (value.HasMember("ProxyOperator") && !value["ProxyOperator"].IsNull())
    {
        if (!value["ProxyOperator"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Agent.ProxyOperator` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_proxyOperator.Deserialize(value["ProxyOperator"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_proxyOperatorHasBeenSet = true;
    }

    if (value.HasMember("ProxyAppId") && !value["ProxyAppId"].IsNull())
    {
        if (!value["ProxyAppId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Agent.ProxyAppId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_proxyAppId = string(value["ProxyAppId"].GetString());
        m_proxyAppIdHasBeenSet = true;
    }

    if (value.HasMember("ProxyOrganizationId") && !value["ProxyOrganizationId"].IsNull())
    {
        if (!value["ProxyOrganizationId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Agent.ProxyOrganizationId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_proxyOrganizationId = string(value["ProxyOrganizationId"].GetString());
        m_proxyOrganizationIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Agent::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_appIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_appId.c_str(), allocator).Move(), allocator);
    }

    if (m_proxyOrganizationOpenIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProxyOrganizationOpenId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_proxyOrganizationOpenId.c_str(), allocator).Move(), allocator);
    }

    if (m_proxyOperatorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProxyOperator";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_proxyOperator.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_proxyAppIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProxyAppId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_proxyAppId.c_str(), allocator).Move(), allocator);
    }

    if (m_proxyOrganizationIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProxyOrganizationId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_proxyOrganizationId.c_str(), allocator).Move(), allocator);
    }

}


string Agent::GetAppId() const
{
    return m_appId;
}

void Agent::SetAppId(const string& _appId)
{
    m_appId = _appId;
    m_appIdHasBeenSet = true;
}

bool Agent::AppIdHasBeenSet() const
{
    return m_appIdHasBeenSet;
}

string Agent::GetProxyOrganizationOpenId() const
{
    return m_proxyOrganizationOpenId;
}

void Agent::SetProxyOrganizationOpenId(const string& _proxyOrganizationOpenId)
{
    m_proxyOrganizationOpenId = _proxyOrganizationOpenId;
    m_proxyOrganizationOpenIdHasBeenSet = true;
}

bool Agent::ProxyOrganizationOpenIdHasBeenSet() const
{
    return m_proxyOrganizationOpenIdHasBeenSet;
}

UserInfo Agent::GetProxyOperator() const
{
    return m_proxyOperator;
}

void Agent::SetProxyOperator(const UserInfo& _proxyOperator)
{
    m_proxyOperator = _proxyOperator;
    m_proxyOperatorHasBeenSet = true;
}

bool Agent::ProxyOperatorHasBeenSet() const
{
    return m_proxyOperatorHasBeenSet;
}

string Agent::GetProxyAppId() const
{
    return m_proxyAppId;
}

void Agent::SetProxyAppId(const string& _proxyAppId)
{
    m_proxyAppId = _proxyAppId;
    m_proxyAppIdHasBeenSet = true;
}

bool Agent::ProxyAppIdHasBeenSet() const
{
    return m_proxyAppIdHasBeenSet;
}

string Agent::GetProxyOrganizationId() const
{
    return m_proxyOrganizationId;
}

void Agent::SetProxyOrganizationId(const string& _proxyOrganizationId)
{
    m_proxyOrganizationId = _proxyOrganizationId;
    m_proxyOrganizationIdHasBeenSet = true;
}

bool Agent::ProxyOrganizationIdHasBeenSet() const
{
    return m_proxyOrganizationIdHasBeenSet;
}

