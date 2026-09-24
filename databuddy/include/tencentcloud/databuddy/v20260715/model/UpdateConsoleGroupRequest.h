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

#ifndef TENCENTCLOUD_DATABUDDY_V20260715_MODEL_UPDATECONSOLEGROUPREQUEST_H_
#define TENCENTCLOUD_DATABUDDY_V20260715_MODEL_UPDATECONSOLEGROUPREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Databuddy
    {
        namespace V20260715
        {
            namespace Model
            {
                /**
                * UpdateConsoleGroup请求参数结构体
                */
                class UpdateConsoleGroupRequest : public AbstractModel
                {
                public:
                    UpdateConsoleGroupRequest();
                    ~UpdateConsoleGroupRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>用户组 ID</p>
                     * @return GroupId <p>用户组 ID</p>
                     * 
                     */
                    std::string GetGroupId() const;

                    /**
                     * 设置<p>用户组 ID</p>
                     * @param _groupId <p>用户组 ID</p>
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
                     * 获取<p>修改标识：USER_GROUP_OPER_TYPE_ADD_USER(1)=添加成员、USER_GROUP_OPER_TYPE_DELETE_USER(2)=删除成员、USER_GROUP_OPER_TYPE_BASIC_INFO(3)=基础信息（别名和描述）</p>
                     * @return OperType <p>修改标识：USER_GROUP_OPER_TYPE_ADD_USER(1)=添加成员、USER_GROUP_OPER_TYPE_DELETE_USER(2)=删除成员、USER_GROUP_OPER_TYPE_BASIC_INFO(3)=基础信息（别名和描述）</p>
                     * 
                     */
                    int64_t GetOperType() const;

                    /**
                     * 设置<p>修改标识：USER_GROUP_OPER_TYPE_ADD_USER(1)=添加成员、USER_GROUP_OPER_TYPE_DELETE_USER(2)=删除成员、USER_GROUP_OPER_TYPE_BASIC_INFO(3)=基础信息（别名和描述）</p>
                     * @param _operType <p>修改标识：USER_GROUP_OPER_TYPE_ADD_USER(1)=添加成员、USER_GROUP_OPER_TYPE_DELETE_USER(2)=删除成员、USER_GROUP_OPER_TYPE_BASIC_INFO(3)=基础信息（别名和描述）</p>
                     * 
                     */
                    void SetOperType(const int64_t& _operType);

                    /**
                     * 判断参数 OperType 是否已赋值
                     * @return OperType 是否已赋值
                     * 
                     */
                    bool OperTypeHasBeenSet() const;

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
                     * 获取<p>用户组别名</p>
                     * @return GroupNickname <p>用户组别名</p>
                     * 
                     */
                    std::string GetGroupNickname() const;

                    /**
                     * 设置<p>用户组别名</p>
                     * @param _groupNickname <p>用户组别名</p>
                     * 
                     */
                    void SetGroupNickname(const std::string& _groupNickname);

                    /**
                     * 判断参数 GroupNickname 是否已赋值
                     * @return GroupNickname 是否已赋值
                     * 
                     */
                    bool GroupNicknameHasBeenSet() const;

                    /**
                     * 获取<p>用户组描述</p>
                     * @return Description <p>用户组描述</p>
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>用户组描述</p>
                     * @param _description <p>用户组描述</p>
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
                     * 获取<p>成员 UIN 列表（OperType 为添加/删除成员时使用），单次最多100个</p>
                     * @return UserUins <p>成员 UIN 列表（OperType 为添加/删除成员时使用），单次最多100个</p>
                     * 
                     */
                    std::vector<std::string> GetUserUins() const;

                    /**
                     * 设置<p>成员 UIN 列表（OperType 为添加/删除成员时使用），单次最多100个</p>
                     * @param _userUins <p>成员 UIN 列表（OperType 为添加/删除成员时使用），单次最多100个</p>
                     * 
                     */
                    void SetUserUins(const std::vector<std::string>& _userUins);

                    /**
                     * 判断参数 UserUins 是否已赋值
                     * @return UserUins 是否已赋值
                     * 
                     */
                    bool UserUinsHasBeenSet() const;

                private:

                    /**
                     * <p>用户组 ID</p>
                     */
                    std::string m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * <p>修改标识：USER_GROUP_OPER_TYPE_ADD_USER(1)=添加成员、USER_GROUP_OPER_TYPE_DELETE_USER(2)=删除成员、USER_GROUP_OPER_TYPE_BASIC_INFO(3)=基础信息（别名和描述）</p>
                     */
                    int64_t m_operType;
                    bool m_operTypeHasBeenSet;

                    /**
                     * <p>用户组名称</p>
                     */
                    std::string m_groupName;
                    bool m_groupNameHasBeenSet;

                    /**
                     * <p>用户组别名</p>
                     */
                    std::string m_groupNickname;
                    bool m_groupNicknameHasBeenSet;

                    /**
                     * <p>用户组描述</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>成员 UIN 列表（OperType 为添加/删除成员时使用），单次最多100个</p>
                     */
                    std::vector<std::string> m_userUins;
                    bool m_userUinsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DATABUDDY_V20260715_MODEL_UPDATECONSOLEGROUPREQUEST_H_
