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

#ifndef TENCENTCLOUD_WORKBUDDYENTERPRISE_V20260709_MODEL_DESCRIBEEXTERNALAGENTLISTRESPONSE_H_
#define TENCENTCLOUD_WORKBUDDYENTERPRISE_V20260709_MODEL_DESCRIBEEXTERNALAGENTLISTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/workbuddyenterprise/v20260709/model/ExternalAgentInfo.h>


namespace TencentCloud
{
    namespace Workbuddyenterprise
    {
        namespace V20260709
        {
            namespace Model
            {
                /**
                * DescribeExternalAgentList返回参数结构体
                */
                class DescribeExternalAgentListResponse : public AbstractModel
                {
                public:
                    DescribeExternalAgentListResponse();
                    ~DescribeExternalAgentListResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取符合条件的外部 Agent 总数
                     * @return TotalCount 符合条件的外部 Agent 总数
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
                     * 获取外部 Agent 集合（可见卡片全集 ∪ URL 直连型存量 binding 的合并视图）
                     * @return ExternalAgentSet 外部 Agent 集合（可见卡片全集 ∪ URL 直连型存量 binding 的合并视图）
                     * 
                     */
                    std::vector<ExternalAgentInfo> GetExternalAgentSet() const;

                    /**
                     * 判断参数 ExternalAgentSet 是否已赋值
                     * @return ExternalAgentSet 是否已赋值
                     * 
                     */
                    bool ExternalAgentSetHasBeenSet() const;

                private:

                    /**
                     * 符合条件的外部 Agent 总数
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 外部 Agent 集合（可见卡片全集 ∪ URL 直连型存量 binding 的合并视图）
                     */
                    std::vector<ExternalAgentInfo> m_externalAgentSet;
                    bool m_externalAgentSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WORKBUDDYENTERPRISE_V20260709_MODEL_DESCRIBEEXTERNALAGENTLISTRESPONSE_H_
