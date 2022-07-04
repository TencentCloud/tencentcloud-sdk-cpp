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

#include <tencentcloud/ie/v20200304/model/DynamicImageInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ie::V20200304::Model;
using namespace std;

DynamicImageInfo::DynamicImageInfo() :
    m_qualityHasBeenSet(false)
{
}

CoreInternalOutcome DynamicImageInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Quality") && !value["Quality"].IsNull())
    {
        if (!value["Quality"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DynamicImageInfo.Quality` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_quality = value["Quality"].GetUint64();
        m_qualityHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DynamicImageInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_qualityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Quality";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_quality, allocator);
    }

}


uint64_t DynamicImageInfo::GetQuality() const
{
    return m_quality;
}

void DynamicImageInfo::SetQuality(const uint64_t& _quality)
{
    m_quality = _quality;
    m_qualityHasBeenSet = true;
}

bool DynamicImageInfo::QualityHasBeenSet() const
{
    return m_qualityHasBeenSet;
}

