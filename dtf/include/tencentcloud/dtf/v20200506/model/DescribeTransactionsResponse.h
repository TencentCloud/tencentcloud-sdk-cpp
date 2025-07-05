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

#ifndef TENCENTCLOUD_DTF_V20200506_MODEL_DESCRIBETRANSACTIONSRESPONSE_H_
#define TENCENTCLOUD_DTF_V20200506_MODEL_DESCRIBETRANSACTIONSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dtf/v20200506/model/PagedTransaction.h>


namespace TencentCloud
{
    namespace Dtf
    {
        namespace V20200506
        {
            namespace Model
            {
                /**
                * DescribeTransactions返回参数结构体
                */
                class DescribeTransactionsResponse : public AbstractModel
                {
                public:
                    DescribeTransactionsResponse();
                    ~DescribeTransactionsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取主事务分页列表
                     * @return Result 主事务分页列表
                     * 
                     */
                    PagedTransaction GetResult() const;

                    /**
                     * 判断参数 Result 是否已赋值
                     * @return Result 是否已赋值
                     * 
                     */
                    bool ResultHasBeenSet() const;

                private:

                    /**
                     * 主事务分页列表
                     */
                    PagedTransaction m_result;
                    bool m_resultHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DTF_V20200506_MODEL_DESCRIBETRANSACTIONSRESPONSE_H_
