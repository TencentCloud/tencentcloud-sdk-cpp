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

#include <tencentcloud/rce/v20260130/model/Item.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Rce::V20260130::Model;
using namespace std;

Item::Item() :
    m_itemIdHasBeenSet(false),
    m_itemNameHasBeenSet(false),
    m_categoryHasBeenSet(false),
    m_priceHasBeenSet(false),
    m_uPCHasBeenSet(false),
    m_eANHasBeenSet(false),
    m_sKUHasBeenSet(false),
    m_iSBNHasBeenSet(false),
    m_brandHasBeenSet(false),
    m_quantityHasBeenSet(false),
    m_manufacturerHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

CoreInternalOutcome Item::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ItemId") && !value["ItemId"].IsNull())
    {
        if (!value["ItemId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Item.ItemId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_itemId = string(value["ItemId"].GetString());
        m_itemIdHasBeenSet = true;
    }

    if (value.HasMember("ItemName") && !value["ItemName"].IsNull())
    {
        if (!value["ItemName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Item.ItemName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_itemName = string(value["ItemName"].GetString());
        m_itemNameHasBeenSet = true;
    }

    if (value.HasMember("Category") && !value["Category"].IsNull())
    {
        if (!value["Category"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Item.Category` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_category = string(value["Category"].GetString());
        m_categoryHasBeenSet = true;
    }

    if (value.HasMember("Price") && !value["Price"].IsNull())
    {
        if (!value["Price"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Item.Price` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_price.Deserialize(value["Price"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_priceHasBeenSet = true;
    }

    if (value.HasMember("UPC") && !value["UPC"].IsNull())
    {
        if (!value["UPC"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Item.UPC` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uPC = string(value["UPC"].GetString());
        m_uPCHasBeenSet = true;
    }

    if (value.HasMember("EAN") && !value["EAN"].IsNull())
    {
        if (!value["EAN"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Item.EAN` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_eAN = string(value["EAN"].GetString());
        m_eANHasBeenSet = true;
    }

    if (value.HasMember("SKU") && !value["SKU"].IsNull())
    {
        if (!value["SKU"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Item.SKU` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sKU = string(value["SKU"].GetString());
        m_sKUHasBeenSet = true;
    }

    if (value.HasMember("ISBN") && !value["ISBN"].IsNull())
    {
        if (!value["ISBN"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Item.ISBN` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_iSBN = string(value["ISBN"].GetString());
        m_iSBNHasBeenSet = true;
    }

    if (value.HasMember("Brand") && !value["Brand"].IsNull())
    {
        if (!value["Brand"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Item.Brand` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_brand = string(value["Brand"].GetString());
        m_brandHasBeenSet = true;
    }

    if (value.HasMember("Quantity") && !value["Quantity"].IsNull())
    {
        if (!value["Quantity"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Item.Quantity` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_quantity = value["Quantity"].GetInt64();
        m_quantityHasBeenSet = true;
    }

    if (value.HasMember("Manufacturer") && !value["Manufacturer"].IsNull())
    {
        if (!value["Manufacturer"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Item.Manufacturer` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_manufacturer = string(value["Manufacturer"].GetString());
        m_manufacturerHasBeenSet = true;
    }

    if (value.HasMember("Tags") && !value["Tags"].IsNull())
    {
        if (!value["Tags"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Item.Tags` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tags = string(value["Tags"].GetString());
        m_tagsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Item::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_itemIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ItemId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_itemId.c_str(), allocator).Move(), allocator);
    }

    if (m_itemNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ItemName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_itemName.c_str(), allocator).Move(), allocator);
    }

    if (m_categoryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Category";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_category.c_str(), allocator).Move(), allocator);
    }

    if (m_priceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Price";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_price.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_uPCHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UPC";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_uPC.c_str(), allocator).Move(), allocator);
    }

    if (m_eANHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EAN";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_eAN.c_str(), allocator).Move(), allocator);
    }

    if (m_sKUHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SKU";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sKU.c_str(), allocator).Move(), allocator);
    }

    if (m_iSBNHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ISBN";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_iSBN.c_str(), allocator).Move(), allocator);
    }

    if (m_brandHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Brand";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_brand.c_str(), allocator).Move(), allocator);
    }

    if (m_quantityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Quantity";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_quantity, allocator);
    }

    if (m_manufacturerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Manufacturer";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_manufacturer.c_str(), allocator).Move(), allocator);
    }

    if (m_tagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tags";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tags.c_str(), allocator).Move(), allocator);
    }

}


string Item::GetItemId() const
{
    return m_itemId;
}

void Item::SetItemId(const string& _itemId)
{
    m_itemId = _itemId;
    m_itemIdHasBeenSet = true;
}

bool Item::ItemIdHasBeenSet() const
{
    return m_itemIdHasBeenSet;
}

string Item::GetItemName() const
{
    return m_itemName;
}

void Item::SetItemName(const string& _itemName)
{
    m_itemName = _itemName;
    m_itemNameHasBeenSet = true;
}

bool Item::ItemNameHasBeenSet() const
{
    return m_itemNameHasBeenSet;
}

string Item::GetCategory() const
{
    return m_category;
}

void Item::SetCategory(const string& _category)
{
    m_category = _category;
    m_categoryHasBeenSet = true;
}

bool Item::CategoryHasBeenSet() const
{
    return m_categoryHasBeenSet;
}

Amount Item::GetPrice() const
{
    return m_price;
}

void Item::SetPrice(const Amount& _price)
{
    m_price = _price;
    m_priceHasBeenSet = true;
}

bool Item::PriceHasBeenSet() const
{
    return m_priceHasBeenSet;
}

string Item::GetUPC() const
{
    return m_uPC;
}

void Item::SetUPC(const string& _uPC)
{
    m_uPC = _uPC;
    m_uPCHasBeenSet = true;
}

bool Item::UPCHasBeenSet() const
{
    return m_uPCHasBeenSet;
}

string Item::GetEAN() const
{
    return m_eAN;
}

void Item::SetEAN(const string& _eAN)
{
    m_eAN = _eAN;
    m_eANHasBeenSet = true;
}

bool Item::EANHasBeenSet() const
{
    return m_eANHasBeenSet;
}

string Item::GetSKU() const
{
    return m_sKU;
}

void Item::SetSKU(const string& _sKU)
{
    m_sKU = _sKU;
    m_sKUHasBeenSet = true;
}

bool Item::SKUHasBeenSet() const
{
    return m_sKUHasBeenSet;
}

string Item::GetISBN() const
{
    return m_iSBN;
}

void Item::SetISBN(const string& _iSBN)
{
    m_iSBN = _iSBN;
    m_iSBNHasBeenSet = true;
}

bool Item::ISBNHasBeenSet() const
{
    return m_iSBNHasBeenSet;
}

string Item::GetBrand() const
{
    return m_brand;
}

void Item::SetBrand(const string& _brand)
{
    m_brand = _brand;
    m_brandHasBeenSet = true;
}

bool Item::BrandHasBeenSet() const
{
    return m_brandHasBeenSet;
}

int64_t Item::GetQuantity() const
{
    return m_quantity;
}

void Item::SetQuantity(const int64_t& _quantity)
{
    m_quantity = _quantity;
    m_quantityHasBeenSet = true;
}

bool Item::QuantityHasBeenSet() const
{
    return m_quantityHasBeenSet;
}

string Item::GetManufacturer() const
{
    return m_manufacturer;
}

void Item::SetManufacturer(const string& _manufacturer)
{
    m_manufacturer = _manufacturer;
    m_manufacturerHasBeenSet = true;
}

bool Item::ManufacturerHasBeenSet() const
{
    return m_manufacturerHasBeenSet;
}

string Item::GetTags() const
{
    return m_tags;
}

void Item::SetTags(const string& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool Item::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

