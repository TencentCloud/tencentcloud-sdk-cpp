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

#include <tencentcloud/databuddy/v20260715/model/FileMeta.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Databuddy::V20260715::Model;
using namespace std;

FileMeta::FileMeta() :
    m_fileIdHasBeenSet(false),
    m_fileNameHasBeenSet(false),
    m_fileTypeHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_allowActionsHasBeenSet(false),
    m_isFavoriteHasBeenSet(false),
    m_pathNameHasBeenSet(false),
    m_isSystemGeneratedHasBeenSet(false)
{
}

CoreInternalOutcome FileMeta::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("FileId") && !value["FileId"].IsNull())
    {
        if (!value["FileId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FileMeta.FileId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fileId = string(value["FileId"].GetString());
        m_fileIdHasBeenSet = true;
    }

    if (value.HasMember("FileName") && !value["FileName"].IsNull())
    {
        if (!value["FileName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FileMeta.FileName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fileName = string(value["FileName"].GetString());
        m_fileNameHasBeenSet = true;
    }

    if (value.HasMember("FileType") && !value["FileType"].IsNull())
    {
        if (!value["FileType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FileMeta.FileType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fileType = string(value["FileType"].GetString());
        m_fileTypeHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FileMeta.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FileMeta.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("AllowActions") && !value["AllowActions"].IsNull())
    {
        if (!value["AllowActions"].IsArray())
            return CoreInternalOutcome(Core::Error("response `FileMeta.AllowActions` is not array type"));

        const rapidjson::Value &tmpValue = value["AllowActions"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_allowActions.push_back((*itr).GetString());
        }
        m_allowActionsHasBeenSet = true;
    }

    if (value.HasMember("IsFavorite") && !value["IsFavorite"].IsNull())
    {
        if (!value["IsFavorite"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `FileMeta.IsFavorite` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isFavorite = value["IsFavorite"].GetBool();
        m_isFavoriteHasBeenSet = true;
    }

    if (value.HasMember("PathName") && !value["PathName"].IsNull())
    {
        if (!value["PathName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FileMeta.PathName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_pathName = string(value["PathName"].GetString());
        m_pathNameHasBeenSet = true;
    }

    if (value.HasMember("IsSystemGenerated") && !value["IsSystemGenerated"].IsNull())
    {
        if (!value["IsSystemGenerated"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `FileMeta.IsSystemGenerated` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isSystemGenerated = value["IsSystemGenerated"].GetBool();
        m_isSystemGeneratedHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void FileMeta::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_fileIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fileId.c_str(), allocator).Move(), allocator);
    }

    if (m_fileNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fileName.c_str(), allocator).Move(), allocator);
    }

    if (m_fileTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fileType.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updateTime.c_str(), allocator).Move(), allocator);
    }

    if (m_allowActionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AllowActions";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_allowActions.begin(); itr != m_allowActions.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_isFavoriteHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsFavorite";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isFavorite, allocator);
    }

    if (m_pathNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PathName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_pathName.c_str(), allocator).Move(), allocator);
    }

    if (m_isSystemGeneratedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsSystemGenerated";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isSystemGenerated, allocator);
    }

}


string FileMeta::GetFileId() const
{
    return m_fileId;
}

void FileMeta::SetFileId(const string& _fileId)
{
    m_fileId = _fileId;
    m_fileIdHasBeenSet = true;
}

bool FileMeta::FileIdHasBeenSet() const
{
    return m_fileIdHasBeenSet;
}

string FileMeta::GetFileName() const
{
    return m_fileName;
}

void FileMeta::SetFileName(const string& _fileName)
{
    m_fileName = _fileName;
    m_fileNameHasBeenSet = true;
}

bool FileMeta::FileNameHasBeenSet() const
{
    return m_fileNameHasBeenSet;
}

string FileMeta::GetFileType() const
{
    return m_fileType;
}

void FileMeta::SetFileType(const string& _fileType)
{
    m_fileType = _fileType;
    m_fileTypeHasBeenSet = true;
}

bool FileMeta::FileTypeHasBeenSet() const
{
    return m_fileTypeHasBeenSet;
}

string FileMeta::GetCreateTime() const
{
    return m_createTime;
}

void FileMeta::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool FileMeta::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string FileMeta::GetUpdateTime() const
{
    return m_updateTime;
}

void FileMeta::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool FileMeta::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

vector<string> FileMeta::GetAllowActions() const
{
    return m_allowActions;
}

void FileMeta::SetAllowActions(const vector<string>& _allowActions)
{
    m_allowActions = _allowActions;
    m_allowActionsHasBeenSet = true;
}

bool FileMeta::AllowActionsHasBeenSet() const
{
    return m_allowActionsHasBeenSet;
}

bool FileMeta::GetIsFavorite() const
{
    return m_isFavorite;
}

void FileMeta::SetIsFavorite(const bool& _isFavorite)
{
    m_isFavorite = _isFavorite;
    m_isFavoriteHasBeenSet = true;
}

bool FileMeta::IsFavoriteHasBeenSet() const
{
    return m_isFavoriteHasBeenSet;
}

string FileMeta::GetPathName() const
{
    return m_pathName;
}

void FileMeta::SetPathName(const string& _pathName)
{
    m_pathName = _pathName;
    m_pathNameHasBeenSet = true;
}

bool FileMeta::PathNameHasBeenSet() const
{
    return m_pathNameHasBeenSet;
}

bool FileMeta::GetIsSystemGenerated() const
{
    return m_isSystemGenerated;
}

void FileMeta::SetIsSystemGenerated(const bool& _isSystemGenerated)
{
    m_isSystemGenerated = _isSystemGenerated;
    m_isSystemGeneratedHasBeenSet = true;
}

bool FileMeta::IsSystemGeneratedHasBeenSet() const
{
    return m_isSystemGeneratedHasBeenSet;
}

