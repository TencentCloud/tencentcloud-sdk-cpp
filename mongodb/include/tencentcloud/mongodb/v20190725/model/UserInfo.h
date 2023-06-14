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

#ifndef TENCENTCLOUD_MONGODB_V20190725_MODEL_USERINFO_H_
#define TENCENTCLOUD_MONGODB_V20190725_MODEL_USERINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mongodb/v20190725/model/Auth.h>


namespace TencentCloud
{
    namespace Mongodb
    {
        namespace V20190725
        {
            namespace Model
            {
                /**
                * 账户基本信息
                */
                class UserInfo : public AbstractModel
                {
                public:
                    UserInfo();
                    ~UserInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取账号名。
                     * @return UserName 账号名。
                     * 
                     */
                    std::string GetUserName() const;

                    /**
                     * 设置账号名。
                     * @param _userName 账号名。
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
                     * 获取账号权限详情。
                     * @return AuthRole 账号权限详情。
                     * 
                     */
                    std::vector<Auth> GetAuthRole() const;

                    /**
                     * 设置账号权限详情。
                     * @param _authRole 账号权限详情。
                     * 
                     */
                    void SetAuthRole(const std::vector<Auth>& _authRole);

                    /**
                     * 判断参数 AuthRole 是否已赋值
                     * @return AuthRole 是否已赋值
                     * 
                     */
                    bool AuthRoleHasBeenSet() const;

                    /**
                     * 获取账号创建时间。
                     * @return CreateTime 账号创建时间。
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置账号创建时间。
                     * @param _createTime 账号创建时间。
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
                     * 获取账号更新时间。
                     * @return UpdateTime 账号更新时间。
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置账号更新时间。
                     * @param _updateTime 账号更新时间。
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
                     * 获取备注信息。
                     * @return UserDesc 备注信息。
                     * 
                     */
                    std::string GetUserDesc() const;

                    /**
                     * 设置备注信息。
                     * @param _userDesc 备注信息。
                     * 
                     */
                    void SetUserDesc(const std::string& _userDesc);

                    /**
                     * 判断参数 UserDesc 是否已赋值
                     * @return UserDesc 是否已赋值
                     * 
                     */
                    bool UserDescHasBeenSet() const;

                private:

                    /**
                     * 账号名。
                     */
                    std::string m_userName;
                    bool m_userNameHasBeenSet;

                    /**
                     * 账号权限详情。
                     */
                    std::vector<Auth> m_authRole;
                    bool m_authRoleHasBeenSet;

                    /**
                     * 账号创建时间。
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 账号更新时间。
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * 备注信息。
                     */
                    std::string m_userDesc;
                    bool m_userDescHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONGODB_V20190725_MODEL_USERINFO_H_
