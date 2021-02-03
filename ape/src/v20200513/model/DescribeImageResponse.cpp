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

#include <tencentcloud/ape/v20200513/model/DescribeImageResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ape::V20200513::Model;
using namespace rapidjson;
using namespace std;

DescribeImageResponse::DescribeImageResponse() :
    m_imageIdHasBeenSet(false),
    m_titleHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_previewUrlHasBeenSet(false),
    m_thumbUrlHasBeenSet(false),
    m_vendorHasBeenSet(false),
    m_marshalsHasBeenSet(false),
    m_widthHasBeenSet(false),
    m_heightHasBeenSet(false),
    m_imageFormatHasBeenSet(false),
    m_imageSenseTypeHasBeenSet(false),
    m_keywordsHasBeenSet(false),
    m_layeredGalleryIdHasBeenSet(false),
    m_orientationHasBeenSet(false)
{
}

CoreInternalOutcome DescribeImageResponse::Deserialize(const string &payload)
{
    Document d;
    d.Parse(payload.c_str());
    if (d.HasParseError() || !d.IsObject())
    {
        return CoreInternalOutcome(Error("response not json format"));
    }
    if (!d.HasMember("Response") || !d["Response"].IsObject())
    {
        return CoreInternalOutcome(Error("response `Response` is null or not object"));
    }
    Value &rsp = d["Response"];
    if (!rsp.HasMember("RequestId") || !rsp["RequestId"].IsString())
    {
        return CoreInternalOutcome(Error("response `Response.RequestId` is null or not string"));
    }
    string requestId(rsp["RequestId"].GetString());
    SetRequestId(requestId);

    if (rsp.HasMember("Error"))
    {
        if (!rsp["Error"].IsObject() ||
            !rsp["Error"].HasMember("Code") || !rsp["Error"]["Code"].IsString() ||
            !rsp["Error"].HasMember("Message") || !rsp["Error"]["Message"].IsString())
        {
            return CoreInternalOutcome(Error("response `Response.Error` format error").SetRequestId(requestId));
        }
        string errorCode(rsp["Error"]["Code"].GetString());
        string errorMsg(rsp["Error"]["Message"].GetString());
        return CoreInternalOutcome(Error(errorCode, errorMsg).SetRequestId(requestId));
    }


    if (rsp.HasMember("ImageId") && !rsp["ImageId"].IsNull())
    {
        if (!rsp["ImageId"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `ImageId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_imageId = rsp["ImageId"].GetUint64();
        m_imageIdHasBeenSet = true;
    }

    if (rsp.HasMember("Title") && !rsp["Title"].IsNull())
    {
        if (!rsp["Title"].IsString())
        {
            return CoreInternalOutcome(Error("response `Title` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_title = string(rsp["Title"].GetString());
        m_titleHasBeenSet = true;
    }

    if (rsp.HasMember("Description") && !rsp["Description"].IsNull())
    {
        if (!rsp["Description"].IsString())
        {
            return CoreInternalOutcome(Error("response `Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(rsp["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (rsp.HasMember("PreviewUrl") && !rsp["PreviewUrl"].IsNull())
    {
        if (!rsp["PreviewUrl"].IsString())
        {
            return CoreInternalOutcome(Error("response `PreviewUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_previewUrl = string(rsp["PreviewUrl"].GetString());
        m_previewUrlHasBeenSet = true;
    }

    if (rsp.HasMember("ThumbUrl") && !rsp["ThumbUrl"].IsNull())
    {
        if (!rsp["ThumbUrl"].IsString())
        {
            return CoreInternalOutcome(Error("response `ThumbUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_thumbUrl = string(rsp["ThumbUrl"].GetString());
        m_thumbUrlHasBeenSet = true;
    }

    if (rsp.HasMember("Vendor") && !rsp["Vendor"].IsNull())
    {
        if (!rsp["Vendor"].IsString())
        {
            return CoreInternalOutcome(Error("response `Vendor` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vendor = string(rsp["Vendor"].GetString());
        m_vendorHasBeenSet = true;
    }

    if (rsp.HasMember("Marshals") && !rsp["Marshals"].IsNull())
    {
        if (!rsp["Marshals"].IsArray())
            return CoreInternalOutcome(Error("response `Marshals` is not array type"));

        const Value &tmpValue = rsp["Marshals"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ImageMarshal item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_marshals.push_back(item);
        }
        m_marshalsHasBeenSet = true;
    }

    if (rsp.HasMember("Width") && !rsp["Width"].IsNull())
    {
        if (!rsp["Width"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `Width` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_width = rsp["Width"].GetInt64();
        m_widthHasBeenSet = true;
    }

    if (rsp.HasMember("Height") && !rsp["Height"].IsNull())
    {
        if (!rsp["Height"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `Height` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_height = rsp["Height"].GetInt64();
        m_heightHasBeenSet = true;
    }

    if (rsp.HasMember("ImageFormat") && !rsp["ImageFormat"].IsNull())
    {
        if (!rsp["ImageFormat"].IsString())
        {
            return CoreInternalOutcome(Error("response `ImageFormat` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_imageFormat = string(rsp["ImageFormat"].GetString());
        m_imageFormatHasBeenSet = true;
    }

    if (rsp.HasMember("ImageSenseType") && !rsp["ImageSenseType"].IsNull())
    {
        if (!rsp["ImageSenseType"].IsString())
        {
            return CoreInternalOutcome(Error("response `ImageSenseType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_imageSenseType = string(rsp["ImageSenseType"].GetString());
        m_imageSenseTypeHasBeenSet = true;
    }

    if (rsp.HasMember("Keywords") && !rsp["Keywords"].IsNull())
    {
        if (!rsp["Keywords"].IsString())
        {
            return CoreInternalOutcome(Error("response `Keywords` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_keywords = string(rsp["Keywords"].GetString());
        m_keywordsHasBeenSet = true;
    }

    if (rsp.HasMember("LayeredGalleryId") && !rsp["LayeredGalleryId"].IsNull())
    {
        if (!rsp["LayeredGalleryId"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `LayeredGalleryId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_layeredGalleryId = rsp["LayeredGalleryId"].GetInt64();
        m_layeredGalleryIdHasBeenSet = true;
    }

    if (rsp.HasMember("Orientation") && !rsp["Orientation"].IsNull())
    {
        if (!rsp["Orientation"].IsString())
        {
            return CoreInternalOutcome(Error("response `Orientation` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_orientation = string(rsp["Orientation"].GetString());
        m_orientationHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}


uint64_t DescribeImageResponse::GetImageId() const
{
    return m_imageId;
}

bool DescribeImageResponse::ImageIdHasBeenSet() const
{
    return m_imageIdHasBeenSet;
}

string DescribeImageResponse::GetTitle() const
{
    return m_title;
}

bool DescribeImageResponse::TitleHasBeenSet() const
{
    return m_titleHasBeenSet;
}

string DescribeImageResponse::GetDescription() const
{
    return m_description;
}

bool DescribeImageResponse::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string DescribeImageResponse::GetPreviewUrl() const
{
    return m_previewUrl;
}

bool DescribeImageResponse::PreviewUrlHasBeenSet() const
{
    return m_previewUrlHasBeenSet;
}

string DescribeImageResponse::GetThumbUrl() const
{
    return m_thumbUrl;
}

bool DescribeImageResponse::ThumbUrlHasBeenSet() const
{
    return m_thumbUrlHasBeenSet;
}

string DescribeImageResponse::GetVendor() const
{
    return m_vendor;
}

bool DescribeImageResponse::VendorHasBeenSet() const
{
    return m_vendorHasBeenSet;
}

vector<ImageMarshal> DescribeImageResponse::GetMarshals() const
{
    return m_marshals;
}

bool DescribeImageResponse::MarshalsHasBeenSet() const
{
    return m_marshalsHasBeenSet;
}

int64_t DescribeImageResponse::GetWidth() const
{
    return m_width;
}

bool DescribeImageResponse::WidthHasBeenSet() const
{
    return m_widthHasBeenSet;
}

int64_t DescribeImageResponse::GetHeight() const
{
    return m_height;
}

bool DescribeImageResponse::HeightHasBeenSet() const
{
    return m_heightHasBeenSet;
}

string DescribeImageResponse::GetImageFormat() const
{
    return m_imageFormat;
}

bool DescribeImageResponse::ImageFormatHasBeenSet() const
{
    return m_imageFormatHasBeenSet;
}

string DescribeImageResponse::GetImageSenseType() const
{
    return m_imageSenseType;
}

bool DescribeImageResponse::ImageSenseTypeHasBeenSet() const
{
    return m_imageSenseTypeHasBeenSet;
}

string DescribeImageResponse::GetKeywords() const
{
    return m_keywords;
}

bool DescribeImageResponse::KeywordsHasBeenSet() const
{
    return m_keywordsHasBeenSet;
}

int64_t DescribeImageResponse::GetLayeredGalleryId() const
{
    return m_layeredGalleryId;
}

bool DescribeImageResponse::LayeredGalleryIdHasBeenSet() const
{
    return m_layeredGalleryIdHasBeenSet;
}

string DescribeImageResponse::GetOrientation() const
{
    return m_orientation;
}

bool DescribeImageResponse::OrientationHasBeenSet() const
{
    return m_orientationHasBeenSet;
}


