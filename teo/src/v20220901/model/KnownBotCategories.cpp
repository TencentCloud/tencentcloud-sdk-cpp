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

#include <tencentcloud/teo/v20220901/model/KnownBotCategories.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Teo::V20220901::Model;
using namespace std;

KnownBotCategories::KnownBotCategories() :
    m_baseActionHasBeenSet(false),
    m_botManagementActionOverridesHasBeenSet(false)
{
}

CoreInternalOutcome KnownBotCategories::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("BaseAction") && !value["BaseAction"].IsNull())
    {
        if (!value["BaseAction"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `KnownBotCategories.BaseAction` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_baseAction.Deserialize(value["BaseAction"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_baseActionHasBeenSet = true;
    }

    if (value.HasMember("BotManagementActionOverrides") && !value["BotManagementActionOverrides"].IsNull())
    {
        if (!value["BotManagementActionOverrides"].IsArray())
            return CoreInternalOutcome(Core::Error("response `KnownBotCategories.BotManagementActionOverrides` is not array type"));

        const rapidjson::Value &tmpValue = value["BotManagementActionOverrides"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            BotManagementActionOverrides item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_botManagementActionOverrides.push_back(item);
        }
        m_botManagementActionOverridesHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void KnownBotCategories::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_baseActionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BaseAction";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_baseAction.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_botManagementActionOverridesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BotManagementActionOverrides";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_botManagementActionOverrides.begin(); itr != m_botManagementActionOverrides.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


SecurityAction KnownBotCategories::GetBaseAction() const
{
    return m_baseAction;
}

void KnownBotCategories::SetBaseAction(const SecurityAction& _baseAction)
{
    m_baseAction = _baseAction;
    m_baseActionHasBeenSet = true;
}

bool KnownBotCategories::BaseActionHasBeenSet() const
{
    return m_baseActionHasBeenSet;
}

vector<BotManagementActionOverrides> KnownBotCategories::GetBotManagementActionOverrides() const
{
    return m_botManagementActionOverrides;
}

void KnownBotCategories::SetBotManagementActionOverrides(const vector<BotManagementActionOverrides>& _botManagementActionOverrides)
{
    m_botManagementActionOverrides = _botManagementActionOverrides;
    m_botManagementActionOverridesHasBeenSet = true;
}

bool KnownBotCategories::BotManagementActionOverridesHasBeenSet() const
{
    return m_botManagementActionOverridesHasBeenSet;
}

