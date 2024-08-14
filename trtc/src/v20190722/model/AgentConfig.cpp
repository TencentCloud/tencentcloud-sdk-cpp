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

#include <tencentcloud/trtc/v20190722/model/AgentConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Trtc::V20190722::Model;
using namespace std;

AgentConfig::AgentConfig() :
    m_userIdHasBeenSet(false),
    m_userSigHasBeenSet(false),
    m_targetUserIdHasBeenSet(false),
    m_maxIdleTimeHasBeenSet(false),
    m_welcomeMessageHasBeenSet(false),
    m_interruptModeHasBeenSet(false),
    m_interruptSpeechDurationHasBeenSet(false)
{
}

CoreInternalOutcome AgentConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("UserId") && !value["UserId"].IsNull())
    {
        if (!value["UserId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AgentConfig.UserId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userId = string(value["UserId"].GetString());
        m_userIdHasBeenSet = true;
    }

    if (value.HasMember("UserSig") && !value["UserSig"].IsNull())
    {
        if (!value["UserSig"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AgentConfig.UserSig` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userSig = string(value["UserSig"].GetString());
        m_userSigHasBeenSet = true;
    }

    if (value.HasMember("TargetUserId") && !value["TargetUserId"].IsNull())
    {
        if (!value["TargetUserId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AgentConfig.TargetUserId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_targetUserId = string(value["TargetUserId"].GetString());
        m_targetUserIdHasBeenSet = true;
    }

    if (value.HasMember("MaxIdleTime") && !value["MaxIdleTime"].IsNull())
    {
        if (!value["MaxIdleTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AgentConfig.MaxIdleTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_maxIdleTime = value["MaxIdleTime"].GetUint64();
        m_maxIdleTimeHasBeenSet = true;
    }

    if (value.HasMember("WelcomeMessage") && !value["WelcomeMessage"].IsNull())
    {
        if (!value["WelcomeMessage"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AgentConfig.WelcomeMessage` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_welcomeMessage = string(value["WelcomeMessage"].GetString());
        m_welcomeMessageHasBeenSet = true;
    }

    if (value.HasMember("InterruptMode") && !value["InterruptMode"].IsNull())
    {
        if (!value["InterruptMode"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AgentConfig.InterruptMode` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_interruptMode = value["InterruptMode"].GetUint64();
        m_interruptModeHasBeenSet = true;
    }

    if (value.HasMember("InterruptSpeechDuration") && !value["InterruptSpeechDuration"].IsNull())
    {
        if (!value["InterruptSpeechDuration"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AgentConfig.InterruptSpeechDuration` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_interruptSpeechDuration = value["InterruptSpeechDuration"].GetUint64();
        m_interruptSpeechDurationHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AgentConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_userIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userId.c_str(), allocator).Move(), allocator);
    }

    if (m_userSigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserSig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userSig.c_str(), allocator).Move(), allocator);
    }

    if (m_targetUserIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetUserId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_targetUserId.c_str(), allocator).Move(), allocator);
    }

    if (m_maxIdleTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxIdleTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxIdleTime, allocator);
    }

    if (m_welcomeMessageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WelcomeMessage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_welcomeMessage.c_str(), allocator).Move(), allocator);
    }

    if (m_interruptModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InterruptMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_interruptMode, allocator);
    }

    if (m_interruptSpeechDurationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InterruptSpeechDuration";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_interruptSpeechDuration, allocator);
    }

}


string AgentConfig::GetUserId() const
{
    return m_userId;
}

void AgentConfig::SetUserId(const string& _userId)
{
    m_userId = _userId;
    m_userIdHasBeenSet = true;
}

bool AgentConfig::UserIdHasBeenSet() const
{
    return m_userIdHasBeenSet;
}

string AgentConfig::GetUserSig() const
{
    return m_userSig;
}

void AgentConfig::SetUserSig(const string& _userSig)
{
    m_userSig = _userSig;
    m_userSigHasBeenSet = true;
}

bool AgentConfig::UserSigHasBeenSet() const
{
    return m_userSigHasBeenSet;
}

string AgentConfig::GetTargetUserId() const
{
    return m_targetUserId;
}

void AgentConfig::SetTargetUserId(const string& _targetUserId)
{
    m_targetUserId = _targetUserId;
    m_targetUserIdHasBeenSet = true;
}

bool AgentConfig::TargetUserIdHasBeenSet() const
{
    return m_targetUserIdHasBeenSet;
}

uint64_t AgentConfig::GetMaxIdleTime() const
{
    return m_maxIdleTime;
}

void AgentConfig::SetMaxIdleTime(const uint64_t& _maxIdleTime)
{
    m_maxIdleTime = _maxIdleTime;
    m_maxIdleTimeHasBeenSet = true;
}

bool AgentConfig::MaxIdleTimeHasBeenSet() const
{
    return m_maxIdleTimeHasBeenSet;
}

string AgentConfig::GetWelcomeMessage() const
{
    return m_welcomeMessage;
}

void AgentConfig::SetWelcomeMessage(const string& _welcomeMessage)
{
    m_welcomeMessage = _welcomeMessage;
    m_welcomeMessageHasBeenSet = true;
}

bool AgentConfig::WelcomeMessageHasBeenSet() const
{
    return m_welcomeMessageHasBeenSet;
}

uint64_t AgentConfig::GetInterruptMode() const
{
    return m_interruptMode;
}

void AgentConfig::SetInterruptMode(const uint64_t& _interruptMode)
{
    m_interruptMode = _interruptMode;
    m_interruptModeHasBeenSet = true;
}

bool AgentConfig::InterruptModeHasBeenSet() const
{
    return m_interruptModeHasBeenSet;
}

uint64_t AgentConfig::GetInterruptSpeechDuration() const
{
    return m_interruptSpeechDuration;
}

void AgentConfig::SetInterruptSpeechDuration(const uint64_t& _interruptSpeechDuration)
{
    m_interruptSpeechDuration = _interruptSpeechDuration;
    m_interruptSpeechDurationHasBeenSet = true;
}

bool AgentConfig::InterruptSpeechDurationHasBeenSet() const
{
    return m_interruptSpeechDurationHasBeenSet;
}

