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

#include <tencentcloud/essbasic/v20210526/model/ChannelCreateWebThemeConfigRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Essbasic::V20210526::Model;
using namespace std;

ChannelCreateWebThemeConfigRequest::ChannelCreateWebThemeConfigRequest() :
    m_agentHasBeenSet(false),
    m_themeTypeHasBeenSet(false),
    m_webThemeConfigHasBeenSet(false)
{
}

string ChannelCreateWebThemeConfigRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_agentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Agent";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_agent.ToJsonObject(d[key.c_str()], allocator);
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


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


Agent ChannelCreateWebThemeConfigRequest::GetAgent() const
{
    return m_agent;
}

void ChannelCreateWebThemeConfigRequest::SetAgent(const Agent& _agent)
{
    m_agent = _agent;
    m_agentHasBeenSet = true;
}

bool ChannelCreateWebThemeConfigRequest::AgentHasBeenSet() const
{
    return m_agentHasBeenSet;
}

string ChannelCreateWebThemeConfigRequest::GetThemeType() const
{
    return m_themeType;
}

void ChannelCreateWebThemeConfigRequest::SetThemeType(const string& _themeType)
{
    m_themeType = _themeType;
    m_themeTypeHasBeenSet = true;
}

bool ChannelCreateWebThemeConfigRequest::ThemeTypeHasBeenSet() const
{
    return m_themeTypeHasBeenSet;
}

WebThemeConfig ChannelCreateWebThemeConfigRequest::GetWebThemeConfig() const
{
    return m_webThemeConfig;
}

void ChannelCreateWebThemeConfigRequest::SetWebThemeConfig(const WebThemeConfig& _webThemeConfig)
{
    m_webThemeConfig = _webThemeConfig;
    m_webThemeConfigHasBeenSet = true;
}

bool ChannelCreateWebThemeConfigRequest::WebThemeConfigHasBeenSet() const
{
    return m_webThemeConfigHasBeenSet;
}


