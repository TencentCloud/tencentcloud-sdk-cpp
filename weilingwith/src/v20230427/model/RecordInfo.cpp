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

#include <tencentcloud/weilingwith/v20230427/model/RecordInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Weilingwith::V20230427::Model;
using namespace std;

RecordInfo::RecordInfo() :
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_videoURLHasBeenSet(false)
{
}

CoreInternalOutcome RecordInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("StartTime") && !value["StartTime"].IsNull())
    {
        if (!value["StartTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RecordInfo.StartTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_startTime = value["StartTime"].GetInt64();
        m_startTimeHasBeenSet = true;
    }

    if (value.HasMember("EndTime") && !value["EndTime"].IsNull())
    {
        if (!value["EndTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RecordInfo.EndTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_endTime = value["EndTime"].GetInt64();
        m_endTimeHasBeenSet = true;
    }

    if (value.HasMember("VideoURL") && !value["VideoURL"].IsNull())
    {
        if (!value["VideoURL"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RecordInfo.VideoURL` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_videoURL = string(value["VideoURL"].GetString());
        m_videoURLHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RecordInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_startTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_startTime, allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_endTime, allocator);
    }

    if (m_videoURLHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VideoURL";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_videoURL.c_str(), allocator).Move(), allocator);
    }

}


int64_t RecordInfo::GetStartTime() const
{
    return m_startTime;
}

void RecordInfo::SetStartTime(const int64_t& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool RecordInfo::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

int64_t RecordInfo::GetEndTime() const
{
    return m_endTime;
}

void RecordInfo::SetEndTime(const int64_t& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool RecordInfo::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

string RecordInfo::GetVideoURL() const
{
    return m_videoURL;
}

void RecordInfo::SetVideoURL(const string& _videoURL)
{
    m_videoURL = _videoURL;
    m_videoURLHasBeenSet = true;
}

bool RecordInfo::VideoURLHasBeenSet() const
{
    return m_videoURLHasBeenSet;
}

