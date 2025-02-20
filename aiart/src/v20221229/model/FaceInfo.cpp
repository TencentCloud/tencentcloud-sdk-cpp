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

#include <tencentcloud/aiart/v20221229/model/FaceInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Aiart::V20221229::Model;
using namespace std;

FaceInfo::FaceInfo() :
    m_imageUrlsHasBeenSet(false),
    m_templateFaceRectHasBeenSet(false)
{
}

CoreInternalOutcome FaceInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ImageUrls") && !value["ImageUrls"].IsNull())
    {
        if (!value["ImageUrls"].IsArray())
            return CoreInternalOutcome(Core::Error("response `FaceInfo.ImageUrls` is not array type"));

        const rapidjson::Value &tmpValue = value["ImageUrls"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_imageUrls.push_back((*itr).GetString());
        }
        m_imageUrlsHasBeenSet = true;
    }

    if (value.HasMember("TemplateFaceRect") && !value["TemplateFaceRect"].IsNull())
    {
        if (!value["TemplateFaceRect"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `FaceInfo.TemplateFaceRect` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_templateFaceRect.Deserialize(value["TemplateFaceRect"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_templateFaceRectHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void FaceInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_imageUrlsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageUrls";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_imageUrls.begin(); itr != m_imageUrls.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_templateFaceRectHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TemplateFaceRect";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_templateFaceRect.ToJsonObject(value[key.c_str()], allocator);
    }

}


vector<string> FaceInfo::GetImageUrls() const
{
    return m_imageUrls;
}

void FaceInfo::SetImageUrls(const vector<string>& _imageUrls)
{
    m_imageUrls = _imageUrls;
    m_imageUrlsHasBeenSet = true;
}

bool FaceInfo::ImageUrlsHasBeenSet() const
{
    return m_imageUrlsHasBeenSet;
}

Rect FaceInfo::GetTemplateFaceRect() const
{
    return m_templateFaceRect;
}

void FaceInfo::SetTemplateFaceRect(const Rect& _templateFaceRect)
{
    m_templateFaceRect = _templateFaceRect;
    m_templateFaceRectHasBeenSet = true;
}

bool FaceInfo::TemplateFaceRectHasBeenSet() const
{
    return m_templateFaceRectHasBeenSet;
}

