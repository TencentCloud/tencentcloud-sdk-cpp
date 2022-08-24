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

#include <tencentcloud/cme/v20191029/model/MediaCastSourceInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cme::V20191029::Model;
using namespace std;

MediaCastSourceInfo::MediaCastSourceInfo() :
    m_typeHasBeenSet(false),
    m_materialIdHasBeenSet(false),
    m_fileIdHasBeenSet(false),
    m_indexHasBeenSet(false)
{
}

CoreInternalOutcome MediaCastSourceInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MediaCastSourceInfo.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("MaterialId") && !value["MaterialId"].IsNull())
    {
        if (!value["MaterialId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MediaCastSourceInfo.MaterialId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_materialId = string(value["MaterialId"].GetString());
        m_materialIdHasBeenSet = true;
    }

    if (value.HasMember("FileId") && !value["FileId"].IsNull())
    {
        if (!value["FileId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MediaCastSourceInfo.FileId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fileId = string(value["FileId"].GetString());
        m_fileIdHasBeenSet = true;
    }

    if (value.HasMember("Index") && !value["Index"].IsNull())
    {
        if (!value["Index"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MediaCastSourceInfo.Index` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_index = value["Index"].GetInt64();
        m_indexHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MediaCastSourceInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_materialIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaterialId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_materialId.c_str(), allocator).Move(), allocator);
    }

    if (m_fileIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fileId.c_str(), allocator).Move(), allocator);
    }

    if (m_indexHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Index";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_index, allocator);
    }

}


string MediaCastSourceInfo::GetType() const
{
    return m_type;
}

void MediaCastSourceInfo::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool MediaCastSourceInfo::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string MediaCastSourceInfo::GetMaterialId() const
{
    return m_materialId;
}

void MediaCastSourceInfo::SetMaterialId(const string& _materialId)
{
    m_materialId = _materialId;
    m_materialIdHasBeenSet = true;
}

bool MediaCastSourceInfo::MaterialIdHasBeenSet() const
{
    return m_materialIdHasBeenSet;
}

string MediaCastSourceInfo::GetFileId() const
{
    return m_fileId;
}

void MediaCastSourceInfo::SetFileId(const string& _fileId)
{
    m_fileId = _fileId;
    m_fileIdHasBeenSet = true;
}

bool MediaCastSourceInfo::FileIdHasBeenSet() const
{
    return m_fileIdHasBeenSet;
}

int64_t MediaCastSourceInfo::GetIndex() const
{
    return m_index;
}

void MediaCastSourceInfo::SetIndex(const int64_t& _index)
{
    m_index = _index;
    m_indexHasBeenSet = true;
}

bool MediaCastSourceInfo::IndexHasBeenSet() const
{
    return m_indexHasBeenSet;
}

