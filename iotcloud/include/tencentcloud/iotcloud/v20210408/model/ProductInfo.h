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

#ifndef TENCENTCLOUD_IOTCLOUD_V20210408_MODEL_PRODUCTINFO_H_
#define TENCENTCLOUD_IOTCLOUD_V20210408_MODEL_PRODUCTINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/iotcloud/v20210408/model/ProductMetadata.h>
#include <tencentcloud/iotcloud/v20210408/model/ProductProperties.h>


namespace TencentCloud
{
    namespace Iotcloud
    {
        namespace V20210408
        {
            namespace Model
            {
                /**
                * 产品详细信息
                */
                class ProductInfo : public AbstractModel
                {
                public:
                    ProductInfo();
                    ~ProductInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取产品ID
                     * @return ProductId 产品ID
                     * 
                     */
                    std::string GetProductId() const;

                    /**
                     * 设置产品ID
                     * @param _productId 产品ID
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
                     * 获取产品名
                     * @return ProductName 产品名
                     * 
                     */
                    std::string GetProductName() const;

                    /**
                     * 设置产品名
                     * @param _productName 产品名
                     * 
                     */
                    void SetProductName(const std::string& _productName);

                    /**
                     * 判断参数 ProductName 是否已赋值
                     * @return ProductName 是否已赋值
                     * 
                     */
                    bool ProductNameHasBeenSet() const;

                    /**
                     * 获取产品元数据
                     * @return ProductMetadata 产品元数据
                     * 
                     */
                    ProductMetadata GetProductMetadata() const;

                    /**
                     * 设置产品元数据
                     * @param _productMetadata 产品元数据
                     * 
                     */
                    void SetProductMetadata(const ProductMetadata& _productMetadata);

                    /**
                     * 判断参数 ProductMetadata 是否已赋值
                     * @return ProductMetadata 是否已赋值
                     * 
                     */
                    bool ProductMetadataHasBeenSet() const;

                    /**
                     * 获取产品属性
                     * @return ProductProperties 产品属性
                     * 
                     */
                    ProductProperties GetProductProperties() const;

                    /**
                     * 设置产品属性
                     * @param _productProperties 产品属性
                     * 
                     */
                    void SetProductProperties(const ProductProperties& _productProperties);

                    /**
                     * 判断参数 ProductProperties 是否已赋值
                     * @return ProductProperties 是否已赋值
                     * 
                     */
                    bool ProductPropertiesHasBeenSet() const;

                private:

                    /**
                     * 产品ID
                     */
                    std::string m_productId;
                    bool m_productIdHasBeenSet;

                    /**
                     * 产品名
                     */
                    std::string m_productName;
                    bool m_productNameHasBeenSet;

                    /**
                     * 产品元数据
                     */
                    ProductMetadata m_productMetadata;
                    bool m_productMetadataHasBeenSet;

                    /**
                     * 产品属性
                     */
                    ProductProperties m_productProperties;
                    bool m_productPropertiesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTCLOUD_V20210408_MODEL_PRODUCTINFO_H_
