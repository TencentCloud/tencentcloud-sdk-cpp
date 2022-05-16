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

#include <tencentcloud/trtc/v20190722/model/StorageFile.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Trtc::V20190722::Model;
using namespace std;

StorageFile::StorageFile() :
    m_userIdHasBeenSet(false),
    m_fileNameHasBeenSet(false),
    m_trackTypeHasBeenSet(false),
    m_beginTimeStampHasBeenSet(false)
{
}

CoreInternalOutcome StorageFile::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("UserId") && !value["UserId"].IsNull())
    {
        if (!value["UserId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StorageFile.UserId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userId = string(value["UserId"].GetString());
        m_userIdHasBeenSet = true;
    }

    if (value.HasMember("FileName") && !value["FileName"].IsNull())
    {
        if (!value["FileName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StorageFile.FileName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fileName = string(value["FileName"].GetString());
        m_fileNameHasBeenSet = true;
    }

    if (value.HasMember("TrackType") && !value["TrackType"].IsNull())
    {
        if (!value["TrackType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StorageFile.TrackType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_trackType = string(value["TrackType"].GetString());
        m_trackTypeHasBeenSet = true;
    }

    if (value.HasMember("BeginTimeStamp") && !value["BeginTimeStamp"].IsNull())
    {
        if (!value["BeginTimeStamp"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `StorageFile.BeginTimeStamp` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_beginTimeStamp = value["BeginTimeStamp"].GetUint64();
        m_beginTimeStampHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void StorageFile::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_userIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userId.c_str(), allocator).Move(), allocator);
    }

    if (m_fileNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fileName.c_str(), allocator).Move(), allocator);
    }

    if (m_trackTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TrackType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_trackType.c_str(), allocator).Move(), allocator);
    }

    if (m_beginTimeStampHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BeginTimeStamp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_beginTimeStamp, allocator);
    }

}


string StorageFile::GetUserId() const
{
    return m_userId;
}

void StorageFile::SetUserId(const string& _userId)
{
    m_userId = _userId;
    m_userIdHasBeenSet = true;
}

bool StorageFile::UserIdHasBeenSet() const
{
    return m_userIdHasBeenSet;
}

string StorageFile::GetFileName() const
{
    return m_fileName;
}

void StorageFile::SetFileName(const string& _fileName)
{
    m_fileName = _fileName;
    m_fileNameHasBeenSet = true;
}

bool StorageFile::FileNameHasBeenSet() const
{
    return m_fileNameHasBeenSet;
}

string StorageFile::GetTrackType() const
{
    return m_trackType;
}

void StorageFile::SetTrackType(const string& _trackType)
{
    m_trackType = _trackType;
    m_trackTypeHasBeenSet = true;
}

bool StorageFile::TrackTypeHasBeenSet() const
{
    return m_trackTypeHasBeenSet;
}

uint64_t StorageFile::GetBeginTimeStamp() const
{
    return m_beginTimeStamp;
}

void StorageFile::SetBeginTimeStamp(const uint64_t& _beginTimeStamp)
{
    m_beginTimeStamp = _beginTimeStamp;
    m_beginTimeStampHasBeenSet = true;
}

bool StorageFile::BeginTimeStampHasBeenSet() const
{
    return m_beginTimeStampHasBeenSet;
}

