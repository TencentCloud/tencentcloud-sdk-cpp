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

#include <tencentcloud/ivld/v20210903/model/MediaInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ivld::V20210903::Model;
using namespace std;

MediaInfo::MediaInfo() :
    m_mediaIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_downLoadURLHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_failedReasonHasBeenSet(false),
    m_metadataHasBeenSet(false),
    m_progressHasBeenSet(false),
    m_labelHasBeenSet(false),
    m_callbackURLHasBeenSet(false),
    m_mediaTypeHasBeenSet(false),
    m_audioMetadataHasBeenSet(false),
    m_imageMetadataHasBeenSet(false),
    m_textMetadataHasBeenSet(false)
{
}

CoreInternalOutcome MediaInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("MediaId") && !value["MediaId"].IsNull())
    {
        if (!value["MediaId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MediaInfo.MediaId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mediaId = string(value["MediaId"].GetString());
        m_mediaIdHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MediaInfo.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("DownLoadURL") && !value["DownLoadURL"].IsNull())
    {
        if (!value["DownLoadURL"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MediaInfo.DownLoadURL` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_downLoadURL = string(value["DownLoadURL"].GetString());
        m_downLoadURLHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MediaInfo.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("FailedReason") && !value["FailedReason"].IsNull())
    {
        if (!value["FailedReason"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MediaInfo.FailedReason` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_failedReason = string(value["FailedReason"].GetString());
        m_failedReasonHasBeenSet = true;
    }

    if (value.HasMember("Metadata") && !value["Metadata"].IsNull())
    {
        if (!value["Metadata"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `MediaInfo.Metadata` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_metadata.Deserialize(value["Metadata"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_metadataHasBeenSet = true;
    }

    if (value.HasMember("Progress") && !value["Progress"].IsNull())
    {
        if (!value["Progress"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `MediaInfo.Progress` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_progress = value["Progress"].GetDouble();
        m_progressHasBeenSet = true;
    }

    if (value.HasMember("Label") && !value["Label"].IsNull())
    {
        if (!value["Label"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MediaInfo.Label` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_label = string(value["Label"].GetString());
        m_labelHasBeenSet = true;
    }

    if (value.HasMember("CallbackURL") && !value["CallbackURL"].IsNull())
    {
        if (!value["CallbackURL"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MediaInfo.CallbackURL` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_callbackURL = string(value["CallbackURL"].GetString());
        m_callbackURLHasBeenSet = true;
    }

    if (value.HasMember("MediaType") && !value["MediaType"].IsNull())
    {
        if (!value["MediaType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MediaInfo.MediaType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_mediaType = value["MediaType"].GetInt64();
        m_mediaTypeHasBeenSet = true;
    }

    if (value.HasMember("AudioMetadata") && !value["AudioMetadata"].IsNull())
    {
        if (!value["AudioMetadata"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `MediaInfo.AudioMetadata` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_audioMetadata.Deserialize(value["AudioMetadata"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_audioMetadataHasBeenSet = true;
    }

    if (value.HasMember("ImageMetadata") && !value["ImageMetadata"].IsNull())
    {
        if (!value["ImageMetadata"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `MediaInfo.ImageMetadata` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_imageMetadata.Deserialize(value["ImageMetadata"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_imageMetadataHasBeenSet = true;
    }

    if (value.HasMember("TextMetadata") && !value["TextMetadata"].IsNull())
    {
        if (!value["TextMetadata"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `MediaInfo.TextMetadata` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_textMetadata.Deserialize(value["TextMetadata"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_textMetadataHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MediaInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_mediaIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MediaId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_mediaId.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_downLoadURLHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DownLoadURL";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_downLoadURL.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_failedReasonHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FailedReason";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_failedReason.c_str(), allocator).Move(), allocator);
    }

    if (m_metadataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Metadata";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_metadata.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_progressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Progress";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_progress, allocator);
    }

    if (m_labelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Label";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_label.c_str(), allocator).Move(), allocator);
    }

    if (m_callbackURLHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CallbackURL";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_callbackURL.c_str(), allocator).Move(), allocator);
    }

    if (m_mediaTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MediaType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_mediaType, allocator);
    }

    if (m_audioMetadataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AudioMetadata";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_audioMetadata.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_imageMetadataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageMetadata";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_imageMetadata.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_textMetadataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TextMetadata";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_textMetadata.ToJsonObject(value[key.c_str()], allocator);
    }

}


string MediaInfo::GetMediaId() const
{
    return m_mediaId;
}

void MediaInfo::SetMediaId(const string& _mediaId)
{
    m_mediaId = _mediaId;
    m_mediaIdHasBeenSet = true;
}

bool MediaInfo::MediaIdHasBeenSet() const
{
    return m_mediaIdHasBeenSet;
}

string MediaInfo::GetName() const
{
    return m_name;
}

void MediaInfo::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool MediaInfo::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string MediaInfo::GetDownLoadURL() const
{
    return m_downLoadURL;
}

void MediaInfo::SetDownLoadURL(const string& _downLoadURL)
{
    m_downLoadURL = _downLoadURL;
    m_downLoadURLHasBeenSet = true;
}

bool MediaInfo::DownLoadURLHasBeenSet() const
{
    return m_downLoadURLHasBeenSet;
}

int64_t MediaInfo::GetStatus() const
{
    return m_status;
}

void MediaInfo::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool MediaInfo::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string MediaInfo::GetFailedReason() const
{
    return m_failedReason;
}

void MediaInfo::SetFailedReason(const string& _failedReason)
{
    m_failedReason = _failedReason;
    m_failedReasonHasBeenSet = true;
}

bool MediaInfo::FailedReasonHasBeenSet() const
{
    return m_failedReasonHasBeenSet;
}

MediaMetadata MediaInfo::GetMetadata() const
{
    return m_metadata;
}

void MediaInfo::SetMetadata(const MediaMetadata& _metadata)
{
    m_metadata = _metadata;
    m_metadataHasBeenSet = true;
}

bool MediaInfo::MetadataHasBeenSet() const
{
    return m_metadataHasBeenSet;
}

double MediaInfo::GetProgress() const
{
    return m_progress;
}

void MediaInfo::SetProgress(const double& _progress)
{
    m_progress = _progress;
    m_progressHasBeenSet = true;
}

bool MediaInfo::ProgressHasBeenSet() const
{
    return m_progressHasBeenSet;
}

string MediaInfo::GetLabel() const
{
    return m_label;
}

void MediaInfo::SetLabel(const string& _label)
{
    m_label = _label;
    m_labelHasBeenSet = true;
}

bool MediaInfo::LabelHasBeenSet() const
{
    return m_labelHasBeenSet;
}

string MediaInfo::GetCallbackURL() const
{
    return m_callbackURL;
}

void MediaInfo::SetCallbackURL(const string& _callbackURL)
{
    m_callbackURL = _callbackURL;
    m_callbackURLHasBeenSet = true;
}

bool MediaInfo::CallbackURLHasBeenSet() const
{
    return m_callbackURLHasBeenSet;
}

int64_t MediaInfo::GetMediaType() const
{
    return m_mediaType;
}

void MediaInfo::SetMediaType(const int64_t& _mediaType)
{
    m_mediaType = _mediaType;
    m_mediaTypeHasBeenSet = true;
}

bool MediaInfo::MediaTypeHasBeenSet() const
{
    return m_mediaTypeHasBeenSet;
}

AudioMetadata MediaInfo::GetAudioMetadata() const
{
    return m_audioMetadata;
}

void MediaInfo::SetAudioMetadata(const AudioMetadata& _audioMetadata)
{
    m_audioMetadata = _audioMetadata;
    m_audioMetadataHasBeenSet = true;
}

bool MediaInfo::AudioMetadataHasBeenSet() const
{
    return m_audioMetadataHasBeenSet;
}

ImageMetadata MediaInfo::GetImageMetadata() const
{
    return m_imageMetadata;
}

void MediaInfo::SetImageMetadata(const ImageMetadata& _imageMetadata)
{
    m_imageMetadata = _imageMetadata;
    m_imageMetadataHasBeenSet = true;
}

bool MediaInfo::ImageMetadataHasBeenSet() const
{
    return m_imageMetadataHasBeenSet;
}

TextMetadata MediaInfo::GetTextMetadata() const
{
    return m_textMetadata;
}

void MediaInfo::SetTextMetadata(const TextMetadata& _textMetadata)
{
    m_textMetadata = _textMetadata;
    m_textMetadataHasBeenSet = true;
}

bool MediaInfo::TextMetadataHasBeenSet() const
{
    return m_textMetadataHasBeenSet;
}

