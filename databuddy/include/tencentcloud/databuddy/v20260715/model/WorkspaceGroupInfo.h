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

#ifndef TENCENTCLOUD_DATABUDDY_V20260715_MODEL_WORKSPACEGROUPINFO_H_
#define TENCENTCLOUD_DATABUDDY_V20260715_MODEL_WORKSPACEGROUPINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/databuddy/v20260715/model/RoleBasicInfo.h>
#include <tencentcloud/databuddy/v20260715/model/UserTagInfo.h>


namespace TencentCloud
{
    namespace Databuddy
    {
        namespace V20260715
        {
            namespace Model
            {
                /**
                * 工作空间用户组信息
                */
                class WorkspaceGroupInfo : public AbstractModel
                {
                public:
                    WorkspaceGroupInfo();
                    ~WorkspaceGroupInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>用户组ID</p>
                     * @return GroupId <p>用户组ID</p>
                     * 
                     */
                    std::string GetGroupId() const;

                    /**
                     * 设置<p>用户组ID</p>
                     * @param _groupId <p>用户组ID</p>
                     * 
                     */
                    void SetGroupId(const std::string& _groupId);

                    /**
                     * 判断参数 GroupId 是否已赋值
                     * @return GroupId 是否已赋值
                     * 
                     */
                    bool GroupIdHasBeenSet() const;

                    /**
                     * 获取<p>用户组名称</p>
                     * @return GroupName <p>用户组名称</p>
                     * 
                     */
                    std::string GetGroupName() const;

                    /**
                     * 设置<p>用户组名称</p>
                     * @param _groupName <p>用户组名称</p>
                     * 
                     */
                    void SetGroupName(const std::string& _groupName);

                    /**
                     * 判断参数 GroupName 是否已赋值
                     * @return GroupName 是否已赋值
                     * 
                     */
                    bool GroupNameHasBeenSet() const;

                    /**
                     * 获取<p>角色列表</p>
                     * @return Roles <p>角色列表</p>
                     * 
                     */
                    std::vector<RoleBasicInfo> GetRoles() const;

                    /**
                     * 设置<p>角色列表</p>
                     * @param _roles <p>角色列表</p>
                     * 
                     */
                    void SetRoles(const std::vector<RoleBasicInfo>& _roles);

                    /**
                     * 判断参数 Roles 是否已赋值
                     * @return Roles 是否已赋值
                     * 
                     */
                    bool RolesHasBeenSet() const;

                    /**
                     * 获取<p>创建时间，毫秒时间戳</p>
                     * @return CreateTime <p>创建时间，毫秒时间戳</p>
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置<p>创建时间，毫秒时间戳</p>
                     * @param _createTime <p>创建时间，毫秒时间戳</p>
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取<p>更新时间，毫秒时间戳</p>
                     * @return UpdateTime <p>更新时间，毫秒时间戳</p>
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置<p>更新时间，毫秒时间戳</p>
                     * @param _updateTime <p>更新时间，毫秒时间戳</p>
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取<p>用户组下用户数量</p>
                     * @return UserCount <p>用户组下用户数量</p>
                     * 
                     */
                    int64_t GetUserCount() const;

                    /**
                     * 设置<p>用户组下用户数量</p>
                     * @param _userCount <p>用户组下用户数量</p>
                     * 
                     */
                    void SetUserCount(const int64_t& _userCount);

                    /**
                     * 判断参数 UserCount 是否已赋值
                     * @return UserCount 是否已赋值
                     * 
                     */
                    bool UserCountHasBeenSet() const;

                    /**
                     * 获取<p>用户组类型。取值为枚举数值的字符串形式：&quot;0&quot;=控制台系统类型（包含全部user）、&quot;1&quot;=控制台自定义类型、&quot;2&quot;=工作空间系统类型（包含工作空间全部user）、&quot;3&quot;=工作空间自定义类型</p>
                     * @return GroupType <p>用户组类型。取值为枚举数值的字符串形式：&quot;0&quot;=控制台系统类型（包含全部user）、&quot;1&quot;=控制台自定义类型、&quot;2&quot;=工作空间系统类型（包含工作空间全部user）、&quot;3&quot;=工作空间自定义类型</p>
                     * 
                     */
                    std::string GetGroupType() const;

                    /**
                     * 设置<p>用户组类型。取值为枚举数值的字符串形式：&quot;0&quot;=控制台系统类型（包含全部user）、&quot;1&quot;=控制台自定义类型、&quot;2&quot;=工作空间系统类型（包含工作空间全部user）、&quot;3&quot;=工作空间自定义类型</p>
                     * @param _groupType <p>用户组类型。取值为枚举数值的字符串形式：&quot;0&quot;=控制台系统类型（包含全部user）、&quot;1&quot;=控制台自定义类型、&quot;2&quot;=工作空间系统类型（包含工作空间全部user）、&quot;3&quot;=工作空间自定义类型</p>
                     * 
                     */
                    void SetGroupType(const std::string& _groupType);

                    /**
                     * 判断参数 GroupType 是否已赋值
                     * @return GroupType 是否已赋值
                     * 
                     */
                    bool GroupTypeHasBeenSet() const;

                    /**
                     * 获取<p>该组直接绑定的标签（不含继承）</p>
                     * @return Tags <p>该组直接绑定的标签（不含继承）</p>
                     * 
                     */
                    std::vector<UserTagInfo> GetTags() const;

                    /**
                     * 设置<p>该组直接绑定的标签（不含继承）</p>
                     * @param _tags <p>该组直接绑定的标签（不含继承）</p>
                     * 
                     */
                    void SetTags(const std::vector<UserTagInfo>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                private:

                    /**
                     * <p>用户组ID</p>
                     */
                    std::string m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * <p>用户组名称</p>
                     */
                    std::string m_groupName;
                    bool m_groupNameHasBeenSet;

                    /**
                     * <p>角色列表</p>
                     */
                    std::vector<RoleBasicInfo> m_roles;
                    bool m_rolesHasBeenSet;

                    /**
                     * <p>创建时间，毫秒时间戳</p>
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>更新时间，毫秒时间戳</p>
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * <p>用户组下用户数量</p>
                     */
                    int64_t m_userCount;
                    bool m_userCountHasBeenSet;

                    /**
                     * <p>用户组类型。取值为枚举数值的字符串形式：&quot;0&quot;=控制台系统类型（包含全部user）、&quot;1&quot;=控制台自定义类型、&quot;2&quot;=工作空间系统类型（包含工作空间全部user）、&quot;3&quot;=工作空间自定义类型</p>
                     */
                    std::string m_groupType;
                    bool m_groupTypeHasBeenSet;

                    /**
                     * <p>该组直接绑定的标签（不含继承）</p>
                     */
                    std::vector<UserTagInfo> m_tags;
                    bool m_tagsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DATABUDDY_V20260715_MODEL_WORKSPACEGROUPINFO_H_
