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
                     * 获取<p>券总数</p>
                     * @return TotalCount <p>券总数</p>
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
                     * 获取<p>总余额（微分）</p>
                     * @return TotalBalance <p>总余额（微分）</p>
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
                     * 获取<p>代金券相关信息</p>
                     * @return VoucherInfos <p>代金券相关信息</p>
                     * 
                     */
                    std::vector<VoucherInfos> GetVoucherInfos() const;

                    /**
                     * 判断参数 VoucherInfos 是否已赋值
                     * @return VoucherInfos 是否已赋值
                     * 
                     */
                    bool VoucherInfosHasBeenSet() const;

                    /**
                     * 获取<p>接口返回的金额字段单位</p><p>默认值：micro</p><p>金额单位：micro（微分）<br>代金券发放和使用按8位高精度处理，所以金额单位默认为micro（微分），如需CNY或USD请按以下公式换算<br>CNY：1 micro = 10⁻⁸ 元<br>USD：1 micro = 10⁻⁸ 美元</p>
                     * @return Unit <p>接口返回的金额字段单位</p><p>默认值：micro</p><p>金额单位：micro（微分）<br>代金券发放和使用按8位高精度处理，所以金额单位默认为micro（微分），如需CNY或USD请按以下公式换算<br>CNY：1 micro = 10⁻⁸ 元<br>USD：1 micro = 10⁻⁸ 美元</p>
                     * 
                     */
                    std::string GetUnit() const;

                    /**
                     * 判断参数 Unit 是否已赋值
                     * @return Unit 是否已赋值
                     * 
                     */
                    bool UnitHasBeenSet() const;

                private:

                    /**
                     * <p>券总数</p>
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * <p>总余额（微分）</p>
                     */
                    int64_t m_totalBalance;
                    bool m_totalBalanceHasBeenSet;

                    /**
                     * <p>代金券相关信息</p>
                     */
                    std::vector<VoucherInfos> m_voucherInfos;
                    bool m_voucherInfosHasBeenSet;

                    /**
                     * <p>接口返回的金额字段单位</p><p>默认值：micro</p><p>金额单位：micro（微分）<br>代金券发放和使用按8位高精度处理，所以金额单位默认为micro（微分），如需CNY或USD请按以下公式换算<br>CNY：1 micro = 10⁻⁸ 元<br>USD：1 micro = 10⁻⁸ 美元</p>
                     */
                    std::string m_unit;
                    bool m_unitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BILLING_V20180709_MODEL_DESCRIBEVOUCHERINFORESPONSE_H_
