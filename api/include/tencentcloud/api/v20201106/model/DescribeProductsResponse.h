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

#ifndef TENCENTCLOUD_API_V20201106_MODEL_DESCRIBEPRODUCTSRESPONSE_H_
#define TENCENTCLOUD_API_V20201106_MODEL_DESCRIBEPRODUCTSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/api/v20201106/model/RegionProduct.h>


namespace TencentCloud
{
    namespace Api
    {
        namespace V20201106
        {
            namespace Model
            {
                /**
                * DescribeProducts返回参数结构体
                */
                class DescribeProductsResponse : public AbstractModel
                {
                public:
                    DescribeProductsResponse();
                    ~DescribeProductsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取产品详细信息列表。
                     * @return Products 产品详细信息列表。
                     */
                    std::vector<RegionProduct> GetProducts() const;

                    /**
                     * 判断参数 Products 是否已赋值
                     * @return Products 是否已赋值
                     */
                    bool ProductsHasBeenSet() const;

                    /**
                     * 获取产品总数量。
                     * @return TotalCount 产品总数量。
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     */
                    bool TotalCountHasBeenSet() const;

                private:

                    /**
                     * 产品详细信息列表。
                     */
                    std::vector<RegionProduct> m_products;
                    bool m_productsHasBeenSet;

                    /**
                     * 产品总数量。
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_API_V20201106_MODEL_DESCRIBEPRODUCTSRESPONSE_H_
