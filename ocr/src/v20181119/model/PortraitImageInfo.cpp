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

#include <tencentcloud/ocr/v20181119/model/PortraitImageInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ocr::V20181119::Model;
using namespace std;

PortraitImageInfo::PortraitImageInfo() :
    m_portraitImageHasBeenSet(false),
    m_imageCoordinatesHasBeenSet(false)
{
}

CoreInternalOutcome PortraitImageInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("PortraitImage") && !value["PortraitImage"].IsNull())
    {
        if (!value["PortraitImage"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PortraitImageInfo.PortraitImage` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_portraitImage = string(value["PortraitImage"].GetString());
        m_portraitImageHasBeenSet = true;
    }

    if (value.HasMember("ImageCoordinates") && !value["ImageCoordinates"].IsNull())
    {
        if (!value["ImageCoordinates"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `PortraitImageInfo.ImageCoordinates` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_imageCoordinates.Deserialize(value["ImageCoordinates"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_imageCoordinatesHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PortraitImageInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_portraitImageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PortraitImage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_portraitImage.c_str(), allocator).Move(), allocator);
    }

    if (m_imageCoordinatesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageCoordinates";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_imageCoordinates.ToJsonObject(value[key.c_str()], allocator);
    }

}


string PortraitImageInfo::GetPortraitImage() const
{
    return m_portraitImage;
}

void PortraitImageInfo::SetPortraitImage(const string& _portraitImage)
{
    m_portraitImage = _portraitImage;
    m_portraitImageHasBeenSet = true;
}

bool PortraitImageInfo::PortraitImageHasBeenSet() const
{
    return m_portraitImageHasBeenSet;
}

ImageCoordinates PortraitImageInfo::GetImageCoordinates() const
{
    return m_imageCoordinates;
}

void PortraitImageInfo::SetImageCoordinates(const ImageCoordinates& _imageCoordinates)
{
    m_imageCoordinates = _imageCoordinates;
    m_imageCoordinatesHasBeenSet = true;
}

bool PortraitImageInfo::ImageCoordinatesHasBeenSet() const
{
    return m_imageCoordinatesHasBeenSet;
}

