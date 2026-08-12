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

#ifndef TENCENTCLOUD_RCE_V20260130_MODEL_ITEM_H_
#define TENCENTCLOUD_RCE_V20260130_MODEL_ITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/rce/v20260130/model/Amount.h>


namespace TencentCloud
{
    namespace Rce
    {
        namespace V20260130
        {
            namespace Model
            {
                /**
                * 商品信息
                */
                class Item : public AbstractModel
                {
                public:
                    Item();
                    ~Item() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>商品ID</p>
                     * @return ItemId <p>商品ID</p>
                     * 
                     */
                    std::string GetItemId() const;

                    /**
                     * 设置<p>商品ID</p>
                     * @param _itemId <p>商品ID</p>
                     * 
                     */
                    void SetItemId(const std::string& _itemId);

                    /**
                     * 判断参数 ItemId 是否已赋值
                     * @return ItemId 是否已赋值
                     * 
                     */
                    bool ItemIdHasBeenSet() const;

                    /**
                     * 获取<p>商品名称</p>
                     * @return ItemName <p>商品名称</p>
                     * 
                     */
                    std::string GetItemName() const;

                    /**
                     * 设置<p>商品名称</p>
                     * @param _itemName <p>商品名称</p>
                     * 
                     */
                    void SetItemName(const std::string& _itemName);

                    /**
                     * 判断参数 ItemName 是否已赋值
                     * @return ItemName 是否已赋值
                     * 
                     */
                    bool ItemNameHasBeenSet() const;

                    /**
                     * 获取<p>商品类别</p>
                     * @return Category <p>商品类别</p>
                     * 
                     */
                    std::string GetCategory() const;

                    /**
                     * 设置<p>商品类别</p>
                     * @param _category <p>商品类别</p>
                     * 
                     */
                    void SetCategory(const std::string& _category);

                    /**
                     * 判断参数 Category 是否已赋值
                     * @return Category 是否已赋值
                     * 
                     */
                    bool CategoryHasBeenSet() const;

                    /**
                     * 获取<p>商品单价</p>
                     * @return Price <p>商品单价</p>
                     * 
                     */
                    Amount GetPrice() const;

                    /**
                     * 设置<p>商品单价</p>
                     * @param _price <p>商品单价</p>
                     * 
                     */
                    void SetPrice(const Amount& _price);

                    /**
                     * 判断参数 Price 是否已赋值
                     * @return Price 是否已赋值
                     * 
                     */
                    bool PriceHasBeenSet() const;

                    /**
                     * 获取<p>如果商品有UPC码（Universal Product Code），请提供</p>
                     * @return UPC <p>如果商品有UPC码（Universal Product Code），请提供</p>
                     * 
                     */
                    std::string GetUPC() const;

                    /**
                     * 设置<p>如果商品有UPC码（Universal Product Code），请提供</p>
                     * @param _uPC <p>如果商品有UPC码（Universal Product Code），请提供</p>
                     * 
                     */
                    void SetUPC(const std::string& _uPC);

                    /**
                     * 判断参数 UPC 是否已赋值
                     * @return UPC 是否已赋值
                     * 
                     */
                    bool UPCHasBeenSet() const;

                    /**
                     * 获取<p>如果商品有EAN码（European Article Number），请提供</p>
                     * @return EAN <p>如果商品有EAN码（European Article Number），请提供</p>
                     * 
                     */
                    std::string GetEAN() const;

                    /**
                     * 设置<p>如果商品有EAN码（European Article Number），请提供</p>
                     * @param _eAN <p>如果商品有EAN码（European Article Number），请提供</p>
                     * 
                     */
                    void SetEAN(const std::string& _eAN);

                    /**
                     * 判断参数 EAN 是否已赋值
                     * @return EAN 是否已赋值
                     * 
                     */
                    bool EANHasBeenSet() const;

                    /**
                     * 获取<p>如果商品有SKU码（Stock Keeping Unit），请提供</p>
                     * @return SKU <p>如果商品有SKU码（Stock Keeping Unit），请提供</p>
                     * 
                     */
                    std::string GetSKU() const;

                    /**
                     * 设置<p>如果商品有SKU码（Stock Keeping Unit），请提供</p>
                     * @param _sKU <p>如果商品有SKU码（Stock Keeping Unit），请提供</p>
                     * 
                     */
                    void SetSKU(const std::string& _sKU);

                    /**
                     * 判断参数 SKU 是否已赋值
                     * @return SKU 是否已赋值
                     * 
                     */
                    bool SKUHasBeenSet() const;

                    /**
                     * 获取<p>如果商品有ISBN码（International Standard Book Number ），请提供</p>
                     * @return ISBN <p>如果商品有ISBN码（International Standard Book Number ），请提供</p>
                     * 
                     */
                    std::string GetISBN() const;

                    /**
                     * 设置<p>如果商品有ISBN码（International Standard Book Number ），请提供</p>
                     * @param _iSBN <p>如果商品有ISBN码（International Standard Book Number ），请提供</p>
                     * 
                     */
                    void SetISBN(const std::string& _iSBN);

                    /**
                     * 判断参数 ISBN 是否已赋值
                     * @return ISBN 是否已赋值
                     * 
                     */
                    bool ISBNHasBeenSet() const;

                    /**
                     * 获取<p>商品品牌</p>
                     * @return Brand <p>商品品牌</p>
                     * 
                     */
                    std::string GetBrand() const;

                    /**
                     * 设置<p>商品品牌</p>
                     * @param _brand <p>商品品牌</p>
                     * 
                     */
                    void SetBrand(const std::string& _brand);

                    /**
                     * 判断参数 Brand 是否已赋值
                     * @return Brand 是否已赋值
                     * 
                     */
                    bool BrandHasBeenSet() const;

                    /**
                     * 获取<p>商品数量</p>
                     * @return Quantity <p>商品数量</p>
                     * 
                     */
                    int64_t GetQuantity() const;

                    /**
                     * 设置<p>商品数量</p>
                     * @param _quantity <p>商品数量</p>
                     * 
                     */
                    void SetQuantity(const int64_t& _quantity);

                    /**
                     * 判断参数 Quantity 是否已赋值
                     * @return Quantity 是否已赋值
                     * 
                     */
                    bool QuantityHasBeenSet() const;

                    /**
                     * 获取<p>生产厂商</p>
                     * @return Manufacturer <p>生产厂商</p>
                     * 
                     */
                    std::string GetManufacturer() const;

                    /**
                     * 设置<p>生产厂商</p>
                     * @param _manufacturer <p>生产厂商</p>
                     * 
                     */
                    void SetManufacturer(const std::string& _manufacturer);

                    /**
                     * 判断参数 Manufacturer 是否已赋值
                     * @return Manufacturer 是否已赋值
                     * 
                     */
                    bool ManufacturerHasBeenSet() const;

                    /**
                     * 获取<p>商品标签</p>
                     * @return Tags <p>商品标签</p>
                     * 
                     */
                    std::string GetTags() const;

                    /**
                     * 设置<p>商品标签</p>
                     * @param _tags <p>商品标签</p>
                     * 
                     */
                    void SetTags(const std::string& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                private:

                    /**
                     * <p>商品ID</p>
                     */
                    std::string m_itemId;
                    bool m_itemIdHasBeenSet;

                    /**
                     * <p>商品名称</p>
                     */
                    std::string m_itemName;
                    bool m_itemNameHasBeenSet;

                    /**
                     * <p>商品类别</p>
                     */
                    std::string m_category;
                    bool m_categoryHasBeenSet;

                    /**
                     * <p>商品单价</p>
                     */
                    Amount m_price;
                    bool m_priceHasBeenSet;

                    /**
                     * <p>如果商品有UPC码（Universal Product Code），请提供</p>
                     */
                    std::string m_uPC;
                    bool m_uPCHasBeenSet;

                    /**
                     * <p>如果商品有EAN码（European Article Number），请提供</p>
                     */
                    std::string m_eAN;
                    bool m_eANHasBeenSet;

                    /**
                     * <p>如果商品有SKU码（Stock Keeping Unit），请提供</p>
                     */
                    std::string m_sKU;
                    bool m_sKUHasBeenSet;

                    /**
                     * <p>如果商品有ISBN码（International Standard Book Number ），请提供</p>
                     */
                    std::string m_iSBN;
                    bool m_iSBNHasBeenSet;

                    /**
                     * <p>商品品牌</p>
                     */
                    std::string m_brand;
                    bool m_brandHasBeenSet;

                    /**
                     * <p>商品数量</p>
                     */
                    int64_t m_quantity;
                    bool m_quantityHasBeenSet;

                    /**
                     * <p>生产厂商</p>
                     */
                    std::string m_manufacturer;
                    bool m_manufacturerHasBeenSet;

                    /**
                     * <p>商品标签</p>
                     */
                    std::string m_tags;
                    bool m_tagsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_RCE_V20260130_MODEL_ITEM_H_
