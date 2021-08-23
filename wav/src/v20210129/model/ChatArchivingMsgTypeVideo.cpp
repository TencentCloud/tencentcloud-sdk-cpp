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

#include <tencentcloud/wav/v20210129/model/ChatArchivingMsgTypeVideo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wav::V20210129::Model;
using namespace std;

ChatArchivingMsgTypeVideo::ChatArchivingMsgTypeVideo() :
    m_playLengthHasBeenSet(false),
    m_fileSizeHasBeenSet(false),
    m_cosKeyHasBeenSet(false)
{
}

CoreInternalOutcome ChatArchivingMsgTypeVideo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("PlayLength") && !value["PlayLength"].IsNull())
    {
        if (!value["PlayLength"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ChatArchivingMsgTypeVideo.PlayLength` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_playLength = value["PlayLength"].GetUint64();
        m_playLengthHasBeenSet = true;
    }

    if (value.HasMember("FileSize") && !value["FileSize"].IsNull())
    {
        if (!value["FileSize"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ChatArchivingMsgTypeVideo.FileSize` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_fileSize = value["FileSize"].GetUint64();
        m_fileSizeHasBeenSet = true;
    }

    if (value.HasMember("CosKey") && !value["CosKey"].IsNull())
    {
        if (!value["CosKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ChatArchivingMsgTypeVideo.CosKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cosKey = string(value["CosKey"].GetString());
        m_cosKeyHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ChatArchivingMsgTypeVideo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_playLengthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PlayLength";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_playLength, allocator);
    }

    if (m_fileSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_fileSize, allocator);
    }

    if (m_cosKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CosKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cosKey.c_str(), allocator).Move(), allocator);
    }

}


uint64_t ChatArchivingMsgTypeVideo::GetPlayLength() const
{
    return m_playLength;
}

void ChatArchivingMsgTypeVideo::SetPlayLength(const uint64_t& _playLength)
{
    m_playLength = _playLength;
    m_playLengthHasBeenSet = true;
}

bool ChatArchivingMsgTypeVideo::PlayLengthHasBeenSet() const
{
    return m_playLengthHasBeenSet;
}

uint64_t ChatArchivingMsgTypeVideo::GetFileSize() const
{
    return m_fileSize;
}

void ChatArchivingMsgTypeVideo::SetFileSize(const uint64_t& _fileSize)
{
    m_fileSize = _fileSize;
    m_fileSizeHasBeenSet = true;
}

bool ChatArchivingMsgTypeVideo::FileSizeHasBeenSet() const
{
    return m_fileSizeHasBeenSet;
}

string ChatArchivingMsgTypeVideo::GetCosKey() const
{
    return m_cosKey;
}

void ChatArchivingMsgTypeVideo::SetCosKey(const string& _cosKey)
{
    m_cosKey = _cosKey;
    m_cosKeyHasBeenSet = true;
}

bool ChatArchivingMsgTypeVideo::CosKeyHasBeenSet() const
{
    return m_cosKeyHasBeenSet;
}

