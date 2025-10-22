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

#include <tencentcloud/teo/v20220901/model/BotRatings.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Teo::V20220901::Model;
using namespace std;

BotRatings::BotRatings() :
    m_highRiskBotRequestsActionHasBeenSet(false),
    m_likelyBotRequestsActionHasBeenSet(false),
    m_verifiedBotRequestsActionHasBeenSet(false),
    m_humanRequestsActionHasBeenSet(false)
{
}

CoreInternalOutcome BotRatings::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("HighRiskBotRequestsAction") && !value["HighRiskBotRequestsAction"].IsNull())
    {
        if (!value["HighRiskBotRequestsAction"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `BotRatings.HighRiskBotRequestsAction` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_highRiskBotRequestsAction.Deserialize(value["HighRiskBotRequestsAction"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_highRiskBotRequestsActionHasBeenSet = true;
    }

    if (value.HasMember("LikelyBotRequestsAction") && !value["LikelyBotRequestsAction"].IsNull())
    {
        if (!value["LikelyBotRequestsAction"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `BotRatings.LikelyBotRequestsAction` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_likelyBotRequestsAction.Deserialize(value["LikelyBotRequestsAction"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_likelyBotRequestsActionHasBeenSet = true;
    }

    if (value.HasMember("VerifiedBotRequestsAction") && !value["VerifiedBotRequestsAction"].IsNull())
    {
        if (!value["VerifiedBotRequestsAction"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `BotRatings.VerifiedBotRequestsAction` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_verifiedBotRequestsAction.Deserialize(value["VerifiedBotRequestsAction"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_verifiedBotRequestsActionHasBeenSet = true;
    }

    if (value.HasMember("HumanRequestsAction") && !value["HumanRequestsAction"].IsNull())
    {
        if (!value["HumanRequestsAction"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `BotRatings.HumanRequestsAction` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_humanRequestsAction.Deserialize(value["HumanRequestsAction"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_humanRequestsActionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BotRatings::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_highRiskBotRequestsActionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HighRiskBotRequestsAction";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_highRiskBotRequestsAction.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_likelyBotRequestsActionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LikelyBotRequestsAction";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_likelyBotRequestsAction.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_verifiedBotRequestsActionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VerifiedBotRequestsAction";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_verifiedBotRequestsAction.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_humanRequestsActionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HumanRequestsAction";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_humanRequestsAction.ToJsonObject(value[key.c_str()], allocator);
    }

}


SecurityAction BotRatings::GetHighRiskBotRequestsAction() const
{
    return m_highRiskBotRequestsAction;
}

void BotRatings::SetHighRiskBotRequestsAction(const SecurityAction& _highRiskBotRequestsAction)
{
    m_highRiskBotRequestsAction = _highRiskBotRequestsAction;
    m_highRiskBotRequestsActionHasBeenSet = true;
}

bool BotRatings::HighRiskBotRequestsActionHasBeenSet() const
{
    return m_highRiskBotRequestsActionHasBeenSet;
}

SecurityAction BotRatings::GetLikelyBotRequestsAction() const
{
    return m_likelyBotRequestsAction;
}

void BotRatings::SetLikelyBotRequestsAction(const SecurityAction& _likelyBotRequestsAction)
{
    m_likelyBotRequestsAction = _likelyBotRequestsAction;
    m_likelyBotRequestsActionHasBeenSet = true;
}

bool BotRatings::LikelyBotRequestsActionHasBeenSet() const
{
    return m_likelyBotRequestsActionHasBeenSet;
}

SecurityAction BotRatings::GetVerifiedBotRequestsAction() const
{
    return m_verifiedBotRequestsAction;
}

void BotRatings::SetVerifiedBotRequestsAction(const SecurityAction& _verifiedBotRequestsAction)
{
    m_verifiedBotRequestsAction = _verifiedBotRequestsAction;
    m_verifiedBotRequestsActionHasBeenSet = true;
}

bool BotRatings::VerifiedBotRequestsActionHasBeenSet() const
{
    return m_verifiedBotRequestsActionHasBeenSet;
}

SecurityAction BotRatings::GetHumanRequestsAction() const
{
    return m_humanRequestsAction;
}

void BotRatings::SetHumanRequestsAction(const SecurityAction& _humanRequestsAction)
{
    m_humanRequestsAction = _humanRequestsAction;
    m_humanRequestsActionHasBeenSet = true;
}

bool BotRatings::HumanRequestsActionHasBeenSet() const
{
    return m_humanRequestsActionHasBeenSet;
}

