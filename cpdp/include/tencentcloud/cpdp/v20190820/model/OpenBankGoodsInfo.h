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

#ifndef TENCENTCLOUD_CPDP_V20190820_MODEL_OPENBANKGOODSINFO_H_
#define TENCENTCLOUD_CPDP_V20190820_MODEL_OPENBANKGOODSINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cpdp
    {
        namespace V20190820
        {
            namespace Model
            {
                /**
                * 云企付-商品信息
                */
                class OpenBankGoodsInfo : public AbstractModel
                {
                public:
                    OpenBankGoodsInfo();
                    ~OpenBankGoodsInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取商品标题。默认值“商品支付”。
                     * @return GoodsName 商品标题。默认值“商品支付”。
                     * 
                     */
                    std::string GetGoodsName() const;

                    /**
                     * 设置商品标题。默认值“商品支付”。
                     * @param _goodsName 商品标题。默认值“商品支付”。
                     * 
                     */
                    void SetGoodsName(const std::string& _goodsName);

                    /**
                     * 判断参数 GoodsName 是否已赋值
                     * @return GoodsName 是否已赋值
                     * 
                     */
                    bool GoodsNameHasBeenSet() const;

                    /**
                     * 获取商品详细描述（商品列表）。
                     * @return GoodsDetail 商品详细描述（商品列表）。
                     * 
                     */
                    std::string GetGoodsDetail() const;

                    /**
                     * 设置商品详细描述（商品列表）。
                     * @param _goodsDetail 商品详细描述（商品列表）。
                     * 
                     */
                    void SetGoodsDetail(const std::string& _goodsDetail);

                    /**
                     * 判断参数 GoodsDetail 是否已赋值
                     * @return GoodsDetail 是否已赋值
                     * 
                     */
                    bool GoodsDetailHasBeenSet() const;

                    /**
                     * 获取银行附言。不可以有以下字符：<>+{}()%*&';"[]等特殊符号
                     * @return GoodsDescription 银行附言。不可以有以下字符：<>+{}()%*&';"[]等特殊符号
                     * 
                     */
                    std::string GetGoodsDescription() const;

                    /**
                     * 设置银行附言。不可以有以下字符：<>+{}()%*&';"[]等特殊符号
                     * @param _goodsDescription 银行附言。不可以有以下字符：<>+{}()%*&';"[]等特殊符号
                     * 
                     */
                    void SetGoodsDescription(const std::string& _goodsDescription);

                    /**
                     * 判断参数 GoodsDescription 是否已赋值
                     * @return GoodsDescription 是否已赋值
                     * 
                     */
                    bool GoodsDescriptionHasBeenSet() const;

                    /**
                     * 获取业务类型。汇付渠道必填，汇付渠道传入固定值100099。
                     * @return GoodsBizType 业务类型。汇付渠道必填，汇付渠道传入固定值100099。
                     * 
                     */
                    std::string GetGoodsBizType() const;

                    /**
                     * 设置业务类型。汇付渠道必填，汇付渠道传入固定值100099。
                     * @param _goodsBizType 业务类型。汇付渠道必填，汇付渠道传入固定值100099。
                     * 
                     */
                    void SetGoodsBizType(const std::string& _goodsBizType);

                    /**
                     * 判断参数 GoodsBizType 是否已赋值
                     * @return GoodsBizType 是否已赋值
                     * 
                     */
                    bool GoodsBizTypeHasBeenSet() const;

                    /**
                     * 获取商品编号。
                     * @return Sku 商品编号。
                     * 
                     */
                    std::string GetSku() const;

                    /**
                     * 设置商品编号。
                     * @param _sku 商品编号。
                     * 
                     */
                    void SetSku(const std::string& _sku);

                    /**
                     * 判断参数 Sku 是否已赋值
                     * @return Sku 是否已赋值
                     * 
                     */
                    bool SkuHasBeenSet() const;

                    /**
                     * 获取商品单价。
                     * @return Price 商品单价。
                     * 
                     */
                    std::string GetPrice() const;

                    /**
                     * 设置商品单价。
                     * @param _price 商品单价。
                     * 
                     */
                    void SetPrice(const std::string& _price);

                    /**
                     * 判断参数 Price 是否已赋值
                     * @return Price 是否已赋值
                     * 
                     */
                    bool PriceHasBeenSet() const;

                    /**
                     * 获取商品数量
                     * @return Quantity 商品数量
                     * 
                     */
                    std::string GetQuantity() const;

                    /**
                     * 设置商品数量
                     * @param _quantity 商品数量
                     * 
                     */
                    void SetQuantity(const std::string& _quantity);

                    /**
                     * 判断参数 Quantity 是否已赋值
                     * @return Quantity 是否已赋值
                     * 
                     */
                    bool QuantityHasBeenSet() const;

                    /**
                     * 获取商品图片url
                     * @return ProductImage 商品图片url
                     * 
                     */
                    std::string GetProductImage() const;

                    /**
                     * 设置商品图片url
                     * @param _productImage 商品图片url
                     * 
                     */
                    void SetProductImage(const std::string& _productImage);

                    /**
                     * 判断参数 ProductImage 是否已赋值
                     * @return ProductImage 是否已赋值
                     * 
                     */
                    bool ProductImageHasBeenSet() const;

                    /**
                     * 获取商品链接url
                     * @return ProductUrl 商品链接url
                     * 
                     */
                    std::string GetProductUrl() const;

                    /**
                     * 设置商品链接url
                     * @param _productUrl 商品链接url
                     * 
                     */
                    void SetProductUrl(const std::string& _productUrl);

                    /**
                     * 判断参数 ProductUrl 是否已赋值
                     * @return ProductUrl 是否已赋值
                     * 
                     */
                    bool ProductUrlHasBeenSet() const;

                private:

                    /**
                     * 商品标题。默认值“商品支付”。
                     */
                    std::string m_goodsName;
                    bool m_goodsNameHasBeenSet;

                    /**
                     * 商品详细描述（商品列表）。
                     */
                    std::string m_goodsDetail;
                    bool m_goodsDetailHasBeenSet;

                    /**
                     * 银行附言。不可以有以下字符：<>+{}()%*&';"[]等特殊符号
                     */
                    std::string m_goodsDescription;
                    bool m_goodsDescriptionHasBeenSet;

                    /**
                     * 业务类型。汇付渠道必填，汇付渠道传入固定值100099。
                     */
                    std::string m_goodsBizType;
                    bool m_goodsBizTypeHasBeenSet;

                    /**
                     * 商品编号。
                     */
                    std::string m_sku;
                    bool m_skuHasBeenSet;

                    /**
                     * 商品单价。
                     */
                    std::string m_price;
                    bool m_priceHasBeenSet;

                    /**
                     * 商品数量
                     */
                    std::string m_quantity;
                    bool m_quantityHasBeenSet;

                    /**
                     * 商品图片url
                     */
                    std::string m_productImage;
                    bool m_productImageHasBeenSet;

                    /**
                     * 商品链接url
                     */
                    std::string m_productUrl;
                    bool m_productUrlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CPDP_V20190820_MODEL_OPENBANKGOODSINFO_H_
