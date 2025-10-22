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

#include <tencentcloud/teo/v20220901/model/BrowserImpersonationDetectionAction.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Teo::V20220901::Model;
using namespace std;

BrowserImpersonationDetectionAction::BrowserImpersonationDetectionAction() :
    m_botSessionValidationHasBeenSet(false),
    m_clientBehaviorDetectionHasBeenSet(false)
{
}

CoreInternalOutcome BrowserImpersonationDetectionAction::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("BotSessionValidation") && !value["BotSessionValidation"].IsNull())
    {
        if (!value["BotSessionValidation"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `BrowserImpersonationDetectionAction.BotSessionValidation` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_botSessionValidation.Deserialize(value["BotSessionValidation"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_botSessionValidationHasBeenSet = true;
    }

    if (value.HasMember("ClientBehaviorDetection") && !value["ClientBehaviorDetection"].IsNull())
    {
        if (!value["ClientBehaviorDetection"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `BrowserImpersonationDetectionAction.ClientBehaviorDetection` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_clientBehaviorDetection.Deserialize(value["ClientBehaviorDetection"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_clientBehaviorDetectionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BrowserImpersonationDetectionAction::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_botSessionValidationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BotSessionValidation";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_botSessionValidation.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_clientBehaviorDetectionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClientBehaviorDetection";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_clientBehaviorDetection.ToJsonObject(value[key.c_str()], allocator);
    }

}


BotSessionValidation BrowserImpersonationDetectionAction::GetBotSessionValidation() const
{
    return m_botSessionValidation;
}

void BrowserImpersonationDetectionAction::SetBotSessionValidation(const BotSessionValidation& _botSessionValidation)
{
    m_botSessionValidation = _botSessionValidation;
    m_botSessionValidationHasBeenSet = true;
}

bool BrowserImpersonationDetectionAction::BotSessionValidationHasBeenSet() const
{
    return m_botSessionValidationHasBeenSet;
}

ClientBehaviorDetection BrowserImpersonationDetectionAction::GetClientBehaviorDetection() const
{
    return m_clientBehaviorDetection;
}

void BrowserImpersonationDetectionAction::SetClientBehaviorDetection(const ClientBehaviorDetection& _clientBehaviorDetection)
{
    m_clientBehaviorDetection = _clientBehaviorDetection;
    m_clientBehaviorDetectionHasBeenSet = true;
}

bool BrowserImpersonationDetectionAction::ClientBehaviorDetectionHasBeenSet() const
{
    return m_clientBehaviorDetectionHasBeenSet;
}

