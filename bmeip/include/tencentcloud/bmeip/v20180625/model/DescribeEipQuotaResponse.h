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

#ifndef TENCENTCLOUD_BMEIP_V20180625_MODEL_DESCRIBEEIPQUOTARESPONSE_H_
#define TENCENTCLOUD_BMEIP_V20180625_MODEL_DESCRIBEEIPQUOTARESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Bmeip
    {
        namespace V20180625
        {
            namespace Model
            {
                /**
                * DescribeEipQuota返回参数结构体
                */
                class DescribeEipQuotaResponse : public AbstractModel
                {
                public:
                    DescribeEipQuotaResponse();
                    ~DescribeEipQuotaResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取能拥有的EIP个数的总配额，默认是100个
                     * @return EipNumQuota 能拥有的EIP个数的总配额，默认是100个
                     * 
                     */
                    int64_t GetEipNumQuota() const;

                    /**
                     * 判断参数 EipNumQuota 是否已赋值
                     * @return EipNumQuota 是否已赋值
                     * 
                     */
                    bool EipNumQuotaHasBeenSet() const;

                    /**
                     * 获取当前已使用的EIP个数，包括创建中、绑定中、已绑定、解绑中、未绑定几种状态的EIP个数总和
                     * @return CurrentEipNum 当前已使用的EIP个数，包括创建中、绑定中、已绑定、解绑中、未绑定几种状态的EIP个数总和
                     * 
                     */
                    int64_t GetCurrentEipNum() const;

                    /**
                     * 判断参数 CurrentEipNum 是否已赋值
                     * @return CurrentEipNum 是否已赋值
                     * 
                     */
                    bool CurrentEipNumHasBeenSet() const;

                    /**
                     * 获取当天申请EIP次数
                     * @return DailyApplyCount 当天申请EIP次数
                     * 
                     */
                    int64_t GetDailyApplyCount() const;

                    /**
                     * 判断参数 DailyApplyCount 是否已赋值
                     * @return DailyApplyCount 是否已赋值
                     * 
                     */
                    bool DailyApplyCountHasBeenSet() const;

                    /**
                     * 获取每日申请EIP的次数限制
                     * @return DailyApplyQuota 每日申请EIP的次数限制
                     * 
                     */
                    int64_t GetDailyApplyQuota() const;

                    /**
                     * 判断参数 DailyApplyQuota 是否已赋值
                     * @return DailyApplyQuota 是否已赋值
                     * 
                     */
                    bool DailyApplyQuotaHasBeenSet() const;

                    /**
                     * 获取BatchApplyMax
                     * @return BatchApplyMax BatchApplyMax
                     * 
                     */
                    int64_t GetBatchApplyMax() const;

                    /**
                     * 判断参数 BatchApplyMax 是否已赋值
                     * @return BatchApplyMax 是否已赋值
                     * 
                     */
                    bool BatchApplyMaxHasBeenSet() const;

                private:

                    /**
                     * 能拥有的EIP个数的总配额，默认是100个
                     */
                    int64_t m_eipNumQuota;
                    bool m_eipNumQuotaHasBeenSet;

                    /**
                     * 当前已使用的EIP个数，包括创建中、绑定中、已绑定、解绑中、未绑定几种状态的EIP个数总和
                     */
                    int64_t m_currentEipNum;
                    bool m_currentEipNumHasBeenSet;

                    /**
                     * 当天申请EIP次数
                     */
                    int64_t m_dailyApplyCount;
                    bool m_dailyApplyCountHasBeenSet;

                    /**
                     * 每日申请EIP的次数限制
                     */
                    int64_t m_dailyApplyQuota;
                    bool m_dailyApplyQuotaHasBeenSet;

                    /**
                     * BatchApplyMax
                     */
                    int64_t m_batchApplyMax;
                    bool m_batchApplyMaxHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BMEIP_V20180625_MODEL_DESCRIBEEIPQUOTARESPONSE_H_
