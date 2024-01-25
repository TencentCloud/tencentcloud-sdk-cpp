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

#include <tencentcloud/teo/v20220901/model/DDosProtectionConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Teo::V20220901::Model;
using namespace std;

DDosProtectionConfig::DDosProtectionConfig() :
    m_levelMainlandHasBeenSet(false),
    m_maxBandwidthMainlandHasBeenSet(false),
    m_levelOverseasHasBeenSet(false)
{
}

CoreInternalOutcome DDosProtectionConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("LevelMainland") && !value["LevelMainland"].IsNull())
    {
        if (!value["LevelMainland"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DDosProtectionConfig.LevelMainland` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_levelMainland = string(value["LevelMainland"].GetString());
        m_levelMainlandHasBeenSet = true;
    }

    if (value.HasMember("MaxBandwidthMainland") && !value["MaxBandwidthMainland"].IsNull())
    {
        if (!value["MaxBandwidthMainland"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DDosProtectionConfig.MaxBandwidthMainland` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_maxBandwidthMainland = value["MaxBandwidthMainland"].GetUint64();
        m_maxBandwidthMainlandHasBeenSet = true;
    }

    if (value.HasMember("LevelOverseas") && !value["LevelOverseas"].IsNull())
    {
        if (!value["LevelOverseas"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DDosProtectionConfig.LevelOverseas` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_levelOverseas = string(value["LevelOverseas"].GetString());
        m_levelOverseasHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DDosProtectionConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_levelMainlandHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LevelMainland";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_levelMainland.c_str(), allocator).Move(), allocator);
    }

    if (m_maxBandwidthMainlandHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxBandwidthMainland";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxBandwidthMainland, allocator);
    }

    if (m_levelOverseasHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LevelOverseas";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_levelOverseas.c_str(), allocator).Move(), allocator);
    }

}


string DDosProtectionConfig::GetLevelMainland() const
{
    return m_levelMainland;
}

void DDosProtectionConfig::SetLevelMainland(const string& _levelMainland)
{
    m_levelMainland = _levelMainland;
    m_levelMainlandHasBeenSet = true;
}

bool DDosProtectionConfig::LevelMainlandHasBeenSet() const
{
    return m_levelMainlandHasBeenSet;
}

uint64_t DDosProtectionConfig::GetMaxBandwidthMainland() const
{
    return m_maxBandwidthMainland;
}

void DDosProtectionConfig::SetMaxBandwidthMainland(const uint64_t& _maxBandwidthMainland)
{
    m_maxBandwidthMainland = _maxBandwidthMainland;
    m_maxBandwidthMainlandHasBeenSet = true;
}

bool DDosProtectionConfig::MaxBandwidthMainlandHasBeenSet() const
{
    return m_maxBandwidthMainlandHasBeenSet;
}

string DDosProtectionConfig::GetLevelOverseas() const
{
    return m_levelOverseas;
}

void DDosProtectionConfig::SetLevelOverseas(const string& _levelOverseas)
{
    m_levelOverseas = _levelOverseas;
    m_levelOverseasHasBeenSet = true;
}

bool DDosProtectionConfig::LevelOverseasHasBeenSet() const
{
    return m_levelOverseasHasBeenSet;
}

