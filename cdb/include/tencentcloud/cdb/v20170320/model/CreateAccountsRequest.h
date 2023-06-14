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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_CREATEACCOUNTSREQUEST_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_CREATEACCOUNTSREQUEST_H_

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
                * CreateAccounts请求参数结构体
                */
                class CreateAccountsRequest : public AbstractModel
                {
                public:
                    CreateAccountsRequest();
                    ~CreateAccountsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例 ID，格式如：cdb-c1nl9rpv，与云数据库控制台页面中显示的实例 ID 相同。
                     * @return InstanceId 实例 ID，格式如：cdb-c1nl9rpv，与云数据库控制台页面中显示的实例 ID 相同。
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例 ID，格式如：cdb-c1nl9rpv，与云数据库控制台页面中显示的实例 ID 相同。
                     * @param _instanceId 实例 ID，格式如：cdb-c1nl9rpv，与云数据库控制台页面中显示的实例 ID 相同。
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
                     * 获取云数据库账号。
                     * @return Accounts 云数据库账号。
                     * 
                     */
                    std::vector<Account> GetAccounts() const;

                    /**
                     * 设置云数据库账号。
                     * @param _accounts 云数据库账号。
                     * 
                     */
                    void SetAccounts(const std::vector<Account>& _accounts);

                    /**
                     * 判断参数 Accounts 是否已赋值
                     * @return Accounts 是否已赋值
                     * 
                     */
                    bool AccountsHasBeenSet() const;

                    /**
                     * 获取新账户的密码。
                     * @return Password 新账户的密码。
                     * 
                     */
                    std::string GetPassword() const;

                    /**
                     * 设置新账户的密码。
                     * @param _password 新账户的密码。
                     * 
                     */
                    void SetPassword(const std::string& _password);

                    /**
                     * 判断参数 Password 是否已赋值
                     * @return Password 是否已赋值
                     * 
                     */
                    bool PasswordHasBeenSet() const;

                    /**
                     * 获取备注信息。
                     * @return Description 备注信息。
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置备注信息。
                     * @param _description 备注信息。
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
                     * 获取新账户最大可用连接数，默认值为10240，最大可设置值为10240。
                     * @return MaxUserConnections 新账户最大可用连接数，默认值为10240，最大可设置值为10240。
                     * 
                     */
                    int64_t GetMaxUserConnections() const;

                    /**
                     * 设置新账户最大可用连接数，默认值为10240，最大可设置值为10240。
                     * @param _maxUserConnections 新账户最大可用连接数，默认值为10240，最大可设置值为10240。
                     * 
                     */
                    void SetMaxUserConnections(const int64_t& _maxUserConnections);

                    /**
                     * 判断参数 MaxUserConnections 是否已赋值
                     * @return MaxUserConnections 是否已赋值
                     * 
                     */
                    bool MaxUserConnectionsHasBeenSet() const;

                private:

                    /**
                     * 实例 ID，格式如：cdb-c1nl9rpv，与云数据库控制台页面中显示的实例 ID 相同。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 云数据库账号。
                     */
                    std::vector<Account> m_accounts;
                    bool m_accountsHasBeenSet;

                    /**
                     * 新账户的密码。
                     */
                    std::string m_password;
                    bool m_passwordHasBeenSet;

                    /**
                     * 备注信息。
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 新账户最大可用连接数，默认值为10240，最大可设置值为10240。
                     */
                    int64_t m_maxUserConnections;
                    bool m_maxUserConnectionsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_CREATEACCOUNTSREQUEST_H_
