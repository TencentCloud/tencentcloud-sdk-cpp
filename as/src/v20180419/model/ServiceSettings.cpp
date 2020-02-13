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

#include <tencentcloud/as/v20180419/model/ServiceSettings.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::As::V20180419::Model;
using namespace rapidjson;
using namespace std;

ServiceSettings::ServiceSettings() :
    m_replaceMonitorUnhealthyHasBeenSet(false),
    m_scalingModeHasBeenSet(false)
{
}

CoreInternalOutcome ServiceSettings::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("ReplaceMonitorUnhealthy") && !value["ReplaceMonitorUnhealthy"].IsNull())
    {
        if (!value["ReplaceMonitorUnhealthy"].IsBool())
        {
            return CoreInternalOutcome(Error("response `ServiceSettings.ReplaceMonitorUnhealthy` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_replaceMonitorUnhealthy = value["ReplaceMonitorUnhealthy"].GetBool();
        m_replaceMonitorUnhealthyHasBeenSet = true;
    }

    if (value.HasMember("ScalingMode") && !value["ScalingMode"].IsNull())
    {
        if (!value["ScalingMode"].IsString())
        {
            return CoreInternalOutcome(Error("response `ServiceSettings.ScalingMode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_scalingMode = string(value["ScalingMode"].GetString());
        m_scalingModeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ServiceSettings::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_replaceMonitorUnhealthyHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ReplaceMonitorUnhealthy";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_replaceMonitorUnhealthy, allocator);
    }

    if (m_scalingModeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ScalingMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_scalingMode.c_str(), allocator).Move(), allocator);
    }

}


bool ServiceSettings::GetReplaceMonitorUnhealthy() const
{
    return m_replaceMonitorUnhealthy;
}

void ServiceSettings::SetReplaceMonitorUnhealthy(const bool& _replaceMonitorUnhealthy)
{
    m_replaceMonitorUnhealthy = _replaceMonitorUnhealthy;
    m_replaceMonitorUnhealthyHasBeenSet = true;
}

bool ServiceSettings::ReplaceMonitorUnhealthyHasBeenSet() const
{
    return m_replaceMonitorUnhealthyHasBeenSet;
}

string ServiceSettings::GetScalingMode() const
{
    return m_scalingMode;
}

void ServiceSettings::SetScalingMode(const string& _scalingMode)
{
    m_scalingMode = _scalingMode;
    m_scalingModeHasBeenSet = true;
}

bool ServiceSettings::ScalingModeHasBeenSet() const
{
    return m_scalingModeHasBeenSet;
}

