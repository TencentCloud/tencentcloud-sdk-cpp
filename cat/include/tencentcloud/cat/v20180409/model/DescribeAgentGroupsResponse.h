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

#ifndef TENCENTCLOUD_CAT_V20180409_MODEL_DESCRIBEAGENTGROUPSRESPONSE_H_
#define TENCENTCLOUD_CAT_V20180409_MODEL_DESCRIBEAGENTGROUPSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cat/v20180409/model/AgentGroup.h>


namespace TencentCloud
{
    namespace Cat
    {
        namespace V20180409
        {
            namespace Model
            {
                /**
                * DescribeAgentGroups返回参数结构体
                */
                class DescribeAgentGroupsResponse : public AbstractModel
                {
                public:
                    DescribeAgentGroupsResponse();
                    ~DescribeAgentGroupsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);


                    /**
                     * 获取用户所属的系统默认拨测分组
                     * @return SysDefaultGroup 用户所属的系统默认拨测分组
                     */
                    AgentGroup GetSysDefaultGroup() const;

                    /**
                     * 判断参数 SysDefaultGroup 是否已赋值
                     * @return SysDefaultGroup 是否已赋值
                     */
                    bool SysDefaultGroupHasBeenSet() const;

                    /**
                     * 获取用户创建的拨测分组列表
                     * @return CustomGroups 用户创建的拨测分组列表
                     */
                    std::vector<AgentGroup> GetCustomGroups() const;

                    /**
                     * 判断参数 CustomGroups 是否已赋值
                     * @return CustomGroups 是否已赋值
                     */
                    bool CustomGroupsHasBeenSet() const;

                private:

                    /**
                     * 用户所属的系统默认拨测分组
                     */
                    AgentGroup m_sysDefaultGroup;
                    bool m_sysDefaultGroupHasBeenSet;

                    /**
                     * 用户创建的拨测分组列表
                     */
                    std::vector<AgentGroup> m_customGroups;
                    bool m_customGroupsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CAT_V20180409_MODEL_DESCRIBEAGENTGROUPSRESPONSE_H_
