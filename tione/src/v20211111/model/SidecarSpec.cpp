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

#include <tencentcloud/tione/v20211111/model/SidecarSpec.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tione::V20211111::Model;
using namespace std;

SidecarSpec::SidecarSpec() :
    m_imageInfoHasBeenSet(false)
{
}

CoreInternalOutcome SidecarSpec::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ImageInfo") && !value["ImageInfo"].IsNull())
    {
        if (!value["ImageInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `SidecarSpec.ImageInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_imageInfo.Deserialize(value["ImageInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_imageInfoHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SidecarSpec::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_imageInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_imageInfo.ToJsonObject(value[key.c_str()], allocator);
    }

}


ImageInfo SidecarSpec::GetImageInfo() const
{
    return m_imageInfo;
}

void SidecarSpec::SetImageInfo(const ImageInfo& _imageInfo)
{
    m_imageInfo = _imageInfo;
    m_imageInfoHasBeenSet = true;
}

bool SidecarSpec::ImageInfoHasBeenSet() const
{
    return m_imageInfoHasBeenSet;
}

