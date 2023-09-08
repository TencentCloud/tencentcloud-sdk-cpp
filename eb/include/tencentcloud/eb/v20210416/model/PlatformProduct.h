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

#ifndef TENCENTCLOUD_EB_V20210416_MODEL_PLATFORMPRODUCT_H_
#define TENCENTCLOUD_EB_V20210416_MODEL_PLATFORMPRODUCT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Eb
    {
        namespace V20210416
        {
            namespace Model
            {
                /**
                * 平台产品基础信息
                */
                class PlatformProduct : public AbstractModel
                {
                public:
                    PlatformProduct();
                    ~PlatformProduct() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取平台产品名称
                     * @return ProductName 平台产品名称
                     * 
                     */
                    std::string GetProductName() const;

                    /**
                     * 设置平台产品名称
                     * @param _productName 平台产品名称
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
                     * 获取平台产品类型
                     * @return ProductType 平台产品类型
                     * 
                     */
                    std::string GetProductType() const;

                    /**
                     * 设置平台产品类型
                     * @param _productType 平台产品类型
                     * 
                     */
                    void SetProductType(const std::string& _productType);

                    /**
                     * 判断参数 ProductType 是否已赋值
                     * @return ProductType 是否已赋值
                     * 
                     */
                    bool ProductTypeHasBeenSet() const;

                private:

                    /**
                     * 平台产品名称
                     */
                    std::string m_productName;
                    bool m_productNameHasBeenSet;

                    /**
                     * 平台产品类型
                     */
                    std::string m_productType;
                    bool m_productTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EB_V20210416_MODEL_PLATFORMPRODUCT_H_
