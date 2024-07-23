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

#include <tencentcloud/cdwch/v20200915/model/InstanceDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cdwch::V20200915::Model;
using namespace std;

InstanceDetail::InstanceDetail() :
    m_enableAlarmStrategyHasBeenSet(false)
{
}

CoreInternalOutcome InstanceDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("EnableAlarmStrategy") && !value["EnableAlarmStrategy"].IsNull())
    {
        if (!value["EnableAlarmStrategy"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceDetail.EnableAlarmStrategy` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_enableAlarmStrategy = value["EnableAlarmStrategy"].GetBool();
        m_enableAlarmStrategyHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void InstanceDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_enableAlarmStrategyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableAlarmStrategy";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enableAlarmStrategy, allocator);
    }

}


bool InstanceDetail::GetEnableAlarmStrategy() const
{
    return m_enableAlarmStrategy;
}

void InstanceDetail::SetEnableAlarmStrategy(const bool& _enableAlarmStrategy)
{
    m_enableAlarmStrategy = _enableAlarmStrategy;
    m_enableAlarmStrategyHasBeenSet = true;
}

bool InstanceDetail::EnableAlarmStrategyHasBeenSet() const
{
    return m_enableAlarmStrategyHasBeenSet;
}

