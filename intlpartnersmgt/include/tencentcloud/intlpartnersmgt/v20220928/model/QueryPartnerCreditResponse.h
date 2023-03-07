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

#ifndef TENCENTCLOUD_INTLPARTNERSMGT_V20220928_MODEL_QUERYPARTNERCREDITRESPONSE_H_
#define TENCENTCLOUD_INTLPARTNERSMGT_V20220928_MODEL_QUERYPARTNERCREDITRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Intlpartnersmgt
    {
        namespace V20220928
        {
            namespace Model
            {
                /**
                * QueryPartnerCredit返回参数结构体
                */
                class QueryPartnerCreditResponse : public AbstractModel
                {
                public:
                    QueryPartnerCreditResponse();
                    ~QueryPartnerCreditResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取已分配额度
                     * @return AllocatedCredit 已分配额度
                     */
                    double GetAllocatedCredit() const;

                    /**
                     * 判断参数 AllocatedCredit 是否已赋值
                     * @return AllocatedCredit 是否已赋值
                     */
                    bool AllocatedCreditHasBeenSet() const;

                    /**
                     * 获取额度总数
                     * @return TotalCredit 额度总数
                     */
                    double GetTotalCredit() const;

                    /**
                     * 判断参数 TotalCredit 是否已赋值
                     * @return TotalCredit 是否已赋值
                     */
                    bool TotalCreditHasBeenSet() const;

                    /**
                     * 获取剩余额度
                     * @return RemainingCredit 剩余额度
                     */
                    double GetRemainingCredit() const;

                    /**
                     * 判断参数 RemainingCredit 是否已赋值
                     * @return RemainingCredit 是否已赋值
                     */
                    bool RemainingCreditHasBeenSet() const;

                private:

                    /**
                     * 已分配额度
                     */
                    double m_allocatedCredit;
                    bool m_allocatedCreditHasBeenSet;

                    /**
                     * 额度总数
                     */
                    double m_totalCredit;
                    bool m_totalCreditHasBeenSet;

                    /**
                     * 剩余额度
                     */
                    double m_remainingCredit;
                    bool m_remainingCreditHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_INTLPARTNERSMGT_V20220928_MODEL_QUERYPARTNERCREDITRESPONSE_H_
