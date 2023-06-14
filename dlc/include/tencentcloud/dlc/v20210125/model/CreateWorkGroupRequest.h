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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_CREATEWORKGROUPREQUEST_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_CREATEWORKGROUPREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dlc/v20210125/model/Policy.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * CreateWorkGroup请求参数结构体
                */
                class CreateWorkGroupRequest : public AbstractModel
                {
                public:
                    CreateWorkGroupRequest();
                    ~CreateWorkGroupRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取工作组名称
                     * @return WorkGroupName 工作组名称
                     * 
                     */
                    std::string GetWorkGroupName() const;

                    /**
                     * 设置工作组名称
                     * @param _workGroupName 工作组名称
                     * 
                     */
                    void SetWorkGroupName(const std::string& _workGroupName);

                    /**
                     * 判断参数 WorkGroupName 是否已赋值
                     * @return WorkGroupName 是否已赋值
                     * 
                     */
                    bool WorkGroupNameHasBeenSet() const;

                    /**
                     * 获取工作组描述
                     * @return WorkGroupDescription 工作组描述
                     * 
                     */
                    std::string GetWorkGroupDescription() const;

                    /**
                     * 设置工作组描述
                     * @param _workGroupDescription 工作组描述
                     * 
                     */
                    void SetWorkGroupDescription(const std::string& _workGroupDescription);

                    /**
                     * 判断参数 WorkGroupDescription 是否已赋值
                     * @return WorkGroupDescription 是否已赋值
                     * 
                     */
                    bool WorkGroupDescriptionHasBeenSet() const;

                    /**
                     * 获取工作组绑定的鉴权策略集合
                     * @return PolicySet 工作组绑定的鉴权策略集合
                     * 
                     */
                    std::vector<Policy> GetPolicySet() const;

                    /**
                     * 设置工作组绑定的鉴权策略集合
                     * @param _policySet 工作组绑定的鉴权策略集合
                     * 
                     */
                    void SetPolicySet(const std::vector<Policy>& _policySet);

                    /**
                     * 判断参数 PolicySet 是否已赋值
                     * @return PolicySet 是否已赋值
                     * 
                     */
                    bool PolicySetHasBeenSet() const;

                    /**
                     * 获取需要绑定到工作组的用户Id集合
                     * @return UserIds 需要绑定到工作组的用户Id集合
                     * 
                     */
                    std::vector<std::string> GetUserIds() const;

                    /**
                     * 设置需要绑定到工作组的用户Id集合
                     * @param _userIds 需要绑定到工作组的用户Id集合
                     * 
                     */
                    void SetUserIds(const std::vector<std::string>& _userIds);

                    /**
                     * 判断参数 UserIds 是否已赋值
                     * @return UserIds 是否已赋值
                     * 
                     */
                    bool UserIdsHasBeenSet() const;

                private:

                    /**
                     * 工作组名称
                     */
                    std::string m_workGroupName;
                    bool m_workGroupNameHasBeenSet;

                    /**
                     * 工作组描述
                     */
                    std::string m_workGroupDescription;
                    bool m_workGroupDescriptionHasBeenSet;

                    /**
                     * 工作组绑定的鉴权策略集合
                     */
                    std::vector<Policy> m_policySet;
                    bool m_policySetHasBeenSet;

                    /**
                     * 需要绑定到工作组的用户Id集合
                     */
                    std::vector<std::string> m_userIds;
                    bool m_userIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_CREATEWORKGROUPREQUEST_H_
