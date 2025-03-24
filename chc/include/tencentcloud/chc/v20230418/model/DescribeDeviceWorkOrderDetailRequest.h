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

#ifndef TENCENTCLOUD_CHC_V20230418_MODEL_DESCRIBEDEVICEWORKORDERDETAILREQUEST_H_
#define TENCENTCLOUD_CHC_V20230418_MODEL_DESCRIBEDEVICEWORKORDERDETAILREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Chc
    {
        namespace V20230418
        {
            namespace Model
            {
                /**
                * DescribeDeviceWorkOrderDetail请求参数结构体
                */
                class DescribeDeviceWorkOrderDetailRequest : public AbstractModel
                {
                public:
                    DescribeDeviceWorkOrderDetailRequest();
                    ~DescribeDeviceWorkOrderDetailRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取工单ID
                     * @return OrderId 工单ID
                     * 
                     */
                    std::string GetOrderId() const;

                    /**
                     * 设置工单ID
                     * @param _orderId 工单ID
                     * 
                     */
                    void SetOrderId(const std::string& _orderId);

                    /**
                     * 判断参数 OrderId 是否已赋值
                     * @return OrderId 是否已赋值
                     * 
                     */
                    bool OrderIdHasBeenSet() const;

                private:

                    /**
                     * 工单ID
                     */
                    std::string m_orderId;
                    bool m_orderIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CHC_V20230418_MODEL_DESCRIBEDEVICEWORKORDERDETAILREQUEST_H_
