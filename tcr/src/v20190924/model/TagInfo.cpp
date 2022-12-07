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

#include <tencentcloud/tcr/v20190924/model/TagInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcr::V20190924::Model;
using namespace std;

TagInfo::TagInfo() :
    m_tagNameHasBeenSet(false),
    m_tagIdHasBeenSet(false),
    m_imageIdHasBeenSet(false),
    m_sizeHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_durationDaysHasBeenSet(false),
    m_authorHasBeenSet(false),
    m_architectureHasBeenSet(false),
    m_dockerVersionHasBeenSet(false),
    m_oSHasBeenSet(false),
    m_sizeByteHasBeenSet(false),
    m_idHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_pushTimeHasBeenSet(false),
    m_kindHasBeenSet(false)
{
}

CoreInternalOutcome TagInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TagName") && !value["TagName"].IsNull())
    {
        if (!value["TagName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TagInfo.TagName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tagName = string(value["TagName"].GetString());
        m_tagNameHasBeenSet = true;
    }

    if (value.HasMember("TagId") && !value["TagId"].IsNull())
    {
        if (!value["TagId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TagInfo.TagId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tagId = string(value["TagId"].GetString());
        m_tagIdHasBeenSet = true;
    }

    if (value.HasMember("ImageId") && !value["ImageId"].IsNull())
    {
        if (!value["ImageId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TagInfo.ImageId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_imageId = string(value["ImageId"].GetString());
        m_imageIdHasBeenSet = true;
    }

    if (value.HasMember("Size") && !value["Size"].IsNull())
    {
        if (!value["Size"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TagInfo.Size` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_size = string(value["Size"].GetString());
        m_sizeHasBeenSet = true;
    }

    if (value.HasMember("CreationTime") && !value["CreationTime"].IsNull())
    {
        if (!value["CreationTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TagInfo.CreationTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_creationTime = string(value["CreationTime"].GetString());
        m_creationTimeHasBeenSet = true;
    }

    if (value.HasMember("DurationDays") && !value["DurationDays"].IsNull())
    {
        if (!value["DurationDays"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TagInfo.DurationDays` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_durationDays = string(value["DurationDays"].GetString());
        m_durationDaysHasBeenSet = true;
    }

    if (value.HasMember("Author") && !value["Author"].IsNull())
    {
        if (!value["Author"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TagInfo.Author` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_author = string(value["Author"].GetString());
        m_authorHasBeenSet = true;
    }

    if (value.HasMember("Architecture") && !value["Architecture"].IsNull())
    {
        if (!value["Architecture"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TagInfo.Architecture` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_architecture = string(value["Architecture"].GetString());
        m_architectureHasBeenSet = true;
    }

    if (value.HasMember("DockerVersion") && !value["DockerVersion"].IsNull())
    {
        if (!value["DockerVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TagInfo.DockerVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dockerVersion = string(value["DockerVersion"].GetString());
        m_dockerVersionHasBeenSet = true;
    }

    if (value.HasMember("OS") && !value["OS"].IsNull())
    {
        if (!value["OS"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TagInfo.OS` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_oS = string(value["OS"].GetString());
        m_oSHasBeenSet = true;
    }

    if (value.HasMember("SizeByte") && !value["SizeByte"].IsNull())
    {
        if (!value["SizeByte"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TagInfo.SizeByte` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_sizeByte = value["SizeByte"].GetInt64();
        m_sizeByteHasBeenSet = true;
    }

    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TagInfo.Id` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_id = value["Id"].GetInt64();
        m_idHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TagInfo.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("PushTime") && !value["PushTime"].IsNull())
    {
        if (!value["PushTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TagInfo.PushTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_pushTime = string(value["PushTime"].GetString());
        m_pushTimeHasBeenSet = true;
    }

    if (value.HasMember("Kind") && !value["Kind"].IsNull())
    {
        if (!value["Kind"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TagInfo.Kind` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_kind = string(value["Kind"].GetString());
        m_kindHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TagInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_tagNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TagName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tagName.c_str(), allocator).Move(), allocator);
    }

    if (m_tagIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TagId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tagId.c_str(), allocator).Move(), allocator);
    }

    if (m_imageIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_imageId.c_str(), allocator).Move(), allocator);
    }

    if (m_sizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Size";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_size.c_str(), allocator).Move(), allocator);
    }

    if (m_creationTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreationTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_creationTime.c_str(), allocator).Move(), allocator);
    }

    if (m_durationDaysHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DurationDays";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_durationDays.c_str(), allocator).Move(), allocator);
    }

    if (m_authorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Author";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_author.c_str(), allocator).Move(), allocator);
    }

    if (m_architectureHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Architecture";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_architecture.c_str(), allocator).Move(), allocator);
    }

    if (m_dockerVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DockerVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dockerVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_oSHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OS";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_oS.c_str(), allocator).Move(), allocator);
    }

    if (m_sizeByteHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SizeByte";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sizeByte, allocator);
    }

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_id, allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updateTime.c_str(), allocator).Move(), allocator);
    }

    if (m_pushTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PushTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_pushTime.c_str(), allocator).Move(), allocator);
    }

    if (m_kindHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Kind";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_kind.c_str(), allocator).Move(), allocator);
    }

}


string TagInfo::GetTagName() const
{
    return m_tagName;
}

void TagInfo::SetTagName(const string& _tagName)
{
    m_tagName = _tagName;
    m_tagNameHasBeenSet = true;
}

bool TagInfo::TagNameHasBeenSet() const
{
    return m_tagNameHasBeenSet;
}

string TagInfo::GetTagId() const
{
    return m_tagId;
}

void TagInfo::SetTagId(const string& _tagId)
{
    m_tagId = _tagId;
    m_tagIdHasBeenSet = true;
}

bool TagInfo::TagIdHasBeenSet() const
{
    return m_tagIdHasBeenSet;
}

string TagInfo::GetImageId() const
{
    return m_imageId;
}

void TagInfo::SetImageId(const string& _imageId)
{
    m_imageId = _imageId;
    m_imageIdHasBeenSet = true;
}

bool TagInfo::ImageIdHasBeenSet() const
{
    return m_imageIdHasBeenSet;
}

string TagInfo::GetSize() const
{
    return m_size;
}

void TagInfo::SetSize(const string& _size)
{
    m_size = _size;
    m_sizeHasBeenSet = true;
}

bool TagInfo::SizeHasBeenSet() const
{
    return m_sizeHasBeenSet;
}

string TagInfo::GetCreationTime() const
{
    return m_creationTime;
}

void TagInfo::SetCreationTime(const string& _creationTime)
{
    m_creationTime = _creationTime;
    m_creationTimeHasBeenSet = true;
}

bool TagInfo::CreationTimeHasBeenSet() const
{
    return m_creationTimeHasBeenSet;
}

string TagInfo::GetDurationDays() const
{
    return m_durationDays;
}

void TagInfo::SetDurationDays(const string& _durationDays)
{
    m_durationDays = _durationDays;
    m_durationDaysHasBeenSet = true;
}

bool TagInfo::DurationDaysHasBeenSet() const
{
    return m_durationDaysHasBeenSet;
}

string TagInfo::GetAuthor() const
{
    return m_author;
}

void TagInfo::SetAuthor(const string& _author)
{
    m_author = _author;
    m_authorHasBeenSet = true;
}

bool TagInfo::AuthorHasBeenSet() const
{
    return m_authorHasBeenSet;
}

string TagInfo::GetArchitecture() const
{
    return m_architecture;
}

void TagInfo::SetArchitecture(const string& _architecture)
{
    m_architecture = _architecture;
    m_architectureHasBeenSet = true;
}

bool TagInfo::ArchitectureHasBeenSet() const
{
    return m_architectureHasBeenSet;
}

string TagInfo::GetDockerVersion() const
{
    return m_dockerVersion;
}

void TagInfo::SetDockerVersion(const string& _dockerVersion)
{
    m_dockerVersion = _dockerVersion;
    m_dockerVersionHasBeenSet = true;
}

bool TagInfo::DockerVersionHasBeenSet() const
{
    return m_dockerVersionHasBeenSet;
}

string TagInfo::GetOS() const
{
    return m_oS;
}

void TagInfo::SetOS(const string& _oS)
{
    m_oS = _oS;
    m_oSHasBeenSet = true;
}

bool TagInfo::OSHasBeenSet() const
{
    return m_oSHasBeenSet;
}

int64_t TagInfo::GetSizeByte() const
{
    return m_sizeByte;
}

void TagInfo::SetSizeByte(const int64_t& _sizeByte)
{
    m_sizeByte = _sizeByte;
    m_sizeByteHasBeenSet = true;
}

bool TagInfo::SizeByteHasBeenSet() const
{
    return m_sizeByteHasBeenSet;
}

int64_t TagInfo::GetId() const
{
    return m_id;
}

void TagInfo::SetId(const int64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool TagInfo::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string TagInfo::GetUpdateTime() const
{
    return m_updateTime;
}

void TagInfo::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool TagInfo::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

string TagInfo::GetPushTime() const
{
    return m_pushTime;
}

void TagInfo::SetPushTime(const string& _pushTime)
{
    m_pushTime = _pushTime;
    m_pushTimeHasBeenSet = true;
}

bool TagInfo::PushTimeHasBeenSet() const
{
    return m_pushTimeHasBeenSet;
}

string TagInfo::GetKind() const
{
    return m_kind;
}

void TagInfo::SetKind(const string& _kind)
{
    m_kind = _kind;
    m_kindHasBeenSet = true;
}

bool TagInfo::KindHasBeenSet() const
{
    return m_kindHasBeenSet;
}

