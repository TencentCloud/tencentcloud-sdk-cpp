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

#include <tencentcloud/mps/v20190612/model/ImageTransformConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mps::V20190612::Model;
using namespace std;

ImageTransformConfig::ImageTransformConfig() :
    m_imageResizeHasBeenSet(false)
{
}

CoreInternalOutcome ImageTransformConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ImageResize") && !value["ImageResize"].IsNull())
    {
        if (!value["ImageResize"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ImageTransformConfig.ImageResize` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_imageResize.Deserialize(value["ImageResize"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_imageResizeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ImageTransformConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_imageResizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageResize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_imageResize.ToJsonObject(value[key.c_str()], allocator);
    }

}


ImageResizeConfig ImageTransformConfig::GetImageResize() const
{
    return m_imageResize;
}

void ImageTransformConfig::SetImageResize(const ImageResizeConfig& _imageResize)
{
    m_imageResize = _imageResize;
    m_imageResizeHasBeenSet = true;
}

bool ImageTransformConfig::ImageResizeHasBeenSet() const
{
    return m_imageResizeHasBeenSet;
}

