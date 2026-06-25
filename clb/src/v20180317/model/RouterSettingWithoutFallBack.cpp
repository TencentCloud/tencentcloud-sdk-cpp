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

#include <tencentcloud/clb/v20180317/model/RouterSettingWithoutFallBack.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Clb::V20180317::Model;
using namespace std;

RouterSettingWithoutFallBack::RouterSettingWithoutFallBack() :
    m_routingStrategyHasBeenSet(false)
{
}

CoreInternalOutcome RouterSettingWithoutFallBack::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RoutingStrategy") && !value["RoutingStrategy"].IsNull())
    {
        if (!value["RoutingStrategy"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RouterSettingWithoutFallBack.RoutingStrategy` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_routingStrategy = string(value["RoutingStrategy"].GetString());
        m_routingStrategyHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RouterSettingWithoutFallBack::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_routingStrategyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RoutingStrategy";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_routingStrategy.c_str(), allocator).Move(), allocator);
    }

}


string RouterSettingWithoutFallBack::GetRoutingStrategy() const
{
    return m_routingStrategy;
}

void RouterSettingWithoutFallBack::SetRoutingStrategy(const string& _routingStrategy)
{
    m_routingStrategy = _routingStrategy;
    m_routingStrategyHasBeenSet = true;
}

bool RouterSettingWithoutFallBack::RoutingStrategyHasBeenSet() const
{
    return m_routingStrategyHasBeenSet;
}

