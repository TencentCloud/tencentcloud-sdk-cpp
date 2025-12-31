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

#include <tencentcloud/ags/v20250920/model/StorageSource.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ags::V20250920::Model;
using namespace std;

StorageSource::StorageSource() :
    m_cosHasBeenSet(false),
    m_imageHasBeenSet(false)
{
}

CoreInternalOutcome StorageSource::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Cos") && !value["Cos"].IsNull())
    {
        if (!value["Cos"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `StorageSource.Cos` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_cos.Deserialize(value["Cos"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_cosHasBeenSet = true;
    }

    if (value.HasMember("Image") && !value["Image"].IsNull())
    {
        if (!value["Image"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `StorageSource.Image` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_image.Deserialize(value["Image"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_imageHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void StorageSource::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_cosHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Cos";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_cos.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_imageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Image";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_image.ToJsonObject(value[key.c_str()], allocator);
    }

}


CosStorageSource StorageSource::GetCos() const
{
    return m_cos;
}

void StorageSource::SetCos(const CosStorageSource& _cos)
{
    m_cos = _cos;
    m_cosHasBeenSet = true;
}

bool StorageSource::CosHasBeenSet() const
{
    return m_cosHasBeenSet;
}

ImageStorageSource StorageSource::GetImage() const
{
    return m_image;
}

void StorageSource::SetImage(const ImageStorageSource& _image)
{
    m_image = _image;
    m_imageHasBeenSet = true;
}

bool StorageSource::ImageHasBeenSet() const
{
    return m_imageHasBeenSet;
}

