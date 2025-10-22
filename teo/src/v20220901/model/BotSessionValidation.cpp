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

#include <tencentcloud/teo/v20220901/model/BotSessionValidation.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Teo::V20220901::Model;
using namespace std;

BotSessionValidation::BotSessionValidation() :
    m_issueNewBotSessionCookieHasBeenSet(false),
    m_maxNewSessionTriggerConfigHasBeenSet(false),
    m_sessionExpiredActionHasBeenSet(false),
    m_sessionInvalidActionHasBeenSet(false),
    m_sessionRateControlHasBeenSet(false)
{
}

CoreInternalOutcome BotSessionValidation::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("IssueNewBotSessionCookie") && !value["IssueNewBotSessionCookie"].IsNull())
    {
        if (!value["IssueNewBotSessionCookie"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BotSessionValidation.IssueNewBotSessionCookie` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_issueNewBotSessionCookie = string(value["IssueNewBotSessionCookie"].GetString());
        m_issueNewBotSessionCookieHasBeenSet = true;
    }

    if (value.HasMember("MaxNewSessionTriggerConfig") && !value["MaxNewSessionTriggerConfig"].IsNull())
    {
        if (!value["MaxNewSessionTriggerConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `BotSessionValidation.MaxNewSessionTriggerConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_maxNewSessionTriggerConfig.Deserialize(value["MaxNewSessionTriggerConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_maxNewSessionTriggerConfigHasBeenSet = true;
    }

    if (value.HasMember("SessionExpiredAction") && !value["SessionExpiredAction"].IsNull())
    {
        if (!value["SessionExpiredAction"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `BotSessionValidation.SessionExpiredAction` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_sessionExpiredAction.Deserialize(value["SessionExpiredAction"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_sessionExpiredActionHasBeenSet = true;
    }

    if (value.HasMember("SessionInvalidAction") && !value["SessionInvalidAction"].IsNull())
    {
        if (!value["SessionInvalidAction"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `BotSessionValidation.SessionInvalidAction` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_sessionInvalidAction.Deserialize(value["SessionInvalidAction"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_sessionInvalidActionHasBeenSet = true;
    }

    if (value.HasMember("SessionRateControl") && !value["SessionRateControl"].IsNull())
    {
        if (!value["SessionRateControl"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `BotSessionValidation.SessionRateControl` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_sessionRateControl.Deserialize(value["SessionRateControl"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_sessionRateControlHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BotSessionValidation::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_issueNewBotSessionCookieHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IssueNewBotSessionCookie";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_issueNewBotSessionCookie.c_str(), allocator).Move(), allocator);
    }

    if (m_maxNewSessionTriggerConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxNewSessionTriggerConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_maxNewSessionTriggerConfig.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_sessionExpiredActionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SessionExpiredAction";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_sessionExpiredAction.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_sessionInvalidActionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SessionInvalidAction";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_sessionInvalidAction.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_sessionRateControlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SessionRateControl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_sessionRateControl.ToJsonObject(value[key.c_str()], allocator);
    }

}


string BotSessionValidation::GetIssueNewBotSessionCookie() const
{
    return m_issueNewBotSessionCookie;
}

void BotSessionValidation::SetIssueNewBotSessionCookie(const string& _issueNewBotSessionCookie)
{
    m_issueNewBotSessionCookie = _issueNewBotSessionCookie;
    m_issueNewBotSessionCookieHasBeenSet = true;
}

bool BotSessionValidation::IssueNewBotSessionCookieHasBeenSet() const
{
    return m_issueNewBotSessionCookieHasBeenSet;
}

MaxNewSessionTriggerConfig BotSessionValidation::GetMaxNewSessionTriggerConfig() const
{
    return m_maxNewSessionTriggerConfig;
}

void BotSessionValidation::SetMaxNewSessionTriggerConfig(const MaxNewSessionTriggerConfig& _maxNewSessionTriggerConfig)
{
    m_maxNewSessionTriggerConfig = _maxNewSessionTriggerConfig;
    m_maxNewSessionTriggerConfigHasBeenSet = true;
}

bool BotSessionValidation::MaxNewSessionTriggerConfigHasBeenSet() const
{
    return m_maxNewSessionTriggerConfigHasBeenSet;
}

SecurityAction BotSessionValidation::GetSessionExpiredAction() const
{
    return m_sessionExpiredAction;
}

void BotSessionValidation::SetSessionExpiredAction(const SecurityAction& _sessionExpiredAction)
{
    m_sessionExpiredAction = _sessionExpiredAction;
    m_sessionExpiredActionHasBeenSet = true;
}

bool BotSessionValidation::SessionExpiredActionHasBeenSet() const
{
    return m_sessionExpiredActionHasBeenSet;
}

SecurityAction BotSessionValidation::GetSessionInvalidAction() const
{
    return m_sessionInvalidAction;
}

void BotSessionValidation::SetSessionInvalidAction(const SecurityAction& _sessionInvalidAction)
{
    m_sessionInvalidAction = _sessionInvalidAction;
    m_sessionInvalidActionHasBeenSet = true;
}

bool BotSessionValidation::SessionInvalidActionHasBeenSet() const
{
    return m_sessionInvalidActionHasBeenSet;
}

SessionRateControl BotSessionValidation::GetSessionRateControl() const
{
    return m_sessionRateControl;
}

void BotSessionValidation::SetSessionRateControl(const SessionRateControl& _sessionRateControl)
{
    m_sessionRateControl = _sessionRateControl;
    m_sessionRateControlHasBeenSet = true;
}

bool BotSessionValidation::SessionRateControlHasBeenSet() const
{
    return m_sessionRateControlHasBeenSet;
}

