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

#include <tencentcloud/vod/v20180717/model/FileUploadTask.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vod::V20180717::Model;
using namespace std;

FileUploadTask::FileUploadTask() :
    m_fileIdHasBeenSet(false),
    m_mediaBasicInfoHasBeenSet(false),
    m_procedureTaskIdHasBeenSet(false),
    m_reviewAudioVideoTaskIdHasBeenSet(false),
    m_metaDataHasBeenSet(false)
{
}

CoreInternalOutcome FileUploadTask::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("FileId") && !value["FileId"].IsNull())
    {
        if (!value["FileId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FileUploadTask.FileId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fileId = string(value["FileId"].GetString());
        m_fileIdHasBeenSet = true;
    }

    if (value.HasMember("MediaBasicInfo") && !value["MediaBasicInfo"].IsNull())
    {
        if (!value["MediaBasicInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `FileUploadTask.MediaBasicInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_mediaBasicInfo.Deserialize(value["MediaBasicInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_mediaBasicInfoHasBeenSet = true;
    }

    if (value.HasMember("ProcedureTaskId") && !value["ProcedureTaskId"].IsNull())
    {
        if (!value["ProcedureTaskId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FileUploadTask.ProcedureTaskId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_procedureTaskId = string(value["ProcedureTaskId"].GetString());
        m_procedureTaskIdHasBeenSet = true;
    }

    if (value.HasMember("ReviewAudioVideoTaskId") && !value["ReviewAudioVideoTaskId"].IsNull())
    {
        if (!value["ReviewAudioVideoTaskId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FileUploadTask.ReviewAudioVideoTaskId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_reviewAudioVideoTaskId = string(value["ReviewAudioVideoTaskId"].GetString());
        m_reviewAudioVideoTaskIdHasBeenSet = true;
    }

    if (value.HasMember("MetaData") && !value["MetaData"].IsNull())
    {
        if (!value["MetaData"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `FileUploadTask.MetaData` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_metaData.Deserialize(value["MetaData"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_metaDataHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void FileUploadTask::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_fileIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fileId.c_str(), allocator).Move(), allocator);
    }

    if (m_mediaBasicInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MediaBasicInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_mediaBasicInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_procedureTaskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProcedureTaskId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_procedureTaskId.c_str(), allocator).Move(), allocator);
    }

    if (m_reviewAudioVideoTaskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReviewAudioVideoTaskId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_reviewAudioVideoTaskId.c_str(), allocator).Move(), allocator);
    }

    if (m_metaDataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MetaData";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_metaData.ToJsonObject(value[key.c_str()], allocator);
    }

}


string FileUploadTask::GetFileId() const
{
    return m_fileId;
}

void FileUploadTask::SetFileId(const string& _fileId)
{
    m_fileId = _fileId;
    m_fileIdHasBeenSet = true;
}

bool FileUploadTask::FileIdHasBeenSet() const
{
    return m_fileIdHasBeenSet;
}

MediaBasicInfo FileUploadTask::GetMediaBasicInfo() const
{
    return m_mediaBasicInfo;
}

void FileUploadTask::SetMediaBasicInfo(const MediaBasicInfo& _mediaBasicInfo)
{
    m_mediaBasicInfo = _mediaBasicInfo;
    m_mediaBasicInfoHasBeenSet = true;
}

bool FileUploadTask::MediaBasicInfoHasBeenSet() const
{
    return m_mediaBasicInfoHasBeenSet;
}

string FileUploadTask::GetProcedureTaskId() const
{
    return m_procedureTaskId;
}

void FileUploadTask::SetProcedureTaskId(const string& _procedureTaskId)
{
    m_procedureTaskId = _procedureTaskId;
    m_procedureTaskIdHasBeenSet = true;
}

bool FileUploadTask::ProcedureTaskIdHasBeenSet() const
{
    return m_procedureTaskIdHasBeenSet;
}

string FileUploadTask::GetReviewAudioVideoTaskId() const
{
    return m_reviewAudioVideoTaskId;
}

void FileUploadTask::SetReviewAudioVideoTaskId(const string& _reviewAudioVideoTaskId)
{
    m_reviewAudioVideoTaskId = _reviewAudioVideoTaskId;
    m_reviewAudioVideoTaskIdHasBeenSet = true;
}

bool FileUploadTask::ReviewAudioVideoTaskIdHasBeenSet() const
{
    return m_reviewAudioVideoTaskIdHasBeenSet;
}

MediaMetaData FileUploadTask::GetMetaData() const
{
    return m_metaData;
}

void FileUploadTask::SetMetaData(const MediaMetaData& _metaData)
{
    m_metaData = _metaData;
    m_metaDataHasBeenSet = true;
}

bool FileUploadTask::MetaDataHasBeenSet() const
{
    return m_metaDataHasBeenSet;
}

