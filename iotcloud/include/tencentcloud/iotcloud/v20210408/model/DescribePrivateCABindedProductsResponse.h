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

#ifndef TENCENTCLOUD_IOTCLOUD_V20210408_MODEL_DESCRIBEPRIVATECABINDEDPRODUCTSRESPONSE_H_
#define TENCENTCLOUD_IOTCLOUD_V20210408_MODEL_DESCRIBEPRIVATECABINDEDPRODUCTSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/iotcloud/v20210408/model/BindProductInfo.h>


namespace TencentCloud
{
    namespace Iotcloud
    {
        namespace V20210408
        {
            namespace Model
            {
                /**
                * DescribePrivateCABindedProducts返回参数结构体
                */
                class DescribePrivateCABindedProductsResponse : public AbstractModel
                {
                public:
                    DescribePrivateCABindedProductsResponse();
                    ~DescribePrivateCABindedProductsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取私有CA绑定的产品列表
                     * @return Products 私有CA绑定的产品列表
                     * 
                     */
                    std::vector<BindProductInfo> GetProducts() const;

                    /**
                     * 判断参数 Products 是否已赋值
                     * @return Products 是否已赋值
                     * 
                     */
                    bool ProductsHasBeenSet() const;

                private:

                    /**
                     * 私有CA绑定的产品列表
                     */
                    std::vector<BindProductInfo> m_products;
                    bool m_productsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTCLOUD_V20210408_MODEL_DESCRIBEPRIVATECABINDEDPRODUCTSRESPONSE_H_
