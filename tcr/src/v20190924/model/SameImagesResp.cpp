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

#include <tencentcloud/tcr/v20190924/model/SameImagesResp.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcr::V20190924::Model;
using namespace std;

SameImagesResp::SameImagesResp() :
    m_sameImagesHasBeenSet(false)
{
}

CoreInternalOutcome SameImagesResp::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SameImages") && !value["SameImages"].IsNull())
    {
        if (!value["SameImages"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SameImagesResp.SameImages` is not array type"));

        const rapidjson::Value &tmpValue = value["SameImages"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_sameImages.push_back((*itr).GetString());
        }
        m_sameImagesHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SameImagesResp::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_sameImagesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SameImages";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_sameImages.begin(); itr != m_sameImages.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


vector<string> SameImagesResp::GetSameImages() const
{
    return m_sameImages;
}

void SameImagesResp::SetSameImages(const vector<string>& _sameImages)
{
    m_sameImages = _sameImages;
    m_sameImagesHasBeenSet = true;
}

bool SameImagesResp::SameImagesHasBeenSet() const
{
    return m_sameImagesHasBeenSet;
}

