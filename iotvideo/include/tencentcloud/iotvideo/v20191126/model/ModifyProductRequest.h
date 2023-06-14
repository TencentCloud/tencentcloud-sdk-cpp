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

#ifndef TENCENTCLOUD_IOTVIDEO_V20191126_MODEL_MODIFYPRODUCTREQUEST_H_
#define TENCENTCLOUD_IOTVIDEO_V20191126_MODEL_MODIFYPRODUCTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iotvideo
    {
        namespace V20191126
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
                     * 获取产品名称
                     * @return ProductName 产品名称
                     * 
                     */
                    std::string GetProductName() const;

                    /**
                     * 设置产品名称
                     * @param _productName 产品名称
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
                     * 获取产品描述
                     * @return ProductDescription 产品描述
                     * 
                     */
                    std::string GetProductDescription() const;

                    /**
                     * 设置产品描述
                     * @param _productDescription 产品描述
                     * 
                     */
                    void SetProductDescription(const std::string& _productDescription);

                    /**
                     * 判断参数 ProductDescription 是否已赋值
                     * @return ProductDescription 是否已赋值
                     * 
                     */
                    bool ProductDescriptionHasBeenSet() const;

                    /**
                     * 获取主芯片产商ID
                     * @return ChipManufactureId 主芯片产商ID
                     * 
                     */
                    std::string GetChipManufactureId() const;

                    /**
                     * 设置主芯片产商ID
                     * @param _chipManufactureId 主芯片产商ID
                     * 
                     */
                    void SetChipManufactureId(const std::string& _chipManufactureId);

                    /**
                     * 判断参数 ChipManufactureId 是否已赋值
                     * @return ChipManufactureId 是否已赋值
                     * 
                     */
                    bool ChipManufactureIdHasBeenSet() const;

                    /**
                     * 获取主芯片ID
                     * @return ChipId 主芯片ID
                     * 
                     */
                    std::string GetChipId() const;

                    /**
                     * 设置主芯片ID
                     * @param _chipId 主芯片ID
                     * 
                     */
                    void SetChipId(const std::string& _chipId);

                    /**
                     * 判断参数 ChipId 是否已赋值
                     * @return ChipId 是否已赋值
                     * 
                     */
                    bool ChipIdHasBeenSet() const;

                private:

                    /**
                     * 产品ID
                     */
                    std::string m_productId;
                    bool m_productIdHasBeenSet;

                    /**
                     * 产品名称
                     */
                    std::string m_productName;
                    bool m_productNameHasBeenSet;

                    /**
                     * 产品描述
                     */
                    std::string m_productDescription;
                    bool m_productDescriptionHasBeenSet;

                    /**
                     * 主芯片产商ID
                     */
                    std::string m_chipManufactureId;
                    bool m_chipManufactureIdHasBeenSet;

                    /**
                     * 主芯片ID
                     */
                    std::string m_chipId;
                    bool m_chipIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTVIDEO_V20191126_MODEL_MODIFYPRODUCTREQUEST_H_
