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

#include <tencentcloud/adp/v20260520/model/WechatCustomerServiceChannelConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Adp::V20260520::Model;
using namespace std;

WechatCustomerServiceChannelConfig::WechatCustomerServiceChannelConfig() :
    m_agentSecretHasBeenSet(false),
    m_avatarHasBeenSet(false),
    m_callbackHasBeenSet(false),
    m_customerServiceIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_shareCodeUrlHasBeenSet(false),
    m_wecomCorpIdHasBeenSet(false)
{
}

CoreInternalOutcome WechatCustomerServiceChannelConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AgentSecret") && !value["AgentSecret"].IsNull())
    {
        if (!value["AgentSecret"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WechatCustomerServiceChannelConfig.AgentSecret` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_agentSecret = string(value["AgentSecret"].GetString());
        m_agentSecretHasBeenSet = true;
    }

    if (value.HasMember("Avatar") && !value["Avatar"].IsNull())
    {
        if (!value["Avatar"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WechatCustomerServiceChannelConfig.Avatar` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_avatar = string(value["Avatar"].GetString());
        m_avatarHasBeenSet = true;
    }

    if (value.HasMember("Callback") && !value["Callback"].IsNull())
    {
        if (!value["Callback"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `WechatCustomerServiceChannelConfig.Callback` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_callback.Deserialize(value["Callback"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_callbackHasBeenSet = true;
    }

    if (value.HasMember("CustomerServiceId") && !value["CustomerServiceId"].IsNull())
    {
        if (!value["CustomerServiceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WechatCustomerServiceChannelConfig.CustomerServiceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_customerServiceId = string(value["CustomerServiceId"].GetString());
        m_customerServiceIdHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WechatCustomerServiceChannelConfig.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("ShareCodeUrl") && !value["ShareCodeUrl"].IsNull())
    {
        if (!value["ShareCodeUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WechatCustomerServiceChannelConfig.ShareCodeUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_shareCodeUrl = string(value["ShareCodeUrl"].GetString());
        m_shareCodeUrlHasBeenSet = true;
    }

    if (value.HasMember("WecomCorpId") && !value["WecomCorpId"].IsNull())
    {
        if (!value["WecomCorpId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WechatCustomerServiceChannelConfig.WecomCorpId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_wecomCorpId = string(value["WecomCorpId"].GetString());
        m_wecomCorpIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void WechatCustomerServiceChannelConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_agentSecretHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AgentSecret";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_agentSecret.c_str(), allocator).Move(), allocator);
    }

    if (m_avatarHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Avatar";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_avatar.c_str(), allocator).Move(), allocator);
    }

    if (m_callbackHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Callback";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_callback.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_customerServiceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CustomerServiceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_customerServiceId.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_shareCodeUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ShareCodeUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_shareCodeUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_wecomCorpIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WecomCorpId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_wecomCorpId.c_str(), allocator).Move(), allocator);
    }

}


string WechatCustomerServiceChannelConfig::GetAgentSecret() const
{
    return m_agentSecret;
}

void WechatCustomerServiceChannelConfig::SetAgentSecret(const string& _agentSecret)
{
    m_agentSecret = _agentSecret;
    m_agentSecretHasBeenSet = true;
}

bool WechatCustomerServiceChannelConfig::AgentSecretHasBeenSet() const
{
    return m_agentSecretHasBeenSet;
}

string WechatCustomerServiceChannelConfig::GetAvatar() const
{
    return m_avatar;
}

void WechatCustomerServiceChannelConfig::SetAvatar(const string& _avatar)
{
    m_avatar = _avatar;
    m_avatarHasBeenSet = true;
}

bool WechatCustomerServiceChannelConfig::AvatarHasBeenSet() const
{
    return m_avatarHasBeenSet;
}

CallbackConfig WechatCustomerServiceChannelConfig::GetCallback() const
{
    return m_callback;
}

void WechatCustomerServiceChannelConfig::SetCallback(const CallbackConfig& _callback)
{
    m_callback = _callback;
    m_callbackHasBeenSet = true;
}

bool WechatCustomerServiceChannelConfig::CallbackHasBeenSet() const
{
    return m_callbackHasBeenSet;
}

string WechatCustomerServiceChannelConfig::GetCustomerServiceId() const
{
    return m_customerServiceId;
}

void WechatCustomerServiceChannelConfig::SetCustomerServiceId(const string& _customerServiceId)
{
    m_customerServiceId = _customerServiceId;
    m_customerServiceIdHasBeenSet = true;
}

bool WechatCustomerServiceChannelConfig::CustomerServiceIdHasBeenSet() const
{
    return m_customerServiceIdHasBeenSet;
}

string WechatCustomerServiceChannelConfig::GetName() const
{
    return m_name;
}

void WechatCustomerServiceChannelConfig::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool WechatCustomerServiceChannelConfig::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string WechatCustomerServiceChannelConfig::GetShareCodeUrl() const
{
    return m_shareCodeUrl;
}

void WechatCustomerServiceChannelConfig::SetShareCodeUrl(const string& _shareCodeUrl)
{
    m_shareCodeUrl = _shareCodeUrl;
    m_shareCodeUrlHasBeenSet = true;
}

bool WechatCustomerServiceChannelConfig::ShareCodeUrlHasBeenSet() const
{
    return m_shareCodeUrlHasBeenSet;
}

string WechatCustomerServiceChannelConfig::GetWecomCorpId() const
{
    return m_wecomCorpId;
}

void WechatCustomerServiceChannelConfig::SetWecomCorpId(const string& _wecomCorpId)
{
    m_wecomCorpId = _wecomCorpId;
    m_wecomCorpIdHasBeenSet = true;
}

bool WechatCustomerServiceChannelConfig::WecomCorpIdHasBeenSet() const
{
    return m_wecomCorpIdHasBeenSet;
}

