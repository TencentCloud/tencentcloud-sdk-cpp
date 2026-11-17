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

#include <tencentcloud/makers/v20261113/model/Regions.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Makers::V20261113::Model;
using namespace std;

Regions::Regions() :
    m_mainlandHasBeenSet(false),
    m_overseasHasBeenSet(false)
{
}

CoreInternalOutcome Regions::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Mainland") && !value["Mainland"].IsNull())
    {
        if (!value["Mainland"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Regions.Mainland` is not array type"));

        const rapidjson::Value &tmpValue = value["Mainland"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_mainland.push_back((*itr).GetString());
        }
        m_mainlandHasBeenSet = true;
    }

    if (value.HasMember("Overseas") && !value["Overseas"].IsNull())
    {
        if (!value["Overseas"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Regions.Overseas` is not array type"));

        const rapidjson::Value &tmpValue = value["Overseas"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_overseas.push_back((*itr).GetString());
        }
        m_overseasHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Regions::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_mainlandHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Mainland";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_mainland.begin(); itr != m_mainland.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_overseasHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Overseas";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_overseas.begin(); itr != m_overseas.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


vector<string> Regions::GetMainland() const
{
    return m_mainland;
}

void Regions::SetMainland(const vector<string>& _mainland)
{
    m_mainland = _mainland;
    m_mainlandHasBeenSet = true;
}

bool Regions::MainlandHasBeenSet() const
{
    return m_mainlandHasBeenSet;
}

vector<string> Regions::GetOverseas() const
{
    return m_overseas;
}

void Regions::SetOverseas(const vector<string>& _overseas)
{
    m_overseas = _overseas;
    m_overseasHasBeenSet = true;
}

bool Regions::OverseasHasBeenSet() const
{
    return m_overseasHasBeenSet;
}

