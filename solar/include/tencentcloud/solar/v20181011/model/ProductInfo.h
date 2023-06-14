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

#ifndef TENCENTCLOUD_SOLAR_V20181011_MODEL_PRODUCTINFO_H_
#define TENCENTCLOUD_SOLAR_V20181011_MODEL_PRODUCTINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Solar
    {
        namespace V20181011
        {
            namespace Model
            {
                /**
                * 内容页结构
                */
                class ProductInfo : public AbstractModel
                {
                public:
                    ProductInfo();
                    ~ProductInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取模板id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TemplateId 模板id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTemplateId() const;

                    /**
                     * 设置模板id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _templateId 模板id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTemplateId(const std::string& _templateId);

                    /**
                     * 判断参数 TemplateId 是否已赋值
                     * @return TemplateId 是否已赋值
                     * 
                     */
                    bool TemplateIdHasBeenSet() const;

                    /**
                     * 获取模板主题
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ProductTitle 模板主题
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetProductTitle() const;

                    /**
                     * 设置模板主题
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _productTitle 模板主题
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetProductTitle(const std::string& _productTitle);

                    /**
                     * 判断参数 ProductTitle 是否已赋值
                     * @return ProductTitle 是否已赋值
                     * 
                     */
                    bool ProductTitleHasBeenSet() const;

                    /**
                     * 获取模板描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ProductDesc 模板描述
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetProductDesc() const;

                    /**
                     * 设置模板描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _productDesc 模板描述
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetProductDesc(const std::string& _productDesc);

                    /**
                     * 判断参数 ProductDesc 是否已赋值
                     * @return ProductDesc 是否已赋值
                     * 
                     */
                    bool ProductDescHasBeenSet() const;

                    /**
                     * 获取模板封面地址
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ProductCover 模板封面地址
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetProductCover() const;

                    /**
                     * 设置模板封面地址
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _productCover 模板封面地址
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetProductCover(const std::string& _productCover);

                    /**
                     * 判断参数 ProductCover 是否已赋值
                     * @return ProductCover 是否已赋值
                     * 
                     */
                    bool ProductCoverHasBeenSet() const;

                    /**
                     * 获取内容作品id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ProductId 内容作品id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetProductId() const;

                    /**
                     * 设置内容作品id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _productId 内容作品id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetProductId(const std::string& _productId);

                    /**
                     * 判断参数 ProductId 是否已赋值
                     * @return ProductId 是否已赋值
                     * 
                     */
                    bool ProductIdHasBeenSet() const;

                    /**
                     * 获取作品预览链接
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ProductUrl 作品预览链接
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetProductUrl() const;

                    /**
                     * 设置作品预览链接
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _productUrl 作品预览链接
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetProductUrl(const std::string& _productUrl);

                    /**
                     * 判断参数 ProductUrl 是否已赋值
                     * @return ProductUrl 是否已赋值
                     * 
                     */
                    bool ProductUrlHasBeenSet() const;

                    /**
                     * 获取作品名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ProductName 作品名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetProductName() const;

                    /**
                     * 设置作品名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _productName 作品名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetProductName(const std::string& _productName);

                    /**
                     * 判断参数 ProductName 是否已赋值
                     * @return ProductName 是否已赋值
                     * 
                     */
                    bool ProductNameHasBeenSet() const;

                private:

                    /**
                     * 模板id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_templateId;
                    bool m_templateIdHasBeenSet;

                    /**
                     * 模板主题
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_productTitle;
                    bool m_productTitleHasBeenSet;

                    /**
                     * 模板描述
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_productDesc;
                    bool m_productDescHasBeenSet;

                    /**
                     * 模板封面地址
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_productCover;
                    bool m_productCoverHasBeenSet;

                    /**
                     * 内容作品id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_productId;
                    bool m_productIdHasBeenSet;

                    /**
                     * 作品预览链接
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_productUrl;
                    bool m_productUrlHasBeenSet;

                    /**
                     * 作品名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_productName;
                    bool m_productNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SOLAR_V20181011_MODEL_PRODUCTINFO_H_
