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

#include <tencentcloud/tsf/v20180326/model/ImageTag.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tsf::V20180326::Model;
using namespace std;

ImageTag::ImageTag() :
    m_repoNameHasBeenSet(false),
    m_tagNameHasBeenSet(false),
    m_tagIdHasBeenSet(false),
    m_imageIdHasBeenSet(false),
    m_sizeHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_authorHasBeenSet(false),
    m_architectureHasBeenSet(false),
    m_dockerVersionHasBeenSet(false),
    m_osHasBeenSet(false),
    m_pushTimeHasBeenSet(false),
    m_sizeByteHasBeenSet(false),
    m_tcrRepoInfoHasBeenSet(false)
{
}

CoreInternalOutcome ImageTag::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RepoName") && !value["RepoName"].IsNull())
    {
        if (!value["RepoName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageTag.RepoName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_repoName = string(value["RepoName"].GetString());
        m_repoNameHasBeenSet = true;
    }

    if (value.HasMember("TagName") && !value["TagName"].IsNull())
    {
        if (!value["TagName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageTag.TagName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tagName = string(value["TagName"].GetString());
        m_tagNameHasBeenSet = true;
    }

    if (value.HasMember("TagId") && !value["TagId"].IsNull())
    {
        if (!value["TagId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageTag.TagId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tagId = string(value["TagId"].GetString());
        m_tagIdHasBeenSet = true;
    }

    if (value.HasMember("ImageId") && !value["ImageId"].IsNull())
    {
        if (!value["ImageId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageTag.ImageId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_imageId = string(value["ImageId"].GetString());
        m_imageIdHasBeenSet = true;
    }

    if (value.HasMember("Size") && !value["Size"].IsNull())
    {
        if (!value["Size"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageTag.Size` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_size = string(value["Size"].GetString());
        m_sizeHasBeenSet = true;
    }

    if (value.HasMember("CreationTime") && !value["CreationTime"].IsNull())
    {
        if (!value["CreationTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageTag.CreationTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_creationTime = string(value["CreationTime"].GetString());
        m_creationTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageTag.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("Author") && !value["Author"].IsNull())
    {
        if (!value["Author"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageTag.Author` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_author = string(value["Author"].GetString());
        m_authorHasBeenSet = true;
    }

    if (value.HasMember("Architecture") && !value["Architecture"].IsNull())
    {
        if (!value["Architecture"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageTag.Architecture` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_architecture = string(value["Architecture"].GetString());
        m_architectureHasBeenSet = true;
    }

    if (value.HasMember("DockerVersion") && !value["DockerVersion"].IsNull())
    {
        if (!value["DockerVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageTag.DockerVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dockerVersion = string(value["DockerVersion"].GetString());
        m_dockerVersionHasBeenSet = true;
    }

    if (value.HasMember("Os") && !value["Os"].IsNull())
    {
        if (!value["Os"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageTag.Os` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_os = string(value["Os"].GetString());
        m_osHasBeenSet = true;
    }

    if (value.HasMember("PushTime") && !value["PushTime"].IsNull())
    {
        if (!value["PushTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageTag.PushTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_pushTime = string(value["PushTime"].GetString());
        m_pushTimeHasBeenSet = true;
    }

    if (value.HasMember("SizeByte") && !value["SizeByte"].IsNull())
    {
        if (!value["SizeByte"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ImageTag.SizeByte` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_sizeByte = value["SizeByte"].GetInt64();
        m_sizeByteHasBeenSet = true;
    }

    if (value.HasMember("TcrRepoInfo") && !value["TcrRepoInfo"].IsNull())
    {
        if (!value["TcrRepoInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ImageTag.TcrRepoInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_tcrRepoInfo.Deserialize(value["TcrRepoInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_tcrRepoInfoHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ImageTag::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_repoNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RepoName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_repoName.c_str(), allocator).Move(), allocator);
    }

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

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updateTime.c_str(), allocator).Move(), allocator);
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

    if (m_osHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Os";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_os.c_str(), allocator).Move(), allocator);
    }

    if (m_pushTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PushTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_pushTime.c_str(), allocator).Move(), allocator);
    }

    if (m_sizeByteHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SizeByte";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sizeByte, allocator);
    }

    if (m_tcrRepoInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TcrRepoInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_tcrRepoInfo.ToJsonObject(value[key.c_str()], allocator);
    }

}


string ImageTag::GetRepoName() const
{
    return m_repoName;
}

void ImageTag::SetRepoName(const string& _repoName)
{
    m_repoName = _repoName;
    m_repoNameHasBeenSet = true;
}

bool ImageTag::RepoNameHasBeenSet() const
{
    return m_repoNameHasBeenSet;
}

string ImageTag::GetTagName() const
{
    return m_tagName;
}

void ImageTag::SetTagName(const string& _tagName)
{
    m_tagName = _tagName;
    m_tagNameHasBeenSet = true;
}

bool ImageTag::TagNameHasBeenSet() const
{
    return m_tagNameHasBeenSet;
}

string ImageTag::GetTagId() const
{
    return m_tagId;
}

void ImageTag::SetTagId(const string& _tagId)
{
    m_tagId = _tagId;
    m_tagIdHasBeenSet = true;
}

bool ImageTag::TagIdHasBeenSet() const
{
    return m_tagIdHasBeenSet;
}

string ImageTag::GetImageId() const
{
    return m_imageId;
}

void ImageTag::SetImageId(const string& _imageId)
{
    m_imageId = _imageId;
    m_imageIdHasBeenSet = true;
}

bool ImageTag::ImageIdHasBeenSet() const
{
    return m_imageIdHasBeenSet;
}

string ImageTag::GetSize() const
{
    return m_size;
}

void ImageTag::SetSize(const string& _size)
{
    m_size = _size;
    m_sizeHasBeenSet = true;
}

bool ImageTag::SizeHasBeenSet() const
{
    return m_sizeHasBeenSet;
}

string ImageTag::GetCreationTime() const
{
    return m_creationTime;
}

void ImageTag::SetCreationTime(const string& _creationTime)
{
    m_creationTime = _creationTime;
    m_creationTimeHasBeenSet = true;
}

bool ImageTag::CreationTimeHasBeenSet() const
{
    return m_creationTimeHasBeenSet;
}

string ImageTag::GetUpdateTime() const
{
    return m_updateTime;
}

void ImageTag::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool ImageTag::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

string ImageTag::GetAuthor() const
{
    return m_author;
}

void ImageTag::SetAuthor(const string& _author)
{
    m_author = _author;
    m_authorHasBeenSet = true;
}

bool ImageTag::AuthorHasBeenSet() const
{
    return m_authorHasBeenSet;
}

string ImageTag::GetArchitecture() const
{
    return m_architecture;
}

void ImageTag::SetArchitecture(const string& _architecture)
{
    m_architecture = _architecture;
    m_architectureHasBeenSet = true;
}

bool ImageTag::ArchitectureHasBeenSet() const
{
    return m_architectureHasBeenSet;
}

string ImageTag::GetDockerVersion() const
{
    return m_dockerVersion;
}

void ImageTag::SetDockerVersion(const string& _dockerVersion)
{
    m_dockerVersion = _dockerVersion;
    m_dockerVersionHasBeenSet = true;
}

bool ImageTag::DockerVersionHasBeenSet() const
{
    return m_dockerVersionHasBeenSet;
}

string ImageTag::GetOs() const
{
    return m_os;
}

void ImageTag::SetOs(const string& _os)
{
    m_os = _os;
    m_osHasBeenSet = true;
}

bool ImageTag::OsHasBeenSet() const
{
    return m_osHasBeenSet;
}

string ImageTag::GetPushTime() const
{
    return m_pushTime;
}

void ImageTag::SetPushTime(const string& _pushTime)
{
    m_pushTime = _pushTime;
    m_pushTimeHasBeenSet = true;
}

bool ImageTag::PushTimeHasBeenSet() const
{
    return m_pushTimeHasBeenSet;
}

int64_t ImageTag::GetSizeByte() const
{
    return m_sizeByte;
}

void ImageTag::SetSizeByte(const int64_t& _sizeByte)
{
    m_sizeByte = _sizeByte;
    m_sizeByteHasBeenSet = true;
}

bool ImageTag::SizeByteHasBeenSet() const
{
    return m_sizeByteHasBeenSet;
}

TcrRepoInfo ImageTag::GetTcrRepoInfo() const
{
    return m_tcrRepoInfo;
}

void ImageTag::SetTcrRepoInfo(const TcrRepoInfo& _tcrRepoInfo)
{
    m_tcrRepoInfo = _tcrRepoInfo;
    m_tcrRepoInfoHasBeenSet = true;
}

bool ImageTag::TcrRepoInfoHasBeenSet() const
{
    return m_tcrRepoInfoHasBeenSet;
}

