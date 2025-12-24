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

#include <tencentcloud/cdn/v20180606/model/GeoBlocker.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cdn::V20180606::Model;
using namespace std;

GeoBlocker::GeoBlocker() :
    m_switchHasBeenSet(false),
    m_blockRulesHasBeenSet(false)
{
}

CoreInternalOutcome GeoBlocker::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Switch") && !value["Switch"].IsNull())
    {
        if (!value["Switch"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GeoBlocker.Switch` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_switch = string(value["Switch"].GetString());
        m_switchHasBeenSet = true;
    }

    if (value.HasMember("BlockRules") && !value["BlockRules"].IsNull())
    {
        if (!value["BlockRules"].IsArray())
            return CoreInternalOutcome(Core::Error("response `GeoBlocker.BlockRules` is not array type"));

        const rapidjson::Value &tmpValue = value["BlockRules"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            GeoBlockStrategy item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_blockRules.push_back(item);
        }
        m_blockRulesHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void GeoBlocker::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_switchHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Switch";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_switch.c_str(), allocator).Move(), allocator);
    }

    if (m_blockRulesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BlockRules";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_blockRules.begin(); itr != m_blockRules.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string GeoBlocker::GetSwitch() const
{
    return m_switch;
}

void GeoBlocker::SetSwitch(const string& _switch)
{
    m_switch = _switch;
    m_switchHasBeenSet = true;
}

bool GeoBlocker::SwitchHasBeenSet() const
{
    return m_switchHasBeenSet;
}

vector<GeoBlockStrategy> GeoBlocker::GetBlockRules() const
{
    return m_blockRules;
}

void GeoBlocker::SetBlockRules(const vector<GeoBlockStrategy>& _blockRules)
{
    m_blockRules = _blockRules;
    m_blockRulesHasBeenSet = true;
}

bool GeoBlocker::BlockRulesHasBeenSet() const
{
    return m_blockRulesHasBeenSet;
}

