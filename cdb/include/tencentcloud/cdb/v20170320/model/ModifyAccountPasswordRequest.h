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
                     * 获取<p>实例 ID，格式如：cdb-c1nl9rpv，与云数据库控制台页面中显示的实例 ID 相同。</p>
                     * @return InstanceId <p>实例 ID，格式如：cdb-c1nl9rpv，与云数据库控制台页面中显示的实例 ID 相同。</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>实例 ID，格式如：cdb-c1nl9rpv，与云数据库控制台页面中显示的实例 ID 相同。</p>
                     * @param _instanceId <p>实例 ID，格式如：cdb-c1nl9rpv，与云数据库控制台页面中显示的实例 ID 相同。</p>
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
                     * 获取<p>数据库账号的新密码。密码应至少包含字母、数字和字符（_+-&amp;=!@#$%^*()）中的两种，长度为8-64个字符。</p>
                     * @return NewPassword <p>数据库账号的新密码。密码应至少包含字母、数字和字符（_+-&amp;=!@#$%^*()）中的两种，长度为8-64个字符。</p>
                     * 
                     */
                    std::string GetNewPassword() const;

                    /**
                     * 设置<p>数据库账号的新密码。密码应至少包含字母、数字和字符（_+-&amp;=!@#$%^*()）中的两种，长度为8-64个字符。</p>
                     * @param _newPassword <p>数据库账号的新密码。密码应至少包含字母、数字和字符（_+-&amp;=!@#$%^*()）中的两种，长度为8-64个字符。</p>
                     * 
                     */
                    void SetNewPassword(const std::string& _newPassword);

                    /**
                     * 判断参数 NewPassword 是否已赋值
                     * @return NewPassword 是否已赋值
                     * 
                     */
                    bool NewPasswordHasBeenSet() const;

                    /**
                     * 获取<p>云数据库账号。可通过 <a href="https://cloud.tencent.com/document/api/236/17499">DescribeAccounts</a> 接口获取。</p>
                     * @return Accounts <p>云数据库账号。可通过 <a href="https://cloud.tencent.com/document/api/236/17499">DescribeAccounts</a> 接口获取。</p>
                     * 
                     */
                    std::vector<Account> GetAccounts() const;

                    /**
                     * 设置<p>云数据库账号。可通过 <a href="https://cloud.tencent.com/document/api/236/17499">DescribeAccounts</a> 接口获取。</p>
                     * @param _accounts <p>云数据库账号。可通过 <a href="https://cloud.tencent.com/document/api/236/17499">DescribeAccounts</a> 接口获取。</p>
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
                     * 获取<p>该字段已废弃。</p>
                     * @return SkipValidatePassword <p>该字段已废弃。</p>
                     * @deprecated
                     */
                    bool GetSkipValidatePassword() const;

                    /**
                     * 设置<p>该字段已废弃。</p>
                     * @param _skipValidatePassword <p>该字段已废弃。</p>
                     * @deprecated
                     */
                    void SetSkipValidatePassword(const bool& _skipValidatePassword);

                    /**
                     * 判断参数 SkipValidatePassword 是否已赋值
                     * @return SkipValidatePassword 是否已赋值
                     * @deprecated
                     */
                    bool SkipValidatePasswordHasBeenSet() const;

                private:

                    /**
                     * <p>实例 ID，格式如：cdb-c1nl9rpv，与云数据库控制台页面中显示的实例 ID 相同。</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>数据库账号的新密码。密码应至少包含字母、数字和字符（_+-&amp;=!@#$%^*()）中的两种，长度为8-64个字符。</p>
                     */
                    std::string m_newPassword;
                    bool m_newPasswordHasBeenSet;

                    /**
                     * <p>云数据库账号。可通过 <a href="https://cloud.tencent.com/document/api/236/17499">DescribeAccounts</a> 接口获取。</p>
                     */
                    std::vector<Account> m_accounts;
                    bool m_accountsHasBeenSet;

                    /**
                     * <p>该字段已废弃。</p>
                     */
                    bool m_skipValidatePassword;
                    bool m_skipValidatePasswordHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_MODIFYACCOUNTPASSWORDREQUEST_H_
