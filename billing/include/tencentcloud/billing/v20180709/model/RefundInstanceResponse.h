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

#ifndef TENCENTCLOUD_BILLING_V20180709_MODEL_REFUNDINSTANCERESPONSE_H_
#define TENCENTCLOUD_BILLING_V20180709_MODEL_REFUNDINSTANCERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Billing
    {
        namespace V20180709
        {
            namespace Model
            {
                /**
                * RefundInstance返回参数结构体
                */
                class RefundInstanceResponse : public AbstractModel
                {
                public:
                    RefundInstanceResponse();
                    ~RefundInstanceResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取订单号列表
                     * @return OrderIdList 订单号列表
                     * 
                     */
                    std::vector<std::string> GetOrderIdList() const;

                    /**
                     * 判断参数 OrderIdList 是否已赋值
                     * @return OrderIdList 是否已赋值
                     * 
                     */
                    bool OrderIdListHasBeenSet() const;

                private:

                    /**
                     * 订单号列表
                     */
                    std::vector<std::string> m_orderIdList;
                    bool m_orderIdListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BILLING_V20180709_MODEL_REFUNDINSTANCERESPONSE_H_
