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

#include <tencentcloud/adp/v20260520/model/WecomAppChannelConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Adp::V20260520::Model;
using namespace std;

WecomAppChannelConfig::WecomAppChannelConfig() :
    m_callbackHasBeenSet(false),
    m_thirdChannelCorpIdHasBeenSet(false),
    m_thirdChannelIdHasBeenSet(false),
    m_wecomAgentIdHasBeenSet(false),
    m_wecomAgentSecretHasBeenSet(false),
    m_wecomCorpIdHasBeenSet(false)
{
}

CoreInternalOutcome WecomAppChannelConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Callback") && !value["Callback"].IsNull())
    {
        if (!value["Callback"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `WecomAppChannelConfig.Callback` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_callback.Deserialize(value["Callback"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_callbackHasBeenSet = true;
    }

    if (value.HasMember("ThirdChannelCorpId") && !value["ThirdChannelCorpId"].IsNull())
    {
        if (!value["ThirdChannelCorpId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WecomAppChannelConfig.ThirdChannelCorpId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_thirdChannelCorpId = string(value["ThirdChannelCorpId"].GetString());
        m_thirdChannelCorpIdHasBeenSet = true;
    }

    if (value.HasMember("ThirdChannelId") && !value["ThirdChannelId"].IsNull())
    {
        if (!value["ThirdChannelId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WecomAppChannelConfig.ThirdChannelId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_thirdChannelId = string(value["ThirdChannelId"].GetString());
        m_thirdChannelIdHasBeenSet = true;
    }

    if (value.HasMember("WecomAgentId") && !value["WecomAgentId"].IsNull())
    {
        if (!value["WecomAgentId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WecomAppChannelConfig.WecomAgentId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_wecomAgentId = string(value["WecomAgentId"].GetString());
        m_wecomAgentIdHasBeenSet = true;
    }

    if (value.HasMember("WecomAgentSecret") && !value["WecomAgentSecret"].IsNull())
    {
        if (!value["WecomAgentSecret"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WecomAppChannelConfig.WecomAgentSecret` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_wecomAgentSecret = string(value["WecomAgentSecret"].GetString());
        m_wecomAgentSecretHasBeenSet = true;
    }

    if (value.HasMember("WecomCorpId") && !value["WecomCorpId"].IsNull())
    {
        if (!value["WecomCorpId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WecomAppChannelConfig.WecomCorpId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_wecomCorpId = string(value["WecomCorpId"].GetString());
        m_wecomCorpIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void WecomAppChannelConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_callbackHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Callback";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_callback.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_thirdChannelCorpIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ThirdChannelCorpId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_thirdChannelCorpId.c_str(), allocator).Move(), allocator);
    }

    if (m_thirdChannelIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ThirdChannelId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_thirdChannelId.c_str(), allocator).Move(), allocator);
    }

    if (m_wecomAgentIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WecomAgentId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_wecomAgentId.c_str(), allocator).Move(), allocator);
    }

    if (m_wecomAgentSecretHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WecomAgentSecret";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_wecomAgentSecret.c_str(), allocator).Move(), allocator);
    }

    if (m_wecomCorpIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WecomCorpId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_wecomCorpId.c_str(), allocator).Move(), allocator);
    }

}


CallbackConfig WecomAppChannelConfig::GetCallback() const
{
    return m_callback;
}

void WecomAppChannelConfig::SetCallback(const CallbackConfig& _callback)
{
    m_callback = _callback;
    m_callbackHasBeenSet = true;
}

bool WecomAppChannelConfig::CallbackHasBeenSet() const
{
    return m_callbackHasBeenSet;
}

string WecomAppChannelConfig::GetThirdChannelCorpId() const
{
    return m_thirdChannelCorpId;
}

void WecomAppChannelConfig::SetThirdChannelCorpId(const string& _thirdChannelCorpId)
{
    m_thirdChannelCorpId = _thirdChannelCorpId;
    m_thirdChannelCorpIdHasBeenSet = true;
}

bool WecomAppChannelConfig::ThirdChannelCorpIdHasBeenSet() const
{
    return m_thirdChannelCorpIdHasBeenSet;
}

string WecomAppChannelConfig::GetThirdChannelId() const
{
    return m_thirdChannelId;
}

void WecomAppChannelConfig::SetThirdChannelId(const string& _thirdChannelId)
{
    m_thirdChannelId = _thirdChannelId;
    m_thirdChannelIdHasBeenSet = true;
}

bool WecomAppChannelConfig::ThirdChannelIdHasBeenSet() const
{
    return m_thirdChannelIdHasBeenSet;
}

string WecomAppChannelConfig::GetWecomAgentId() const
{
    return m_wecomAgentId;
}

void WecomAppChannelConfig::SetWecomAgentId(const string& _wecomAgentId)
{
    m_wecomAgentId = _wecomAgentId;
    m_wecomAgentIdHasBeenSet = true;
}

bool WecomAppChannelConfig::WecomAgentIdHasBeenSet() const
{
    return m_wecomAgentIdHasBeenSet;
}

string WecomAppChannelConfig::GetWecomAgentSecret() const
{
    return m_wecomAgentSecret;
}

void WecomAppChannelConfig::SetWecomAgentSecret(const string& _wecomAgentSecret)
{
    m_wecomAgentSecret = _wecomAgentSecret;
    m_wecomAgentSecretHasBeenSet = true;
}

bool WecomAppChannelConfig::WecomAgentSecretHasBeenSet() const
{
    return m_wecomAgentSecretHasBeenSet;
}

string WecomAppChannelConfig::GetWecomCorpId() const
{
    return m_wecomCorpId;
}

void WecomAppChannelConfig::SetWecomCorpId(const string& _wecomCorpId)
{
    m_wecomCorpId = _wecomCorpId;
    m_wecomCorpIdHasBeenSet = true;
}

bool WecomAppChannelConfig::WecomCorpIdHasBeenSet() const
{
    return m_wecomCorpIdHasBeenSet;
}

