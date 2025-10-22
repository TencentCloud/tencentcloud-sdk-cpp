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

#include <tencentcloud/teo/v20220901/model/BotIntelligence.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Teo::V20220901::Model;
using namespace std;

BotIntelligence::BotIntelligence() :
    m_botRatingsHasBeenSet(false),
    m_enabledHasBeenSet(false)
{
}

CoreInternalOutcome BotIntelligence::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("BotRatings") && !value["BotRatings"].IsNull())
    {
        if (!value["BotRatings"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `BotIntelligence.BotRatings` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_botRatings.Deserialize(value["BotRatings"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_botRatingsHasBeenSet = true;
    }

    if (value.HasMember("Enabled") && !value["Enabled"].IsNull())
    {
        if (!value["Enabled"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BotIntelligence.Enabled` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_enabled = string(value["Enabled"].GetString());
        m_enabledHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BotIntelligence::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_botRatingsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BotRatings";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_botRatings.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_enabledHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Enabled";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_enabled.c_str(), allocator).Move(), allocator);
    }

}


BotRatings BotIntelligence::GetBotRatings() const
{
    return m_botRatings;
}

void BotIntelligence::SetBotRatings(const BotRatings& _botRatings)
{
    m_botRatings = _botRatings;
    m_botRatingsHasBeenSet = true;
}

bool BotIntelligence::BotRatingsHasBeenSet() const
{
    return m_botRatingsHasBeenSet;
}

string BotIntelligence::GetEnabled() const
{
    return m_enabled;
}

void BotIntelligence::SetEnabled(const string& _enabled)
{
    m_enabled = _enabled;
    m_enabledHasBeenSet = true;
}

bool BotIntelligence::EnabledHasBeenSet() const
{
    return m_enabledHasBeenSet;
}

