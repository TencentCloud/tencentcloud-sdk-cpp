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

#include <tencentcloud/vod/v20180717/model/VideoDepthEstimationOutputConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vod::V20180717::Model;
using namespace std;

VideoDepthEstimationOutputConfig::VideoDepthEstimationOutputConfig() :
    m_storageModeHasBeenSet(false),
    m_mediaNameHasBeenSet(false),
    m_expireTimeHasBeenSet(false),
    m_keepAudioHasBeenSet(false)
{
}

CoreInternalOutcome VideoDepthEstimationOutputConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("StorageMode") && !value["StorageMode"].IsNull())
    {
        if (!value["StorageMode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VideoDepthEstimationOutputConfig.StorageMode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_storageMode = string(value["StorageMode"].GetString());
        m_storageModeHasBeenSet = true;
    }

    if (value.HasMember("MediaName") && !value["MediaName"].IsNull())
    {
        if (!value["MediaName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VideoDepthEstimationOutputConfig.MediaName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mediaName = string(value["MediaName"].GetString());
        m_mediaNameHasBeenSet = true;
    }

    if (value.HasMember("ExpireTime") && !value["ExpireTime"].IsNull())
    {
        if (!value["ExpireTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VideoDepthEstimationOutputConfig.ExpireTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_expireTime = string(value["ExpireTime"].GetString());
        m_expireTimeHasBeenSet = true;
    }

    if (value.HasMember("KeepAudio") && !value["KeepAudio"].IsNull())
    {
        if (!value["KeepAudio"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VideoDepthEstimationOutputConfig.KeepAudio` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_keepAudio = string(value["KeepAudio"].GetString());
        m_keepAudioHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void VideoDepthEstimationOutputConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_storageModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StorageMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_storageMode.c_str(), allocator).Move(), allocator);
    }

    if (m_mediaNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MediaName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_mediaName.c_str(), allocator).Move(), allocator);
    }

    if (m_expireTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpireTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_expireTime.c_str(), allocator).Move(), allocator);
    }

    if (m_keepAudioHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KeepAudio";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_keepAudio.c_str(), allocator).Move(), allocator);
    }

}


string VideoDepthEstimationOutputConfig::GetStorageMode() const
{
    return m_storageMode;
}

void VideoDepthEstimationOutputConfig::SetStorageMode(const string& _storageMode)
{
    m_storageMode = _storageMode;
    m_storageModeHasBeenSet = true;
}

bool VideoDepthEstimationOutputConfig::StorageModeHasBeenSet() const
{
    return m_storageModeHasBeenSet;
}

string VideoDepthEstimationOutputConfig::GetMediaName() const
{
    return m_mediaName;
}

void VideoDepthEstimationOutputConfig::SetMediaName(const string& _mediaName)
{
    m_mediaName = _mediaName;
    m_mediaNameHasBeenSet = true;
}

bool VideoDepthEstimationOutputConfig::MediaNameHasBeenSet() const
{
    return m_mediaNameHasBeenSet;
}

string VideoDepthEstimationOutputConfig::GetExpireTime() const
{
    return m_expireTime;
}

void VideoDepthEstimationOutputConfig::SetExpireTime(const string& _expireTime)
{
    m_expireTime = _expireTime;
    m_expireTimeHasBeenSet = true;
}

bool VideoDepthEstimationOutputConfig::ExpireTimeHasBeenSet() const
{
    return m_expireTimeHasBeenSet;
}

string VideoDepthEstimationOutputConfig::GetKeepAudio() const
{
    return m_keepAudio;
}

void VideoDepthEstimationOutputConfig::SetKeepAudio(const string& _keepAudio)
{
    m_keepAudio = _keepAudio;
    m_keepAudioHasBeenSet = true;
}

bool VideoDepthEstimationOutputConfig::KeepAudioHasBeenSet() const
{
    return m_keepAudioHasBeenSet;
}

