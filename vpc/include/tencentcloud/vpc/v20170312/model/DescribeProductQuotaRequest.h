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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBEPRODUCTQUOTAREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBEPRODUCTQUOTAREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * DescribeProductQuota请求参数结构体
                */
                class DescribeProductQuotaRequest : public AbstractModel
                {
                public:
                    DescribeProductQuotaRequest();
                    ~DescribeProductQuotaRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取查询的网络产品名称，可查询的产品有：vpc、ccn、vpn、dc、dfw、clb、eip。
                     * @return Product 查询的网络产品名称，可查询的产品有：vpc、ccn、vpn、dc、dfw、clb、eip。
                     * 
                     */
                    std::string GetProduct() const;

                    /**
                     * 设置查询的网络产品名称，可查询的产品有：vpc、ccn、vpn、dc、dfw、clb、eip。
                     * @param _product 查询的网络产品名称，可查询的产品有：vpc、ccn、vpn、dc、dfw、clb、eip。
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
                     * 查询的网络产品名称，可查询的产品有：vpc、ccn、vpn、dc、dfw、clb、eip。
                     */
                    std::string m_product;
                    bool m_productHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBEPRODUCTQUOTAREQUEST_H_
