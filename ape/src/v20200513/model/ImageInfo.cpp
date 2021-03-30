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

#include <tencentcloud/ape/v20200513/model/ImageInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ape::V20200513::Model;
using namespace rapidjson;
using namespace std;

ImageInfo::ImageInfo() :
    m_imageIdHasBeenSet(false),
    m_licenseScopeIdHasBeenSet(false),
    m_dimensionsNameIdHasBeenSet(false),
    m_userIdHasBeenSet(false)
{
}

CoreInternalOutcome ImageInfo::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("ImageId") && !value["ImageId"].IsNull())
    {
        if (!value["ImageId"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `ImageInfo.ImageId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_imageId = value["ImageId"].GetInt64();
        m_imageIdHasBeenSet = true;
    }

    if (value.HasMember("LicenseScopeId") && !value["LicenseScopeId"].IsNull())
    {
        if (!value["LicenseScopeId"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `ImageInfo.LicenseScopeId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_licenseScopeId = value["LicenseScopeId"].GetInt64();
        m_licenseScopeIdHasBeenSet = true;
    }

    if (value.HasMember("DimensionsNameId") && !value["DimensionsNameId"].IsNull())
    {
        if (!value["DimensionsNameId"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `ImageInfo.DimensionsNameId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_dimensionsNameId = value["DimensionsNameId"].GetInt64();
        m_dimensionsNameIdHasBeenSet = true;
    }

    if (value.HasMember("UserId") && !value["UserId"].IsNull())
    {
        if (!value["UserId"].IsString())
        {
            return CoreInternalOutcome(Error("response `ImageInfo.UserId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userId = string(value["UserId"].GetString());
        m_userIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ImageInfo::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_imageIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ImageId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_imageId, allocator);
    }

    if (m_licenseScopeIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "LicenseScopeId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_licenseScopeId, allocator);
    }

    if (m_dimensionsNameIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "DimensionsNameId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_dimensionsNameId, allocator);
    }

    if (m_userIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "UserId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_userId.c_str(), allocator).Move(), allocator);
    }

}


int64_t ImageInfo::GetImageId() const
{
    return m_imageId;
}

void ImageInfo::SetImageId(const int64_t& _imageId)
{
    m_imageId = _imageId;
    m_imageIdHasBeenSet = true;
}

bool ImageInfo::ImageIdHasBeenSet() const
{
    return m_imageIdHasBeenSet;
}

int64_t ImageInfo::GetLicenseScopeId() const
{
    return m_licenseScopeId;
}

void ImageInfo::SetLicenseScopeId(const int64_t& _licenseScopeId)
{
    m_licenseScopeId = _licenseScopeId;
    m_licenseScopeIdHasBeenSet = true;
}

bool ImageInfo::LicenseScopeIdHasBeenSet() const
{
    return m_licenseScopeIdHasBeenSet;
}

int64_t ImageInfo::GetDimensionsNameId() const
{
    return m_dimensionsNameId;
}

void ImageInfo::SetDimensionsNameId(const int64_t& _dimensionsNameId)
{
    m_dimensionsNameId = _dimensionsNameId;
    m_dimensionsNameIdHasBeenSet = true;
}

bool ImageInfo::DimensionsNameIdHasBeenSet() const
{
    return m_dimensionsNameIdHasBeenSet;
}

string ImageInfo::GetUserId() const
{
    return m_userId;
}

void ImageInfo::SetUserId(const string& _userId)
{
    m_userId = _userId;
    m_userIdHasBeenSet = true;
}

bool ImageInfo::UserIdHasBeenSet() const
{
    return m_userIdHasBeenSet;
}

