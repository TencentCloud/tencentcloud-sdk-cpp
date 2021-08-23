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

#include <tencentcloud/cdn/v20180606/model/OriginPullOptimization.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cdn::V20180606::Model;
using namespace std;

OriginPullOptimization::OriginPullOptimization() :
    m_switchHasBeenSet(false),
    m_optimizationTypeHasBeenSet(false)
{
}

CoreInternalOutcome OriginPullOptimization::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Switch") && !value["Switch"].IsNull())
    {
        if (!value["Switch"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OriginPullOptimization.Switch` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_switch = string(value["Switch"].GetString());
        m_switchHasBeenSet = true;
    }

    if (value.HasMember("OptimizationType") && !value["OptimizationType"].IsNull())
    {
        if (!value["OptimizationType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OriginPullOptimization.OptimizationType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_optimizationType = string(value["OptimizationType"].GetString());
        m_optimizationTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void OriginPullOptimization::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_switchHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Switch";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_switch.c_str(), allocator).Move(), allocator);
    }

    if (m_optimizationTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OptimizationType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_optimizationType.c_str(), allocator).Move(), allocator);
    }

}


string OriginPullOptimization::GetSwitch() const
{
    return m_switch;
}

void OriginPullOptimization::SetSwitch(const string& _switch)
{
    m_switch = _switch;
    m_switchHasBeenSet = true;
}

bool OriginPullOptimization::SwitchHasBeenSet() const
{
    return m_switchHasBeenSet;
}

string OriginPullOptimization::GetOptimizationType() const
{
    return m_optimizationType;
}

void OriginPullOptimization::SetOptimizationType(const string& _optimizationType)
{
    m_optimizationType = _optimizationType;
    m_optimizationTypeHasBeenSet = true;
}

bool OriginPullOptimization::OptimizationTypeHasBeenSet() const
{
    return m_optimizationTypeHasBeenSet;
}

