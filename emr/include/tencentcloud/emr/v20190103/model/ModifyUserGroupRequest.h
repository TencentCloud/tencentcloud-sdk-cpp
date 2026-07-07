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
                     * 获取<p>集群字符串ID</p>
                     * @return InstanceId <p>集群字符串ID</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>集群字符串ID</p>
                     * @param _instanceId <p>集群字符串ID</p>
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取<p>用户信息列表</p>
                     * @return Users <p>用户信息列表</p>
                     * 
                     */
                    std::vector<std::string> GetUsers() const;

                    /**
                     * 设置<p>用户信息列表</p>
                     * @param _users <p>用户信息列表</p>
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
                     * 获取<p>用户主组，cvm集群为必填参数，tke集群选填</p>
                     * @return UserGroup <p>用户主组，cvm集群为必填参数，tke集群选填</p>
                     * 
                     */
                    std::string GetUserGroup() const;

                    /**
                     * 设置<p>用户主组，cvm集群为必填参数，tke集群选填</p>
                     * @param _userGroup <p>用户主组，cvm集群为必填参数，tke集群选填</p>
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
                     * 获取<p>用户副组</p>
                     * @return Groups <p>用户副组</p>
                     * 
                     */
                    std::vector<std::string> GetGroups() const;

                    /**
                     * 设置<p>用户副组</p>
                     * @param _groups <p>用户副组</p>
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
                     * 获取<p>备注</p>
                     * @return Remark <p>备注</p>
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置<p>备注</p>
                     * @param _remark <p>备注</p>
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
                     * <p>集群字符串ID</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>用户信息列表</p>
                     */
                    std::vector<std::string> m_users;
                    bool m_usersHasBeenSet;

                    /**
                     * <p>用户主组，cvm集群为必填参数，tke集群选填</p>
                     */
                    std::string m_userGroup;
                    bool m_userGroupHasBeenSet;

                    /**
                     * <p>用户副组</p>
                     */
                    std::vector<std::string> m_groups;
                    bool m_groupsHasBeenSet;

                    /**
                     * <p>备注</p>
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_MODIFYUSERGROUPREQUEST_H_
