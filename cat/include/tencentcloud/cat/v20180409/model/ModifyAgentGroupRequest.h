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

#ifndef TENCENTCLOUD_CAT_V20180409_MODEL_MODIFYAGENTGROUPREQUEST_H_
#define TENCENTCLOUD_CAT_V20180409_MODEL_MODIFYAGENTGROUPREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cat/v20180409/model/CatAgent.h>


namespace TencentCloud
{
    namespace Cat
    {
        namespace V20180409
        {
            namespace Model
            {
                /**
                * ModifyAgentGroup请求参数结构体
                */
                class ModifyAgentGroupRequest : public AbstractModel
                {
                public:
                    ModifyAgentGroupRequest();
                    ~ModifyAgentGroupRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取拨测分组id
                     * @return GroupId 拨测分组id
                     */
                    uint64_t GetGroupId() const;

                    /**
                     * 设置拨测分组id
                     * @param GroupId 拨测分组id
                     */
                    void SetGroupId(const uint64_t& _groupId);

                    /**
                     * 判断参数 GroupId 是否已赋值
                     * @return GroupId 是否已赋值
                     */
                    bool GroupIdHasBeenSet() const;

                    /**
                     * 获取拨测分组名称
                     * @return GroupName 拨测分组名称
                     */
                    std::string GetGroupName() const;

                    /**
                     * 设置拨测分组名称
                     * @param GroupName 拨测分组名称
                     */
                    void SetGroupName(const std::string& _groupName);

                    /**
                     * 判断参数 GroupName 是否已赋值
                     * @return GroupName 是否已赋值
                     */
                    bool GroupNameHasBeenSet() const;

                    /**
                     * 获取是否为默认分组。取值可为0，1
                     * @return IsDefault 是否为默认分组。取值可为0，1
                     */
                    int64_t GetIsDefault() const;

                    /**
                     * 设置是否为默认分组。取值可为0，1
                     * @param IsDefault 是否为默认分组。取值可为0，1
                     */
                    void SetIsDefault(const int64_t& _isDefault);

                    /**
                     * 判断参数 IsDefault 是否已赋值
                     * @return IsDefault 是否已赋值
                     */
                    bool IsDefaultHasBeenSet() const;

                    /**
                     * 获取Province, Isp 需要成对地进行选择。参数对的取值范围。参见：DescribeAgents 的返回结果。
                     * @return Agents Province, Isp 需要成对地进行选择。参数对的取值范围。参见：DescribeAgents 的返回结果。
                     */
                    std::vector<CatAgent> GetAgents() const;

                    /**
                     * 设置Province, Isp 需要成对地进行选择。参数对的取值范围。参见：DescribeAgents 的返回结果。
                     * @param Agents Province, Isp 需要成对地进行选择。参数对的取值范围。参见：DescribeAgents 的返回结果。
                     */
                    void SetAgents(const std::vector<CatAgent>& _agents);

                    /**
                     * 判断参数 Agents 是否已赋值
                     * @return Agents 是否已赋值
                     */
                    bool AgentsHasBeenSet() const;

                private:

                    /**
                     * 拨测分组id
                     */
                    uint64_t m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * 拨测分组名称
                     */
                    std::string m_groupName;
                    bool m_groupNameHasBeenSet;

                    /**
                     * 是否为默认分组。取值可为0，1
                     */
                    int64_t m_isDefault;
                    bool m_isDefaultHasBeenSet;

                    /**
                     * Province, Isp 需要成对地进行选择。参数对的取值范围。参见：DescribeAgents 的返回结果。
                     */
                    std::vector<CatAgent> m_agents;
                    bool m_agentsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CAT_V20180409_MODEL_MODIFYAGENTGROUPREQUEST_H_
