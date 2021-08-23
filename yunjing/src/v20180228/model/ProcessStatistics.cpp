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

#include <tencentcloud/yunjing/v20180228/model/ProcessStatistics.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Yunjing::V20180228::Model;
using namespace std;

ProcessStatistics::ProcessStatistics() :
    m_processNameHasBeenSet(false),
    m_machineNumHasBeenSet(false)
{
}

CoreInternalOutcome ProcessStatistics::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ProcessName") && !value["ProcessName"].IsNull())
    {
        if (!value["ProcessName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProcessStatistics.ProcessName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_processName = string(value["ProcessName"].GetString());
        m_processNameHasBeenSet = true;
    }

    if (value.HasMember("MachineNum") && !value["MachineNum"].IsNull())
    {
        if (!value["MachineNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ProcessStatistics.MachineNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_machineNum = value["MachineNum"].GetUint64();
        m_machineNumHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ProcessStatistics::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_processNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProcessName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_processName.c_str(), allocator).Move(), allocator);
    }

    if (m_machineNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MachineNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_machineNum, allocator);
    }

}


string ProcessStatistics::GetProcessName() const
{
    return m_processName;
}

void ProcessStatistics::SetProcessName(const string& _processName)
{
    m_processName = _processName;
    m_processNameHasBeenSet = true;
}

bool ProcessStatistics::ProcessNameHasBeenSet() const
{
    return m_processNameHasBeenSet;
}

uint64_t ProcessStatistics::GetMachineNum() const
{
    return m_machineNum;
}

void ProcessStatistics::SetMachineNum(const uint64_t& _machineNum)
{
    m_machineNum = _machineNum;
    m_machineNumHasBeenSet = true;
}

bool ProcessStatistics::MachineNumHasBeenSet() const
{
    return m_machineNumHasBeenSet;
}

