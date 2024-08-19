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

#include <tencentcloud/vod/v20180717/model/FastEditMediaFileInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vod::V20180717::Model;
using namespace std;

FastEditMediaFileInfo::FastEditMediaFileInfo() :
    m_fileIdHasBeenSet(false),
    m_audioVideoTypeHasBeenSet(false),
    m_transcodeDefinitionHasBeenSet(false),
    m_startTimeOffsetHasBeenSet(false),
    m_endTimeOffsetHasBeenSet(false)
{
}

CoreInternalOutcome FastEditMediaFileInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("FileId") && !value["FileId"].IsNull())
    {
        if (!value["FileId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FastEditMediaFileInfo.FileId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fileId = string(value["FileId"].GetString());
        m_fileIdHasBeenSet = true;
    }

    if (value.HasMember("AudioVideoType") && !value["AudioVideoType"].IsNull())
    {
        if (!value["AudioVideoType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FastEditMediaFileInfo.AudioVideoType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_audioVideoType = string(value["AudioVideoType"].GetString());
        m_audioVideoTypeHasBeenSet = true;
    }

    if (value.HasMember("TranscodeDefinition") && !value["TranscodeDefinition"].IsNull())
    {
        if (!value["TranscodeDefinition"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `FastEditMediaFileInfo.TranscodeDefinition` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_transcodeDefinition = value["TranscodeDefinition"].GetInt64();
        m_transcodeDefinitionHasBeenSet = true;
    }

    if (value.HasMember("StartTimeOffset") && !value["StartTimeOffset"].IsNull())
    {
        if (!value["StartTimeOffset"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `FastEditMediaFileInfo.StartTimeOffset` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_startTimeOffset = value["StartTimeOffset"].GetDouble();
        m_startTimeOffsetHasBeenSet = true;
    }

    if (value.HasMember("EndTimeOffset") && !value["EndTimeOffset"].IsNull())
    {
        if (!value["EndTimeOffset"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `FastEditMediaFileInfo.EndTimeOffset` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_endTimeOffset = value["EndTimeOffset"].GetDouble();
        m_endTimeOffsetHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void FastEditMediaFileInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_fileIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fileId.c_str(), allocator).Move(), allocator);
    }

    if (m_audioVideoTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AudioVideoType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_audioVideoType.c_str(), allocator).Move(), allocator);
    }

    if (m_transcodeDefinitionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TranscodeDefinition";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_transcodeDefinition, allocator);
    }

    if (m_startTimeOffsetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTimeOffset";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_startTimeOffset, allocator);
    }

    if (m_endTimeOffsetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTimeOffset";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_endTimeOffset, allocator);
    }

}


string FastEditMediaFileInfo::GetFileId() const
{
    return m_fileId;
}

void FastEditMediaFileInfo::SetFileId(const string& _fileId)
{
    m_fileId = _fileId;
    m_fileIdHasBeenSet = true;
}

bool FastEditMediaFileInfo::FileIdHasBeenSet() const
{
    return m_fileIdHasBeenSet;
}

string FastEditMediaFileInfo::GetAudioVideoType() const
{
    return m_audioVideoType;
}

void FastEditMediaFileInfo::SetAudioVideoType(const string& _audioVideoType)
{
    m_audioVideoType = _audioVideoType;
    m_audioVideoTypeHasBeenSet = true;
}

bool FastEditMediaFileInfo::AudioVideoTypeHasBeenSet() const
{
    return m_audioVideoTypeHasBeenSet;
}

int64_t FastEditMediaFileInfo::GetTranscodeDefinition() const
{
    return m_transcodeDefinition;
}

void FastEditMediaFileInfo::SetTranscodeDefinition(const int64_t& _transcodeDefinition)
{
    m_transcodeDefinition = _transcodeDefinition;
    m_transcodeDefinitionHasBeenSet = true;
}

bool FastEditMediaFileInfo::TranscodeDefinitionHasBeenSet() const
{
    return m_transcodeDefinitionHasBeenSet;
}

double FastEditMediaFileInfo::GetStartTimeOffset() const
{
    return m_startTimeOffset;
}

void FastEditMediaFileInfo::SetStartTimeOffset(const double& _startTimeOffset)
{
    m_startTimeOffset = _startTimeOffset;
    m_startTimeOffsetHasBeenSet = true;
}

bool FastEditMediaFileInfo::StartTimeOffsetHasBeenSet() const
{
    return m_startTimeOffsetHasBeenSet;
}

double FastEditMediaFileInfo::GetEndTimeOffset() const
{
    return m_endTimeOffset;
}

void FastEditMediaFileInfo::SetEndTimeOffset(const double& _endTimeOffset)
{
    m_endTimeOffset = _endTimeOffset;
    m_endTimeOffsetHasBeenSet = true;
}

bool FastEditMediaFileInfo::EndTimeOffsetHasBeenSet() const
{
    return m_endTimeOffsetHasBeenSet;
}

