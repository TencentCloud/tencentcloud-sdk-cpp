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

#include <tencentcloud/teo/v20220901/model/BotManagementActionOverrides.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Teo::V20220901::Model;
using namespace std;

BotManagementActionOverrides::BotManagementActionOverrides() :
    m_idsHasBeenSet(false),
    m_actionHasBeenSet(false)
{
}

CoreInternalOutcome BotManagementActionOverrides::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Ids") && !value["Ids"].IsNull())
    {
        if (!value["Ids"].IsArray())
            return CoreInternalOutcome(Core::Error("response `BotManagementActionOverrides.Ids` is not array type"));

        const rapidjson::Value &tmpValue = value["Ids"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_ids.push_back((*itr).GetString());
        }
        m_idsHasBeenSet = true;
    }

    if (value.HasMember("Action") && !value["Action"].IsNull())
    {
        if (!value["Action"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `BotManagementActionOverrides.Action` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_action.Deserialize(value["Action"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_actionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BotManagementActionOverrides::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_idsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Ids";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_ids.begin(); itr != m_ids.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_actionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Action";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_action.ToJsonObject(value[key.c_str()], allocator);
    }

}


vector<string> BotManagementActionOverrides::GetIds() const
{
    return m_ids;
}

void BotManagementActionOverrides::SetIds(const vector<string>& _ids)
{
    m_ids = _ids;
    m_idsHasBeenSet = true;
}

bool BotManagementActionOverrides::IdsHasBeenSet() const
{
    return m_idsHasBeenSet;
}

SecurityAction BotManagementActionOverrides::GetAction() const
{
    return m_action;
}

void BotManagementActionOverrides::SetAction(const SecurityAction& _action)
{
    m_action = _action;
    m_actionHasBeenSet = true;
}

bool BotManagementActionOverrides::ActionHasBeenSet() const
{
    return m_actionHasBeenSet;
}

