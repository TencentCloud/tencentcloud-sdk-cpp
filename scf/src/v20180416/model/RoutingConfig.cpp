/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
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

#include <tencentcloud/scf/v20180416/model/RoutingConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Scf::V20180416::Model;
using namespace rapidjson;
using namespace std;

RoutingConfig::RoutingConfig() :
    m_additionalVersionWeightsHasBeenSet(false),
    m_addtionVersionMatchsHasBeenSet(false)
{
}

CoreInternalOutcome RoutingConfig::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("AdditionalVersionWeights") && !value["AdditionalVersionWeights"].IsNull())
    {
        if (!value["AdditionalVersionWeights"].IsArray())
            return CoreInternalOutcome(Error("response `RoutingConfig.AdditionalVersionWeights` is not array type"));

        const Value &tmpValue = value["AdditionalVersionWeights"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            VersionWeight item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_additionalVersionWeights.push_back(item);
        }
        m_additionalVersionWeightsHasBeenSet = true;
    }

    if (value.HasMember("AddtionVersionMatchs") && !value["AddtionVersionMatchs"].IsNull())
    {
        if (!value["AddtionVersionMatchs"].IsArray())
            return CoreInternalOutcome(Error("response `RoutingConfig.AddtionVersionMatchs` is not array type"));

        const Value &tmpValue = value["AddtionVersionMatchs"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            VersionMatch item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_addtionVersionMatchs.push_back(item);
        }
        m_addtionVersionMatchsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RoutingConfig::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_additionalVersionWeightsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "AdditionalVersionWeights";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_additionalVersionWeights.begin(); itr != m_additionalVersionWeights.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(Value(kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_addtionVersionMatchsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "AddtionVersionMatchs";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_addtionVersionMatchs.begin(); itr != m_addtionVersionMatchs.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(Value(kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


vector<VersionWeight> RoutingConfig::GetAdditionalVersionWeights() const
{
    return m_additionalVersionWeights;
}

void RoutingConfig::SetAdditionalVersionWeights(const vector<VersionWeight>& _additionalVersionWeights)
{
    m_additionalVersionWeights = _additionalVersionWeights;
    m_additionalVersionWeightsHasBeenSet = true;
}

bool RoutingConfig::AdditionalVersionWeightsHasBeenSet() const
{
    return m_additionalVersionWeightsHasBeenSet;
}

vector<VersionMatch> RoutingConfig::GetAddtionVersionMatchs() const
{
    return m_addtionVersionMatchs;
}

void RoutingConfig::SetAddtionVersionMatchs(const vector<VersionMatch>& _addtionVersionMatchs)
{
    m_addtionVersionMatchs = _addtionVersionMatchs;
    m_addtionVersionMatchsHasBeenSet = true;
}

bool RoutingConfig::AddtionVersionMatchsHasBeenSet() const
{
    return m_addtionVersionMatchsHasBeenSet;
}

