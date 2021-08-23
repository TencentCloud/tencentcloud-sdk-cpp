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

#include <tencentcloud/live/v20180801/model/RecentPullInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Live::V20180801::Model;
using namespace std;

RecentPullInfo::RecentPullInfo() :
    m_fileUrlHasBeenSet(false),
    m_offsetTimeHasBeenSet(false),
    m_reportTimeHasBeenSet(false),
    m_loopedTimesHasBeenSet(false)
{
}

CoreInternalOutcome RecentPullInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("FileUrl") && !value["FileUrl"].IsNull())
    {
        if (!value["FileUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RecentPullInfo.FileUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fileUrl = string(value["FileUrl"].GetString());
        m_fileUrlHasBeenSet = true;
    }

    if (value.HasMember("OffsetTime") && !value["OffsetTime"].IsNull())
    {
        if (!value["OffsetTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RecentPullInfo.OffsetTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_offsetTime = value["OffsetTime"].GetUint64();
        m_offsetTimeHasBeenSet = true;
    }

    if (value.HasMember("ReportTime") && !value["ReportTime"].IsNull())
    {
        if (!value["ReportTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RecentPullInfo.ReportTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_reportTime = string(value["ReportTime"].GetString());
        m_reportTimeHasBeenSet = true;
    }

    if (value.HasMember("LoopedTimes") && !value["LoopedTimes"].IsNull())
    {
        if (!value["LoopedTimes"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RecentPullInfo.LoopedTimes` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_loopedTimes = value["LoopedTimes"].GetInt64();
        m_loopedTimesHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RecentPullInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_fileUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fileUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_offsetTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OffsetTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_offsetTime, allocator);
    }

    if (m_reportTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReportTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_reportTime.c_str(), allocator).Move(), allocator);
    }

    if (m_loopedTimesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LoopedTimes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_loopedTimes, allocator);
    }

}


string RecentPullInfo::GetFileUrl() const
{
    return m_fileUrl;
}

void RecentPullInfo::SetFileUrl(const string& _fileUrl)
{
    m_fileUrl = _fileUrl;
    m_fileUrlHasBeenSet = true;
}

bool RecentPullInfo::FileUrlHasBeenSet() const
{
    return m_fileUrlHasBeenSet;
}

uint64_t RecentPullInfo::GetOffsetTime() const
{
    return m_offsetTime;
}

void RecentPullInfo::SetOffsetTime(const uint64_t& _offsetTime)
{
    m_offsetTime = _offsetTime;
    m_offsetTimeHasBeenSet = true;
}

bool RecentPullInfo::OffsetTimeHasBeenSet() const
{
    return m_offsetTimeHasBeenSet;
}

string RecentPullInfo::GetReportTime() const
{
    return m_reportTime;
}

void RecentPullInfo::SetReportTime(const string& _reportTime)
{
    m_reportTime = _reportTime;
    m_reportTimeHasBeenSet = true;
}

bool RecentPullInfo::ReportTimeHasBeenSet() const
{
    return m_reportTimeHasBeenSet;
}

int64_t RecentPullInfo::GetLoopedTimes() const
{
    return m_loopedTimes;
}

void RecentPullInfo::SetLoopedTimes(const int64_t& _loopedTimes)
{
    m_loopedTimes = _loopedTimes;
    m_loopedTimesHasBeenSet = true;
}

bool RecentPullInfo::LoopedTimesHasBeenSet() const
{
    return m_loopedTimesHasBeenSet;
}

