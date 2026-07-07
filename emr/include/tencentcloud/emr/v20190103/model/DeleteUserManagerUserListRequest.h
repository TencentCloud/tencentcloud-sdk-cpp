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
                     * 获取<p>集群实例ID</p>
                     * @return InstanceId <p>集群实例ID</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>集群实例ID</p>
                     * @param _instanceId <p>集群实例ID</p>
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
                     * 获取<p>集群用户名列表</p>
                     * @return UserNameList <p>集群用户名列表</p>
                     * 
                     */
                    std::vector<std::string> GetUserNameList() const;

                    /**
                     * 设置<p>集群用户名列表</p>
                     * @param _userNameList <p>集群用户名列表</p>
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
                     * 获取<p>tke/eks集群id，容器集群传</p>
                     * @return TkeClusterId <p>tke/eks集群id，容器集群传</p>
                     * 
                     */
                    std::string GetTkeClusterId() const;

                    /**
                     * 设置<p>tke/eks集群id，容器集群传</p>
                     * @param _tkeClusterId <p>tke/eks集群id，容器集群传</p>
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
                     * 获取<p>默认空，容器版传&quot;native&quot;</p>
                     * @return DisplayStrategy <p>默认空，容器版传&quot;native&quot;</p>
                     * 
                     */
                    std::string GetDisplayStrategy() const;

                    /**
                     * 设置<p>默认空，容器版传&quot;native&quot;</p>
                     * @param _displayStrategy <p>默认空，容器版传&quot;native&quot;</p>
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
                     * 获取<p>用户组</p>
                     * @return UserGroupList <p>用户组</p>
                     * 
                     */
                    std::vector<UserAndGroup> GetUserGroupList() const;

                    /**
                     * 设置<p>用户组</p>
                     * @param _userGroupList <p>用户组</p>
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
                     * 获取<p>是否删除家目录，只针对cvm集群</p>
                     * @return DeleteHomeDir <p>是否删除家目录，只针对cvm集群</p>
                     * 
                     */
                    bool GetDeleteHomeDir() const;

                    /**
                     * 设置<p>是否删除家目录，只针对cvm集群</p>
                     * @param _deleteHomeDir <p>是否删除家目录，只针对cvm集群</p>
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
                     * <p>集群实例ID</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>集群用户名列表</p>
                     */
                    std::vector<std::string> m_userNameList;
                    bool m_userNameListHasBeenSet;

                    /**
                     * <p>tke/eks集群id，容器集群传</p>
                     */
                    std::string m_tkeClusterId;
                    bool m_tkeClusterIdHasBeenSet;

                    /**
                     * <p>默认空，容器版传&quot;native&quot;</p>
                     */
                    std::string m_displayStrategy;
                    bool m_displayStrategyHasBeenSet;

                    /**
                     * <p>用户组</p>
                     */
                    std::vector<UserAndGroup> m_userGroupList;
                    bool m_userGroupListHasBeenSet;

                    /**
                     * <p>是否删除家目录，只针对cvm集群</p>
                     */
                    bool m_deleteHomeDir;
                    bool m_deleteHomeDirHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_DELETEUSERMANAGERUSERLISTREQUEST_H_
