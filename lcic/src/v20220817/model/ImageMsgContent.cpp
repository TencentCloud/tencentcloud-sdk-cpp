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

#include <tencentcloud/lcic/v20220817/model/ImageMsgContent.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Lcic::V20220817::Model;
using namespace std;

ImageMsgContent::ImageMsgContent() :
    m_uUIDHasBeenSet(false),
    m_imageFormatHasBeenSet(false),
    m_imageInfoListHasBeenSet(false)
{
}

CoreInternalOutcome ImageMsgContent::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("UUID") && !value["UUID"].IsNull())
    {
        if (!value["UUID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageMsgContent.UUID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uUID = string(value["UUID"].GetString());
        m_uUIDHasBeenSet = true;
    }

    if (value.HasMember("ImageFormat") && !value["ImageFormat"].IsNull())
    {
        if (!value["ImageFormat"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ImageMsgContent.ImageFormat` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_imageFormat = value["ImageFormat"].GetUint64();
        m_imageFormatHasBeenSet = true;
    }

    if (value.HasMember("ImageInfoList") && !value["ImageInfoList"].IsNull())
    {
        if (!value["ImageInfoList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ImageMsgContent.ImageInfoList` is not array type"));

        const rapidjson::Value &tmpValue = value["ImageInfoList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ImageInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_imageInfoList.push_back(item);
        }
        m_imageInfoListHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ImageMsgContent::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_uUIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UUID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_uUID.c_str(), allocator).Move(), allocator);
    }

    if (m_imageFormatHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageFormat";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_imageFormat, allocator);
    }

    if (m_imageInfoListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageInfoList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_imageInfoList.begin(); itr != m_imageInfoList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string ImageMsgContent::GetUUID() const
{
    return m_uUID;
}

void ImageMsgContent::SetUUID(const string& _uUID)
{
    m_uUID = _uUID;
    m_uUIDHasBeenSet = true;
}

bool ImageMsgContent::UUIDHasBeenSet() const
{
    return m_uUIDHasBeenSet;
}

uint64_t ImageMsgContent::GetImageFormat() const
{
    return m_imageFormat;
}

void ImageMsgContent::SetImageFormat(const uint64_t& _imageFormat)
{
    m_imageFormat = _imageFormat;
    m_imageFormatHasBeenSet = true;
}

bool ImageMsgContent::ImageFormatHasBeenSet() const
{
    return m_imageFormatHasBeenSet;
}

vector<ImageInfo> ImageMsgContent::GetImageInfoList() const
{
    return m_imageInfoList;
}

void ImageMsgContent::SetImageInfoList(const vector<ImageInfo>& _imageInfoList)
{
    m_imageInfoList = _imageInfoList;
    m_imageInfoListHasBeenSet = true;
}

bool ImageMsgContent::ImageInfoListHasBeenSet() const
{
    return m_imageInfoListHasBeenSet;
}

