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

#ifndef TENCENTCLOUD_TCB_V20180608_MODEL_DELETEENDUSERREQUEST_H_
#define TENCENTCLOUD_TCB_V20180608_MODEL_DELETEENDUSERREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcb
    {
        namespace V20180608
        {
            namespace Model
            {
                /**
                * DeleteEndUser请求参数结构体
                */
                class DeleteEndUserRequest : public AbstractModel
                {
                public:
                    DeleteEndUserRequest();
                    ~DeleteEndUserRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取环境ID
                     * @return EnvId 环境ID
                     * 
                     */
                    std::string GetEnvId() const;

                    /**
                     * 设置环境ID
                     * @param _envId 环境ID
                     * 
                     */
                    void SetEnvId(const std::string& _envId);

                    /**
                     * 判断参数 EnvId 是否已赋值
                     * @return EnvId 是否已赋值
                     * 
                     */
                    bool EnvIdHasBeenSet() const;

                    /**
                     * 获取用户列表，每一项都是uuid
                     * @return UserList 用户列表，每一项都是uuid
                     * 
                     */
                    std::vector<std::string> GetUserList() const;

                    /**
                     * 设置用户列表，每一项都是uuid
                     * @param _userList 用户列表，每一项都是uuid
                     * 
                     */
                    void SetUserList(const std::vector<std::string>& _userList);

                    /**
                     * 判断参数 UserList 是否已赋值
                     * @return UserList 是否已赋值
                     * 
                     */
                    bool UserListHasBeenSet() const;

                private:

                    /**
                     * 环境ID
                     */
                    std::string m_envId;
                    bool m_envIdHasBeenSet;

                    /**
                     * 用户列表，每一项都是uuid
                     */
                    std::vector<std::string> m_userList;
                    bool m_userListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCB_V20180608_MODEL_DELETEENDUSERREQUEST_H_
