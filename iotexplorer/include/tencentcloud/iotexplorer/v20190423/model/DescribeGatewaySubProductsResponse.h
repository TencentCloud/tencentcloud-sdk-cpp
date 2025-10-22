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

#ifndef TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_DESCRIBEGATEWAYSUBPRODUCTSRESPONSE_H_
#define TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_DESCRIBEGATEWAYSUBPRODUCTSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/iotexplorer/v20190423/model/BindProductInfo.h>


namespace TencentCloud
{
    namespace Iotexplorer
    {
        namespace V20190423
        {
            namespace Model
            {
                /**
                * DescribeGatewaySubProducts返回参数结构体
                */
                class DescribeGatewaySubProductsResponse : public AbstractModel
                {
                public:
                    DescribeGatewaySubProductsResponse();
                    ~DescribeGatewaySubProductsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取当前分页的可绑定或解绑的产品信息。
                     * @return Products 当前分页的可绑定或解绑的产品信息。
                     * 
                     */
                    std::vector<BindProductInfo> GetProducts() const;

                    /**
                     * 判断参数 Products 是否已赋值
                     * @return Products 是否已赋值
                     * 
                     */
                    bool ProductsHasBeenSet() const;

                    /**
                     * 获取可绑定或解绑的产品总数
                     * @return Total 可绑定或解绑的产品总数
                     * 
                     */
                    uint64_t GetTotal() const;

                    /**
                     * 判断参数 Total 是否已赋值
                     * @return Total 是否已赋值
                     * 
                     */
                    bool TotalHasBeenSet() const;

                private:

                    /**
                     * 当前分页的可绑定或解绑的产品信息。
                     */
                    std::vector<BindProductInfo> m_products;
                    bool m_productsHasBeenSet;

                    /**
                     * 可绑定或解绑的产品总数
                     */
                    uint64_t m_total;
                    bool m_totalHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_DESCRIBEGATEWAYSUBPRODUCTSRESPONSE_H_
