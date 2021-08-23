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

#include <tencentcloud/cdn/v20180606/model/SpecificConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cdn::V20180606::Model;
using namespace std;

SpecificConfig::SpecificConfig() :
    m_mainlandHasBeenSet(false),
    m_overseasHasBeenSet(false)
{
}

CoreInternalOutcome SpecificConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Mainland") && !value["Mainland"].IsNull())
    {
        if (!value["Mainland"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `SpecificConfig.Mainland` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_mainland.Deserialize(value["Mainland"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_mainlandHasBeenSet = true;
    }

    if (value.HasMember("Overseas") && !value["Overseas"].IsNull())
    {
        if (!value["Overseas"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `SpecificConfig.Overseas` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_overseas.Deserialize(value["Overseas"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_overseasHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SpecificConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_mainlandHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Mainland";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_mainland.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_overseasHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Overseas";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_overseas.ToJsonObject(value[key.c_str()], allocator);
    }

}


MainlandConfig SpecificConfig::GetMainland() const
{
    return m_mainland;
}

void SpecificConfig::SetMainland(const MainlandConfig& _mainland)
{
    m_mainland = _mainland;
    m_mainlandHasBeenSet = true;
}

bool SpecificConfig::MainlandHasBeenSet() const
{
    return m_mainlandHasBeenSet;
}

OverseaConfig SpecificConfig::GetOverseas() const
{
    return m_overseas;
}

void SpecificConfig::SetOverseas(const OverseaConfig& _overseas)
{
    m_overseas = _overseas;
    m_overseasHasBeenSet = true;
}

bool SpecificConfig::OverseasHasBeenSet() const
{
    return m_overseasHasBeenSet;
}

