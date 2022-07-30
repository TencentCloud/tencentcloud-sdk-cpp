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

#include <tencentcloud/pts/v20210728/model/ScriptOrigin.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Pts::V20210728::Model;
using namespace std;

ScriptOrigin::ScriptOrigin() :
    m_machineNumberHasBeenSet(false),
    m_machineSpecificationHasBeenSet(false),
    m_durationSecondsHasBeenSet(false)
{
}

CoreInternalOutcome ScriptOrigin::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("MachineNumber") && !value["MachineNumber"].IsNull())
    {
        if (!value["MachineNumber"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ScriptOrigin.MachineNumber` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_machineNumber = value["MachineNumber"].GetInt64();
        m_machineNumberHasBeenSet = true;
    }

    if (value.HasMember("MachineSpecification") && !value["MachineSpecification"].IsNull())
    {
        if (!value["MachineSpecification"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ScriptOrigin.MachineSpecification` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_machineSpecification = string(value["MachineSpecification"].GetString());
        m_machineSpecificationHasBeenSet = true;
    }

    if (value.HasMember("DurationSeconds") && !value["DurationSeconds"].IsNull())
    {
        if (!value["DurationSeconds"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ScriptOrigin.DurationSeconds` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_durationSeconds = value["DurationSeconds"].GetInt64();
        m_durationSecondsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ScriptOrigin::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_machineNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MachineNumber";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_machineNumber, allocator);
    }

    if (m_machineSpecificationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MachineSpecification";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_machineSpecification.c_str(), allocator).Move(), allocator);
    }

    if (m_durationSecondsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DurationSeconds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_durationSeconds, allocator);
    }

}


int64_t ScriptOrigin::GetMachineNumber() const
{
    return m_machineNumber;
}

void ScriptOrigin::SetMachineNumber(const int64_t& _machineNumber)
{
    m_machineNumber = _machineNumber;
    m_machineNumberHasBeenSet = true;
}

bool ScriptOrigin::MachineNumberHasBeenSet() const
{
    return m_machineNumberHasBeenSet;
}

string ScriptOrigin::GetMachineSpecification() const
{
    return m_machineSpecification;
}

void ScriptOrigin::SetMachineSpecification(const string& _machineSpecification)
{
    m_machineSpecification = _machineSpecification;
    m_machineSpecificationHasBeenSet = true;
}

bool ScriptOrigin::MachineSpecificationHasBeenSet() const
{
    return m_machineSpecificationHasBeenSet;
}

int64_t ScriptOrigin::GetDurationSeconds() const
{
    return m_durationSeconds;
}

void ScriptOrigin::SetDurationSeconds(const int64_t& _durationSeconds)
{
    m_durationSeconds = _durationSeconds;
    m_durationSecondsHasBeenSet = true;
}

bool ScriptOrigin::DurationSecondsHasBeenSet() const
{
    return m_durationSecondsHasBeenSet;
}

