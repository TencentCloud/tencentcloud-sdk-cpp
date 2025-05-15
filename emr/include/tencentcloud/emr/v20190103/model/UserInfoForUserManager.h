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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_USERINFOFORUSERMANAGER_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_USERINFOFORUSERMANAGER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * 添加的用户信息列表
                */
                class UserInfoForUserManager : public AbstractModel
                {
                public:
                    UserInfoForUserManager();
                    ~UserInfoForUserManager() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取用户名
                     * @return UserName 用户名
                     * 
                     */
                    std::string GetUserName() const;

                    /**
                     * 设置用户名
                     * @param _userName 用户名
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
                     * 获取用户所属的组
                     * @return UserGroup 用户所属的组
                     * 
                     */
                    std::string GetUserGroup() const;

                    /**
                     * 设置用户所属的组
                     * @param _userGroup 用户所属的组
                     * 
                     */
                    void SetUserGroup(const std::string& _userGroup);

                    /**
                     * 判断参数 UserGroup 是否已赋值
                     * @return UserGroup 是否已赋值
                     * 
                     */
                    bool UserGroupHasBeenSet() const;

                    /**
                     * 获取密码
                     * @return PassWord 密码
                     * 
                     */
                    std::string GetPassWord() const;

                    /**
                     * 设置密码
                     * @param _passWord 密码
                     * 
                     */
                    void SetPassWord(const std::string& _passWord);

                    /**
                     * 判断参数 PassWord 是否已赋值
                     * @return PassWord 是否已赋值
                     * 
                     */
                    bool PassWordHasBeenSet() const;

                    /**
                     * 获取备注
                     * @return ReMark 备注
                     * 
                     */
                    std::string GetReMark() const;

                    /**
                     * 设置备注
                     * @param _reMark 备注
                     * 
                     */
                    void SetReMark(const std::string& _reMark);

                    /**
                     * 判断参数 ReMark 是否已赋值
                     * @return ReMark 是否已赋值
                     * 
                     */
                    bool ReMarkHasBeenSet() const;

                    /**
                     * 获取用户副组
                     * @return Groups 用户副组
                     * 
                     */
                    std::vector<std::string> GetGroups() const;

                    /**
                     * 设置用户副组
                     * @param _groups 用户副组
                     * 
                     */
                    void SetGroups(const std::vector<std::string>& _groups);

                    /**
                     * 判断参数 Groups 是否已赋值
                     * @return Groups 是否已赋值
                     * 
                     */
                    bool GroupsHasBeenSet() const;

                private:

                    /**
                     * 用户名
                     */
                    std::string m_userName;
                    bool m_userNameHasBeenSet;

                    /**
                     * 用户所属的组
                     */
                    std::string m_userGroup;
                    bool m_userGroupHasBeenSet;

                    /**
                     * 密码
                     */
                    std::string m_passWord;
                    bool m_passWordHasBeenSet;

                    /**
                     * 备注
                     */
                    std::string m_reMark;
                    bool m_reMarkHasBeenSet;

                    /**
                     * 用户副组
                     */
                    std::vector<std::string> m_groups;
                    bool m_groupsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_USERINFOFORUSERMANAGER_H_
