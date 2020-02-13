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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_CREATESECURITYGROUPREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_CREATESECURITYGROUPREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * CreateSecurityGroup请求参数结构体
                */
                class CreateSecurityGroupRequest : public AbstractModel
                {
                public:
                    CreateSecurityGroupRequest();
                    ~CreateSecurityGroupRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取安全组名称，可任意命名，但不得超过60个字符。
                     * @return GroupName 安全组名称，可任意命名，但不得超过60个字符。
                     */
                    std::string GetGroupName() const;

                    /**
                     * 设置安全组名称，可任意命名，但不得超过60个字符。
                     * @param GroupName 安全组名称，可任意命名，但不得超过60个字符。
                     */
                    void SetGroupName(const std::string& _groupName);

                    /**
                     * 判断参数 GroupName 是否已赋值
                     * @return GroupName 是否已赋值
                     */
                    bool GroupNameHasBeenSet() const;

                    /**
                     * 获取安全组备注，最多100个字符。
                     * @return GroupDescription 安全组备注，最多100个字符。
                     */
                    std::string GetGroupDescription() const;

                    /**
                     * 设置安全组备注，最多100个字符。
                     * @param GroupDescription 安全组备注，最多100个字符。
                     */
                    void SetGroupDescription(const std::string& _groupDescription);

                    /**
                     * 判断参数 GroupDescription 是否已赋值
                     * @return GroupDescription 是否已赋值
                     */
                    bool GroupDescriptionHasBeenSet() const;

                    /**
                     * 获取项目ID，默认0。可在qcloud控制台项目管理页面查询到。
                     * @return ProjectId 项目ID，默认0。可在qcloud控制台项目管理页面查询到。
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置项目ID，默认0。可在qcloud控制台项目管理页面查询到。
                     * @param ProjectId 项目ID，默认0。可在qcloud控制台项目管理页面查询到。
                     */
                    void SetProjectId(const std::string& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     */
                    bool ProjectIdHasBeenSet() const;

                private:

                    /**
                     * 安全组名称，可任意命名，但不得超过60个字符。
                     */
                    std::string m_groupName;
                    bool m_groupNameHasBeenSet;

                    /**
                     * 安全组备注，最多100个字符。
                     */
                    std::string m_groupDescription;
                    bool m_groupDescriptionHasBeenSet;

                    /**
                     * 项目ID，默认0。可在qcloud控制台项目管理页面查询到。
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_CREATESECURITYGROUPREQUEST_H_
