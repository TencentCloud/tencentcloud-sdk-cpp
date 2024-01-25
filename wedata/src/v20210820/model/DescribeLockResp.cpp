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

#include <tencentcloud/wedata/v20210820/model/DescribeLockResp.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

DescribeLockResp::DescribeLockResp() :
    m_lockerIdHasBeenSet(false),
    m_lockerNameHasBeenSet(false),
    m_resourcePathHasBeenSet(false),
    m_lockedByMeHasBeenSet(false),
    m_lockTimeHasBeenSet(false)
{
}

CoreInternalOutcome DescribeLockResp::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("LockerId") && !value["LockerId"].IsNull())
    {
        if (!value["LockerId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeLockResp.LockerId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_lockerId = value["LockerId"].GetInt64();
        m_lockerIdHasBeenSet = true;
    }

    if (value.HasMember("LockerName") && !value["LockerName"].IsNull())
    {
        if (!value["LockerName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeLockResp.LockerName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lockerName = string(value["LockerName"].GetString());
        m_lockerNameHasBeenSet = true;
    }

    if (value.HasMember("ResourcePath") && !value["ResourcePath"].IsNull())
    {
        if (!value["ResourcePath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeLockResp.ResourcePath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourcePath = string(value["ResourcePath"].GetString());
        m_resourcePathHasBeenSet = true;
    }

    if (value.HasMember("LockedByMe") && !value["LockedByMe"].IsNull())
    {
        if (!value["LockedByMe"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeLockResp.LockedByMe` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_lockedByMe = value["LockedByMe"].GetBool();
        m_lockedByMeHasBeenSet = true;
    }

    if (value.HasMember("LockTime") && !value["LockTime"].IsNull())
    {
        if (!value["LockTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeLockResp.LockTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_lockTime = value["LockTime"].GetInt64();
        m_lockTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DescribeLockResp::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_lockerIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LockerId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_lockerId, allocator);
    }

    if (m_lockerNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LockerName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lockerName.c_str(), allocator).Move(), allocator);
    }

    if (m_resourcePathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourcePath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourcePath.c_str(), allocator).Move(), allocator);
    }

    if (m_lockedByMeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LockedByMe";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_lockedByMe, allocator);
    }

    if (m_lockTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LockTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_lockTime, allocator);
    }

}


int64_t DescribeLockResp::GetLockerId() const
{
    return m_lockerId;
}

void DescribeLockResp::SetLockerId(const int64_t& _lockerId)
{
    m_lockerId = _lockerId;
    m_lockerIdHasBeenSet = true;
}

bool DescribeLockResp::LockerIdHasBeenSet() const
{
    return m_lockerIdHasBeenSet;
}

string DescribeLockResp::GetLockerName() const
{
    return m_lockerName;
}

void DescribeLockResp::SetLockerName(const string& _lockerName)
{
    m_lockerName = _lockerName;
    m_lockerNameHasBeenSet = true;
}

bool DescribeLockResp::LockerNameHasBeenSet() const
{
    return m_lockerNameHasBeenSet;
}

string DescribeLockResp::GetResourcePath() const
{
    return m_resourcePath;
}

void DescribeLockResp::SetResourcePath(const string& _resourcePath)
{
    m_resourcePath = _resourcePath;
    m_resourcePathHasBeenSet = true;
}

bool DescribeLockResp::ResourcePathHasBeenSet() const
{
    return m_resourcePathHasBeenSet;
}

bool DescribeLockResp::GetLockedByMe() const
{
    return m_lockedByMe;
}

void DescribeLockResp::SetLockedByMe(const bool& _lockedByMe)
{
    m_lockedByMe = _lockedByMe;
    m_lockedByMeHasBeenSet = true;
}

bool DescribeLockResp::LockedByMeHasBeenSet() const
{
    return m_lockedByMeHasBeenSet;
}

int64_t DescribeLockResp::GetLockTime() const
{
    return m_lockTime;
}

void DescribeLockResp::SetLockTime(const int64_t& _lockTime)
{
    m_lockTime = _lockTime;
    m_lockTimeHasBeenSet = true;
}

bool DescribeLockResp::LockTimeHasBeenSet() const
{
    return m_lockTimeHasBeenSet;
}

