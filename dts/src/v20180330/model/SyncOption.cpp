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

#include <tencentcloud/dts/v20180330/model/SyncOption.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dts::V20180330::Model;
using namespace rapidjson;
using namespace std;

SyncOption::SyncOption() :
    m_syncObjectHasBeenSet(false),
    m_runModeHasBeenSet(false),
    m_syncTypeHasBeenSet(false),
    m_consistencyTypeHasBeenSet(false)
{
}

CoreInternalOutcome SyncOption::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("SyncObject") && !value["SyncObject"].IsNull())
    {
        if (!value["SyncObject"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `SyncOption.SyncObject` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_syncObject = value["SyncObject"].GetUint64();
        m_syncObjectHasBeenSet = true;
    }

    if (value.HasMember("RunMode") && !value["RunMode"].IsNull())
    {
        if (!value["RunMode"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `SyncOption.RunMode` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_runMode = value["RunMode"].GetUint64();
        m_runModeHasBeenSet = true;
    }

    if (value.HasMember("SyncType") && !value["SyncType"].IsNull())
    {
        if (!value["SyncType"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `SyncOption.SyncType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_syncType = value["SyncType"].GetUint64();
        m_syncTypeHasBeenSet = true;
    }

    if (value.HasMember("ConsistencyType") && !value["ConsistencyType"].IsNull())
    {
        if (!value["ConsistencyType"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `SyncOption.ConsistencyType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_consistencyType = value["ConsistencyType"].GetUint64();
        m_consistencyTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SyncOption::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_syncObjectHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "SyncObject";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_syncObject, allocator);
    }

    if (m_runModeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "RunMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_runMode, allocator);
    }

    if (m_syncTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "SyncType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_syncType, allocator);
    }

    if (m_consistencyTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ConsistencyType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_consistencyType, allocator);
    }

}


uint64_t SyncOption::GetSyncObject() const
{
    return m_syncObject;
}

void SyncOption::SetSyncObject(const uint64_t& _syncObject)
{
    m_syncObject = _syncObject;
    m_syncObjectHasBeenSet = true;
}

bool SyncOption::SyncObjectHasBeenSet() const
{
    return m_syncObjectHasBeenSet;
}

uint64_t SyncOption::GetRunMode() const
{
    return m_runMode;
}

void SyncOption::SetRunMode(const uint64_t& _runMode)
{
    m_runMode = _runMode;
    m_runModeHasBeenSet = true;
}

bool SyncOption::RunModeHasBeenSet() const
{
    return m_runModeHasBeenSet;
}

uint64_t SyncOption::GetSyncType() const
{
    return m_syncType;
}

void SyncOption::SetSyncType(const uint64_t& _syncType)
{
    m_syncType = _syncType;
    m_syncTypeHasBeenSet = true;
}

bool SyncOption::SyncTypeHasBeenSet() const
{
    return m_syncTypeHasBeenSet;
}

uint64_t SyncOption::GetConsistencyType() const
{
    return m_consistencyType;
}

void SyncOption::SetConsistencyType(const uint64_t& _consistencyType)
{
    m_consistencyType = _consistencyType;
    m_consistencyTypeHasBeenSet = true;
}

bool SyncOption::ConsistencyTypeHasBeenSet() const
{
    return m_consistencyTypeHasBeenSet;
}

