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

#include <tencentcloud/tsf/v20180326/model/Affinity.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tsf::V20180326::Model;
using namespace std;

Affinity::Affinity() :
    m_scopeHasBeenSet(false),
    m_weightHasBeenSet(false),
    m_pathsHasBeenSet(false)
{
}

CoreInternalOutcome Affinity::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Scope") && !value["Scope"].IsNull())
    {
        if (!value["Scope"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Affinity.Scope` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_scope = string(value["Scope"].GetString());
        m_scopeHasBeenSet = true;
    }

    if (value.HasMember("Weight") && !value["Weight"].IsNull())
    {
        if (!value["Weight"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Affinity.Weight` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_weight = string(value["Weight"].GetString());
        m_weightHasBeenSet = true;
    }

    if (value.HasMember("Paths") && !value["Paths"].IsNull())
    {
        if (!value["Paths"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Affinity.Paths` is not array type"));

        const rapidjson::Value &tmpValue = value["Paths"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            CommonOption item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_paths.push_back(item);
        }
        m_pathsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Affinity::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_scopeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Scope";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_scope.c_str(), allocator).Move(), allocator);
    }

    if (m_weightHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Weight";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_weight.c_str(), allocator).Move(), allocator);
    }

    if (m_pathsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Paths";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_paths.begin(); itr != m_paths.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string Affinity::GetScope() const
{
    return m_scope;
}

void Affinity::SetScope(const string& _scope)
{
    m_scope = _scope;
    m_scopeHasBeenSet = true;
}

bool Affinity::ScopeHasBeenSet() const
{
    return m_scopeHasBeenSet;
}

string Affinity::GetWeight() const
{
    return m_weight;
}

void Affinity::SetWeight(const string& _weight)
{
    m_weight = _weight;
    m_weightHasBeenSet = true;
}

bool Affinity::WeightHasBeenSet() const
{
    return m_weightHasBeenSet;
}

vector<CommonOption> Affinity::GetPaths() const
{
    return m_paths;
}

void Affinity::SetPaths(const vector<CommonOption>& _paths)
{
    m_paths = _paths;
    m_pathsHasBeenSet = true;
}

bool Affinity::PathsHasBeenSet() const
{
    return m_pathsHasBeenSet;
}

