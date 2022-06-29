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

#ifndef TENCENTCLOUD_SQLSERVER_V20180328_MODEL_ACCOUNTPRIVILEGEMODIFYINFO_H_
#define TENCENTCLOUD_SQLSERVER_V20180328_MODEL_ACCOUNTPRIVILEGEMODIFYINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/sqlserver/v20180328/model/DBPrivilegeModifyInfo.h>


namespace TencentCloud
{
    namespace Sqlserver
    {
        namespace V20180328
        {
            namespace Model
            {
                /**
                * 数据库账号权限变更信息
                */
                class AccountPrivilegeModifyInfo : public AbstractModel
                {
                public:
                    AccountPrivilegeModifyInfo();
                    ~AccountPrivilegeModifyInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取数据库用户名
                     * @return UserName 数据库用户名
                     */
                    std::string GetUserName() const;

                    /**
                     * 设置数据库用户名
                     * @param UserName 数据库用户名
                     */
                    void SetUserName(const std::string& _userName);

                    /**
                     * 判断参数 UserName 是否已赋值
                     * @return UserName 是否已赋值
                     */
                    bool UserNameHasBeenSet() const;

                    /**
                     * 获取账号权限变更信息
                     * @return DBPrivileges 账号权限变更信息
                     */
                    std::vector<DBPrivilegeModifyInfo> GetDBPrivileges() const;

                    /**
                     * 设置账号权限变更信息
                     * @param DBPrivileges 账号权限变更信息
                     */
                    void SetDBPrivileges(const std::vector<DBPrivilegeModifyInfo>& _dBPrivileges);

                    /**
                     * 判断参数 DBPrivileges 是否已赋值
                     * @return DBPrivileges 是否已赋值
                     */
                    bool DBPrivilegesHasBeenSet() const;

                    /**
                     * 获取是否为管理员账户
                     * @return IsAdmin 是否为管理员账户
                     */
                    bool GetIsAdmin() const;

                    /**
                     * 设置是否为管理员账户
                     * @param IsAdmin 是否为管理员账户
                     */
                    void SetIsAdmin(const bool& _isAdmin);

                    /**
                     * 判断参数 IsAdmin 是否已赋值
                     * @return IsAdmin 是否已赋值
                     */
                    bool IsAdminHasBeenSet() const;

                private:

                    /**
                     * 数据库用户名
                     */
                    std::string m_userName;
                    bool m_userNameHasBeenSet;

                    /**
                     * 账号权限变更信息
                     */
                    std::vector<DBPrivilegeModifyInfo> m_dBPrivileges;
                    bool m_dBPrivilegesHasBeenSet;

                    /**
                     * 是否为管理员账户
                     */
                    bool m_isAdmin;
                    bool m_isAdminHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SQLSERVER_V20180328_MODEL_ACCOUNTPRIVILEGEMODIFYINFO_H_
