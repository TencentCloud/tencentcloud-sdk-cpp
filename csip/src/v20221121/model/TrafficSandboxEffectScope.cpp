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

#include <tencentcloud/csip/v20221121/model/TrafficSandboxEffectScope.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

TrafficSandboxEffectScope::TrafficSandboxEffectScope() :
    m_effectTypeHasBeenSet(false),
    m_effectAssetsHasBeenSet(false)
{
}

CoreInternalOutcome TrafficSandboxEffectScope::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("EffectType") && !value["EffectType"].IsNull())
    {
        if (!value["EffectType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TrafficSandboxEffectScope.EffectType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_effectType = string(value["EffectType"].GetString());
        m_effectTypeHasBeenSet = true;
    }

    if (value.HasMember("EffectAssets") && !value["EffectAssets"].IsNull())
    {
        if (!value["EffectAssets"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TrafficSandboxEffectScope.EffectAssets` is not array type"));

        const rapidjson::Value &tmpValue = value["EffectAssets"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            TrafficSandboxAssetScope item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_effectAssets.push_back(item);
        }
        m_effectAssetsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TrafficSandboxEffectScope::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_effectTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EffectType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_effectType.c_str(), allocator).Move(), allocator);
    }

    if (m_effectAssetsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EffectAssets";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_effectAssets.begin(); itr != m_effectAssets.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string TrafficSandboxEffectScope::GetEffectType() const
{
    return m_effectType;
}

void TrafficSandboxEffectScope::SetEffectType(const string& _effectType)
{
    m_effectType = _effectType;
    m_effectTypeHasBeenSet = true;
}

bool TrafficSandboxEffectScope::EffectTypeHasBeenSet() const
{
    return m_effectTypeHasBeenSet;
}

vector<TrafficSandboxAssetScope> TrafficSandboxEffectScope::GetEffectAssets() const
{
    return m_effectAssets;
}

void TrafficSandboxEffectScope::SetEffectAssets(const vector<TrafficSandboxAssetScope>& _effectAssets)
{
    m_effectAssets = _effectAssets;
    m_effectAssetsHasBeenSet = true;
}

bool TrafficSandboxEffectScope::EffectAssetsHasBeenSet() const
{
    return m_effectAssetsHasBeenSet;
}

