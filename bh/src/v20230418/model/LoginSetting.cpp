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

#include <tencentcloud/bh/v20230418/model/LoginSetting.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Bh::V20230418::Model;
using namespace std;

LoginSetting::LoginSetting() :
    m_timeOutHasBeenSet(false),
    m_lockThresholdHasBeenSet(false),
    m_lockTimeHasBeenSet(false),
    m_inactiveUserLockHasBeenSet(false)
{
}

CoreInternalOutcome LoginSetting::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TimeOut") && !value["TimeOut"].IsNull())
    {
        if (!value["TimeOut"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `LoginSetting.TimeOut` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_timeOut = value["TimeOut"].GetUint64();
        m_timeOutHasBeenSet = true;
    }

    if (value.HasMember("LockThreshold") && !value["LockThreshold"].IsNull())
    {
        if (!value["LockThreshold"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `LoginSetting.LockThreshold` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_lockThreshold = value["LockThreshold"].GetUint64();
        m_lockThresholdHasBeenSet = true;
    }

    if (value.HasMember("LockTime") && !value["LockTime"].IsNull())
    {
        if (!value["LockTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `LoginSetting.LockTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_lockTime = value["LockTime"].GetUint64();
        m_lockTimeHasBeenSet = true;
    }

    if (value.HasMember("InactiveUserLock") && !value["InactiveUserLock"].IsNull())
    {
        if (!value["InactiveUserLock"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `LoginSetting.InactiveUserLock` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_inactiveUserLock = value["InactiveUserLock"].GetUint64();
        m_inactiveUserLockHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void LoginSetting::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_timeOutHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimeOut";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_timeOut, allocator);
    }

    if (m_lockThresholdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LockThreshold";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_lockThreshold, allocator);
    }

    if (m_lockTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LockTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_lockTime, allocator);
    }

    if (m_inactiveUserLockHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InactiveUserLock";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_inactiveUserLock, allocator);
    }

}


uint64_t LoginSetting::GetTimeOut() const
{
    return m_timeOut;
}

void LoginSetting::SetTimeOut(const uint64_t& _timeOut)
{
    m_timeOut = _timeOut;
    m_timeOutHasBeenSet = true;
}

bool LoginSetting::TimeOutHasBeenSet() const
{
    return m_timeOutHasBeenSet;
}

uint64_t LoginSetting::GetLockThreshold() const
{
    return m_lockThreshold;
}

void LoginSetting::SetLockThreshold(const uint64_t& _lockThreshold)
{
    m_lockThreshold = _lockThreshold;
    m_lockThresholdHasBeenSet = true;
}

bool LoginSetting::LockThresholdHasBeenSet() const
{
    return m_lockThresholdHasBeenSet;
}

uint64_t LoginSetting::GetLockTime() const
{
    return m_lockTime;
}

void LoginSetting::SetLockTime(const uint64_t& _lockTime)
{
    m_lockTime = _lockTime;
    m_lockTimeHasBeenSet = true;
}

bool LoginSetting::LockTimeHasBeenSet() const
{
    return m_lockTimeHasBeenSet;
}

uint64_t LoginSetting::GetInactiveUserLock() const
{
    return m_inactiveUserLock;
}

void LoginSetting::SetInactiveUserLock(const uint64_t& _inactiveUserLock)
{
    m_inactiveUserLock = _inactiveUserLock;
    m_inactiveUserLockHasBeenSet = true;
}

bool LoginSetting::InactiveUserLockHasBeenSet() const
{
    return m_inactiveUserLockHasBeenSet;
}

