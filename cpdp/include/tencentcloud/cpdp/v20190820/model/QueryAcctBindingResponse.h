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

#ifndef TENCENTCLOUD_CPDP_V20190820_MODEL_QUERYACCTBINDINGRESPONSE_H_
#define TENCENTCLOUD_CPDP_V20190820_MODEL_QUERYACCTBINDINGRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cpdp/v20190820/model/BankCardItem.h>


namespace TencentCloud
{
    namespace Cpdp
    {
        namespace V20190820
        {
            namespace Model
            {
                /**
                * QueryAcctBinding返回参数结构体
                */
                class QueryAcctBindingResponse : public AbstractModel
                {
                public:
                    QueryAcctBindingResponse();
                    ~QueryAcctBindingResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取总行数
                     * @return TotalCount 总行数
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
                     * 获取银行卡信息列表
                     * @return BankCardItems 银行卡信息列表
                     * 
                     */
                    std::vector<BankCardItem> GetBankCardItems() const;

                    /**
                     * 判断参数 BankCardItems 是否已赋值
                     * @return BankCardItems 是否已赋值
                     * 
                     */
                    bool BankCardItemsHasBeenSet() const;

                private:

                    /**
                     * 总行数
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 银行卡信息列表
                     */
                    std::vector<BankCardItem> m_bankCardItems;
                    bool m_bankCardItemsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CPDP_V20190820_MODEL_QUERYACCTBINDINGRESPONSE_H_
