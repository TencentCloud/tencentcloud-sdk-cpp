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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_MODIFYUSERGROUPREQUEST_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_MODIFYUSERGROUPREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * ModifyUserGroup请求参数结构体
                */
                class ModifyUserGroupRequest : public AbstractModel
                {
                public:
                    ModifyUserGroupRequest();
                    ~ModifyUserGroupRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取用户信息列表
                     * @return Users 用户信息列表
                     * 
                     */
                    std::vector<std::string> GetUsers() const;

                    /**
                     * 设置用户信息列表
                     * @param _users 用户信息列表
                     * 
                     */
                    void SetUsers(const std::vector<std::string>& _users);

                    /**
                     * 判断参数 Users 是否已赋值
                     * @return Users 是否已赋值
                     * 
                     */
                    bool UsersHasBeenSet() const;

                    /**
                     * 获取用户主组，cvm集群为必填参数，tke集群选填
                     * @return UserGroup 用户主组，cvm集群为必填参数，tke集群选填
                     * 
                     */
                    std::string GetUserGroup() const;

                    /**
                     * 设置用户主组，cvm集群为必填参数，tke集群选填
                     * @param _userGroup 用户主组，cvm集群为必填参数，tke集群选填
                     * 
                     */
                    void SetUserGroup(const std::string& _userGroup);

                    /**
                     * 判断参数 UserGroup 是否已赋值
                     * @return UserGroup 是否已赋值
                     * 
                     */
                    bool UserGroupHasBeenSet() const;

                    /**
                     * 获取用户副组
                     * @return Groups 用户副组
                     * 
                     */
                    std::vector<std::string> GetGroups() const;

                    /**
                     * 设置用户副组
                     * @param _groups 用户副组
                     * 
                     */
                    void SetGroups(const std::vector<std::string>& _groups);

                    /**
                     * 判断参数 Groups 是否已赋值
                     * @return Groups 是否已赋值
                     * 
                     */
                    bool GroupsHasBeenSet() const;

                    /**
                     * 获取备注
                     * @return Remark 备注
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置备注
                     * @param _remark 备注
                     * 
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     * 
                     */
                    bool RemarkHasBeenSet() const;

                private:

                    /**
                     * 用户信息列表
                     */
                    std::vector<std::string> m_users;
                    bool m_usersHasBeenSet;

                    /**
                     * 用户主组，cvm集群为必填参数，tke集群选填
                     */
                    std::string m_userGroup;
                    bool m_userGroupHasBeenSet;

                    /**
                     * 用户副组
                     */
                    std::vector<std::string> m_groups;
                    bool m_groupsHasBeenSet;

                    /**
                     * 备注
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_MODIFYUSERGROUPREQUEST_H_
