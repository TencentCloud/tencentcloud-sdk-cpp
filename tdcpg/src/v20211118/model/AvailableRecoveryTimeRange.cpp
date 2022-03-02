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

#include <tencentcloud/tdcpg/v20211118/model/AvailableRecoveryTimeRange.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tdcpg::V20211118::Model;
using namespace std;

AvailableRecoveryTimeRange::AvailableRecoveryTimeRange() :
    m_availableBeginTimeHasBeenSet(false),
    m_availableEndTimeHasBeenSet(false)
{
}

CoreInternalOutcome AvailableRecoveryTimeRange::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AvailableBeginTime") && !value["AvailableBeginTime"].IsNull())
    {
        if (!value["AvailableBeginTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AvailableRecoveryTimeRange.AvailableBeginTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_availableBeginTime = string(value["AvailableBeginTime"].GetString());
        m_availableBeginTimeHasBeenSet = true;
    }

    if (value.HasMember("AvailableEndTime") && !value["AvailableEndTime"].IsNull())
    {
        if (!value["AvailableEndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AvailableRecoveryTimeRange.AvailableEndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_availableEndTime = string(value["AvailableEndTime"].GetString());
        m_availableEndTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AvailableRecoveryTimeRange::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_availableBeginTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AvailableBeginTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_availableBeginTime.c_str(), allocator).Move(), allocator);
    }

    if (m_availableEndTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AvailableEndTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_availableEndTime.c_str(), allocator).Move(), allocator);
    }

}


string AvailableRecoveryTimeRange::GetAvailableBeginTime() const
{
    return m_availableBeginTime;
}

void AvailableRecoveryTimeRange::SetAvailableBeginTime(const string& _availableBeginTime)
{
    m_availableBeginTime = _availableBeginTime;
    m_availableBeginTimeHasBeenSet = true;
}

bool AvailableRecoveryTimeRange::AvailableBeginTimeHasBeenSet() const
{
    return m_availableBeginTimeHasBeenSet;
}

string AvailableRecoveryTimeRange::GetAvailableEndTime() const
{
    return m_availableEndTime;
}

void AvailableRecoveryTimeRange::SetAvailableEndTime(const string& _availableEndTime)
{
    m_availableEndTime = _availableEndTime;
    m_availableEndTimeHasBeenSet = true;
}

bool AvailableRecoveryTimeRange::AvailableEndTimeHasBeenSet() const
{
    return m_availableEndTimeHasBeenSet;
}

