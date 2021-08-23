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

#include <tencentcloud/ape/v20200513/model/ImageMarshal.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ape::V20200513::Model;
using namespace std;

ImageMarshal::ImageMarshal() :
    m_marshalIdHasBeenSet(false),
    m_heightHasBeenSet(false),
    m_widthHasBeenSet(false),
    m_sizeHasBeenSet(false),
    m_formatHasBeenSet(false),
    m_priceHasBeenSet(false),
    m_licenseScopeHasBeenSet(false),
    m_isVipHasBeenSet(false),
    m_licenseScopeIdHasBeenSet(false),
    m_dimensionsNameHasBeenSet(false),
    m_dimensionsNameIdHasBeenSet(false)
{
}

CoreInternalOutcome ImageMarshal::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("MarshalId") && !value["MarshalId"].IsNull())
    {
        if (!value["MarshalId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ImageMarshal.MarshalId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_marshalId = value["MarshalId"].GetUint64();
        m_marshalIdHasBeenSet = true;
    }

    if (value.HasMember("Height") && !value["Height"].IsNull())
    {
        if (!value["Height"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ImageMarshal.Height` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_height = value["Height"].GetUint64();
        m_heightHasBeenSet = true;
    }

    if (value.HasMember("Width") && !value["Width"].IsNull())
    {
        if (!value["Width"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ImageMarshal.Width` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_width = value["Width"].GetUint64();
        m_widthHasBeenSet = true;
    }

    if (value.HasMember("Size") && !value["Size"].IsNull())
    {
        if (!value["Size"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ImageMarshal.Size` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_size = value["Size"].GetUint64();
        m_sizeHasBeenSet = true;
    }

    if (value.HasMember("Format") && !value["Format"].IsNull())
    {
        if (!value["Format"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageMarshal.Format` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_format = string(value["Format"].GetString());
        m_formatHasBeenSet = true;
    }

    if (value.HasMember("Price") && !value["Price"].IsNull())
    {
        if (!value["Price"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ImageMarshal.Price` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_price = value["Price"].GetUint64();
        m_priceHasBeenSet = true;
    }

    if (value.HasMember("LicenseScope") && !value["LicenseScope"].IsNull())
    {
        if (!value["LicenseScope"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageMarshal.LicenseScope` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_licenseScope = string(value["LicenseScope"].GetString());
        m_licenseScopeHasBeenSet = true;
    }

    if (value.HasMember("IsVip") && !value["IsVip"].IsNull())
    {
        if (!value["IsVip"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ImageMarshal.IsVip` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isVip = value["IsVip"].GetBool();
        m_isVipHasBeenSet = true;
    }

    if (value.HasMember("LicenseScopeId") && !value["LicenseScopeId"].IsNull())
    {
        if (!value["LicenseScopeId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ImageMarshal.LicenseScopeId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_licenseScopeId = value["LicenseScopeId"].GetInt64();
        m_licenseScopeIdHasBeenSet = true;
    }

    if (value.HasMember("DimensionsName") && !value["DimensionsName"].IsNull())
    {
        if (!value["DimensionsName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageMarshal.DimensionsName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dimensionsName = string(value["DimensionsName"].GetString());
        m_dimensionsNameHasBeenSet = true;
    }

    if (value.HasMember("DimensionsNameId") && !value["DimensionsNameId"].IsNull())
    {
        if (!value["DimensionsNameId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ImageMarshal.DimensionsNameId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_dimensionsNameId = value["DimensionsNameId"].GetInt64();
        m_dimensionsNameIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ImageMarshal::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_marshalIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MarshalId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_marshalId, allocator);
    }

    if (m_heightHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Height";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_height, allocator);
    }

    if (m_widthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Width";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_width, allocator);
    }

    if (m_sizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Size";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_size, allocator);
    }

    if (m_formatHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Format";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_format.c_str(), allocator).Move(), allocator);
    }

    if (m_priceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Price";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_price, allocator);
    }

    if (m_licenseScopeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LicenseScope";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_licenseScope.c_str(), allocator).Move(), allocator);
    }

    if (m_isVipHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsVip";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isVip, allocator);
    }

    if (m_licenseScopeIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LicenseScopeId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_licenseScopeId, allocator);
    }

    if (m_dimensionsNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DimensionsName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dimensionsName.c_str(), allocator).Move(), allocator);
    }

    if (m_dimensionsNameIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DimensionsNameId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_dimensionsNameId, allocator);
    }

}


uint64_t ImageMarshal::GetMarshalId() const
{
    return m_marshalId;
}

void ImageMarshal::SetMarshalId(const uint64_t& _marshalId)
{
    m_marshalId = _marshalId;
    m_marshalIdHasBeenSet = true;
}

bool ImageMarshal::MarshalIdHasBeenSet() const
{
    return m_marshalIdHasBeenSet;
}

uint64_t ImageMarshal::GetHeight() const
{
    return m_height;
}

void ImageMarshal::SetHeight(const uint64_t& _height)
{
    m_height = _height;
    m_heightHasBeenSet = true;
}

bool ImageMarshal::HeightHasBeenSet() const
{
    return m_heightHasBeenSet;
}

uint64_t ImageMarshal::GetWidth() const
{
    return m_width;
}

void ImageMarshal::SetWidth(const uint64_t& _width)
{
    m_width = _width;
    m_widthHasBeenSet = true;
}

bool ImageMarshal::WidthHasBeenSet() const
{
    return m_widthHasBeenSet;
}

uint64_t ImageMarshal::GetSize() const
{
    return m_size;
}

void ImageMarshal::SetSize(const uint64_t& _size)
{
    m_size = _size;
    m_sizeHasBeenSet = true;
}

bool ImageMarshal::SizeHasBeenSet() const
{
    return m_sizeHasBeenSet;
}

string ImageMarshal::GetFormat() const
{
    return m_format;
}

void ImageMarshal::SetFormat(const string& _format)
{
    m_format = _format;
    m_formatHasBeenSet = true;
}

bool ImageMarshal::FormatHasBeenSet() const
{
    return m_formatHasBeenSet;
}

uint64_t ImageMarshal::GetPrice() const
{
    return m_price;
}

void ImageMarshal::SetPrice(const uint64_t& _price)
{
    m_price = _price;
    m_priceHasBeenSet = true;
}

bool ImageMarshal::PriceHasBeenSet() const
{
    return m_priceHasBeenSet;
}

string ImageMarshal::GetLicenseScope() const
{
    return m_licenseScope;
}

void ImageMarshal::SetLicenseScope(const string& _licenseScope)
{
    m_licenseScope = _licenseScope;
    m_licenseScopeHasBeenSet = true;
}

bool ImageMarshal::LicenseScopeHasBeenSet() const
{
    return m_licenseScopeHasBeenSet;
}

bool ImageMarshal::GetIsVip() const
{
    return m_isVip;
}

void ImageMarshal::SetIsVip(const bool& _isVip)
{
    m_isVip = _isVip;
    m_isVipHasBeenSet = true;
}

bool ImageMarshal::IsVipHasBeenSet() const
{
    return m_isVipHasBeenSet;
}

int64_t ImageMarshal::GetLicenseScopeId() const
{
    return m_licenseScopeId;
}

void ImageMarshal::SetLicenseScopeId(const int64_t& _licenseScopeId)
{
    m_licenseScopeId = _licenseScopeId;
    m_licenseScopeIdHasBeenSet = true;
}

bool ImageMarshal::LicenseScopeIdHasBeenSet() const
{
    return m_licenseScopeIdHasBeenSet;
}

string ImageMarshal::GetDimensionsName() const
{
    return m_dimensionsName;
}

void ImageMarshal::SetDimensionsName(const string& _dimensionsName)
{
    m_dimensionsName = _dimensionsName;
    m_dimensionsNameHasBeenSet = true;
}

bool ImageMarshal::DimensionsNameHasBeenSet() const
{
    return m_dimensionsNameHasBeenSet;
}

int64_t ImageMarshal::GetDimensionsNameId() const
{
    return m_dimensionsNameId;
}

void ImageMarshal::SetDimensionsNameId(const int64_t& _dimensionsNameId)
{
    m_dimensionsNameId = _dimensionsNameId;
    m_dimensionsNameIdHasBeenSet = true;
}

bool ImageMarshal::DimensionsNameIdHasBeenSet() const
{
    return m_dimensionsNameIdHasBeenSet;
}

