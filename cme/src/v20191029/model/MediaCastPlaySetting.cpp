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

#include <tencentcloud/cme/v20191029/model/MediaCastPlaySetting.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cme::V20191029::Model;
using namespace std;

MediaCastPlaySetting::MediaCastPlaySetting() :
    m_loopCountHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_autoStartTimeHasBeenSet(false)
{
}

CoreInternalOutcome MediaCastPlaySetting::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("LoopCount") && !value["LoopCount"].IsNull())
    {
        if (!value["LoopCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MediaCastPlaySetting.LoopCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_loopCount = value["LoopCount"].GetInt64();
        m_loopCountHasBeenSet = true;
    }

    if (value.HasMember("EndTime") && !value["EndTime"].IsNull())
    {
        if (!value["EndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MediaCastPlaySetting.EndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endTime = string(value["EndTime"].GetString());
        m_endTimeHasBeenSet = true;
    }

    if (value.HasMember("AutoStartTime") && !value["AutoStartTime"].IsNull())
    {
        if (!value["AutoStartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MediaCastPlaySetting.AutoStartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_autoStartTime = string(value["AutoStartTime"].GetString());
        m_autoStartTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MediaCastPlaySetting::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_loopCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LoopCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_loopCount, allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_endTime.c_str(), allocator).Move(), allocator);
    }

    if (m_autoStartTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoStartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_autoStartTime.c_str(), allocator).Move(), allocator);
    }

}


int64_t MediaCastPlaySetting::GetLoopCount() const
{
    return m_loopCount;
}

void MediaCastPlaySetting::SetLoopCount(const int64_t& _loopCount)
{
    m_loopCount = _loopCount;
    m_loopCountHasBeenSet = true;
}

bool MediaCastPlaySetting::LoopCountHasBeenSet() const
{
    return m_loopCountHasBeenSet;
}

string MediaCastPlaySetting::GetEndTime() const
{
    return m_endTime;
}

void MediaCastPlaySetting::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool MediaCastPlaySetting::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

string MediaCastPlaySetting::GetAutoStartTime() const
{
    return m_autoStartTime;
}

void MediaCastPlaySetting::SetAutoStartTime(const string& _autoStartTime)
{
    m_autoStartTime = _autoStartTime;
    m_autoStartTimeHasBeenSet = true;
}

bool MediaCastPlaySetting::AutoStartTimeHasBeenSet() const
{
    return m_autoStartTimeHasBeenSet;
}

