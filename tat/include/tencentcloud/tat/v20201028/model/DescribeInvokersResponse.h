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

#ifndef TENCENTCLOUD_TAT_V20201028_MODEL_DESCRIBEINVOKERSRESPONSE_H_
#define TENCENTCLOUD_TAT_V20201028_MODEL_DESCRIBEINVOKERSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tat/v20201028/model/Invoker.h>


namespace TencentCloud
{
    namespace Tat
    {
        namespace V20201028
        {
            namespace Model
            {
                /**
                * DescribeInvokers返回参数结构体
                */
                class DescribeInvokersResponse : public AbstractModel
                {
                public:
                    DescribeInvokersResponse();
                    ~DescribeInvokersResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取满足条件的执行器数量。
                     * @return TotalCount 满足条件的执行器数量。
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
                     * 获取执行器信息。
                     * @return InvokerSet 执行器信息。
                     * 
                     */
                    std::vector<Invoker> GetInvokerSet() const;

                    /**
                     * 判断参数 InvokerSet 是否已赋值
                     * @return InvokerSet 是否已赋值
                     * 
                     */
                    bool InvokerSetHasBeenSet() const;

                private:

                    /**
                     * 满足条件的执行器数量。
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 执行器信息。
                     */
                    std::vector<Invoker> m_invokerSet;
                    bool m_invokerSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TAT_V20201028_MODEL_DESCRIBEINVOKERSRESPONSE_H_
