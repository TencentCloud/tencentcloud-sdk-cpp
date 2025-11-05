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

#ifndef TENCENTCLOUD_CCC_V20200210_MODEL_DESCRIBEAIAGENTINFOLISTRESPONSE_H_
#define TENCENTCLOUD_CCC_V20200210_MODEL_DESCRIBEAIAGENTINFOLISTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ccc/v20200210/model/AIAgentInfo.h>


namespace TencentCloud
{
    namespace Ccc
    {
        namespace V20200210
        {
            namespace Model
            {
                /**
                * DescribeAIAgentInfoList返回参数结构体
                */
                class DescribeAIAgentInfoListResponse : public AbstractModel
                {
                public:
                    DescribeAIAgentInfoListResponse();
                    ~DescribeAIAgentInfoListResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取智能体信息列表
                     * @return AIAgentInfoList 智能体信息列表
                     * 
                     */
                    std::vector<AIAgentInfo> GetAIAgentInfoList() const;

                    /**
                     * 判断参数 AIAgentInfoList 是否已赋值
                     * @return AIAgentInfoList 是否已赋值
                     * 
                     */
                    bool AIAgentInfoListHasBeenSet() const;

                    /**
                     * 获取智能体总数量
                     * @return TotalCount 智能体总数量
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                private:

                    /**
                     * 智能体信息列表
                     */
                    std::vector<AIAgentInfo> m_aIAgentInfoList;
                    bool m_aIAgentInfoListHasBeenSet;

                    /**
                     * 智能体总数量
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CCC_V20200210_MODEL_DESCRIBEAIAGENTINFOLISTRESPONSE_H_
