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

#include <tencentcloud/teo/v20220901/model/ClientBehaviorDetection.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Teo::V20220901::Model;
using namespace std;

ClientBehaviorDetection::ClientBehaviorDetection() :
    m_cryptoChallengeIntensityHasBeenSet(false),
    m_cryptoChallengeDelayBeforeHasBeenSet(false),
    m_maxChallengeCountIntervalHasBeenSet(false),
    m_maxChallengeCountThresholdHasBeenSet(false),
    m_challengeNotFinishedActionHasBeenSet(false),
    m_challengeTimeoutActionHasBeenSet(false),
    m_botClientActionHasBeenSet(false)
{
}

CoreInternalOutcome ClientBehaviorDetection::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CryptoChallengeIntensity") && !value["CryptoChallengeIntensity"].IsNull())
    {
        if (!value["CryptoChallengeIntensity"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClientBehaviorDetection.CryptoChallengeIntensity` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cryptoChallengeIntensity = string(value["CryptoChallengeIntensity"].GetString());
        m_cryptoChallengeIntensityHasBeenSet = true;
    }

    if (value.HasMember("CryptoChallengeDelayBefore") && !value["CryptoChallengeDelayBefore"].IsNull())
    {
        if (!value["CryptoChallengeDelayBefore"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClientBehaviorDetection.CryptoChallengeDelayBefore` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cryptoChallengeDelayBefore = string(value["CryptoChallengeDelayBefore"].GetString());
        m_cryptoChallengeDelayBeforeHasBeenSet = true;
    }

    if (value.HasMember("MaxChallengeCountInterval") && !value["MaxChallengeCountInterval"].IsNull())
    {
        if (!value["MaxChallengeCountInterval"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClientBehaviorDetection.MaxChallengeCountInterval` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_maxChallengeCountInterval = string(value["MaxChallengeCountInterval"].GetString());
        m_maxChallengeCountIntervalHasBeenSet = true;
    }

    if (value.HasMember("MaxChallengeCountThreshold") && !value["MaxChallengeCountThreshold"].IsNull())
    {
        if (!value["MaxChallengeCountThreshold"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ClientBehaviorDetection.MaxChallengeCountThreshold` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_maxChallengeCountThreshold = value["MaxChallengeCountThreshold"].GetInt64();
        m_maxChallengeCountThresholdHasBeenSet = true;
    }

    if (value.HasMember("ChallengeNotFinishedAction") && !value["ChallengeNotFinishedAction"].IsNull())
    {
        if (!value["ChallengeNotFinishedAction"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ClientBehaviorDetection.ChallengeNotFinishedAction` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_challengeNotFinishedAction.Deserialize(value["ChallengeNotFinishedAction"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_challengeNotFinishedActionHasBeenSet = true;
    }

    if (value.HasMember("ChallengeTimeoutAction") && !value["ChallengeTimeoutAction"].IsNull())
    {
        if (!value["ChallengeTimeoutAction"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ClientBehaviorDetection.ChallengeTimeoutAction` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_challengeTimeoutAction.Deserialize(value["ChallengeTimeoutAction"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_challengeTimeoutActionHasBeenSet = true;
    }

    if (value.HasMember("BotClientAction") && !value["BotClientAction"].IsNull())
    {
        if (!value["BotClientAction"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ClientBehaviorDetection.BotClientAction` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_botClientAction.Deserialize(value["BotClientAction"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_botClientActionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ClientBehaviorDetection::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_cryptoChallengeIntensityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CryptoChallengeIntensity";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cryptoChallengeIntensity.c_str(), allocator).Move(), allocator);
    }

    if (m_cryptoChallengeDelayBeforeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CryptoChallengeDelayBefore";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cryptoChallengeDelayBefore.c_str(), allocator).Move(), allocator);
    }

    if (m_maxChallengeCountIntervalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxChallengeCountInterval";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_maxChallengeCountInterval.c_str(), allocator).Move(), allocator);
    }

    if (m_maxChallengeCountThresholdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxChallengeCountThreshold";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxChallengeCountThreshold, allocator);
    }

    if (m_challengeNotFinishedActionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChallengeNotFinishedAction";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_challengeNotFinishedAction.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_challengeTimeoutActionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChallengeTimeoutAction";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_challengeTimeoutAction.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_botClientActionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BotClientAction";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_botClientAction.ToJsonObject(value[key.c_str()], allocator);
    }

}


string ClientBehaviorDetection::GetCryptoChallengeIntensity() const
{
    return m_cryptoChallengeIntensity;
}

void ClientBehaviorDetection::SetCryptoChallengeIntensity(const string& _cryptoChallengeIntensity)
{
    m_cryptoChallengeIntensity = _cryptoChallengeIntensity;
    m_cryptoChallengeIntensityHasBeenSet = true;
}

bool ClientBehaviorDetection::CryptoChallengeIntensityHasBeenSet() const
{
    return m_cryptoChallengeIntensityHasBeenSet;
}

string ClientBehaviorDetection::GetCryptoChallengeDelayBefore() const
{
    return m_cryptoChallengeDelayBefore;
}

void ClientBehaviorDetection::SetCryptoChallengeDelayBefore(const string& _cryptoChallengeDelayBefore)
{
    m_cryptoChallengeDelayBefore = _cryptoChallengeDelayBefore;
    m_cryptoChallengeDelayBeforeHasBeenSet = true;
}

bool ClientBehaviorDetection::CryptoChallengeDelayBeforeHasBeenSet() const
{
    return m_cryptoChallengeDelayBeforeHasBeenSet;
}

string ClientBehaviorDetection::GetMaxChallengeCountInterval() const
{
    return m_maxChallengeCountInterval;
}

void ClientBehaviorDetection::SetMaxChallengeCountInterval(const string& _maxChallengeCountInterval)
{
    m_maxChallengeCountInterval = _maxChallengeCountInterval;
    m_maxChallengeCountIntervalHasBeenSet = true;
}

bool ClientBehaviorDetection::MaxChallengeCountIntervalHasBeenSet() const
{
    return m_maxChallengeCountIntervalHasBeenSet;
}

int64_t ClientBehaviorDetection::GetMaxChallengeCountThreshold() const
{
    return m_maxChallengeCountThreshold;
}

void ClientBehaviorDetection::SetMaxChallengeCountThreshold(const int64_t& _maxChallengeCountThreshold)
{
    m_maxChallengeCountThreshold = _maxChallengeCountThreshold;
    m_maxChallengeCountThresholdHasBeenSet = true;
}

bool ClientBehaviorDetection::MaxChallengeCountThresholdHasBeenSet() const
{
    return m_maxChallengeCountThresholdHasBeenSet;
}

SecurityAction ClientBehaviorDetection::GetChallengeNotFinishedAction() const
{
    return m_challengeNotFinishedAction;
}

void ClientBehaviorDetection::SetChallengeNotFinishedAction(const SecurityAction& _challengeNotFinishedAction)
{
    m_challengeNotFinishedAction = _challengeNotFinishedAction;
    m_challengeNotFinishedActionHasBeenSet = true;
}

bool ClientBehaviorDetection::ChallengeNotFinishedActionHasBeenSet() const
{
    return m_challengeNotFinishedActionHasBeenSet;
}

SecurityAction ClientBehaviorDetection::GetChallengeTimeoutAction() const
{
    return m_challengeTimeoutAction;
}

void ClientBehaviorDetection::SetChallengeTimeoutAction(const SecurityAction& _challengeTimeoutAction)
{
    m_challengeTimeoutAction = _challengeTimeoutAction;
    m_challengeTimeoutActionHasBeenSet = true;
}

bool ClientBehaviorDetection::ChallengeTimeoutActionHasBeenSet() const
{
    return m_challengeTimeoutActionHasBeenSet;
}

SecurityAction ClientBehaviorDetection::GetBotClientAction() const
{
    return m_botClientAction;
}

void ClientBehaviorDetection::SetBotClientAction(const SecurityAction& _botClientAction)
{
    m_botClientAction = _botClientAction;
    m_botClientActionHasBeenSet = true;
}

bool ClientBehaviorDetection::BotClientActionHasBeenSet() const
{
    return m_botClientActionHasBeenSet;
}

