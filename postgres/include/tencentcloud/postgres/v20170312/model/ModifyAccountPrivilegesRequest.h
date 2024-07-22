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

#ifndef TENCENTCLOUD_POSTGRES_V20170312_MODEL_MODIFYACCOUNTPRIVILEGESREQUEST_H_
#define TENCENTCLOUD_POSTGRES_V20170312_MODEL_MODIFYACCOUNTPRIVILEGESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/postgres/v20170312/model/ModifyPrivilege.h>


namespace TencentCloud
{
    namespace Postgres
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * ModifyAccountPrivileges请求参数结构体
                */
                class ModifyAccountPrivilegesRequest : public AbstractModel
                {
                public:
                    ModifyAccountPrivilegesRequest();
                    ~ModifyAccountPrivilegesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例ID。	
                     * @return DBInstanceId 实例ID。	
                     * 
                     */
                    std::string GetDBInstanceId() const;

                    /**
                     * 设置实例ID。	
                     * @param _dBInstanceId 实例ID。	
                     * 
                     */
                    void SetDBInstanceId(const std::string& _dBInstanceId);

                    /**
                     * 判断参数 DBInstanceId 是否已赋值
                     * @return DBInstanceId 是否已赋值
                     * 
                     */
                    bool DBInstanceIdHasBeenSet() const;

                    /**
                     * 获取修改此账号对某数据库对象的权限。
                     * @return UserName 修改此账号对某数据库对象的权限。
                     * 
                     */
                    std::string GetUserName() const;

                    /**
                     * 设置修改此账号对某数据库对象的权限。
                     * @param _userName 修改此账号对某数据库对象的权限。
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
                     * 获取修改的权限信息，支持批量修改，一次最高修改50条。
                     * @return ModifyPrivilegeSet 修改的权限信息，支持批量修改，一次最高修改50条。
                     * 
                     */
                    std::vector<ModifyPrivilege> GetModifyPrivilegeSet() const;

                    /**
                     * 设置修改的权限信息，支持批量修改，一次最高修改50条。
                     * @param _modifyPrivilegeSet 修改的权限信息，支持批量修改，一次最高修改50条。
                     * 
                     */
                    void SetModifyPrivilegeSet(const std::vector<ModifyPrivilege>& _modifyPrivilegeSet);

                    /**
                     * 判断参数 ModifyPrivilegeSet 是否已赋值
                     * @return ModifyPrivilegeSet 是否已赋值
                     * 
                     */
                    bool ModifyPrivilegeSetHasBeenSet() const;

                private:

                    /**
                     * 实例ID。	
                     */
                    std::string m_dBInstanceId;
                    bool m_dBInstanceIdHasBeenSet;

                    /**
                     * 修改此账号对某数据库对象的权限。
                     */
                    std::string m_userName;
                    bool m_userNameHasBeenSet;

                    /**
                     * 修改的权限信息，支持批量修改，一次最高修改50条。
                     */
                    std::vector<ModifyPrivilege> m_modifyPrivilegeSet;
                    bool m_modifyPrivilegeSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_POSTGRES_V20170312_MODEL_MODIFYACCOUNTPRIVILEGESREQUEST_H_
