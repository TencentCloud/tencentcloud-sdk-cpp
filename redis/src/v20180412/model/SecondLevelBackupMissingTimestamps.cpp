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

#include <tencentcloud/redis/v20180412/model/SecondLevelBackupMissingTimestamps.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Redis::V20180412::Model;
using namespace std;

SecondLevelBackupMissingTimestamps::SecondLevelBackupMissingTimestamps() :
    m_startTimeStampHasBeenSet(false),
    m_endTimeStampHasBeenSet(false)
{
}

CoreInternalOutcome SecondLevelBackupMissingTimestamps::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("StartTimeStamp") && !value["StartTimeStamp"].IsNull())
    {
        if (!value["StartTimeStamp"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SecondLevelBackupMissingTimestamps.StartTimeStamp` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_startTimeStamp = value["StartTimeStamp"].GetInt64();
        m_startTimeStampHasBeenSet = true;
    }

    if (value.HasMember("EndTimeStamp") && !value["EndTimeStamp"].IsNull())
    {
        if (!value["EndTimeStamp"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SecondLevelBackupMissingTimestamps.EndTimeStamp` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_endTimeStamp = value["EndTimeStamp"].GetInt64();
        m_endTimeStampHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SecondLevelBackupMissingTimestamps::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_startTimeStampHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTimeStamp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_startTimeStamp, allocator);
    }

    if (m_endTimeStampHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTimeStamp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_endTimeStamp, allocator);
    }

}


int64_t SecondLevelBackupMissingTimestamps::GetStartTimeStamp() const
{
    return m_startTimeStamp;
}

void SecondLevelBackupMissingTimestamps::SetStartTimeStamp(const int64_t& _startTimeStamp)
{
    m_startTimeStamp = _startTimeStamp;
    m_startTimeStampHasBeenSet = true;
}

bool SecondLevelBackupMissingTimestamps::StartTimeStampHasBeenSet() const
{
    return m_startTimeStampHasBeenSet;
}

int64_t SecondLevelBackupMissingTimestamps::GetEndTimeStamp() const
{
    return m_endTimeStamp;
}

void SecondLevelBackupMissingTimestamps::SetEndTimeStamp(const int64_t& _endTimeStamp)
{
    m_endTimeStamp = _endTimeStamp;
    m_endTimeStampHasBeenSet = true;
}

bool SecondLevelBackupMissingTimestamps::EndTimeStampHasBeenSet() const
{
    return m_endTimeStampHasBeenSet;
}

