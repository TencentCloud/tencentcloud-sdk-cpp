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

#ifndef TENCENTCLOUD_API_V20201106_MODEL_DESCRIBEZONESREQUEST_H_
#define TENCENTCLOUD_API_V20201106_MODEL_DESCRIBEZONESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Api
    {
        namespace V20201106
        {
            namespace Model
            {
                /**
                * DescribeZones请求参数结构体
                */
                class DescribeZonesRequest : public AbstractModel
                {
                public:
                    DescribeZonesRequest();
                    ~DescribeZonesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取待查询产品的名称，例如cvm，具体取值请查询DescribeProducts接口
                     * @return Product 待查询产品的名称，例如cvm，具体取值请查询DescribeProducts接口
                     * 
                     */
                    std::string GetProduct() const;

                    /**
                     * 设置待查询产品的名称，例如cvm，具体取值请查询DescribeProducts接口
                     * @param _product 待查询产品的名称，例如cvm，具体取值请查询DescribeProducts接口
                     * 
                     */
                    void SetProduct(const std::string& _product);

                    /**
                     * 判断参数 Product 是否已赋值
                     * @return Product 是否已赋值
                     * 
                     */
                    bool ProductHasBeenSet() const;

                private:

                    /**
                     * 待查询产品的名称，例如cvm，具体取值请查询DescribeProducts接口
                     */
                    std::string m_product;
                    bool m_productHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_API_V20201106_MODEL_DESCRIBEZONESREQUEST_H_
