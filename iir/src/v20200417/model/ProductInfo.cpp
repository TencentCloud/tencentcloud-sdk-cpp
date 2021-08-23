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

#include <tencentcloud/iir/v20200417/model/ProductInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iir::V20200417::Model;
using namespace std;

ProductInfo::ProductInfo() :
    m_findSKUHasBeenSet(false),
    m_locationHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_brandHasBeenSet(false),
    m_priceHasBeenSet(false),
    m_productCategoryHasBeenSet(false),
    m_scoreHasBeenSet(false),
    m_imageHasBeenSet(false)
{
}

CoreInternalOutcome ProductInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("FindSKU") && !value["FindSKU"].IsNull())
    {
        if (!value["FindSKU"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ProductInfo.FindSKU` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_findSKU = value["FindSKU"].GetInt64();
        m_findSKUHasBeenSet = true;
    }

    if (value.HasMember("Location") && !value["Location"].IsNull())
    {
        if (!value["Location"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ProductInfo.Location` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_location.Deserialize(value["Location"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_locationHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProductInfo.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Brand") && !value["Brand"].IsNull())
    {
        if (!value["Brand"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProductInfo.Brand` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_brand = string(value["Brand"].GetString());
        m_brandHasBeenSet = true;
    }

    if (value.HasMember("Price") && !value["Price"].IsNull())
    {
        if (!value["Price"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProductInfo.Price` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_price = string(value["Price"].GetString());
        m_priceHasBeenSet = true;
    }

    if (value.HasMember("ProductCategory") && !value["ProductCategory"].IsNull())
    {
        if (!value["ProductCategory"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProductInfo.ProductCategory` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_productCategory = string(value["ProductCategory"].GetString());
        m_productCategoryHasBeenSet = true;
    }

    if (value.HasMember("Score") && !value["Score"].IsNull())
    {
        if (!value["Score"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `ProductInfo.Score` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_score = value["Score"].GetDouble();
        m_scoreHasBeenSet = true;
    }

    if (value.HasMember("Image") && !value["Image"].IsNull())
    {
        if (!value["Image"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProductInfo.Image` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_image = string(value["Image"].GetString());
        m_imageHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ProductInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_findSKUHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FindSKU";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_findSKU, allocator);
    }

    if (m_locationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Location";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_location.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_brandHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Brand";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_brand.c_str(), allocator).Move(), allocator);
    }

    if (m_priceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Price";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_price.c_str(), allocator).Move(), allocator);
    }

    if (m_productCategoryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProductCategory";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_productCategory.c_str(), allocator).Move(), allocator);
    }

    if (m_scoreHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Score";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_score, allocator);
    }

    if (m_imageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Image";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_image.c_str(), allocator).Move(), allocator);
    }

}


int64_t ProductInfo::GetFindSKU() const
{
    return m_findSKU;
}

void ProductInfo::SetFindSKU(const int64_t& _findSKU)
{
    m_findSKU = _findSKU;
    m_findSKUHasBeenSet = true;
}

bool ProductInfo::FindSKUHasBeenSet() const
{
    return m_findSKUHasBeenSet;
}

Location ProductInfo::GetLocation() const
{
    return m_location;
}

void ProductInfo::SetLocation(const Location& _location)
{
    m_location = _location;
    m_locationHasBeenSet = true;
}

bool ProductInfo::LocationHasBeenSet() const
{
    return m_locationHasBeenSet;
}

string ProductInfo::GetName() const
{
    return m_name;
}

void ProductInfo::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool ProductInfo::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string ProductInfo::GetBrand() const
{
    return m_brand;
}

void ProductInfo::SetBrand(const string& _brand)
{
    m_brand = _brand;
    m_brandHasBeenSet = true;
}

bool ProductInfo::BrandHasBeenSet() const
{
    return m_brandHasBeenSet;
}

string ProductInfo::GetPrice() const
{
    return m_price;
}

void ProductInfo::SetPrice(const string& _price)
{
    m_price = _price;
    m_priceHasBeenSet = true;
}

bool ProductInfo::PriceHasBeenSet() const
{
    return m_priceHasBeenSet;
}

string ProductInfo::GetProductCategory() const
{
    return m_productCategory;
}

void ProductInfo::SetProductCategory(const string& _productCategory)
{
    m_productCategory = _productCategory;
    m_productCategoryHasBeenSet = true;
}

bool ProductInfo::ProductCategoryHasBeenSet() const
{
    return m_productCategoryHasBeenSet;
}

double ProductInfo::GetScore() const
{
    return m_score;
}

void ProductInfo::SetScore(const double& _score)
{
    m_score = _score;
    m_scoreHasBeenSet = true;
}

bool ProductInfo::ScoreHasBeenSet() const
{
    return m_scoreHasBeenSet;
}

string ProductInfo::GetImage() const
{
    return m_image;
}

void ProductInfo::SetImage(const string& _image)
{
    m_image = _image;
    m_imageHasBeenSet = true;
}

bool ProductInfo::ImageHasBeenSet() const
{
    return m_imageHasBeenSet;
}

