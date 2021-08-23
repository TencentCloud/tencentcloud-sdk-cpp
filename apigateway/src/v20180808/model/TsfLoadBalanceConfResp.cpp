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

#include <tencentcloud/apigateway/v20180808/model/TsfLoadBalanceConfResp.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Apigateway::V20180808::Model;
using namespace std;

TsfLoadBalanceConfResp::TsfLoadBalanceConfResp() :
    m_isLoadBalanceHasBeenSet(false),
    m_methodHasBeenSet(false),
    m_sessionStickRequiredHasBeenSet(false),
    m_sessionStickTimeoutHasBeenSet(false)
{
}

CoreInternalOutcome TsfLoadBalanceConfResp::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("IsLoadBalance") && !value["IsLoadBalance"].IsNull())
    {
        if (!value["IsLoadBalance"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `TsfLoadBalanceConfResp.IsLoadBalance` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isLoadBalance = value["IsLoadBalance"].GetBool();
        m_isLoadBalanceHasBeenSet = true;
    }

    if (value.HasMember("Method") && !value["Method"].IsNull())
    {
        if (!value["Method"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TsfLoadBalanceConfResp.Method` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_method = string(value["Method"].GetString());
        m_methodHasBeenSet = true;
    }

    if (value.HasMember("SessionStickRequired") && !value["SessionStickRequired"].IsNull())
    {
        if (!value["SessionStickRequired"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `TsfLoadBalanceConfResp.SessionStickRequired` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_sessionStickRequired = value["SessionStickRequired"].GetBool();
        m_sessionStickRequiredHasBeenSet = true;
    }

    if (value.HasMember("SessionStickTimeout") && !value["SessionStickTimeout"].IsNull())
    {
        if (!value["SessionStickTimeout"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TsfLoadBalanceConfResp.SessionStickTimeout` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_sessionStickTimeout = value["SessionStickTimeout"].GetInt64();
        m_sessionStickTimeoutHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TsfLoadBalanceConfResp::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_isLoadBalanceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsLoadBalance";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isLoadBalance, allocator);
    }

    if (m_methodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Method";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_method.c_str(), allocator).Move(), allocator);
    }

    if (m_sessionStickRequiredHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SessionStickRequired";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sessionStickRequired, allocator);
    }

    if (m_sessionStickTimeoutHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SessionStickTimeout";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sessionStickTimeout, allocator);
    }

}


bool TsfLoadBalanceConfResp::GetIsLoadBalance() const
{
    return m_isLoadBalance;
}

void TsfLoadBalanceConfResp::SetIsLoadBalance(const bool& _isLoadBalance)
{
    m_isLoadBalance = _isLoadBalance;
    m_isLoadBalanceHasBeenSet = true;
}

bool TsfLoadBalanceConfResp::IsLoadBalanceHasBeenSet() const
{
    return m_isLoadBalanceHasBeenSet;
}

string TsfLoadBalanceConfResp::GetMethod() const
{
    return m_method;
}

void TsfLoadBalanceConfResp::SetMethod(const string& _method)
{
    m_method = _method;
    m_methodHasBeenSet = true;
}

bool TsfLoadBalanceConfResp::MethodHasBeenSet() const
{
    return m_methodHasBeenSet;
}

bool TsfLoadBalanceConfResp::GetSessionStickRequired() const
{
    return m_sessionStickRequired;
}

void TsfLoadBalanceConfResp::SetSessionStickRequired(const bool& _sessionStickRequired)
{
    m_sessionStickRequired = _sessionStickRequired;
    m_sessionStickRequiredHasBeenSet = true;
}

bool TsfLoadBalanceConfResp::SessionStickRequiredHasBeenSet() const
{
    return m_sessionStickRequiredHasBeenSet;
}

int64_t TsfLoadBalanceConfResp::GetSessionStickTimeout() const
{
    return m_sessionStickTimeout;
}

void TsfLoadBalanceConfResp::SetSessionStickTimeout(const int64_t& _sessionStickTimeout)
{
    m_sessionStickTimeout = _sessionStickTimeout;
    m_sessionStickTimeoutHasBeenSet = true;
}

bool TsfLoadBalanceConfResp::SessionStickTimeoutHasBeenSet() const
{
    return m_sessionStickTimeoutHasBeenSet;
}

