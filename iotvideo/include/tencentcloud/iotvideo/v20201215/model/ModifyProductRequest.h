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

#ifndef TENCENTCLOUD_IOTVIDEO_V20201215_MODEL_MODIFYPRODUCTREQUEST_H_
#define TENCENTCLOUD_IOTVIDEO_V20201215_MODEL_MODIFYPRODUCTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iotvideo
    {
        namespace V20201215
        {
            namespace Model
            {
                /**
                * ModifyProduct请求参数结构体
                */
                class ModifyProductRequest : public AbstractModel
                {
                public:
                    ModifyProductRequest();
                    ~ModifyProductRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取产品id
                     * @return ProductId 产品id
                     * 
                     */
                    std::string GetProductId() const;

                    /**
                     * 设置产品id
                     * @param _productId 产品id
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
                     * 获取修改的产品名称 （支持中文、英文、数字、下划线组合，最多不超过20个字符）
                     * @return ProductName 修改的产品名称 （支持中文、英文、数字、下划线组合，最多不超过20个字符）
                     * 
                     */
                    std::string GetProductName() const;

                    /**
                     * 设置修改的产品名称 （支持中文、英文、数字、下划线组合，最多不超过20个字符）
                     * @param _productName 修改的产品名称 （支持中文、英文、数字、下划线组合，最多不超过20个字符）
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
                     * 获取修改的产品描述 （最多不超过128个字符）
                     * @return ProductDescription 修改的产品描述 （最多不超过128个字符）
                     * 
                     */
                    std::string GetProductDescription() const;

                    /**
                     * 设置修改的产品描述 （最多不超过128个字符）
                     * @param _productDescription 修改的产品描述 （最多不超过128个字符）
                     * 
                     */
                    void SetProductDescription(const std::string& _productDescription);

                    /**
                     * 判断参数 ProductDescription 是否已赋值
                     * @return ProductDescription 是否已赋值
                     * 
                     */
                    bool ProductDescriptionHasBeenSet() const;

                private:

                    /**
                     * 产品id
                     */
                    std::string m_productId;
                    bool m_productIdHasBeenSet;

                    /**
                     * 修改的产品名称 （支持中文、英文、数字、下划线组合，最多不超过20个字符）
                     */
                    std::string m_productName;
                    bool m_productNameHasBeenSet;

                    /**
                     * 修改的产品描述 （最多不超过128个字符）
                     */
                    std::string m_productDescription;
                    bool m_productDescriptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTVIDEO_V20201215_MODEL_MODIFYPRODUCTREQUEST_H_
