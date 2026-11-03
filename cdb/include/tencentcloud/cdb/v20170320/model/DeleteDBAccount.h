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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_DELETEDBACCOUNT_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_DELETEDBACCOUNT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdb
    {
        namespace V20170320
        {
            namespace Model
            {
                /**
                * 删除账号信息
                */
                class DeleteDBAccount : public AbstractModel
                {
                public:
                    DeleteDBAccount();
                    ~DeleteDBAccount() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>用户名</p>
                     * @return User <p>用户名</p>
                     * 
                     */
                    std::string GetUser() const;

                    /**
                     * 设置<p>用户名</p>
                     * @param _user <p>用户名</p>
                     * 
                     */
                    void SetUser(const std::string& _user);

                    /**
                     * 判断参数 User 是否已赋值
                     * @return User 是否已赋值
                     * 
                     */
                    bool UserHasBeenSet() const;

                    /**
                     * 获取<p>主机名</p>
                     * @return Host <p>主机名</p>
                     * 
                     */
                    std::string GetHost() const;

                    /**
                     * 设置<p>主机名</p>
                     * @param _host <p>主机名</p>
                     * 
                     */
                    void SetHost(const std::string& _host);

                    /**
                     * 判断参数 Host 是否已赋值
                     * @return Host 是否已赋值
                     * 
                     */
                    bool HostHasBeenSet() const;

                    /**
                     * 获取<p>凭据名称</p>
                     * @return SecretName <p>凭据名称</p>
                     * 
                     */
                    std::string GetSecretName() const;

                    /**
                     * 设置<p>凭据名称</p>
                     * @param _secretName <p>凭据名称</p>
                     * 
                     */
                    void SetSecretName(const std::string& _secretName);

                    /**
                     * 判断参数 SecretName 是否已赋值
                     * @return SecretName 是否已赋值
                     * 
                     */
                    bool SecretNameHasBeenSet() const;

                    /**
                     * 获取<p>保留时间，0表示立即删除(最大30天)</p>
                     * @return RecoveryWindowInDays <p>保留时间，0表示立即删除(最大30天)</p>
                     * 
                     */
                    int64_t GetRecoveryWindowInDays() const;

                    /**
                     * 设置<p>保留时间，0表示立即删除(最大30天)</p>
                     * @param _recoveryWindowInDays <p>保留时间，0表示立即删除(最大30天)</p>
                     * 
                     */
                    void SetRecoveryWindowInDays(const int64_t& _recoveryWindowInDays);

                    /**
                     * 判断参数 RecoveryWindowInDays 是否已赋值
                     * @return RecoveryWindowInDays 是否已赋值
                     * 
                     */
                    bool RecoveryWindowInDaysHasBeenSet() const;

                    /**
                     * 获取<p>删除模式</p><p>枚举值：</p><ul><li>0： 仅删除凭据</li><li>1： 删除凭据+账号</li></ul>
                     * @return DeleteMode <p>删除模式</p><p>枚举值：</p><ul><li>0： 仅删除凭据</li><li>1： 删除凭据+账号</li></ul>
                     * 
                     */
                    int64_t GetDeleteMode() const;

                    /**
                     * 设置<p>删除模式</p><p>枚举值：</p><ul><li>0： 仅删除凭据</li><li>1： 删除凭据+账号</li></ul>
                     * @param _deleteMode <p>删除模式</p><p>枚举值：</p><ul><li>0： 仅删除凭据</li><li>1： 删除凭据+账号</li></ul>
                     * 
                     */
                    void SetDeleteMode(const int64_t& _deleteMode);

                    /**
                     * 判断参数 DeleteMode 是否已赋值
                     * @return DeleteMode 是否已赋值
                     * 
                     */
                    bool DeleteModeHasBeenSet() const;

                private:

                    /**
                     * <p>用户名</p>
                     */
                    std::string m_user;
                    bool m_userHasBeenSet;

                    /**
                     * <p>主机名</p>
                     */
                    std::string m_host;
                    bool m_hostHasBeenSet;

                    /**
                     * <p>凭据名称</p>
                     */
                    std::string m_secretName;
                    bool m_secretNameHasBeenSet;

                    /**
                     * <p>保留时间，0表示立即删除(最大30天)</p>
                     */
                    int64_t m_recoveryWindowInDays;
                    bool m_recoveryWindowInDaysHasBeenSet;

                    /**
                     * <p>删除模式</p><p>枚举值：</p><ul><li>0： 仅删除凭据</li><li>1： 删除凭据+账号</li></ul>
                     */
                    int64_t m_deleteMode;
                    bool m_deleteModeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_DELETEDBACCOUNT_H_
