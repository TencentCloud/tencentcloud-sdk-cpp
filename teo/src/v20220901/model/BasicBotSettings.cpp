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

#include <tencentcloud/teo/v20220901/model/BasicBotSettings.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Teo::V20220901::Model;
using namespace std;

BasicBotSettings::BasicBotSettings() :
    m_sourceIDCHasBeenSet(false),
    m_searchEngineBotsHasBeenSet(false),
    m_knownBotCategoriesHasBeenSet(false),
    m_iPReputationHasBeenSet(false),
    m_botIntelligenceHasBeenSet(false)
{
}

CoreInternalOutcome BasicBotSettings::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SourceIDC") && !value["SourceIDC"].IsNull())
    {
        if (!value["SourceIDC"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `BasicBotSettings.SourceIDC` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_sourceIDC.Deserialize(value["SourceIDC"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_sourceIDCHasBeenSet = true;
    }

    if (value.HasMember("SearchEngineBots") && !value["SearchEngineBots"].IsNull())
    {
        if (!value["SearchEngineBots"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `BasicBotSettings.SearchEngineBots` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_searchEngineBots.Deserialize(value["SearchEngineBots"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_searchEngineBotsHasBeenSet = true;
    }

    if (value.HasMember("KnownBotCategories") && !value["KnownBotCategories"].IsNull())
    {
        if (!value["KnownBotCategories"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `BasicBotSettings.KnownBotCategories` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_knownBotCategories.Deserialize(value["KnownBotCategories"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_knownBotCategoriesHasBeenSet = true;
    }

    if (value.HasMember("IPReputation") && !value["IPReputation"].IsNull())
    {
        if (!value["IPReputation"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `BasicBotSettings.IPReputation` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_iPReputation.Deserialize(value["IPReputation"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_iPReputationHasBeenSet = true;
    }

    if (value.HasMember("BotIntelligence") && !value["BotIntelligence"].IsNull())
    {
        if (!value["BotIntelligence"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `BasicBotSettings.BotIntelligence` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_botIntelligence.Deserialize(value["BotIntelligence"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_botIntelligenceHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BasicBotSettings::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_sourceIDCHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceIDC";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_sourceIDC.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_searchEngineBotsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SearchEngineBots";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_searchEngineBots.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_knownBotCategoriesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KnownBotCategories";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_knownBotCategories.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_iPReputationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IPReputation";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_iPReputation.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_botIntelligenceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BotIntelligence";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_botIntelligence.ToJsonObject(value[key.c_str()], allocator);
    }

}


SourceIDC BasicBotSettings::GetSourceIDC() const
{
    return m_sourceIDC;
}

void BasicBotSettings::SetSourceIDC(const SourceIDC& _sourceIDC)
{
    m_sourceIDC = _sourceIDC;
    m_sourceIDCHasBeenSet = true;
}

bool BasicBotSettings::SourceIDCHasBeenSet() const
{
    return m_sourceIDCHasBeenSet;
}

SearchEngineBots BasicBotSettings::GetSearchEngineBots() const
{
    return m_searchEngineBots;
}

void BasicBotSettings::SetSearchEngineBots(const SearchEngineBots& _searchEngineBots)
{
    m_searchEngineBots = _searchEngineBots;
    m_searchEngineBotsHasBeenSet = true;
}

bool BasicBotSettings::SearchEngineBotsHasBeenSet() const
{
    return m_searchEngineBotsHasBeenSet;
}

KnownBotCategories BasicBotSettings::GetKnownBotCategories() const
{
    return m_knownBotCategories;
}

void BasicBotSettings::SetKnownBotCategories(const KnownBotCategories& _knownBotCategories)
{
    m_knownBotCategories = _knownBotCategories;
    m_knownBotCategoriesHasBeenSet = true;
}

bool BasicBotSettings::KnownBotCategoriesHasBeenSet() const
{
    return m_knownBotCategoriesHasBeenSet;
}

IPReputation BasicBotSettings::GetIPReputation() const
{
    return m_iPReputation;
}

void BasicBotSettings::SetIPReputation(const IPReputation& _iPReputation)
{
    m_iPReputation = _iPReputation;
    m_iPReputationHasBeenSet = true;
}

bool BasicBotSettings::IPReputationHasBeenSet() const
{
    return m_iPReputationHasBeenSet;
}

BotIntelligence BasicBotSettings::GetBotIntelligence() const
{
    return m_botIntelligence;
}

void BasicBotSettings::SetBotIntelligence(const BotIntelligence& _botIntelligence)
{
    m_botIntelligence = _botIntelligence;
    m_botIntelligenceHasBeenSet = true;
}

bool BasicBotSettings::BotIntelligenceHasBeenSet() const
{
    return m_botIntelligenceHasBeenSet;
}

