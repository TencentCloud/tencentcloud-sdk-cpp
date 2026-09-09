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

#include <tencentcloud/adp/v20260520/model/ChannelSpec.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Adp::V20260520::Model;
using namespace std;

ChannelSpec::ChannelSpec() :
    m_channelNameHasBeenSet(false),
    m_channelTypeHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_dingTalkHasBeenSet(false),
    m_larkHasBeenSet(false),
    m_lineHasBeenSet(false),
    m_sceneHasBeenSet(false),
    m_telegramHasBeenSet(false),
    m_userAgentHasBeenSet(false),
    m_wechatHasBeenSet(false),
    m_wechatClawBotHasBeenSet(false),
    m_wechatCustomerServiceHasBeenSet(false),
    m_wecomAppHasBeenSet(false),
    m_wecomRobotHasBeenSet(false)
{
}

CoreInternalOutcome ChannelSpec::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ChannelName") && !value["ChannelName"].IsNull())
    {
        if (!value["ChannelName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ChannelSpec.ChannelName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_channelName = string(value["ChannelName"].GetString());
        m_channelNameHasBeenSet = true;
    }

    if (value.HasMember("ChannelType") && !value["ChannelType"].IsNull())
    {
        if (!value["ChannelType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ChannelSpec.ChannelType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_channelType = value["ChannelType"].GetInt64();
        m_channelTypeHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ChannelSpec.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("DingTalk") && !value["DingTalk"].IsNull())
    {
        if (!value["DingTalk"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ChannelSpec.DingTalk` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_dingTalk.Deserialize(value["DingTalk"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_dingTalkHasBeenSet = true;
    }

    if (value.HasMember("Lark") && !value["Lark"].IsNull())
    {
        if (!value["Lark"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ChannelSpec.Lark` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_lark.Deserialize(value["Lark"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_larkHasBeenSet = true;
    }

    if (value.HasMember("Line") && !value["Line"].IsNull())
    {
        if (!value["Line"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ChannelSpec.Line` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_line.Deserialize(value["Line"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_lineHasBeenSet = true;
    }

    if (value.HasMember("Scene") && !value["Scene"].IsNull())
    {
        if (!value["Scene"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ChannelSpec.Scene` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_scene = value["Scene"].GetInt64();
        m_sceneHasBeenSet = true;
    }

    if (value.HasMember("Telegram") && !value["Telegram"].IsNull())
    {
        if (!value["Telegram"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ChannelSpec.Telegram` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_telegram.Deserialize(value["Telegram"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_telegramHasBeenSet = true;
    }

    if (value.HasMember("UserAgent") && !value["UserAgent"].IsNull())
    {
        if (!value["UserAgent"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ChannelSpec.UserAgent` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_userAgent.Deserialize(value["UserAgent"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_userAgentHasBeenSet = true;
    }

    if (value.HasMember("Wechat") && !value["Wechat"].IsNull())
    {
        if (!value["Wechat"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ChannelSpec.Wechat` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_wechat.Deserialize(value["Wechat"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_wechatHasBeenSet = true;
    }

    if (value.HasMember("WechatClawBot") && !value["WechatClawBot"].IsNull())
    {
        if (!value["WechatClawBot"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ChannelSpec.WechatClawBot` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_wechatClawBot.Deserialize(value["WechatClawBot"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_wechatClawBotHasBeenSet = true;
    }

    if (value.HasMember("WechatCustomerService") && !value["WechatCustomerService"].IsNull())
    {
        if (!value["WechatCustomerService"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ChannelSpec.WechatCustomerService` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_wechatCustomerService.Deserialize(value["WechatCustomerService"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_wechatCustomerServiceHasBeenSet = true;
    }

    if (value.HasMember("WecomApp") && !value["WecomApp"].IsNull())
    {
        if (!value["WecomApp"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ChannelSpec.WecomApp` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_wecomApp.Deserialize(value["WecomApp"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_wecomAppHasBeenSet = true;
    }

    if (value.HasMember("WecomRobot") && !value["WecomRobot"].IsNull())
    {
        if (!value["WecomRobot"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ChannelSpec.WecomRobot` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_wecomRobot.Deserialize(value["WecomRobot"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_wecomRobotHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ChannelSpec::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_channelNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChannelName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_channelName.c_str(), allocator).Move(), allocator);
    }

    if (m_channelTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChannelType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_channelType, allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_dingTalkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DingTalk";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_dingTalk.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_larkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Lark";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_lark.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_lineHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Line";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_line.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_sceneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Scene";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_scene, allocator);
    }

    if (m_telegramHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Telegram";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_telegram.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_userAgentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserAgent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_userAgent.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_wechatHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Wechat";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_wechat.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_wechatClawBotHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WechatClawBot";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_wechatClawBot.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_wechatCustomerServiceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WechatCustomerService";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_wechatCustomerService.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_wecomAppHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WecomApp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_wecomApp.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_wecomRobotHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WecomRobot";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_wecomRobot.ToJsonObject(value[key.c_str()], allocator);
    }

}


string ChannelSpec::GetChannelName() const
{
    return m_channelName;
}

void ChannelSpec::SetChannelName(const string& _channelName)
{
    m_channelName = _channelName;
    m_channelNameHasBeenSet = true;
}

bool ChannelSpec::ChannelNameHasBeenSet() const
{
    return m_channelNameHasBeenSet;
}

int64_t ChannelSpec::GetChannelType() const
{
    return m_channelType;
}

void ChannelSpec::SetChannelType(const int64_t& _channelType)
{
    m_channelType = _channelType;
    m_channelTypeHasBeenSet = true;
}

bool ChannelSpec::ChannelTypeHasBeenSet() const
{
    return m_channelTypeHasBeenSet;
}

string ChannelSpec::GetDescription() const
{
    return m_description;
}

void ChannelSpec::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool ChannelSpec::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

DingTalkChannelConfig ChannelSpec::GetDingTalk() const
{
    return m_dingTalk;
}

void ChannelSpec::SetDingTalk(const DingTalkChannelConfig& _dingTalk)
{
    m_dingTalk = _dingTalk;
    m_dingTalkHasBeenSet = true;
}

bool ChannelSpec::DingTalkHasBeenSet() const
{
    return m_dingTalkHasBeenSet;
}

LarkChannelConfig ChannelSpec::GetLark() const
{
    return m_lark;
}

void ChannelSpec::SetLark(const LarkChannelConfig& _lark)
{
    m_lark = _lark;
    m_larkHasBeenSet = true;
}

bool ChannelSpec::LarkHasBeenSet() const
{
    return m_larkHasBeenSet;
}

LineChannelConfig ChannelSpec::GetLine() const
{
    return m_line;
}

void ChannelSpec::SetLine(const LineChannelConfig& _line)
{
    m_line = _line;
    m_lineHasBeenSet = true;
}

bool ChannelSpec::LineHasBeenSet() const
{
    return m_lineHasBeenSet;
}

int64_t ChannelSpec::GetScene() const
{
    return m_scene;
}

void ChannelSpec::SetScene(const int64_t& _scene)
{
    m_scene = _scene;
    m_sceneHasBeenSet = true;
}

bool ChannelSpec::SceneHasBeenSet() const
{
    return m_sceneHasBeenSet;
}

TelegramChannelConfig ChannelSpec::GetTelegram() const
{
    return m_telegram;
}

void ChannelSpec::SetTelegram(const TelegramChannelConfig& _telegram)
{
    m_telegram = _telegram;
    m_telegramHasBeenSet = true;
}

bool ChannelSpec::TelegramHasBeenSet() const
{
    return m_telegramHasBeenSet;
}

UserAgentReference ChannelSpec::GetUserAgent() const
{
    return m_userAgent;
}

void ChannelSpec::SetUserAgent(const UserAgentReference& _userAgent)
{
    m_userAgent = _userAgent;
    m_userAgentHasBeenSet = true;
}

bool ChannelSpec::UserAgentHasBeenSet() const
{
    return m_userAgentHasBeenSet;
}

WechatChannelConfig ChannelSpec::GetWechat() const
{
    return m_wechat;
}

void ChannelSpec::SetWechat(const WechatChannelConfig& _wechat)
{
    m_wechat = _wechat;
    m_wechatHasBeenSet = true;
}

bool ChannelSpec::WechatHasBeenSet() const
{
    return m_wechatHasBeenSet;
}

WechatClawBotChannelConfig ChannelSpec::GetWechatClawBot() const
{
    return m_wechatClawBot;
}

void ChannelSpec::SetWechatClawBot(const WechatClawBotChannelConfig& _wechatClawBot)
{
    m_wechatClawBot = _wechatClawBot;
    m_wechatClawBotHasBeenSet = true;
}

bool ChannelSpec::WechatClawBotHasBeenSet() const
{
    return m_wechatClawBotHasBeenSet;
}

WechatCustomerServiceChannelConfig ChannelSpec::GetWechatCustomerService() const
{
    return m_wechatCustomerService;
}

void ChannelSpec::SetWechatCustomerService(const WechatCustomerServiceChannelConfig& _wechatCustomerService)
{
    m_wechatCustomerService = _wechatCustomerService;
    m_wechatCustomerServiceHasBeenSet = true;
}

bool ChannelSpec::WechatCustomerServiceHasBeenSet() const
{
    return m_wechatCustomerServiceHasBeenSet;
}

WecomAppChannelConfig ChannelSpec::GetWecomApp() const
{
    return m_wecomApp;
}

void ChannelSpec::SetWecomApp(const WecomAppChannelConfig& _wecomApp)
{
    m_wecomApp = _wecomApp;
    m_wecomAppHasBeenSet = true;
}

bool ChannelSpec::WecomAppHasBeenSet() const
{
    return m_wecomAppHasBeenSet;
}

WecomRobotChannelConfig ChannelSpec::GetWecomRobot() const
{
    return m_wecomRobot;
}

void ChannelSpec::SetWecomRobot(const WecomRobotChannelConfig& _wecomRobot)
{
    m_wecomRobot = _wecomRobot;
    m_wecomRobotHasBeenSet = true;
}

bool ChannelSpec::WecomRobotHasBeenSet() const
{
    return m_wecomRobotHasBeenSet;
}

