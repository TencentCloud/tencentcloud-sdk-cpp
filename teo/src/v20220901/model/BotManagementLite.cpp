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

#include <tencentcloud/teo/v20220901/model/BotManagementLite.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Teo::V20220901::Model;
using namespace std;

BotManagementLite::BotManagementLite() :
    m_cAPTCHAPageChallengeHasBeenSet(false),
    m_aICrawlerDetectionHasBeenSet(false)
{
}

CoreInternalOutcome BotManagementLite::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CAPTCHAPageChallenge") && !value["CAPTCHAPageChallenge"].IsNull())
    {
        if (!value["CAPTCHAPageChallenge"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `BotManagementLite.CAPTCHAPageChallenge` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_cAPTCHAPageChallenge.Deserialize(value["CAPTCHAPageChallenge"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_cAPTCHAPageChallengeHasBeenSet = true;
    }

    if (value.HasMember("AICrawlerDetection") && !value["AICrawlerDetection"].IsNull())
    {
        if (!value["AICrawlerDetection"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `BotManagementLite.AICrawlerDetection` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_aICrawlerDetection.Deserialize(value["AICrawlerDetection"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_aICrawlerDetectionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BotManagementLite::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_cAPTCHAPageChallengeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CAPTCHAPageChallenge";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_cAPTCHAPageChallenge.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_aICrawlerDetectionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AICrawlerDetection";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_aICrawlerDetection.ToJsonObject(value[key.c_str()], allocator);
    }

}


CAPTCHAPageChallenge BotManagementLite::GetCAPTCHAPageChallenge() const
{
    return m_cAPTCHAPageChallenge;
}

void BotManagementLite::SetCAPTCHAPageChallenge(const CAPTCHAPageChallenge& _cAPTCHAPageChallenge)
{
    m_cAPTCHAPageChallenge = _cAPTCHAPageChallenge;
    m_cAPTCHAPageChallengeHasBeenSet = true;
}

bool BotManagementLite::CAPTCHAPageChallengeHasBeenSet() const
{
    return m_cAPTCHAPageChallengeHasBeenSet;
}

AICrawlerDetection BotManagementLite::GetAICrawlerDetection() const
{
    return m_aICrawlerDetection;
}

void BotManagementLite::SetAICrawlerDetection(const AICrawlerDetection& _aICrawlerDetection)
{
    m_aICrawlerDetection = _aICrawlerDetection;
    m_aICrawlerDetectionHasBeenSet = true;
}

bool BotManagementLite::AICrawlerDetectionHasBeenSet() const
{
    return m_aICrawlerDetectionHasBeenSet;
}

