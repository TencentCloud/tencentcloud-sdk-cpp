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

#include <tencentcloud/wedata/v20210820/model/DependencyStrategyDs.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

DependencyStrategyDs::DependencyStrategyDs() :
    m_pollingNullStrategyHasBeenSet(false)
{
}

CoreInternalOutcome DependencyStrategyDs::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("PollingNullStrategy") && !value["PollingNullStrategy"].IsNull())
    {
        if (!value["PollingNullStrategy"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DependencyStrategyDs.PollingNullStrategy` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_pollingNullStrategy = string(value["PollingNullStrategy"].GetString());
        m_pollingNullStrategyHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DependencyStrategyDs::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_pollingNullStrategyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PollingNullStrategy";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_pollingNullStrategy.c_str(), allocator).Move(), allocator);
    }

}


string DependencyStrategyDs::GetPollingNullStrategy() const
{
    return m_pollingNullStrategy;
}

void DependencyStrategyDs::SetPollingNullStrategy(const string& _pollingNullStrategy)
{
    m_pollingNullStrategy = _pollingNullStrategy;
    m_pollingNullStrategyHasBeenSet = true;
}

bool DependencyStrategyDs::PollingNullStrategyHasBeenSet() const
{
    return m_pollingNullStrategyHasBeenSet;
}

