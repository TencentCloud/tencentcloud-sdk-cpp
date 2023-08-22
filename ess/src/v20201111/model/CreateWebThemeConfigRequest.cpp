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

#include <tencentcloud/ess/v20201111/model/CreateWebThemeConfigRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ess::V20201111::Model;
using namespace std;

CreateWebThemeConfigRequest::CreateWebThemeConfigRequest() :
    m_operatorHasBeenSet(false),
    m_themeTypeHasBeenSet(false),
    m_webThemeConfigHasBeenSet(false),
    m_agentHasBeenSet(false)
{
}

string CreateWebThemeConfigRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_operatorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Operator";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_operator.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_themeTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ThemeType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_themeType.c_str(), allocator).Move(), allocator);
    }

    if (m_webThemeConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WebThemeConfig";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_webThemeConfig.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_agentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Agent";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_agent.ToJsonObject(d[key.c_str()], allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


UserInfo CreateWebThemeConfigRequest::GetOperator() const
{
    return m_operator;
}

void CreateWebThemeConfigRequest::SetOperator(const UserInfo& _operator)
{
    m_operator = _operator;
    m_operatorHasBeenSet = true;
}

bool CreateWebThemeConfigRequest::OperatorHasBeenSet() const
{
    return m_operatorHasBeenSet;
}

string CreateWebThemeConfigRequest::GetThemeType() const
{
    return m_themeType;
}

void CreateWebThemeConfigRequest::SetThemeType(const string& _themeType)
{
    m_themeType = _themeType;
    m_themeTypeHasBeenSet = true;
}

bool CreateWebThemeConfigRequest::ThemeTypeHasBeenSet() const
{
    return m_themeTypeHasBeenSet;
}

WebThemeConfig CreateWebThemeConfigRequest::GetWebThemeConfig() const
{
    return m_webThemeConfig;
}

void CreateWebThemeConfigRequest::SetWebThemeConfig(const WebThemeConfig& _webThemeConfig)
{
    m_webThemeConfig = _webThemeConfig;
    m_webThemeConfigHasBeenSet = true;
}

bool CreateWebThemeConfigRequest::WebThemeConfigHasBeenSet() const
{
    return m_webThemeConfigHasBeenSet;
}

Agent CreateWebThemeConfigRequest::GetAgent() const
{
    return m_agent;
}

void CreateWebThemeConfigRequest::SetAgent(const Agent& _agent)
{
    m_agent = _agent;
    m_agentHasBeenSet = true;
}

bool CreateWebThemeConfigRequest::AgentHasBeenSet() const
{
    return m_agentHasBeenSet;
}


