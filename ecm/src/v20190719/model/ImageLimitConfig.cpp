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

#include <tencentcloud/ecm/v20190719/model/ImageLimitConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ecm::V20190719::Model;
using namespace std;

ImageLimitConfig::ImageLimitConfig() :
    m_maxImageSizeHasBeenSet(false)
{
}

CoreInternalOutcome ImageLimitConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("MaxImageSize") && !value["MaxImageSize"].IsNull())
    {
        if (!value["MaxImageSize"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ImageLimitConfig.MaxImageSize` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_maxImageSize = value["MaxImageSize"].GetInt64();
        m_maxImageSizeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ImageLimitConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_maxImageSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxImageSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxImageSize, allocator);
    }

}


int64_t ImageLimitConfig::GetMaxImageSize() const
{
    return m_maxImageSize;
}

void ImageLimitConfig::SetMaxImageSize(const int64_t& _maxImageSize)
{
    m_maxImageSize = _maxImageSize;
    m_maxImageSizeHasBeenSet = true;
}

bool ImageLimitConfig::MaxImageSizeHasBeenSet() const
{
    return m_maxImageSizeHasBeenSet;
}

