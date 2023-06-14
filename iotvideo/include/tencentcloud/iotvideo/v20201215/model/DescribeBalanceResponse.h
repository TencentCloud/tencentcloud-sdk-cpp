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

#ifndef TENCENTCLOUD_IOTVIDEO_V20201215_MODEL_DESCRIBEBALANCERESPONSE_H_
#define TENCENTCLOUD_IOTVIDEO_V20201215_MODEL_DESCRIBEBALANCERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iotvideo
    {
        namespace V20201215
        {
            namespace Model
            {
                /**
                * DescribeBalance返回参数结构体
                */
                class DescribeBalanceResponse : public AbstractModel
                {
                public:
                    DescribeBalanceResponse();
                    ~DescribeBalanceResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取账户余额，单位：分（人民币）。
                     * @return Balance 账户余额，单位：分（人民币）。
                     * 
                     */
                    uint64_t GetBalance() const;

                    /**
                     * 判断参数 Balance 是否已赋值
                     * @return Balance 是否已赋值
                     * 
                     */
                    bool BalanceHasBeenSet() const;

                private:

                    /**
                     * 账户余额，单位：分（人民币）。
                     */
                    uint64_t m_balance;
                    bool m_balanceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTVIDEO_V20201215_MODEL_DESCRIBEBALANCERESPONSE_H_
