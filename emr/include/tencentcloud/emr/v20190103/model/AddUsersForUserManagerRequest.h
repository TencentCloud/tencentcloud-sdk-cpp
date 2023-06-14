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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_ADDUSERSFORUSERMANAGERREQUEST_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_ADDUSERSFORUSERMANAGERREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/emr/v20190103/model/UserInfoForUserManager.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * AddUsersForUserManager请求参数结构体
                */
                class AddUsersForUserManagerRequest : public AbstractModel
                {
                public:
                    AddUsersForUserManagerRequest();
                    ~AddUsersForUserManagerRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取集群字符串ID
                     * @return InstanceId 集群字符串ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置集群字符串ID
                     * @param _instanceId 集群字符串ID
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
                     * 获取用户信息列表
                     * @return UserManagerUserList 用户信息列表
                     * 
                     */
                    std::vector<UserInfoForUserManager> GetUserManagerUserList() const;

                    /**
                     * 设置用户信息列表
                     * @param _userManagerUserList 用户信息列表
                     * 
                     */
                    void SetUserManagerUserList(const std::vector<UserInfoForUserManager>& _userManagerUserList);

                    /**
                     * 判断参数 UserManagerUserList 是否已赋值
                     * @return UserManagerUserList 是否已赋值
                     * 
                     */
                    bool UserManagerUserListHasBeenSet() const;

                private:

                    /**
                     * 集群字符串ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 用户信息列表
                     */
                    std::vector<UserInfoForUserManager> m_userManagerUserList;
                    bool m_userManagerUserListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_ADDUSERSFORUSERMANAGERREQUEST_H_
