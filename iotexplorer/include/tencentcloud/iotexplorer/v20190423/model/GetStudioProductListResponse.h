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

#ifndef TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_GETSTUDIOPRODUCTLISTRESPONSE_H_
#define TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_GETSTUDIOPRODUCTLISTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/iotexplorer/v20190423/model/ProductEntry.h>


namespace TencentCloud
{
    namespace Iotexplorer
    {
        namespace V20190423
        {
            namespace Model
            {
                /**
                * GetStudioProductList返回参数结构体
                */
                class GetStudioProductListResponse : public AbstractModel
                {
                public:
                    GetStudioProductListResponse();
                    ~GetStudioProductListResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取产品列表
                     * @return Products 产品列表
                     * 
                     */
                    std::vector<ProductEntry> GetProducts() const;

                    /**
                     * 判断参数 Products 是否已赋值
                     * @return Products 是否已赋值
                     * 
                     */
                    bool ProductsHasBeenSet() const;

                    /**
                     * 获取产品数量
                     * @return Total 产品数量
                     * 
                     */
                    int64_t GetTotal() const;

                    /**
                     * 判断参数 Total 是否已赋值
                     * @return Total 是否已赋值
                     * 
                     */
                    bool TotalHasBeenSet() const;

                private:

                    /**
                     * 产品列表
                     */
                    std::vector<ProductEntry> m_products;
                    bool m_productsHasBeenSet;

                    /**
                     * 产品数量
                     */
                    int64_t m_total;
                    bool m_totalHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_GETSTUDIOPRODUCTLISTRESPONSE_H_
