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

#include <tencentcloud/mps/v20190612/model/ImageEraseConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mps::V20190612::Model;
using namespace std;

ImageEraseConfig::ImageEraseConfig() :
    m_imageEraseLogoHasBeenSet(false)
{
}

CoreInternalOutcome ImageEraseConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ImageEraseLogo") && !value["ImageEraseLogo"].IsNull())
    {
        if (!value["ImageEraseLogo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ImageEraseConfig.ImageEraseLogo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_imageEraseLogo.Deserialize(value["ImageEraseLogo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_imageEraseLogoHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ImageEraseConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_imageEraseLogoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageEraseLogo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_imageEraseLogo.ToJsonObject(value[key.c_str()], allocator);
    }

}


ImageEraseLogoConfig ImageEraseConfig::GetImageEraseLogo() const
{
    return m_imageEraseLogo;
}

void ImageEraseConfig::SetImageEraseLogo(const ImageEraseLogoConfig& _imageEraseLogo)
{
    m_imageEraseLogo = _imageEraseLogo;
    m_imageEraseLogoHasBeenSet = true;
}

bool ImageEraseConfig::ImageEraseLogoHasBeenSet() const
{
    return m_imageEraseLogoHasBeenSet;
}

