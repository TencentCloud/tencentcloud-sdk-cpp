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

#include <tencentcloud/ecm/v20190719/model/ImageUrl.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ecm::V20190719::Model;
using namespace std;

ImageUrl::ImageUrl() :
    m_imageFileHasBeenSet(false)
{
}

CoreInternalOutcome ImageUrl::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ImageFile") && !value["ImageFile"].IsNull())
    {
        if (!value["ImageFile"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageUrl.ImageFile` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_imageFile = string(value["ImageFile"].GetString());
        m_imageFileHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ImageUrl::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_imageFileHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageFile";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_imageFile.c_str(), allocator).Move(), allocator);
    }

}


string ImageUrl::GetImageFile() const
{
    return m_imageFile;
}

void ImageUrl::SetImageFile(const string& _imageFile)
{
    m_imageFile = _imageFile;
    m_imageFileHasBeenSet = true;
}

bool ImageUrl::ImageFileHasBeenSet() const
{
    return m_imageFileHasBeenSet;
}

