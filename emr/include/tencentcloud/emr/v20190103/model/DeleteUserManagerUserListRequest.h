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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_DELETEUSERMANAGERUSERLISTREQUEST_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_DELETEUSERMANAGERUSERLISTREQUEST_H_

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
                * DeleteUserManagerUserList请求参数结构体
                */
                class DeleteUserManagerUserListRequest : public AbstractModel
                {
                public:
                    DeleteUserManagerUserListRequest();
                    ~DeleteUserManagerUserListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取集群实例ID
                     * @return InstanceId 集群实例ID
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置集群实例ID
                     * @param InstanceId 集群实例ID
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取集群用户名列表
                     * @return UserNameList 集群用户名列表
                     */
                    std::vector<std::string> GetUserNameList() const;

                    /**
                     * 设置集群用户名列表
                     * @param UserNameList 集群用户名列表
                     */
                    void SetUserNameList(const std::vector<std::string>& _userNameList);

                    /**
                     * 判断参数 UserNameList 是否已赋值
                     * @return UserNameList 是否已赋值
                     */
                    bool UserNameListHasBeenSet() const;

                private:

                    /**
                     * 集群实例ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 集群用户名列表
                     */
                    std::vector<std::string> m_userNameList;
                    bool m_userNameListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_DELETEUSERMANAGERUSERLISTREQUEST_H_
