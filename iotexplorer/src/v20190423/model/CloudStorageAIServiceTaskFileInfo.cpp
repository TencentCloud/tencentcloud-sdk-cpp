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

#include <tencentcloud/iotexplorer/v20190423/model/CloudStorageAIServiceTaskFileInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iotexplorer::V20190423::Model;
using namespace std;

CloudStorageAIServiceTaskFileInfo::CloudStorageAIServiceTaskFileInfo() :
    m_fileNameHasBeenSet(false),
    m_fileSizeHasBeenSet(false),
    m_downloadURLHasBeenSet(false),
    m_mimeTypeHasBeenSet(false),
    m_videoMetaInfoHasBeenSet(false),
    m_labelsHasBeenSet(false)
{
}

CoreInternalOutcome CloudStorageAIServiceTaskFileInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("FileName") && !value["FileName"].IsNull())
    {
        if (!value["FileName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudStorageAIServiceTaskFileInfo.FileName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fileName = string(value["FileName"].GetString());
        m_fileNameHasBeenSet = true;
    }

    if (value.HasMember("FileSize") && !value["FileSize"].IsNull())
    {
        if (!value["FileSize"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CloudStorageAIServiceTaskFileInfo.FileSize` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_fileSize = value["FileSize"].GetInt64();
        m_fileSizeHasBeenSet = true;
    }

    if (value.HasMember("DownloadURL") && !value["DownloadURL"].IsNull())
    {
        if (!value["DownloadURL"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudStorageAIServiceTaskFileInfo.DownloadURL` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_downloadURL = string(value["DownloadURL"].GetString());
        m_downloadURLHasBeenSet = true;
    }

    if (value.HasMember("MimeType") && !value["MimeType"].IsNull())
    {
        if (!value["MimeType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudStorageAIServiceTaskFileInfo.MimeType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mimeType = string(value["MimeType"].GetString());
        m_mimeTypeHasBeenSet = true;
    }

    if (value.HasMember("VideoMetaInfo") && !value["VideoMetaInfo"].IsNull())
    {
        if (!value["VideoMetaInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `CloudStorageAIServiceTaskFileInfo.VideoMetaInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_videoMetaInfo.Deserialize(value["VideoMetaInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_videoMetaInfoHasBeenSet = true;
    }

    if (value.HasMember("Labels") && !value["Labels"].IsNull())
    {
        if (!value["Labels"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CloudStorageAIServiceTaskFileInfo.Labels` is not array type"));

        const rapidjson::Value &tmpValue = value["Labels"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            CloudStorageAIServiceTaskFileLabel item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_labels.push_back(item);
        }
        m_labelsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CloudStorageAIServiceTaskFileInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_fileNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fileName.c_str(), allocator).Move(), allocator);
    }

    if (m_fileSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_fileSize, allocator);
    }

    if (m_downloadURLHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DownloadURL";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_downloadURL.c_str(), allocator).Move(), allocator);
    }

    if (m_mimeTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MimeType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_mimeType.c_str(), allocator).Move(), allocator);
    }

    if (m_videoMetaInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VideoMetaInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_videoMetaInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_labelsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Labels";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_labels.begin(); itr != m_labels.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string CloudStorageAIServiceTaskFileInfo::GetFileName() const
{
    return m_fileName;
}

void CloudStorageAIServiceTaskFileInfo::SetFileName(const string& _fileName)
{
    m_fileName = _fileName;
    m_fileNameHasBeenSet = true;
}

bool CloudStorageAIServiceTaskFileInfo::FileNameHasBeenSet() const
{
    return m_fileNameHasBeenSet;
}

int64_t CloudStorageAIServiceTaskFileInfo::GetFileSize() const
{
    return m_fileSize;
}

void CloudStorageAIServiceTaskFileInfo::SetFileSize(const int64_t& _fileSize)
{
    m_fileSize = _fileSize;
    m_fileSizeHasBeenSet = true;
}

bool CloudStorageAIServiceTaskFileInfo::FileSizeHasBeenSet() const
{
    return m_fileSizeHasBeenSet;
}

string CloudStorageAIServiceTaskFileInfo::GetDownloadURL() const
{
    return m_downloadURL;
}

void CloudStorageAIServiceTaskFileInfo::SetDownloadURL(const string& _downloadURL)
{
    m_downloadURL = _downloadURL;
    m_downloadURLHasBeenSet = true;
}

bool CloudStorageAIServiceTaskFileInfo::DownloadURLHasBeenSet() const
{
    return m_downloadURLHasBeenSet;
}

string CloudStorageAIServiceTaskFileInfo::GetMimeType() const
{
    return m_mimeType;
}

void CloudStorageAIServiceTaskFileInfo::SetMimeType(const string& _mimeType)
{
    m_mimeType = _mimeType;
    m_mimeTypeHasBeenSet = true;
}

bool CloudStorageAIServiceTaskFileInfo::MimeTypeHasBeenSet() const
{
    return m_mimeTypeHasBeenSet;
}

CloudStorageAIServiceTaskVideoMetaInfo CloudStorageAIServiceTaskFileInfo::GetVideoMetaInfo() const
{
    return m_videoMetaInfo;
}

void CloudStorageAIServiceTaskFileInfo::SetVideoMetaInfo(const CloudStorageAIServiceTaskVideoMetaInfo& _videoMetaInfo)
{
    m_videoMetaInfo = _videoMetaInfo;
    m_videoMetaInfoHasBeenSet = true;
}

bool CloudStorageAIServiceTaskFileInfo::VideoMetaInfoHasBeenSet() const
{
    return m_videoMetaInfoHasBeenSet;
}

vector<CloudStorageAIServiceTaskFileLabel> CloudStorageAIServiceTaskFileInfo::GetLabels() const
{
    return m_labels;
}

void CloudStorageAIServiceTaskFileInfo::SetLabels(const vector<CloudStorageAIServiceTaskFileLabel>& _labels)
{
    m_labels = _labels;
    m_labelsHasBeenSet = true;
}

bool CloudStorageAIServiceTaskFileInfo::LabelsHasBeenSet() const
{
    return m_labelsHasBeenSet;
}

