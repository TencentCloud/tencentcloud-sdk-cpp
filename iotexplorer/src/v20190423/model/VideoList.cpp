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

#include <tencentcloud/iotexplorer/v20190423/model/VideoList.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iotexplorer::V20190423::Model;
using namespace std;

VideoList::VideoList() :
    m_psignHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_urlHasBeenSet(false),
    m_streamTypeHasBeenSet(false),
    m_fileIdHasBeenSet(false)
{
}

CoreInternalOutcome VideoList::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Psign") && !value["Psign"].IsNull())
    {
        if (!value["Psign"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VideoList.Psign` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_psign = string(value["Psign"].GetString());
        m_psignHasBeenSet = true;
    }

    if (value.HasMember("StartTime") && !value["StartTime"].IsNull())
    {
        if (!value["StartTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `VideoList.StartTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_startTime = value["StartTime"].GetUint64();
        m_startTimeHasBeenSet = true;
    }

    if (value.HasMember("EndTime") && !value["EndTime"].IsNull())
    {
        if (!value["EndTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `VideoList.EndTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_endTime = value["EndTime"].GetUint64();
        m_endTimeHasBeenSet = true;
    }

    if (value.HasMember("Url") && !value["Url"].IsNull())
    {
        if (!value["Url"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VideoList.Url` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_url = string(value["Url"].GetString());
        m_urlHasBeenSet = true;
    }

    if (value.HasMember("StreamType") && !value["StreamType"].IsNull())
    {
        if (!value["StreamType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VideoList.StreamType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_streamType = string(value["StreamType"].GetString());
        m_streamTypeHasBeenSet = true;
    }

    if (value.HasMember("FileId") && !value["FileId"].IsNull())
    {
        if (!value["FileId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VideoList.FileId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fileId = string(value["FileId"].GetString());
        m_fileIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void VideoList::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_psignHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Psign";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_psign.c_str(), allocator).Move(), allocator);
    }

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

    if (m_urlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Url";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_url.c_str(), allocator).Move(), allocator);
    }

    if (m_streamTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StreamType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_streamType.c_str(), allocator).Move(), allocator);
    }

    if (m_fileIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fileId.c_str(), allocator).Move(), allocator);
    }

}


string VideoList::GetPsign() const
{
    return m_psign;
}

void VideoList::SetPsign(const string& _psign)
{
    m_psign = _psign;
    m_psignHasBeenSet = true;
}

bool VideoList::PsignHasBeenSet() const
{
    return m_psignHasBeenSet;
}

uint64_t VideoList::GetStartTime() const
{
    return m_startTime;
}

void VideoList::SetStartTime(const uint64_t& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool VideoList::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

uint64_t VideoList::GetEndTime() const
{
    return m_endTime;
}

void VideoList::SetEndTime(const uint64_t& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool VideoList::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

string VideoList::GetUrl() const
{
    return m_url;
}

void VideoList::SetUrl(const string& _url)
{
    m_url = _url;
    m_urlHasBeenSet = true;
}

bool VideoList::UrlHasBeenSet() const
{
    return m_urlHasBeenSet;
}

string VideoList::GetStreamType() const
{
    return m_streamType;
}

void VideoList::SetStreamType(const string& _streamType)
{
    m_streamType = _streamType;
    m_streamTypeHasBeenSet = true;
}

bool VideoList::StreamTypeHasBeenSet() const
{
    return m_streamTypeHasBeenSet;
}

string VideoList::GetFileId() const
{
    return m_fileId;
}

void VideoList::SetFileId(const string& _fileId)
{
    m_fileId = _fileId;
    m_fileIdHasBeenSet = true;
}

bool VideoList::FileIdHasBeenSet() const
{
    return m_fileIdHasBeenSet;
}

