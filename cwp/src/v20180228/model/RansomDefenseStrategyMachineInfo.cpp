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

#include <tencentcloud/cwp/v20180228/model/RansomDefenseStrategyMachineInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cwp::V20180228::Model;
using namespace std;

RansomDefenseStrategyMachineInfo::RansomDefenseStrategyMachineInfo() :
    m_uuidHasBeenSet(false),
    m_diskInfoHasBeenSet(false)
{
}

CoreInternalOutcome RansomDefenseStrategyMachineInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Uuid") && !value["Uuid"].IsNull())
    {
        if (!value["Uuid"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RansomDefenseStrategyMachineInfo.Uuid` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uuid = string(value["Uuid"].GetString());
        m_uuidHasBeenSet = true;
    }

    if (value.HasMember("DiskInfo") && !value["DiskInfo"].IsNull())
    {
        if (!value["DiskInfo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RansomDefenseStrategyMachineInfo.DiskInfo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_diskInfo = string(value["DiskInfo"].GetString());
        m_diskInfoHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RansomDefenseStrategyMachineInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_uuidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Uuid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_uuid.c_str(), allocator).Move(), allocator);
    }

    if (m_diskInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DiskInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_diskInfo.c_str(), allocator).Move(), allocator);
    }

}


string RansomDefenseStrategyMachineInfo::GetUuid() const
{
    return m_uuid;
}

void RansomDefenseStrategyMachineInfo::SetUuid(const string& _uuid)
{
    m_uuid = _uuid;
    m_uuidHasBeenSet = true;
}

bool RansomDefenseStrategyMachineInfo::UuidHasBeenSet() const
{
    return m_uuidHasBeenSet;
}

string RansomDefenseStrategyMachineInfo::GetDiskInfo() const
{
    return m_diskInfo;
}

void RansomDefenseStrategyMachineInfo::SetDiskInfo(const string& _diskInfo)
{
    m_diskInfo = _diskInfo;
    m_diskInfoHasBeenSet = true;
}

bool RansomDefenseStrategyMachineInfo::DiskInfoHasBeenSet() const
{
    return m_diskInfoHasBeenSet;
}

