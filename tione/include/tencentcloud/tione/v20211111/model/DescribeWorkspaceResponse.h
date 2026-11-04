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

#ifndef TENCENTCLOUD_TIONE_V20211111_MODEL_DESCRIBEWORKSPACERESPONSE_H_
#define TENCENTCLOUD_TIONE_V20211111_MODEL_DESCRIBEWORKSPACERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tione/v20211111/model/WorkspaceTaskInfo.h>
#include <tencentcloud/tione/v20211111/model/UserBriefInfo.h>
#include <tencentcloud/tione/v20211111/model/RoleBriefInfo.h>
#include <tencentcloud/tione/v20211111/model/MemberInfo.h>


namespace TencentCloud
{
    namespace Tione
    {
        namespace V20211111
        {
            namespace Model
            {
                /**
                * DescribeWorkspace返回参数结构体
                */
                class DescribeWorkspaceResponse : public AbstractModel
                {
                public:
                    DescribeWorkspaceResponse();
                    ~DescribeWorkspaceResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>项目ID</p>
                     * @return TiProjectId <p>项目ID</p>
                     * 
                     */
                    std::string GetTiProjectId() const;

                    /**
                     * 判断参数 TiProjectId 是否已赋值
                     * @return TiProjectId 是否已赋值
                     * 
                     */
                    bool TiProjectIdHasBeenSet() const;

                    /**
                     * 获取<p>名称</p>
                     * @return Name <p>名称</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取<p>描述</p>
                     * @return Description <p>描述</p>
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取<p>创建时间</p>
                     * @return CreateTime <p>创建时间</p>
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取<p>运行中的任务信息</p>
                     * @return RunningTasks <p>运行中的任务信息</p>
                     * 
                     */
                    std::vector<WorkspaceTaskInfo> GetRunningTasks() const;

                    /**
                     * 判断参数 RunningTasks 是否已赋值
                     * @return RunningTasks 是否已赋值
                     * 
                     */
                    bool RunningTasksHasBeenSet() const;

                    /**
                     * 获取<p>空间创建人信息</p>
                     * @return Creator <p>空间创建人信息</p>
                     * 
                     */
                    UserBriefInfo GetCreator() const;

                    /**
                     * 判断参数 Creator 是否已赋值
                     * @return Creator 是否已赋值
                     * 
                     */
                    bool CreatorHasBeenSet() const;

                    /**
                     * 获取<p>当前空间拥有的角色信息</p>
                     * @return OwnedRoles <p>当前空间拥有的角色信息</p>
                     * 
                     */
                    std::vector<RoleBriefInfo> GetOwnedRoles() const;

                    /**
                     * 判断参数 OwnedRoles 是否已赋值
                     * @return OwnedRoles 是否已赋值
                     * 
                     */
                    bool OwnedRolesHasBeenSet() const;

                    /**
                     * 获取<p>空间成员信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MemberInfo <p>空间成员信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    MemberInfo GetMemberInfo() const;

                    /**
                     * 判断参数 MemberInfo 是否已赋值
                     * @return MemberInfo 是否已赋值
                     * 
                     */
                    bool MemberInfoHasBeenSet() const;

                private:

                    /**
                     * <p>项目ID</p>
                     */
                    std::string m_tiProjectId;
                    bool m_tiProjectIdHasBeenSet;

                    /**
                     * <p>名称</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>描述</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>创建时间</p>
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>运行中的任务信息</p>
                     */
                    std::vector<WorkspaceTaskInfo> m_runningTasks;
                    bool m_runningTasksHasBeenSet;

                    /**
                     * <p>空间创建人信息</p>
                     */
                    UserBriefInfo m_creator;
                    bool m_creatorHasBeenSet;

                    /**
                     * <p>当前空间拥有的角色信息</p>
                     */
                    std::vector<RoleBriefInfo> m_ownedRoles;
                    bool m_ownedRolesHasBeenSet;

                    /**
                     * <p>空间成员信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    MemberInfo m_memberInfo;
                    bool m_memberInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIONE_V20211111_MODEL_DESCRIBEWORKSPACERESPONSE_H_
