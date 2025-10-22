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

#ifndef TENCENTCLOUD_SQLSERVER_V20180328_MODEL_MODIFYACCOUNTREMARKREQUEST_H_
#define TENCENTCLOUD_SQLSERVER_V20180328_MODEL_MODIFYACCOUNTREMARKREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/sqlserver/v20180328/model/AccountRemark.h>


namespace TencentCloud
{
    namespace Sqlserver
    {
        namespace V20180328
        {
            namespace Model
            {
                /**
                * ModifyAccountRemark请求参数结构体
                */
                class ModifyAccountRemarkRequest : public AbstractModel
                {
                public:
                    ModifyAccountRemarkRequest();
                    ~ModifyAccountRemarkRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例ID，形如mssql-j8kv137v
                     * @return InstanceId 实例ID，形如mssql-j8kv137v
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例ID，形如mssql-j8kv137v
                     * @param _instanceId 实例ID，形如mssql-j8kv137v
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
                     * 获取修改备注的账户信息
                     * @return Accounts 修改备注的账户信息
                     * 
                     */
                    std::vector<AccountRemark> GetAccounts() const;

                    /**
                     * 设置修改备注的账户信息
                     * @param _accounts 修改备注的账户信息
                     * 
                     */
                    void SetAccounts(const std::vector<AccountRemark>& _accounts);

                    /**
                     * 判断参数 Accounts 是否已赋值
                     * @return Accounts 是否已赋值
                     * 
                     */
                    bool AccountsHasBeenSet() const;

                private:

                    /**
                     * 实例ID，形如mssql-j8kv137v
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 修改备注的账户信息
                     */
                    std::vector<AccountRemark> m_accounts;
                    bool m_accountsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SQLSERVER_V20180328_MODEL_MODIFYACCOUNTREMARKREQUEST_H_
