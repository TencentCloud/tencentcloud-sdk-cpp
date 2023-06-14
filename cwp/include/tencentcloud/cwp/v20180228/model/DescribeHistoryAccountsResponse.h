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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEHISTORYACCOUNTSRESPONSE_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEHISTORYACCOUNTSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cwp/v20180228/model/HistoryAccount.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * DescribeHistoryAccounts返回参数结构体
                */
                class DescribeHistoryAccountsResponse : public AbstractModel
                {
                public:
                    DescribeHistoryAccountsResponse();
                    ~DescribeHistoryAccountsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取帐号变更历史列表记录总数。
                     * @return TotalCount 帐号变更历史列表记录总数。
                     * 
                     */
                    uint64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取帐号变更历史数据数组。
                     * @return HistoryAccounts 帐号变更历史数据数组。
                     * 
                     */
                    std::vector<HistoryAccount> GetHistoryAccounts() const;

                    /**
                     * 判断参数 HistoryAccounts 是否已赋值
                     * @return HistoryAccounts 是否已赋值
                     * 
                     */
                    bool HistoryAccountsHasBeenSet() const;

                private:

                    /**
                     * 帐号变更历史列表记录总数。
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 帐号变更历史数据数组。
                     */
                    std::vector<HistoryAccount> m_historyAccounts;
                    bool m_historyAccountsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEHISTORYACCOUNTSRESPONSE_H_
