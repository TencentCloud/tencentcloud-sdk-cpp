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

#ifndef TENCENTCLOUD_WORKBUDDYENTERPRISE_V20260709_MODEL_DESCRIBEAGENTVERSIONLISTRESPONSE_H_
#define TENCENTCLOUD_WORKBUDDYENTERPRISE_V20260709_MODEL_DESCRIBEAGENTVERSIONLISTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/workbuddyenterprise/v20260709/model/AgentVersionItem.h>


namespace TencentCloud
{
    namespace Workbuddyenterprise
    {
        namespace V20260709
        {
            namespace Model
            {
                /**
                * DescribeAgentVersionList返回参数结构体
                */
                class DescribeAgentVersionListResponse : public AbstractModel
                {
                public:
                    DescribeAgentVersionListResponse();
                    ~DescribeAgentVersionListResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>总数</p>
                     * @return TotalCount <p>总数</p>
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
                     * 获取<p>版本列表（原 VersionSet；集合名带实体前缀以区分 Skill 版本接口的同名字段）</p>
                     * @return AgentVersionSet <p>版本列表（原 VersionSet；集合名带实体前缀以区分 Skill 版本接口的同名字段）</p>
                     * 
                     */
                    std::vector<AgentVersionItem> GetAgentVersionSet() const;

                    /**
                     * 判断参数 AgentVersionSet 是否已赋值
                     * @return AgentVersionSet 是否已赋值
                     * 
                     */
                    bool AgentVersionSetHasBeenSet() const;

                private:

                    /**
                     * <p>总数</p>
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * <p>版本列表（原 VersionSet；集合名带实体前缀以区分 Skill 版本接口的同名字段）</p>
                     */
                    std::vector<AgentVersionItem> m_agentVersionSet;
                    bool m_agentVersionSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WORKBUDDYENTERPRISE_V20260709_MODEL_DESCRIBEAGENTVERSIONLISTRESPONSE_H_
