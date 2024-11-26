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

#ifndef TENCENTCLOUD_BILLING_V20180709_MODEL_DESCRIBEVOUCHERINFORESPONSE_H_
#define TENCENTCLOUD_BILLING_V20180709_MODEL_DESCRIBEVOUCHERINFORESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/billing/v20180709/model/VoucherInfos.h>


namespace TencentCloud
{
    namespace Billing
    {
        namespace V20180709
        {
            namespace Model
            {
                /**
                * DescribeVoucherInfo返回参数结构体
                */
                class DescribeVoucherInfoResponse : public AbstractModel
                {
                public:
                    DescribeVoucherInfoResponse();
                    ~DescribeVoucherInfoResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取券总数
                     * @return TotalCount 券总数
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取总余额（微分）
                     * @return TotalBalance 总余额（微分）
                     * 
                     */
                    int64_t GetTotalBalance() const;

                    /**
                     * 判断参数 TotalBalance 是否已赋值
                     * @return TotalBalance 是否已赋值
                     * 
                     */
                    bool TotalBalanceHasBeenSet() const;

                    /**
                     * 获取代金券相关信息
                     * @return VoucherInfos 代金券相关信息
                     * 
                     */
                    std::vector<VoucherInfos> GetVoucherInfos() const;

                    /**
                     * 判断参数 VoucherInfos 是否已赋值
                     * @return VoucherInfos 是否已赋值
                     * 
                     */
                    bool VoucherInfosHasBeenSet() const;

                private:

                    /**
                     * 券总数
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 总余额（微分）
                     */
                    int64_t m_totalBalance;
                    bool m_totalBalanceHasBeenSet;

                    /**
                     * 代金券相关信息
                     */
                    std::vector<VoucherInfos> m_voucherInfos;
                    bool m_voucherInfosHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BILLING_V20180709_MODEL_DESCRIBEVOUCHERINFORESPONSE_H_
