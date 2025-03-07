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

#include <tencentcloud/pts/v20210728/model/ScriptInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Pts::V20210728::Model;
using namespace std;

ScriptInfo::ScriptInfo() :
    m_nameHasBeenSet(false),
    m_sizeHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_updatedAtHasBeenSet(false),
    m_encodedContentHasBeenSet(false),
    m_encodedHttpArchiveHasBeenSet(false),
    m_loadWeightHasBeenSet(false),
    m_fileIdHasBeenSet(false),
    m_uploadedHasBeenSet(false)
{
}

CoreInternalOutcome ScriptInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ScriptInfo.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Size") && !value["Size"].IsNull())
    {
        if (!value["Size"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ScriptInfo.Size` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_size = value["Size"].GetInt64();
        m_sizeHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ScriptInfo.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("UpdatedAt") && !value["UpdatedAt"].IsNull())
    {
        if (!value["UpdatedAt"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ScriptInfo.UpdatedAt` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updatedAt = string(value["UpdatedAt"].GetString());
        m_updatedAtHasBeenSet = true;
    }

    if (value.HasMember("EncodedContent") && !value["EncodedContent"].IsNull())
    {
        if (!value["EncodedContent"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ScriptInfo.EncodedContent` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_encodedContent = string(value["EncodedContent"].GetString());
        m_encodedContentHasBeenSet = true;
    }

    if (value.HasMember("EncodedHttpArchive") && !value["EncodedHttpArchive"].IsNull())
    {
        if (!value["EncodedHttpArchive"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ScriptInfo.EncodedHttpArchive` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_encodedHttpArchive = string(value["EncodedHttpArchive"].GetString());
        m_encodedHttpArchiveHasBeenSet = true;
    }

    if (value.HasMember("LoadWeight") && !value["LoadWeight"].IsNull())
    {
        if (!value["LoadWeight"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ScriptInfo.LoadWeight` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_loadWeight = value["LoadWeight"].GetInt64();
        m_loadWeightHasBeenSet = true;
    }

    if (value.HasMember("FileId") && !value["FileId"].IsNull())
    {
        if (!value["FileId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ScriptInfo.FileId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fileId = string(value["FileId"].GetString());
        m_fileIdHasBeenSet = true;
    }

    if (value.HasMember("Uploaded") && !value["Uploaded"].IsNull())
    {
        if (!value["Uploaded"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ScriptInfo.Uploaded` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_uploaded = value["Uploaded"].GetBool();
        m_uploadedHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ScriptInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_sizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Size";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_size, allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_updatedAtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdatedAt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updatedAt.c_str(), allocator).Move(), allocator);
    }

    if (m_encodedContentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EncodedContent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_encodedContent.c_str(), allocator).Move(), allocator);
    }

    if (m_encodedHttpArchiveHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EncodedHttpArchive";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_encodedHttpArchive.c_str(), allocator).Move(), allocator);
    }

    if (m_loadWeightHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LoadWeight";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_loadWeight, allocator);
    }

    if (m_fileIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fileId.c_str(), allocator).Move(), allocator);
    }

    if (m_uploadedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Uploaded";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_uploaded, allocator);
    }

}


string ScriptInfo::GetName() const
{
    return m_name;
}

void ScriptInfo::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool ScriptInfo::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

int64_t ScriptInfo::GetSize() const
{
    return m_size;
}

void ScriptInfo::SetSize(const int64_t& _size)
{
    m_size = _size;
    m_sizeHasBeenSet = true;
}

bool ScriptInfo::SizeHasBeenSet() const
{
    return m_sizeHasBeenSet;
}

string ScriptInfo::GetType() const
{
    return m_type;
}

void ScriptInfo::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool ScriptInfo::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string ScriptInfo::GetUpdatedAt() const
{
    return m_updatedAt;
}

void ScriptInfo::SetUpdatedAt(const string& _updatedAt)
{
    m_updatedAt = _updatedAt;
    m_updatedAtHasBeenSet = true;
}

bool ScriptInfo::UpdatedAtHasBeenSet() const
{
    return m_updatedAtHasBeenSet;
}

string ScriptInfo::GetEncodedContent() const
{
    return m_encodedContent;
}

void ScriptInfo::SetEncodedContent(const string& _encodedContent)
{
    m_encodedContent = _encodedContent;
    m_encodedContentHasBeenSet = true;
}

bool ScriptInfo::EncodedContentHasBeenSet() const
{
    return m_encodedContentHasBeenSet;
}

string ScriptInfo::GetEncodedHttpArchive() const
{
    return m_encodedHttpArchive;
}

void ScriptInfo::SetEncodedHttpArchive(const string& _encodedHttpArchive)
{
    m_encodedHttpArchive = _encodedHttpArchive;
    m_encodedHttpArchiveHasBeenSet = true;
}

bool ScriptInfo::EncodedHttpArchiveHasBeenSet() const
{
    return m_encodedHttpArchiveHasBeenSet;
}

int64_t ScriptInfo::GetLoadWeight() const
{
    return m_loadWeight;
}

void ScriptInfo::SetLoadWeight(const int64_t& _loadWeight)
{
    m_loadWeight = _loadWeight;
    m_loadWeightHasBeenSet = true;
}

bool ScriptInfo::LoadWeightHasBeenSet() const
{
    return m_loadWeightHasBeenSet;
}

string ScriptInfo::GetFileId() const
{
    return m_fileId;
}

void ScriptInfo::SetFileId(const string& _fileId)
{
    m_fileId = _fileId;
    m_fileIdHasBeenSet = true;
}

bool ScriptInfo::FileIdHasBeenSet() const
{
    return m_fileIdHasBeenSet;
}

bool ScriptInfo::GetUploaded() const
{
    return m_uploaded;
}

void ScriptInfo::SetUploaded(const bool& _uploaded)
{
    m_uploaded = _uploaded;
    m_uploadedHasBeenSet = true;
}

bool ScriptInfo::UploadedHasBeenSet() const
{
    return m_uploadedHasBeenSet;
}

