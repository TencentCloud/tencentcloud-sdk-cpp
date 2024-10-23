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
#include <tencentcloud/emr/v20190103/model/UserAndGroup.h>


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
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置集群实例ID
                     * @param _instanceId 集群实例ID
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
                     * 获取集群用户名列表
                     * @return UserNameList 集群用户名列表
                     * 
                     */
                    std::vector<std::string> GetUserNameList() const;

                    /**
                     * 设置集群用户名列表
                     * @param _userNameList 集群用户名列表
                     * 
                     */
                    void SetUserNameList(const std::vector<std::string>& _userNameList);

                    /**
                     * 判断参数 UserNameList 是否已赋值
                     * @return UserNameList 是否已赋值
                     * 
                     */
                    bool UserNameListHasBeenSet() const;

                    /**
                     * 获取tke/eks集群id，容器集群传
                     * @return TkeClusterId tke/eks集群id，容器集群传
                     * 
                     */
                    std::string GetTkeClusterId() const;

                    /**
                     * 设置tke/eks集群id，容器集群传
                     * @param _tkeClusterId tke/eks集群id，容器集群传
                     * 
                     */
                    void SetTkeClusterId(const std::string& _tkeClusterId);

                    /**
                     * 判断参数 TkeClusterId 是否已赋值
                     * @return TkeClusterId 是否已赋值
                     * 
                     */
                    bool TkeClusterIdHasBeenSet() const;

                    /**
                     * 获取默认空，容器版传"native"
                     * @return DisplayStrategy 默认空，容器版传"native"
                     * 
                     */
                    std::string GetDisplayStrategy() const;

                    /**
                     * 设置默认空，容器版传"native"
                     * @param _displayStrategy 默认空，容器版传"native"
                     * 
                     */
                    void SetDisplayStrategy(const std::string& _displayStrategy);

                    /**
                     * 判断参数 DisplayStrategy 是否已赋值
                     * @return DisplayStrategy 是否已赋值
                     * 
                     */
                    bool DisplayStrategyHasBeenSet() const;

                    /**
                     * 获取用户组
                     * @return UserGroupList 用户组
                     * 
                     */
                    std::vector<UserAndGroup> GetUserGroupList() const;

                    /**
                     * 设置用户组
                     * @param _userGroupList 用户组
                     * 
                     */
                    void SetUserGroupList(const std::vector<UserAndGroup>& _userGroupList);

                    /**
                     * 判断参数 UserGroupList 是否已赋值
                     * @return UserGroupList 是否已赋值
                     * 
                     */
                    bool UserGroupListHasBeenSet() const;

                    /**
                     * 获取是否删除家目录，只针对cvm集群
                     * @return DeleteHomeDir 是否删除家目录，只针对cvm集群
                     * 
                     */
                    bool GetDeleteHomeDir() const;

                    /**
                     * 设置是否删除家目录，只针对cvm集群
                     * @param _deleteHomeDir 是否删除家目录，只针对cvm集群
                     * 
                     */
                    void SetDeleteHomeDir(const bool& _deleteHomeDir);

                    /**
                     * 判断参数 DeleteHomeDir 是否已赋值
                     * @return DeleteHomeDir 是否已赋值
                     * 
                     */
                    bool DeleteHomeDirHasBeenSet() const;

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

                    /**
                     * tke/eks集群id，容器集群传
                     */
                    std::string m_tkeClusterId;
                    bool m_tkeClusterIdHasBeenSet;

                    /**
                     * 默认空，容器版传"native"
                     */
                    std::string m_displayStrategy;
                    bool m_displayStrategyHasBeenSet;

                    /**
                     * 用户组
                     */
                    std::vector<UserAndGroup> m_userGroupList;
                    bool m_userGroupListHasBeenSet;

                    /**
                     * 是否删除家目录，只针对cvm集群
                     */
                    bool m_deleteHomeDir;
                    bool m_deleteHomeDirHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_DELETEUSERMANAGERUSERLISTREQUEST_H_
