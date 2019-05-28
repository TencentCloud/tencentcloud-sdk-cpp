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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_MODIFYACCOUNTPASSWORDREQUEST_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_MODIFYACCOUNTPASSWORDREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdb/v20170320/model/Account.h>


namespace TencentCloud
{
    namespace Cdb
    {
        namespace V20170320
        {
            namespace Model
            {
                /**
                * ModifyAccountPassword请求参数结构体
                */
                class ModifyAccountPasswordRequest : public AbstractModel
                {
                public:
                    ModifyAccountPasswordRequest();
                    ~ModifyAccountPasswordRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例ID，格式如：cdb-c1nl9rpv，与云数据库控制台页面中显示的实例ID相同。
                     * @return InstanceId 实例ID，格式如：cdb-c1nl9rpv，与云数据库控制台页面中显示的实例ID相同。
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例ID，格式如：cdb-c1nl9rpv，与云数据库控制台页面中显示的实例ID相同。
                     * @param InstanceId 实例ID，格式如：cdb-c1nl9rpv，与云数据库控制台页面中显示的实例ID相同。
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取数据库账号的新密码。
                     * @return NewPassword 数据库账号的新密码。
                     */
                    std::string GetNewPassword() const;

                    /**
                     * 设置数据库账号的新密码。
                     * @param NewPassword 数据库账号的新密码。
                     */
                    void SetNewPassword(const std::string& _newPassword);

                    /**
                     * 判断参数 NewPassword 是否已赋值
                     * @return NewPassword 是否已赋值
                     */
                    bool NewPasswordHasBeenSet() const;

                    /**
                     * 获取云数据库账号。
                     * @return Accounts 云数据库账号。
                     */
                    std::vector<Account> GetAccounts() const;

                    /**
                     * 设置云数据库账号。
                     * @param Accounts 云数据库账号。
                     */
                    void SetAccounts(const std::vector<Account>& _accounts);

                    /**
                     * 判断参数 Accounts 是否已赋值
                     * @return Accounts 是否已赋值
                     */
                    bool AccountsHasBeenSet() const;

                private:

                    /**
                     * 实例ID，格式如：cdb-c1nl9rpv，与云数据库控制台页面中显示的实例ID相同。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 数据库账号的新密码。
                     */
                    std::string m_newPassword;
                    bool m_newPasswordHasBeenSet;

                    /**
                     * 云数据库账号。
                     */
                    std::vector<Account> m_accounts;
                    bool m_accountsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_MODIFYACCOUNTPASSWORDREQUEST_H_
