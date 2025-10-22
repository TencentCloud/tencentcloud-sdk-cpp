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

#ifndef TENCENTCLOUD_PARTNERS_V20180321_MODEL_DESCRIBESALESMANSRESPONSE_H_
#define TENCENTCLOUD_PARTNERS_V20180321_MODEL_DESCRIBESALESMANSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/partners/v20180321/model/AgentSalesmanElem.h>


namespace TencentCloud
{
    namespace Partners
    {
        namespace V20180321
        {
            namespace Model
            {
                /**
                * DescribeSalesmans返回参数结构体
                */
                class DescribeSalesmansResponse : public AbstractModel
                {
                public:
                    DescribeSalesmansResponse();
                    ~DescribeSalesmansResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取业务员列表
                     * @return AgentSalesmanSet 业务员列表
                     * 
                     */
                    std::vector<AgentSalesmanElem> GetAgentSalesmanSet() const;

                    /**
                     * 判断参数 AgentSalesmanSet 是否已赋值
                     * @return AgentSalesmanSet 是否已赋值
                     * 
                     */
                    bool AgentSalesmanSetHasBeenSet() const;

                    /**
                     * 获取符合条件的代客总数
                     * @return TotalCount 符合条件的代客总数
                     * 
                     */
                    uint64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                private:

                    /**
                     * 业务员列表
                     */
                    std::vector<AgentSalesmanElem> m_agentSalesmanSet;
                    bool m_agentSalesmanSetHasBeenSet;

                    /**
                     * 符合条件的代客总数
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_PARTNERS_V20180321_MODEL_DESCRIBESALESMANSRESPONSE_H_
