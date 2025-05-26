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
                     * 获取集群名称
                     * @return InstanceId 集群名称
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置集群名称
                     * @param _instanceId 集群名称
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
                     * 获取用户组名
                     * @return Group 用户组名
                     * 
                     */
                    std::string GetGroup() const;

                    /**
                     * 设置用户组名
                     * @param _group 用户组名
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
                     * 获取用户列表
                     * @return Users 用户列表
                     * 
                     */
                    std::vector<std::string> GetUsers() const;

                    /**
                     * 设置用户列表
                     * @param _users 用户列表
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
                     * 获取用户组描述
                     * @return Description 用户组描述
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置用户组描述
                     * @param _description 用户组描述
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
                     * 获取枚举类, ADD, DELETE, SYNC


枚举类说明:
- ADD: 新增的批量用户, 多次新增相同的用户不会报错
- DELETE: 从用户组里删除的批量用户, 删除不存在的用户不会报错
- SYNC: 用于同步整个用户组, 当列表为空时代表清空整个用户组
默认为SYNC

                     * @return OperateAction 枚举类, ADD, DELETE, SYNC


枚举类说明:
- ADD: 新增的批量用户, 多次新增相同的用户不会报错
- DELETE: 从用户组里删除的批量用户, 删除不存在的用户不会报错
- SYNC: 用于同步整个用户组, 当列表为空时代表清空整个用户组
默认为SYNC

                     * 
                     */
                    std::string GetOperateAction() const;

                    /**
                     * 设置枚举类, ADD, DELETE, SYNC


枚举类说明:
- ADD: 新增的批量用户, 多次新增相同的用户不会报错
- DELETE: 从用户组里删除的批量用户, 删除不存在的用户不会报错
- SYNC: 用于同步整个用户组, 当列表为空时代表清空整个用户组
默认为SYNC

                     * @param _operateAction 枚举类, ADD, DELETE, SYNC


枚举类说明:
- ADD: 新增的批量用户, 多次新增相同的用户不会报错
- DELETE: 从用户组里删除的批量用户, 删除不存在的用户不会报错
- SYNC: 用于同步整个用户组, 当列表为空时代表清空整个用户组
默认为SYNC

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
                     * 集群名称
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 用户组名
                     */
                    std::string m_group;
                    bool m_groupHasBeenSet;

                    /**
                     * 用户列表
                     */
                    std::vector<std::string> m_users;
                    bool m_usersHasBeenSet;

                    /**
                     * 用户组描述
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 枚举类, ADD, DELETE, SYNC


枚举类说明:
- ADD: 新增的批量用户, 多次新增相同的用户不会报错
- DELETE: 从用户组里删除的批量用户, 删除不存在的用户不会报错
- SYNC: 用于同步整个用户组, 当列表为空时代表清空整个用户组
默认为SYNC

                     */
                    std::string m_operateAction;
                    bool m_operateActionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_MODIFYUSERSOFGROUPSTDREQUEST_H_
