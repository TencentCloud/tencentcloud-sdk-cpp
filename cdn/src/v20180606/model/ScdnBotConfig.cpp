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

#include <tencentcloud/cdn/v20180606/model/ScdnBotConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cdn::V20180606::Model;
using namespace std;

ScdnBotConfig::ScdnBotConfig() :
    m_switchHasBeenSet(false),
    m_botCookieHasBeenSet(false),
    m_botJavaScriptHasBeenSet(false)
{
}

CoreInternalOutcome ScdnBotConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Switch") && !value["Switch"].IsNull())
    {
        if (!value["Switch"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ScdnBotConfig.Switch` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_switch = string(value["Switch"].GetString());
        m_switchHasBeenSet = true;
    }

    if (value.HasMember("BotCookie") && !value["BotCookie"].IsNull())
    {
        if (!value["BotCookie"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ScdnBotConfig.BotCookie` is not array type"));

        const rapidjson::Value &tmpValue = value["BotCookie"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            BotCookie item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_botCookie.push_back(item);
        }
        m_botCookieHasBeenSet = true;
    }

    if (value.HasMember("BotJavaScript") && !value["BotJavaScript"].IsNull())
    {
        if (!value["BotJavaScript"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ScdnBotConfig.BotJavaScript` is not array type"));

        const rapidjson::Value &tmpValue = value["BotJavaScript"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            BotJavaScript item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_botJavaScript.push_back(item);
        }
        m_botJavaScriptHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ScdnBotConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_switchHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Switch";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_switch.c_str(), allocator).Move(), allocator);
    }

    if (m_botCookieHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BotCookie";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_botCookie.begin(); itr != m_botCookie.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_botJavaScriptHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BotJavaScript";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_botJavaScript.begin(); itr != m_botJavaScript.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string ScdnBotConfig::GetSwitch() const
{
    return m_switch;
}

void ScdnBotConfig::SetSwitch(const string& _switch)
{
    m_switch = _switch;
    m_switchHasBeenSet = true;
}

bool ScdnBotConfig::SwitchHasBeenSet() const
{
    return m_switchHasBeenSet;
}

vector<BotCookie> ScdnBotConfig::GetBotCookie() const
{
    return m_botCookie;
}

void ScdnBotConfig::SetBotCookie(const vector<BotCookie>& _botCookie)
{
    m_botCookie = _botCookie;
    m_botCookieHasBeenSet = true;
}

bool ScdnBotConfig::BotCookieHasBeenSet() const
{
    return m_botCookieHasBeenSet;
}

vector<BotJavaScript> ScdnBotConfig::GetBotJavaScript() const
{
    return m_botJavaScript;
}

void ScdnBotConfig::SetBotJavaScript(const vector<BotJavaScript>& _botJavaScript)
{
    m_botJavaScript = _botJavaScript;
    m_botJavaScriptHasBeenSet = true;
}

bool ScdnBotConfig::BotJavaScriptHasBeenSet() const
{
    return m_botJavaScriptHasBeenSet;
}

