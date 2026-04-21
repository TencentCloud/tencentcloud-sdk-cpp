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

#ifndef TENCENTCLOUD_BI_V20220105_MODEL_CREATEUSERGROUPREQUEST_H_
#define TENCENTCLOUD_BI_V20220105_MODEL_CREATEUSERGROUPREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Bi
    {
        namespace V20220105
        {
            namespace Model
            {
                /**
                * CreateUserGroup请求参数结构体
                */
                class CreateUserGroupRequest : public AbstractModel
                {
                public:
                    CreateUserGroupRequest();
                    ~CreateUserGroupRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取用户组名称
                     * @return GroupName 用户组名称
                     * 
                     */
                    std::string GetGroupName() const;

                    /**
                     * 设置用户组名称
                     * @param _groupName 用户组名称
                     * 
                     */
                    void SetGroupName(const std::string& _groupName);

                    /**
                     * 判断参数 GroupName 是否已赋值
                     * @return GroupName 是否已赋值
                     * 
                     */
                    bool GroupNameHasBeenSet() const;

                    /**
                     * 获取位置
                     * @return Location 位置
                     * 
                     */
                    int64_t GetLocation() const;

                    /**
                     * 设置位置
                     * @param _location 位置
                     * 
                     */
                    void SetLocation(const int64_t& _location);

                    /**
                     * 判断参数 Location 是否已赋值
                     * @return Location 是否已赋值
                     * 
                     */
                    bool LocationHasBeenSet() const;

                    /**
                     * 获取父用户组id
                     * @return ParentId 父用户组id
                     * 
                     */
                    int64_t GetParentId() const;

                    /**
                     * 设置父用户组id
                     * @param _parentId 父用户组id
                     * 
                     */
                    void SetParentId(const int64_t& _parentId);

                    /**
                     * 判断参数 ParentId 是否已赋值
                     * @return ParentId 是否已赋值
                     * 
                     */
                    bool ParentIdHasBeenSet() const;

                private:

                    /**
                     * 用户组名称
                     */
                    std::string m_groupName;
                    bool m_groupNameHasBeenSet;

                    /**
                     * 位置
                     */
                    int64_t m_location;
                    bool m_locationHasBeenSet;

                    /**
                     * 父用户组id
                     */
                    int64_t m_parentId;
                    bool m_parentIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BI_V20220105_MODEL_CREATEUSERGROUPREQUEST_H_
