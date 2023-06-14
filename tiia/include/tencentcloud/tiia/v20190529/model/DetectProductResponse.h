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

#ifndef TENCENTCLOUD_TIIA_V20190529_MODEL_DETECTPRODUCTRESPONSE_H_
#define TENCENTCLOUD_TIIA_V20190529_MODEL_DETECTPRODUCTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tiia/v20190529/model/Product.h>


namespace TencentCloud
{
    namespace Tiia
    {
        namespace V20190529
        {
            namespace Model
            {
                /**
                * DetectProduct返回参数结构体
                */
                class DetectProductResponse : public AbstractModel
                {
                public:
                    DetectProductResponse();
                    ~DetectProductResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取商品识别结果数组
                     * @return Products 商品识别结果数组
                     * 
                     */
                    std::vector<Product> GetProducts() const;

                    /**
                     * 判断参数 Products 是否已赋值
                     * @return Products 是否已赋值
                     * 
                     */
                    bool ProductsHasBeenSet() const;

                private:

                    /**
                     * 商品识别结果数组
                     */
                    std::vector<Product> m_products;
                    bool m_productsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIIA_V20190529_MODEL_DETECTPRODUCTRESPONSE_H_
