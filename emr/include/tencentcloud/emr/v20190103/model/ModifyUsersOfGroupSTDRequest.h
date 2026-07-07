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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_MODIFYUSERSOFGROUPSTDREQUEST_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_MODIFYUSERSOFGROUPSTDREQUEST_H_

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
                * ModifyUsersOfGroupSTD请求参数结构体
                */
                class ModifyUsersOfGroupSTDRequest : public AbstractModel
                {
                public:
                    ModifyUsersOfGroupSTDRequest();
                    ~ModifyUsersOfGroupSTDRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>集群名称</p>
                     * @return InstanceId <p>集群名称</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>集群名称</p>
                     * @param _instanceId <p>集群名称</p>
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
                     * 获取<p>用户组名</p>
                     * @return Group <p>用户组名</p>
                     * 
                     */
                    std::string GetGroup() const;

                    /**
                     * 设置<p>用户组名</p>
                     * @param _group <p>用户组名</p>
                     * 
                     */
                    void SetGroup(const std::string& _group);

                    /**
                     * 判断参数 Group 是否已赋值
                     * @return Group 是否已赋值
                     * 
                     */
                    bool GroupHasBeenSet() const;

                    /**
                     * 获取<p>用户列表</p>
                     * @return Users <p>用户列表</p>
                     * 
                     */
                    std::vector<std::string> GetUsers() const;

                    /**
                     * 设置<p>用户列表</p>
                     * @param _users <p>用户列表</p>
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
                     * 获取<p>用户组描述</p>
                     * @return Description <p>用户组描述</p>
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>用户组描述</p>
                     * @param _description <p>用户组描述</p>
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取<p>枚举类, ADD, DELETE, SYNC</p><p>枚举类说明:</p><ul><li>ADD: 新增的批量用户, 多次新增相同的用户不会报错</li><li>DELETE: 从用户组里删除的批量用户, 删除不存在的用户不会报错</li><li>SYNC: 用于同步整个用户组, 当列表为空时代表清空整个用户组<br>默认为SYNC</li></ul>
                     * @return OperateAction <p>枚举类, ADD, DELETE, SYNC</p><p>枚举类说明:</p><ul><li>ADD: 新增的批量用户, 多次新增相同的用户不会报错</li><li>DELETE: 从用户组里删除的批量用户, 删除不存在的用户不会报错</li><li>SYNC: 用于同步整个用户组, 当列表为空时代表清空整个用户组<br>默认为SYNC</li></ul>
                     * 
                     */
                    std::string GetOperateAction() const;

                    /**
                     * 设置<p>枚举类, ADD, DELETE, SYNC</p><p>枚举类说明:</p><ul><li>ADD: 新增的批量用户, 多次新增相同的用户不会报错</li><li>DELETE: 从用户组里删除的批量用户, 删除不存在的用户不会报错</li><li>SYNC: 用于同步整个用户组, 当列表为空时代表清空整个用户组<br>默认为SYNC</li></ul>
                     * @param _operateAction <p>枚举类, ADD, DELETE, SYNC</p><p>枚举类说明:</p><ul><li>ADD: 新增的批量用户, 多次新增相同的用户不会报错</li><li>DELETE: 从用户组里删除的批量用户, 删除不存在的用户不会报错</li><li>SYNC: 用于同步整个用户组, 当列表为空时代表清空整个用户组<br>默认为SYNC</li></ul>
                     * 
                     */
                    void SetOperateAction(const std::string& _operateAction);

                    /**
                     * 判断参数 OperateAction 是否已赋值
                     * @return OperateAction 是否已赋值
                     * 
                     */
                    bool OperateActionHasBeenSet() const;

                private:

                    /**
                     * <p>集群名称</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>用户组名</p>
                     */
                    std::string m_group;
                    bool m_groupHasBeenSet;

                    /**
                     * <p>用户列表</p>
                     */
                    std::vector<std::string> m_users;
                    bool m_usersHasBeenSet;

                    /**
                     * <p>用户组描述</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>枚举类, ADD, DELETE, SYNC</p><p>枚举类说明:</p><ul><li>ADD: 新增的批量用户, 多次新增相同的用户不会报错</li><li>DELETE: 从用户组里删除的批量用户, 删除不存在的用户不会报错</li><li>SYNC: 用于同步整个用户组, 当列表为空时代表清空整个用户组<br>默认为SYNC</li></ul>
                     */
                    std::string m_operateAction;
                    bool m_operateActionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_MODIFYUSERSOFGROUPSTDREQUEST_H_
