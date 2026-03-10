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

#include <tencentcloud/hai/v20230812/model/ImageInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Hai::V20230812::Model;
using namespace std;

ImageInfo::ImageInfo() :
    m_imageRegistryUrlHasBeenSet(false)
{
}

CoreInternalOutcome ImageInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ImageRegistryUrl") && !value["ImageRegistryUrl"].IsNull())
    {
        if (!value["ImageRegistryUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageInfo.ImageRegistryUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_imageRegistryUrl = string(value["ImageRegistryUrl"].GetString());
        m_imageRegistryUrlHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ImageInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_imageRegistryUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageRegistryUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_imageRegistryUrl.c_str(), allocator).Move(), allocator);
    }

}


string ImageInfo::GetImageRegistryUrl() const
{
    return m_imageRegistryUrl;
}

void ImageInfo::SetImageRegistryUrl(const string& _imageRegistryUrl)
{
    m_imageRegistryUrl = _imageRegistryUrl;
    m_imageRegistryUrlHasBeenSet = true;
}

bool ImageInfo::ImageRegistryUrlHasBeenSet() const
{
    return m_imageRegistryUrlHasBeenSet;
}

