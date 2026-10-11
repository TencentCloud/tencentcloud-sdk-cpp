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

#ifndef TENCENTCLOUD_DATABUDDY_V20260715_MODEL_WORKSPACEUSERINFO_H_
#define TENCENTCLOUD_DATABUDDY_V20260715_MODEL_WORKSPACEUSERINFO_H_

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
                * 工作空间用户信息
                */
                class WorkspaceUserInfo : public AbstractModel
                {
                public:
                    WorkspaceUserInfo();
                    ~WorkspaceUserInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>用户UIN</p>
                     * @return UserUin <p>用户UIN</p>
                     * 
                     */
                    std::string GetUserUin() const;

                    /**
                     * 设置<p>用户UIN</p>
                     * @param _userUin <p>用户UIN</p>
                     * 
                     */
                    void SetUserUin(const std::string& _userUin);

                    /**
                     * 判断参数 UserUin 是否已赋值
                     * @return UserUin 是否已赋值
                     * 
                     */
                    bool UserUinHasBeenSet() const;

                    /**
                     * 获取<p>用户名</p>
                     * @return UserName <p>用户名</p>
                     * 
                     */
                    std::string GetUserName() const;

                    /**
                     * 设置<p>用户名</p>
                     * @param _userName <p>用户名</p>
                     * 
                     */
                    void SetUserName(const std::string& _userName);

                    /**
                     * 判断参数 UserName 是否已赋值
                     * @return UserName 是否已赋值
                     * 
                     */
                    bool UserNameHasBeenSet() const;

                    /**
                     * 获取<p>昵称</p>
                     * @return Nickname <p>昵称</p>
                     * 
                     */
                    std::string GetNickname() const;

                    /**
                     * 设置<p>昵称</p>
                     * @param _nickname <p>昵称</p>
                     * 
                     */
                    void SetNickname(const std::string& _nickname);

                    /**
                     * 判断参数 Nickname 是否已赋值
                     * @return Nickname 是否已赋值
                     * 
                     */
                    bool NicknameHasBeenSet() const;

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
                     * 获取<p>用户来源，group：用户组、user：用户</p>
                     * @return UserSource <p>用户来源，group：用户组、user：用户</p>
                     * 
                     */
                    std::string GetUserSource() const;

                    /**
                     * 设置<p>用户来源，group：用户组、user：用户</p>
                     * @param _userSource <p>用户来源，group：用户组、user：用户</p>
                     * 
                     */
                    void SetUserSource(const std::string& _userSource);

                    /**
                     * 判断参数 UserSource 是否已赋值
                     * @return UserSource 是否已赋值
                     * 
                     */
                    bool UserSourceHasBeenSet() const;

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
                     * 获取<p>是否主账号</p>
                     * @return IsOwner <p>是否主账号</p>
                     * 
                     */
                    bool GetIsOwner() const;

                    /**
                     * 设置<p>是否主账号</p>
                     * @param _isOwner <p>是否主账号</p>
                     * 
                     */
                    void SetIsOwner(const bool& _isOwner);

                    /**
                     * 判断参数 IsOwner 是否已赋值
                     * @return IsOwner 是否已赋值
                     * 
                     */
                    bool IsOwnerHasBeenSet() const;

                    /**
                     * 获取<p>0: 普通用户 1: entraId用户</p>
                     * @return UserTag <p>0: 普通用户 1: entraId用户</p>
                     * 
                     */
                    int64_t GetUserTag() const;

                    /**
                     * 设置<p>0: 普通用户 1: entraId用户</p>
                     * @param _userTag <p>0: 普通用户 1: entraId用户</p>
                     * 
                     */
                    void SetUserTag(const int64_t& _userTag);

                    /**
                     * 判断参数 UserTag 是否已赋值
                     * @return UserTag 是否已赋值
                     * 
                     */
                    bool UserTagHasBeenSet() const;

                    /**
                     * 获取<p>是否具有 admin 权限的子账号</p>
                     * @return IsAdmin <p>是否具有 admin 权限的子账号</p>
                     * 
                     */
                    bool GetIsAdmin() const;

                    /**
                     * 设置<p>是否具有 admin 权限的子账号</p>
                     * @param _isAdmin <p>是否具有 admin 权限的子账号</p>
                     * 
                     */
                    void SetIsAdmin(const bool& _isAdmin);

                    /**
                     * 判断参数 IsAdmin 是否已赋值
                     * @return IsAdmin 是否已赋值
                     * 
                     */
                    bool IsAdminHasBeenSet() const;

                    /**
                     * 获取<p>合并后标签（用户直绑 + 用户组继承）</p>
                     * @return Tags <p>合并后标签（用户直绑 + 用户组继承）</p>
                     * 
                     */
                    std::vector<UserTagInfo> GetTags() const;

                    /**
                     * 设置<p>合并后标签（用户直绑 + 用户组继承）</p>
                     * @param _tags <p>合并后标签（用户直绑 + 用户组继承）</p>
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
                     * <p>用户UIN</p>
                     */
                    std::string m_userUin;
                    bool m_userUinHasBeenSet;

                    /**
                     * <p>用户名</p>
                     */
                    std::string m_userName;
                    bool m_userNameHasBeenSet;

                    /**
                     * <p>昵称</p>
                     */
                    std::string m_nickname;
                    bool m_nicknameHasBeenSet;

                    /**
                     * <p>角色列表</p>
                     */
                    std::vector<RoleBasicInfo> m_roles;
                    bool m_rolesHasBeenSet;

                    /**
                     * <p>用户来源，group：用户组、user：用户</p>
                     */
                    std::string m_userSource;
                    bool m_userSourceHasBeenSet;

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
                     * <p>是否主账号</p>
                     */
                    bool m_isOwner;
                    bool m_isOwnerHasBeenSet;

                    /**
                     * <p>0: 普通用户 1: entraId用户</p>
                     */
                    int64_t m_userTag;
                    bool m_userTagHasBeenSet;

                    /**
                     * <p>是否具有 admin 权限的子账号</p>
                     */
                    bool m_isAdmin;
                    bool m_isAdminHasBeenSet;

                    /**
                     * <p>合并后标签（用户直绑 + 用户组继承）</p>
                     */
                    std::vector<UserTagInfo> m_tags;
                    bool m_tagsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DATABUDDY_V20260715_MODEL_WORKSPACEUSERINFO_H_
