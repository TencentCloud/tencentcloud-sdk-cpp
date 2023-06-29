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
    m_idHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_fileIdHasBeenSet(false),
    m_materialIdHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_durationHasBeenSet(false),
    m_urlHasBeenSet(false)
{
}

CoreInternalOutcome MediaCastSourceInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MediaCastSourceInfo.Id` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_id = string(value["Id"].GetString());
        m_idHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MediaCastSourceInfo.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
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

    if (value.HasMember("MaterialId") && !value["MaterialId"].IsNull())
    {
        if (!value["MaterialId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MediaCastSourceInfo.MaterialId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_materialId = string(value["MaterialId"].GetString());
        m_materialIdHasBeenSet = true;
    }

    if (value.HasMember("Offset") && !value["Offset"].IsNull())
    {
        if (!value["Offset"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `MediaCastSourceInfo.Offset` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_offset = value["Offset"].GetDouble();
        m_offsetHasBeenSet = true;
    }

    if (value.HasMember("Duration") && !value["Duration"].IsNull())
    {
        if (!value["Duration"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `MediaCastSourceInfo.Duration` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_duration = value["Duration"].GetDouble();
        m_durationHasBeenSet = true;
    }

    if (value.HasMember("Url") && !value["Url"].IsNull())
    {
        if (!value["Url"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MediaCastSourceInfo.Url` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_url = string(value["Url"].GetString());
        m_urlHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MediaCastSourceInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_id.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_fileIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fileId.c_str(), allocator).Move(), allocator);
    }

    if (m_materialIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaterialId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_materialId.c_str(), allocator).Move(), allocator);
    }

    if (m_offsetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Offset";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_offset, allocator);
    }

    if (m_durationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Duration";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_duration, allocator);
    }

    if (m_urlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Url";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_url.c_str(), allocator).Move(), allocator);
    }

}


string MediaCastSourceInfo::GetId() const
{
    return m_id;
}

void MediaCastSourceInfo::SetId(const string& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool MediaCastSourceInfo::IdHasBeenSet() const
{
    return m_idHasBeenSet;
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

double MediaCastSourceInfo::GetOffset() const
{
    return m_offset;
}

void MediaCastSourceInfo::SetOffset(const double& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool MediaCastSourceInfo::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

double MediaCastSourceInfo::GetDuration() const
{
    return m_duration;
}

void MediaCastSourceInfo::SetDuration(const double& _duration)
{
    m_duration = _duration;
    m_durationHasBeenSet = true;
}

bool MediaCastSourceInfo::DurationHasBeenSet() const
{
    return m_durationHasBeenSet;
}

string MediaCastSourceInfo::GetUrl() const
{
    return m_url;
}

void MediaCastSourceInfo::SetUrl(const string& _url)
{
    m_url = _url;
    m_urlHasBeenSet = true;
}

bool MediaCastSourceInfo::UrlHasBeenSet() const
{
    return m_urlHasBeenSet;
}

