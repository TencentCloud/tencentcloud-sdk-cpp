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

#ifndef TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DESCRIBEORDERSREQUEST_H_
#define TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DESCRIBEORDERSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Sqlserver
    {
        namespace V20180328
        {
            namespace Model
            {
                /**
                * DescribeOrders请求参数结构体
                */
                class DescribeOrdersRequest : public AbstractModel
                {
                public:
                    DescribeOrdersRequest();
                    ~DescribeOrdersRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取订单数组。发货时会返回订单名字，利用该订单名字调用DescribeOrders接口查询发货情况
                     * @return DealNames 订单数组。发货时会返回订单名字，利用该订单名字调用DescribeOrders接口查询发货情况
                     * 
                     */
                    std::vector<std::string> GetDealNames() const;

                    /**
                     * 设置订单数组。发货时会返回订单名字，利用该订单名字调用DescribeOrders接口查询发货情况
                     * @param _dealNames 订单数组。发货时会返回订单名字，利用该订单名字调用DescribeOrders接口查询发货情况
                     * 
                     */
                    void SetDealNames(const std::vector<std::string>& _dealNames);

                    /**
                     * 判断参数 DealNames 是否已赋值
                     * @return DealNames 是否已赋值
                     * 
                     */
                    bool DealNamesHasBeenSet() const;

                private:

                    /**
                     * 订单数组。发货时会返回订单名字，利用该订单名字调用DescribeOrders接口查询发货情况
                     */
                    std::vector<std::string> m_dealNames;
                    bool m_dealNamesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DESCRIBEORDERSREQUEST_H_
