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

#include <tencentcloud/emr/v20190103/model/CustomImage.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Emr::V20190103::Model;
using namespace std;

CustomImage::CustomImage() :
    m_imageSourceTypeHasBeenSet(false),
    m_imageInfoHasBeenSet(false),
    m_imagePullSecretHasBeenSet(false)
{
}

CoreInternalOutcome CustomImage::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ImageSourceType") && !value["ImageSourceType"].IsNull())
    {
        if (!value["ImageSourceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CustomImage.ImageSourceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_imageSourceType = string(value["ImageSourceType"].GetString());
        m_imageSourceTypeHasBeenSet = true;
    }

    if (value.HasMember("ImageInfo") && !value["ImageInfo"].IsNull())
    {
        if (!value["ImageInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `CustomImage.ImageInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_imageInfo.Deserialize(value["ImageInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_imageInfoHasBeenSet = true;
    }

    if (value.HasMember("ImagePullSecret") && !value["ImagePullSecret"].IsNull())
    {
        if (!value["ImagePullSecret"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `CustomImage.ImagePullSecret` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_imagePullSecret.Deserialize(value["ImagePullSecret"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_imagePullSecretHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CustomImage::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_imageSourceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageSourceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_imageSourceType.c_str(), allocator).Move(), allocator);
    }

    if (m_imageInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_imageInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_imagePullSecretHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImagePullSecret";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_imagePullSecret.ToJsonObject(value[key.c_str()], allocator);
    }

}


string CustomImage::GetImageSourceType() const
{
    return m_imageSourceType;
}

void CustomImage::SetImageSourceType(const string& _imageSourceType)
{
    m_imageSourceType = _imageSourceType;
    m_imageSourceTypeHasBeenSet = true;
}

bool CustomImage::ImageSourceTypeHasBeenSet() const
{
    return m_imageSourceTypeHasBeenSet;
}

ImageInfo CustomImage::GetImageInfo() const
{
    return m_imageInfo;
}

void CustomImage::SetImageInfo(const ImageInfo& _imageInfo)
{
    m_imageInfo = _imageInfo;
    m_imageInfoHasBeenSet = true;
}

bool CustomImage::ImageInfoHasBeenSet() const
{
    return m_imageInfoHasBeenSet;
}

ImagePullSecret CustomImage::GetImagePullSecret() const
{
    return m_imagePullSecret;
}

void CustomImage::SetImagePullSecret(const ImagePullSecret& _imagePullSecret)
{
    m_imagePullSecret = _imagePullSecret;
    m_imagePullSecretHasBeenSet = true;
}

bool CustomImage::ImagePullSecretHasBeenSet() const
{
    return m_imagePullSecretHasBeenSet;
}

