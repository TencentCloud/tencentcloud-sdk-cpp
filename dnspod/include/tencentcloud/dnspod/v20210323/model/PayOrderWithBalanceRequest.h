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

#ifndef TENCENTCLOUD_DNSPOD_V20210323_MODEL_PAYORDERWITHBALANCEREQUEST_H_
#define TENCENTCLOUD_DNSPOD_V20210323_MODEL_PAYORDERWITHBALANCEREQUEST_H_

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
                * PayOrderWithBalance请求参数结构体
                */
                class PayOrderWithBalanceRequest : public AbstractModel
                {
                public:
                    PayOrderWithBalanceRequest();
                    ~PayOrderWithBalanceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取需要支付的大订单号数组
                     * @return BigDealIdList 需要支付的大订单号数组
                     * 
                     */
                    std::vector<std::string> GetBigDealIdList() const;

                    /**
                     * 设置需要支付的大订单号数组
                     * @param _bigDealIdList 需要支付的大订单号数组
                     * 
                     */
                    void SetBigDealIdList(const std::vector<std::string>& _bigDealIdList);

                    /**
                     * 判断参数 BigDealIdList 是否已赋值
                     * @return BigDealIdList 是否已赋值
                     * 
                     */
                    bool BigDealIdListHasBeenSet() const;

                    /**
                     * 获取代金券ID数组。可以从控制台查到拥有的代金券
                     * @return VoucherIdList 代金券ID数组。可以从控制台查到拥有的代金券
                     * 
                     */
                    std::vector<std::string> GetVoucherIdList() const;

                    /**
                     * 设置代金券ID数组。可以从控制台查到拥有的代金券
                     * @param _voucherIdList 代金券ID数组。可以从控制台查到拥有的代金券
                     * 
                     */
                    void SetVoucherIdList(const std::vector<std::string>& _voucherIdList);

                    /**
                     * 判断参数 VoucherIdList 是否已赋值
                     * @return VoucherIdList 是否已赋值
                     * 
                     */
                    bool VoucherIdListHasBeenSet() const;

                private:

                    /**
                     * 需要支付的大订单号数组
                     */
                    std::vector<std::string> m_bigDealIdList;
                    bool m_bigDealIdListHasBeenSet;

                    /**
                     * 代金券ID数组。可以从控制台查到拥有的代金券
                     */
                    std::vector<std::string> m_voucherIdList;
                    bool m_voucherIdListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DNSPOD_V20210323_MODEL_PAYORDERWITHBALANCEREQUEST_H_
