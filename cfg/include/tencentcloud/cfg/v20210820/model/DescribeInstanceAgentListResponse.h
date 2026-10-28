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

#ifndef TENCENTCLOUD_CFG_V20210820_MODEL_DESCRIBEINSTANCEAGENTLISTRESPONSE_H_
#define TENCENTCLOUD_CFG_V20210820_MODEL_DESCRIBEINSTANCEAGENTLISTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cfg/v20210820/model/InstanceAgent.h>


namespace TencentCloud
{
    namespace Cfg
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * DescribeInstanceAgentList返回参数结构体
                */
                class DescribeInstanceAgentListResponse : public AbstractModel
                {
                public:
                    DescribeInstanceAgentListResponse();
                    ~DescribeInstanceAgentListResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>返回InstnaceAgent详情</p>
                     * @return InstanceAgent <p>返回InstnaceAgent详情</p>
                     * 
                     */
                    std::vector<InstanceAgent> GetInstanceAgent() const;

                    /**
                     * 判断参数 InstanceAgent 是否已赋值
                     * @return InstanceAgent 是否已赋值
                     * 
                     */
                    bool InstanceAgentHasBeenSet() const;

                    /**
                     * 获取<p>总条目数</p>
                     * @return TotalCount <p>总条目数</p>
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
                     * <p>返回InstnaceAgent详情</p>
                     */
                    std::vector<InstanceAgent> m_instanceAgent;
                    bool m_instanceAgentHasBeenSet;

                    /**
                     * <p>总条目数</p>
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFG_V20210820_MODEL_DESCRIBEINSTANCEAGENTLISTRESPONSE_H_
