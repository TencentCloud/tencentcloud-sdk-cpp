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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBECSCPAYINFOREQUEST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBECSCPAYINFOREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * DescribeCSCPayInfo请求参数结构体
                */
                class DescribeCSCPayInfoRequest : public AbstractModel
                {
                public:
                    DescribeCSCPayInfoRequest();
                    ~DescribeCSCPayInfoRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>集团账号的成员id</p>
                     * @return MemberId <p>集团账号的成员id</p>
                     * 
                     */
                    std::vector<std::string> GetMemberId() const;

                    /**
                     * 设置<p>集团账号的成员id</p>
                     * @param _memberId <p>集团账号的成员id</p>
                     * 
                     */
                    void SetMemberId(const std::vector<std::string>& _memberId);

                    /**
                     * 判断参数 MemberId 是否已赋值
                     * @return MemberId 是否已赋值
                     * 
                     */
                    bool MemberIdHasBeenSet() const;

                    /**
                     * 获取<p>是否返回配额已使用量。默认为 false：不采集用量，QuotaList 中的 QuotaUsed 恒为 0；需要展示已用量的调用方显式传 true。只关心订单状态、到期时间或配额购买数量的调用方无需传入</p>
                     * @return NeedQuotaUsed <p>是否返回配额已使用量。默认为 false：不采集用量，QuotaList 中的 QuotaUsed 恒为 0；需要展示已用量的调用方显式传 true。只关心订单状态、到期时间或配额购买数量的调用方无需传入</p>
                     * 
                     */
                    bool GetNeedQuotaUsed() const;

                    /**
                     * 设置<p>是否返回配额已使用量。默认为 false：不采集用量，QuotaList 中的 QuotaUsed 恒为 0；需要展示已用量的调用方显式传 true。只关心订单状态、到期时间或配额购买数量的调用方无需传入</p>
                     * @param _needQuotaUsed <p>是否返回配额已使用量。默认为 false：不采集用量，QuotaList 中的 QuotaUsed 恒为 0；需要展示已用量的调用方显式传 true。只关心订单状态、到期时间或配额购买数量的调用方无需传入</p>
                     * 
                     */
                    void SetNeedQuotaUsed(const bool& _needQuotaUsed);

                    /**
                     * 判断参数 NeedQuotaUsed 是否已赋值
                     * @return NeedQuotaUsed 是否已赋值
                     * 
                     */
                    bool NeedQuotaUsedHasBeenSet() const;

                private:

                    /**
                     * <p>集团账号的成员id</p>
                     */
                    std::vector<std::string> m_memberId;
                    bool m_memberIdHasBeenSet;

                    /**
                     * <p>是否返回配额已使用量。默认为 false：不采集用量，QuotaList 中的 QuotaUsed 恒为 0；需要展示已用量的调用方显式传 true。只关心订单状态、到期时间或配额购买数量的调用方无需传入</p>
                     */
                    bool m_needQuotaUsed;
                    bool m_needQuotaUsedHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBECSCPAYINFOREQUEST_H_
