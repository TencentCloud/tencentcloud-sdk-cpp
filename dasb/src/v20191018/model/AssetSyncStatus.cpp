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

#include <tencentcloud/dasb/v20191018/model/AssetSyncStatus.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dasb::V20191018::Model;
using namespace std;

AssetSyncStatus::AssetSyncStatus() :
    m_lastTimeHasBeenSet(false),
    m_lastStatusHasBeenSet(false),
    m_inProcessHasBeenSet(false)
{
}

CoreInternalOutcome AssetSyncStatus::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("LastTime") && !value["LastTime"].IsNull())
    {
        if (!value["LastTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetSyncStatus.LastTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lastTime = string(value["LastTime"].GetString());
        m_lastTimeHasBeenSet = true;
    }

    if (value.HasMember("LastStatus") && !value["LastStatus"].IsNull())
    {
        if (!value["LastStatus"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AssetSyncStatus.LastStatus` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_lastStatus = value["LastStatus"].GetUint64();
        m_lastStatusHasBeenSet = true;
    }

    if (value.HasMember("InProcess") && !value["InProcess"].IsNull())
    {
        if (!value["InProcess"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `AssetSyncStatus.InProcess` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_inProcess = value["InProcess"].GetBool();
        m_inProcessHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AssetSyncStatus::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_lastTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lastTime.c_str(), allocator).Move(), allocator);
    }

    if (m_lastStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_lastStatus, allocator);
    }

    if (m_inProcessHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InProcess";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_inProcess, allocator);
    }

}


string AssetSyncStatus::GetLastTime() const
{
    return m_lastTime;
}

void AssetSyncStatus::SetLastTime(const string& _lastTime)
{
    m_lastTime = _lastTime;
    m_lastTimeHasBeenSet = true;
}

bool AssetSyncStatus::LastTimeHasBeenSet() const
{
    return m_lastTimeHasBeenSet;
}

uint64_t AssetSyncStatus::GetLastStatus() const
{
    return m_lastStatus;
}

void AssetSyncStatus::SetLastStatus(const uint64_t& _lastStatus)
{
    m_lastStatus = _lastStatus;
    m_lastStatusHasBeenSet = true;
}

bool AssetSyncStatus::LastStatusHasBeenSet() const
{
    return m_lastStatusHasBeenSet;
}

bool AssetSyncStatus::GetInProcess() const
{
    return m_inProcess;
}

void AssetSyncStatus::SetInProcess(const bool& _inProcess)
{
    m_inProcess = _inProcess;
    m_inProcessHasBeenSet = true;
}

bool AssetSyncStatus::InProcessHasBeenSet() const
{
    return m_inProcessHasBeenSet;
}

