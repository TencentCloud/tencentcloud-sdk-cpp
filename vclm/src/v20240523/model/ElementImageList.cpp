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

#include <tencentcloud/vclm/v20240523/model/ElementImageList.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vclm::V20240523::Model;
using namespace std;

ElementImageList::ElementImageList() :
    m_referImagesHasBeenSet(false),
    m_frontalImageHasBeenSet(false)
{
}

CoreInternalOutcome ElementImageList::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ReferImages") && !value["ReferImages"].IsNull())
    {
        if (!value["ReferImages"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ElementImageList.ReferImages` is not array type"));

        const rapidjson::Value &tmpValue = value["ReferImages"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ReferImageItem item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_referImages.push_back(item);
        }
        m_referImagesHasBeenSet = true;
    }

    if (value.HasMember("FrontalImage") && !value["FrontalImage"].IsNull())
    {
        if (!value["FrontalImage"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ElementImageList.FrontalImage` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_frontalImage = string(value["FrontalImage"].GetString());
        m_frontalImageHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ElementImageList::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_referImagesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReferImages";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_referImages.begin(); itr != m_referImages.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_frontalImageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FrontalImage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_frontalImage.c_str(), allocator).Move(), allocator);
    }

}


vector<ReferImageItem> ElementImageList::GetReferImages() const
{
    return m_referImages;
}

void ElementImageList::SetReferImages(const vector<ReferImageItem>& _referImages)
{
    m_referImages = _referImages;
    m_referImagesHasBeenSet = true;
}

bool ElementImageList::ReferImagesHasBeenSet() const
{
    return m_referImagesHasBeenSet;
}

string ElementImageList::GetFrontalImage() const
{
    return m_frontalImage;
}

void ElementImageList::SetFrontalImage(const string& _frontalImage)
{
    m_frontalImage = _frontalImage;
    m_frontalImageHasBeenSet = true;
}

bool ElementImageList::FrontalImageHasBeenSet() const
{
    return m_frontalImageHasBeenSet;
}

