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

#include <tencentcloud/wedata/v20210820/model/RobLockState.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

RobLockState::RobLockState() :
    m_isRobHasBeenSet(false),
    m_lockerHasBeenSet(false)
{
}

CoreInternalOutcome RobLockState::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("IsRob") && !value["IsRob"].IsNull())
    {
        if (!value["IsRob"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `RobLockState.IsRob` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isRob = value["IsRob"].GetBool();
        m_isRobHasBeenSet = true;
    }

    if (value.HasMember("Locker") && !value["Locker"].IsNull())
    {
        if (!value["Locker"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RobLockState.Locker` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_locker = string(value["Locker"].GetString());
        m_lockerHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RobLockState::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_isRobHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsRob";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isRob, allocator);
    }

    if (m_lockerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Locker";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_locker.c_str(), allocator).Move(), allocator);
    }

}


bool RobLockState::GetIsRob() const
{
    return m_isRob;
}

void RobLockState::SetIsRob(const bool& _isRob)
{
    m_isRob = _isRob;
    m_isRobHasBeenSet = true;
}

bool RobLockState::IsRobHasBeenSet() const
{
    return m_isRobHasBeenSet;
}

string RobLockState::GetLocker() const
{
    return m_locker;
}

void RobLockState::SetLocker(const string& _locker)
{
    m_locker = _locker;
    m_lockerHasBeenSet = true;
}

bool RobLockState::LockerHasBeenSet() const
{
    return m_lockerHasBeenSet;
}

