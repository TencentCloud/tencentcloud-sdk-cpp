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

#ifndef TENCENTCLOUD_DNSPOD_V20210323_MODEL_PAYORDERWITHBALANCERESPONSE_H_
#define TENCENTCLOUD_DNSPOD_V20210323_MODEL_PAYORDERWITHBALANCERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dnspod
    {
        namespace V20210323
        {
            namespace Model
            {
                /**
                * PayOrderWithBalance返回参数结构体
                */
                class PayOrderWithBalanceResponse : public AbstractModel
                {
                public:
                    PayOrderWithBalanceResponse();
                    ~PayOrderWithBalanceResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取此次操作支付成功的订单id数组
                     * @return DealIdList 此次操作支付成功的订单id数组
                     * 
                     */
                    std::vector<std::string> GetDealIdList() const;

                    /**
                     * 判断参数 DealIdList 是否已赋值
                     * @return DealIdList 是否已赋值
                     * 
                     */
                    bool DealIdListHasBeenSet() const;

                    /**
                     * 获取此次操作支付成功的大订单号数组
                     * @return BigDealIdList 此次操作支付成功的大订单号数组
                     * 
                     */
                    std::vector<std::string> GetBigDealIdList() const;

                    /**
                     * 判断参数 BigDealIdList 是否已赋值
                     * @return BigDealIdList 是否已赋值
                     * 
                     */
                    bool BigDealIdListHasBeenSet() const;

                    /**
                     * 获取此次操作支付成功的订单号数组
                     * @return DealNameList 此次操作支付成功的订单号数组
                     * 
                     */
                    std::vector<std::string> GetDealNameList() const;

                    /**
                     * 判断参数 DealNameList 是否已赋值
                     * @return DealNameList 是否已赋值
                     * 
                     */
                    bool DealNameListHasBeenSet() const;

                private:

                    /**
                     * 此次操作支付成功的订单id数组
                     */
                    std::vector<std::string> m_dealIdList;
                    bool m_dealIdListHasBeenSet;

                    /**
                     * 此次操作支付成功的大订单号数组
                     */
                    std::vector<std::string> m_bigDealIdList;
                    bool m_bigDealIdListHasBeenSet;

                    /**
                     * 此次操作支付成功的订单号数组
                     */
                    std::vector<std::string> m_dealNameList;
                    bool m_dealNameListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DNSPOD_V20210323_MODEL_PAYORDERWITHBALANCERESPONSE_H_
