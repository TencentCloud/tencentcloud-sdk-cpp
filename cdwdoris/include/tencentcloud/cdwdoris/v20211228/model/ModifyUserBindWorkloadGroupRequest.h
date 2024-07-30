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

#ifndef TENCENTCLOUD_CDWDORIS_V20211228_MODEL_MODIFYUSERBINDWORKLOADGROUPREQUEST_H_
#define TENCENTCLOUD_CDWDORIS_V20211228_MODEL_MODIFYUSERBINDWORKLOADGROUPREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdwdoris/v20211228/model/BindUser.h>


namespace TencentCloud
{
    namespace Cdwdoris
    {
        namespace V20211228
        {
            namespace Model
            {
                /**
                * ModifyUserBindWorkloadGroup请求参数结构体
                */
                class ModifyUserBindWorkloadGroupRequest : public AbstractModel
                {
                public:
                    ModifyUserBindWorkloadGroupRequest();
                    ~ModifyUserBindWorkloadGroupRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取集群id
                     * @return InstanceId 集群id
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置集群id
                     * @param _instanceId 集群id
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
                     * 获取需要绑定资源组的用户信息，如果一个账户拥有多个主机信息，需要将这些信息都传入
                     * @return BindUsers 需要绑定资源组的用户信息，如果一个账户拥有多个主机信息，需要将这些信息都传入
                     * 
                     */
                    std::vector<BindUser> GetBindUsers() const;

                    /**
                     * 设置需要绑定资源组的用户信息，如果一个账户拥有多个主机信息，需要将这些信息都传入
                     * @param _bindUsers 需要绑定资源组的用户信息，如果一个账户拥有多个主机信息，需要将这些信息都传入
                     * 
                     */
                    void SetBindUsers(const std::vector<BindUser>& _bindUsers);

                    /**
                     * 判断参数 BindUsers 是否已赋值
                     * @return BindUsers 是否已赋值
                     * 
                     */
                    bool BindUsersHasBeenSet() const;

                    /**
                     * 获取修改前绑定的资源组名称
                     * @return OldWorkloadGroupName 修改前绑定的资源组名称
                     * 
                     */
                    std::string GetOldWorkloadGroupName() const;

                    /**
                     * 设置修改前绑定的资源组名称
                     * @param _oldWorkloadGroupName 修改前绑定的资源组名称
                     * 
                     */
                    void SetOldWorkloadGroupName(const std::string& _oldWorkloadGroupName);

                    /**
                     * 判断参数 OldWorkloadGroupName 是否已赋值
                     * @return OldWorkloadGroupName 是否已赋值
                     * 
                     */
                    bool OldWorkloadGroupNameHasBeenSet() const;

                    /**
                     * 获取修改后绑定的资源组名称
                     * @return NewWorkloadGroupName 修改后绑定的资源组名称
                     * 
                     */
                    std::string GetNewWorkloadGroupName() const;

                    /**
                     * 设置修改后绑定的资源组名称
                     * @param _newWorkloadGroupName 修改后绑定的资源组名称
                     * 
                     */
                    void SetNewWorkloadGroupName(const std::string& _newWorkloadGroupName);

                    /**
                     * 判断参数 NewWorkloadGroupName 是否已赋值
                     * @return NewWorkloadGroupName 是否已赋值
                     * 
                     */
                    bool NewWorkloadGroupNameHasBeenSet() const;

                private:

                    /**
                     * 集群id
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 需要绑定资源组的用户信息，如果一个账户拥有多个主机信息，需要将这些信息都传入
                     */
                    std::vector<BindUser> m_bindUsers;
                    bool m_bindUsersHasBeenSet;

                    /**
                     * 修改前绑定的资源组名称
                     */
                    std::string m_oldWorkloadGroupName;
                    bool m_oldWorkloadGroupNameHasBeenSet;

                    /**
                     * 修改后绑定的资源组名称
                     */
                    std::string m_newWorkloadGroupName;
                    bool m_newWorkloadGroupNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDWDORIS_V20211228_MODEL_MODIFYUSERBINDWORKLOADGROUPREQUEST_H_
