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

#include <tencentcloud/vod/v20180717/model/ImageUnderstandingInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vod::V20180717::Model;
using namespace std;

ImageUnderstandingInfo::ImageUnderstandingInfo() :
    m_imageUnderstandingSetHasBeenSet(false)
{
}

CoreInternalOutcome ImageUnderstandingInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ImageUnderstandingSet") && !value["ImageUnderstandingSet"].IsNull())
    {
        if (!value["ImageUnderstandingSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ImageUnderstandingInfo.ImageUnderstandingSet` is not array type"));

        const rapidjson::Value &tmpValue = value["ImageUnderstandingSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ImageUnderstandingItem item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_imageUnderstandingSet.push_back(item);
        }
        m_imageUnderstandingSetHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ImageUnderstandingInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_imageUnderstandingSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageUnderstandingSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_imageUnderstandingSet.begin(); itr != m_imageUnderstandingSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


vector<ImageUnderstandingItem> ImageUnderstandingInfo::GetImageUnderstandingSet() const
{
    return m_imageUnderstandingSet;
}

void ImageUnderstandingInfo::SetImageUnderstandingSet(const vector<ImageUnderstandingItem>& _imageUnderstandingSet)
{
    m_imageUnderstandingSet = _imageUnderstandingSet;
    m_imageUnderstandingSetHasBeenSet = true;
}

bool ImageUnderstandingInfo::ImageUnderstandingSetHasBeenSet() const
{
    return m_imageUnderstandingSetHasBeenSet;
}

