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

#ifndef TENCENTCLOUD_IOTCLOUD_V20180614_MODEL_CREATEPRODUCTREQUEST_H_
#define TENCENTCLOUD_IOTCLOUD_V20180614_MODEL_CREATEPRODUCTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/iotcloud/v20180614/model/ProductProperties.h>


namespace TencentCloud
{
    namespace Iotcloud
    {
        namespace V20180614
        {
            namespace Model
            {
                /**
                * CreateProduct请求参数结构体
                */
                class CreateProductRequest : public AbstractModel
                {
                public:
                    CreateProductRequest();
                    ~CreateProductRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取产品名称，名称不能和已经存在的产品名称重复。命名规则：[a-zA-Z0-9:_-]{1,32}
                     * @return ProductName 产品名称，名称不能和已经存在的产品名称重复。命名规则：[a-zA-Z0-9:_-]{1,32}
                     * 
                     */
                    std::string GetProductName() const;

                    /**
                     * 设置产品名称，名称不能和已经存在的产品名称重复。命名规则：[a-zA-Z0-9:_-]{1,32}
                     * @param _productName 产品名称，名称不能和已经存在的产品名称重复。命名规则：[a-zA-Z0-9:_-]{1,32}
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

                    /**
                     * 获取创建CLAA产品时，需要Skey
                     * @return Skey 创建CLAA产品时，需要Skey
                     * 
                     */
                    std::string GetSkey() const;

                    /**
                     * 设置创建CLAA产品时，需要Skey
                     * @param _skey 创建CLAA产品时，需要Skey
                     * 
                     */
                    void SetSkey(const std::string& _skey);

                    /**
                     * 判断参数 Skey 是否已赋值
                     * @return Skey 是否已赋值
                     * 
                     */
                    bool SkeyHasBeenSet() const;

                private:

                    /**
                     * 产品名称，名称不能和已经存在的产品名称重复。命名规则：[a-zA-Z0-9:_-]{1,32}
                     */
                    std::string m_productName;
                    bool m_productNameHasBeenSet;

                    /**
                     * 产品属性
                     */
                    ProductProperties m_productProperties;
                    bool m_productPropertiesHasBeenSet;

                    /**
                     * 创建CLAA产品时，需要Skey
                     */
                    std::string m_skey;
                    bool m_skeyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTCLOUD_V20180614_MODEL_CREATEPRODUCTREQUEST_H_
