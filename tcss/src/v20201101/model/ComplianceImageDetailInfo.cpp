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

#include <tencentcloud/tcss/v20201101/model/ComplianceImageDetailInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcss::V20201101::Model;
using namespace std;

ComplianceImageDetailInfo::ComplianceImageDetailInfo() :
    m_imageIdHasBeenSet(false),
    m_imageNameHasBeenSet(false),
    m_imageTagHasBeenSet(false),
    m_repositoryHasBeenSet(false)
{
}

CoreInternalOutcome ComplianceImageDetailInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ImageId") && !value["ImageId"].IsNull())
    {
        if (!value["ImageId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ComplianceImageDetailInfo.ImageId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_imageId = string(value["ImageId"].GetString());
        m_imageIdHasBeenSet = true;
    }

    if (value.HasMember("ImageName") && !value["ImageName"].IsNull())
    {
        if (!value["ImageName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ComplianceImageDetailInfo.ImageName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_imageName = string(value["ImageName"].GetString());
        m_imageNameHasBeenSet = true;
    }

    if (value.HasMember("ImageTag") && !value["ImageTag"].IsNull())
    {
        if (!value["ImageTag"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ComplianceImageDetailInfo.ImageTag` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_imageTag = string(value["ImageTag"].GetString());
        m_imageTagHasBeenSet = true;
    }

    if (value.HasMember("Repository") && !value["Repository"].IsNull())
    {
        if (!value["Repository"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ComplianceImageDetailInfo.Repository` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_repository = string(value["Repository"].GetString());
        m_repositoryHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ComplianceImageDetailInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_imageIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_imageId.c_str(), allocator).Move(), allocator);
    }

    if (m_imageNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_imageName.c_str(), allocator).Move(), allocator);
    }

    if (m_imageTagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageTag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_imageTag.c_str(), allocator).Move(), allocator);
    }

    if (m_repositoryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Repository";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_repository.c_str(), allocator).Move(), allocator);
    }

}


string ComplianceImageDetailInfo::GetImageId() const
{
    return m_imageId;
}

void ComplianceImageDetailInfo::SetImageId(const string& _imageId)
{
    m_imageId = _imageId;
    m_imageIdHasBeenSet = true;
}

bool ComplianceImageDetailInfo::ImageIdHasBeenSet() const
{
    return m_imageIdHasBeenSet;
}

string ComplianceImageDetailInfo::GetImageName() const
{
    return m_imageName;
}

void ComplianceImageDetailInfo::SetImageName(const string& _imageName)
{
    m_imageName = _imageName;
    m_imageNameHasBeenSet = true;
}

bool ComplianceImageDetailInfo::ImageNameHasBeenSet() const
{
    return m_imageNameHasBeenSet;
}

string ComplianceImageDetailInfo::GetImageTag() const
{
    return m_imageTag;
}

void ComplianceImageDetailInfo::SetImageTag(const string& _imageTag)
{
    m_imageTag = _imageTag;
    m_imageTagHasBeenSet = true;
}

bool ComplianceImageDetailInfo::ImageTagHasBeenSet() const
{
    return m_imageTagHasBeenSet;
}

string ComplianceImageDetailInfo::GetRepository() const
{
    return m_repository;
}

void ComplianceImageDetailInfo::SetRepository(const string& _repository)
{
    m_repository = _repository;
    m_repositoryHasBeenSet = true;
}

bool ComplianceImageDetailInfo::RepositoryHasBeenSet() const
{
    return m_repositoryHasBeenSet;
}

