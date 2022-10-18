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

#include <tencentcloud/cpdp/v20190820/model/OpenBankGoodsInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cpdp::V20190820::Model;
using namespace std;

OpenBankGoodsInfo::OpenBankGoodsInfo() :
    m_goodsNameHasBeenSet(false),
    m_goodsDetailHasBeenSet(false),
    m_goodsDescriptionHasBeenSet(false),
    m_goodsBizTypeHasBeenSet(false),
    m_skuHasBeenSet(false),
    m_priceHasBeenSet(false),
    m_quantityHasBeenSet(false),
    m_productImageHasBeenSet(false),
    m_productUrlHasBeenSet(false)
{
}

CoreInternalOutcome OpenBankGoodsInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("GoodsName") && !value["GoodsName"].IsNull())
    {
        if (!value["GoodsName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OpenBankGoodsInfo.GoodsName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_goodsName = string(value["GoodsName"].GetString());
        m_goodsNameHasBeenSet = true;
    }

    if (value.HasMember("GoodsDetail") && !value["GoodsDetail"].IsNull())
    {
        if (!value["GoodsDetail"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OpenBankGoodsInfo.GoodsDetail` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_goodsDetail = string(value["GoodsDetail"].GetString());
        m_goodsDetailHasBeenSet = true;
    }

    if (value.HasMember("GoodsDescription") && !value["GoodsDescription"].IsNull())
    {
        if (!value["GoodsDescription"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OpenBankGoodsInfo.GoodsDescription` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_goodsDescription = string(value["GoodsDescription"].GetString());
        m_goodsDescriptionHasBeenSet = true;
    }

    if (value.HasMember("GoodsBizType") && !value["GoodsBizType"].IsNull())
    {
        if (!value["GoodsBizType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OpenBankGoodsInfo.GoodsBizType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_goodsBizType = string(value["GoodsBizType"].GetString());
        m_goodsBizTypeHasBeenSet = true;
    }

    if (value.HasMember("Sku") && !value["Sku"].IsNull())
    {
        if (!value["Sku"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OpenBankGoodsInfo.Sku` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sku = string(value["Sku"].GetString());
        m_skuHasBeenSet = true;
    }

    if (value.HasMember("Price") && !value["Price"].IsNull())
    {
        if (!value["Price"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OpenBankGoodsInfo.Price` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_price = string(value["Price"].GetString());
        m_priceHasBeenSet = true;
    }

    if (value.HasMember("Quantity") && !value["Quantity"].IsNull())
    {
        if (!value["Quantity"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OpenBankGoodsInfo.Quantity` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_quantity = string(value["Quantity"].GetString());
        m_quantityHasBeenSet = true;
    }

    if (value.HasMember("ProductImage") && !value["ProductImage"].IsNull())
    {
        if (!value["ProductImage"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OpenBankGoodsInfo.ProductImage` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_productImage = string(value["ProductImage"].GetString());
        m_productImageHasBeenSet = true;
    }

    if (value.HasMember("ProductUrl") && !value["ProductUrl"].IsNull())
    {
        if (!value["ProductUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OpenBankGoodsInfo.ProductUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_productUrl = string(value["ProductUrl"].GetString());
        m_productUrlHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void OpenBankGoodsInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_goodsNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GoodsName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_goodsName.c_str(), allocator).Move(), allocator);
    }

    if (m_goodsDetailHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GoodsDetail";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_goodsDetail.c_str(), allocator).Move(), allocator);
    }

    if (m_goodsDescriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GoodsDescription";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_goodsDescription.c_str(), allocator).Move(), allocator);
    }

    if (m_goodsBizTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GoodsBizType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_goodsBizType.c_str(), allocator).Move(), allocator);
    }

    if (m_skuHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Sku";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sku.c_str(), allocator).Move(), allocator);
    }

    if (m_priceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Price";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_price.c_str(), allocator).Move(), allocator);
    }

    if (m_quantityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Quantity";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_quantity.c_str(), allocator).Move(), allocator);
    }

    if (m_productImageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProductImage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_productImage.c_str(), allocator).Move(), allocator);
    }

    if (m_productUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProductUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_productUrl.c_str(), allocator).Move(), allocator);
    }

}


string OpenBankGoodsInfo::GetGoodsName() const
{
    return m_goodsName;
}

void OpenBankGoodsInfo::SetGoodsName(const string& _goodsName)
{
    m_goodsName = _goodsName;
    m_goodsNameHasBeenSet = true;
}

bool OpenBankGoodsInfo::GoodsNameHasBeenSet() const
{
    return m_goodsNameHasBeenSet;
}

string OpenBankGoodsInfo::GetGoodsDetail() const
{
    return m_goodsDetail;
}

void OpenBankGoodsInfo::SetGoodsDetail(const string& _goodsDetail)
{
    m_goodsDetail = _goodsDetail;
    m_goodsDetailHasBeenSet = true;
}

bool OpenBankGoodsInfo::GoodsDetailHasBeenSet() const
{
    return m_goodsDetailHasBeenSet;
}

string OpenBankGoodsInfo::GetGoodsDescription() const
{
    return m_goodsDescription;
}

void OpenBankGoodsInfo::SetGoodsDescription(const string& _goodsDescription)
{
    m_goodsDescription = _goodsDescription;
    m_goodsDescriptionHasBeenSet = true;
}

bool OpenBankGoodsInfo::GoodsDescriptionHasBeenSet() const
{
    return m_goodsDescriptionHasBeenSet;
}

string OpenBankGoodsInfo::GetGoodsBizType() const
{
    return m_goodsBizType;
}

void OpenBankGoodsInfo::SetGoodsBizType(const string& _goodsBizType)
{
    m_goodsBizType = _goodsBizType;
    m_goodsBizTypeHasBeenSet = true;
}

bool OpenBankGoodsInfo::GoodsBizTypeHasBeenSet() const
{
    return m_goodsBizTypeHasBeenSet;
}

string OpenBankGoodsInfo::GetSku() const
{
    return m_sku;
}

void OpenBankGoodsInfo::SetSku(const string& _sku)
{
    m_sku = _sku;
    m_skuHasBeenSet = true;
}

bool OpenBankGoodsInfo::SkuHasBeenSet() const
{
    return m_skuHasBeenSet;
}

string OpenBankGoodsInfo::GetPrice() const
{
    return m_price;
}

void OpenBankGoodsInfo::SetPrice(const string& _price)
{
    m_price = _price;
    m_priceHasBeenSet = true;
}

bool OpenBankGoodsInfo::PriceHasBeenSet() const
{
    return m_priceHasBeenSet;
}

string OpenBankGoodsInfo::GetQuantity() const
{
    return m_quantity;
}

void OpenBankGoodsInfo::SetQuantity(const string& _quantity)
{
    m_quantity = _quantity;
    m_quantityHasBeenSet = true;
}

bool OpenBankGoodsInfo::QuantityHasBeenSet() const
{
    return m_quantityHasBeenSet;
}

string OpenBankGoodsInfo::GetProductImage() const
{
    return m_productImage;
}

void OpenBankGoodsInfo::SetProductImage(const string& _productImage)
{
    m_productImage = _productImage;
    m_productImageHasBeenSet = true;
}

bool OpenBankGoodsInfo::ProductImageHasBeenSet() const
{
    return m_productImageHasBeenSet;
}

string OpenBankGoodsInfo::GetProductUrl() const
{
    return m_productUrl;
}

void OpenBankGoodsInfo::SetProductUrl(const string& _productUrl)
{
    m_productUrl = _productUrl;
    m_productUrlHasBeenSet = true;
}

bool OpenBankGoodsInfo::ProductUrlHasBeenSet() const
{
    return m_productUrlHasBeenSet;
}

