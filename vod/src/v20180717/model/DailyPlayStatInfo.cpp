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

#include <tencentcloud/vod/v20180717/model/DailyPlayStatInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vod::V20180717::Model;
using namespace std;

DailyPlayStatInfo::DailyPlayStatInfo() :
    m_dateHasBeenSet(false),
    m_fileIdHasBeenSet(false),
    m_playTimesHasBeenSet(false),
    m_trafficHasBeenSet(false)
{
}

CoreInternalOutcome DailyPlayStatInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Date") && !value["Date"].IsNull())
    {
        if (!value["Date"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DailyPlayStatInfo.Date` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_date = string(value["Date"].GetString());
        m_dateHasBeenSet = true;
    }

    if (value.HasMember("FileId") && !value["FileId"].IsNull())
    {
        if (!value["FileId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DailyPlayStatInfo.FileId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fileId = string(value["FileId"].GetString());
        m_fileIdHasBeenSet = true;
    }

    if (value.HasMember("PlayTimes") && !value["PlayTimes"].IsNull())
    {
        if (!value["PlayTimes"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DailyPlayStatInfo.PlayTimes` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_playTimes = value["PlayTimes"].GetUint64();
        m_playTimesHasBeenSet = true;
    }

    if (value.HasMember("Traffic") && !value["Traffic"].IsNull())
    {
        if (!value["Traffic"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DailyPlayStatInfo.Traffic` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_traffic = value["Traffic"].GetUint64();
        m_trafficHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DailyPlayStatInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_dateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Date";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_date.c_str(), allocator).Move(), allocator);
    }

    if (m_fileIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fileId.c_str(), allocator).Move(), allocator);
    }

    if (m_playTimesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PlayTimes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_playTimes, allocator);
    }

    if (m_trafficHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Traffic";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_traffic, allocator);
    }

}


string DailyPlayStatInfo::GetDate() const
{
    return m_date;
}

void DailyPlayStatInfo::SetDate(const string& _date)
{
    m_date = _date;
    m_dateHasBeenSet = true;
}

bool DailyPlayStatInfo::DateHasBeenSet() const
{
    return m_dateHasBeenSet;
}

string DailyPlayStatInfo::GetFileId() const
{
    return m_fileId;
}

void DailyPlayStatInfo::SetFileId(const string& _fileId)
{
    m_fileId = _fileId;
    m_fileIdHasBeenSet = true;
}

bool DailyPlayStatInfo::FileIdHasBeenSet() const
{
    return m_fileIdHasBeenSet;
}

uint64_t DailyPlayStatInfo::GetPlayTimes() const
{
    return m_playTimes;
}

void DailyPlayStatInfo::SetPlayTimes(const uint64_t& _playTimes)
{
    m_playTimes = _playTimes;
    m_playTimesHasBeenSet = true;
}

bool DailyPlayStatInfo::PlayTimesHasBeenSet() const
{
    return m_playTimesHasBeenSet;
}

uint64_t DailyPlayStatInfo::GetTraffic() const
{
    return m_traffic;
}

void DailyPlayStatInfo::SetTraffic(const uint64_t& _traffic)
{
    m_traffic = _traffic;
    m_trafficHasBeenSet = true;
}

bool DailyPlayStatInfo::TrafficHasBeenSet() const
{
    return m_trafficHasBeenSet;
}

