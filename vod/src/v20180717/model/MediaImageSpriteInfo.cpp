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

#include <tencentcloud/vod/v20180717/model/MediaImageSpriteInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vod::V20180717::Model;
using namespace std;

MediaImageSpriteInfo::MediaImageSpriteInfo() :
    m_imageSpriteSetHasBeenSet(false)
{
}

CoreInternalOutcome MediaImageSpriteInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ImageSpriteSet") && !value["ImageSpriteSet"].IsNull())
    {
        if (!value["ImageSpriteSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `MediaImageSpriteInfo.ImageSpriteSet` is not array type"));

        const rapidjson::Value &tmpValue = value["ImageSpriteSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            MediaImageSpriteItem item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_imageSpriteSet.push_back(item);
        }
        m_imageSpriteSetHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MediaImageSpriteInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_imageSpriteSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageSpriteSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_imageSpriteSet.begin(); itr != m_imageSpriteSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


vector<MediaImageSpriteItem> MediaImageSpriteInfo::GetImageSpriteSet() const
{
    return m_imageSpriteSet;
}

void MediaImageSpriteInfo::SetImageSpriteSet(const vector<MediaImageSpriteItem>& _imageSpriteSet)
{
    m_imageSpriteSet = _imageSpriteSet;
    m_imageSpriteSetHasBeenSet = true;
}

bool MediaImageSpriteInfo::ImageSpriteSetHasBeenSet() const
{
    return m_imageSpriteSetHasBeenSet;
}

