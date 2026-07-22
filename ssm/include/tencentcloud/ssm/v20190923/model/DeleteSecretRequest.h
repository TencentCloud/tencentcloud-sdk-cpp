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

#ifndef TENCENTCLOUD_SSM_V20190923_MODEL_DELETESECRETREQUEST_H_
#define TENCENTCLOUD_SSM_V20190923_MODEL_DELETESECRETREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ssm
    {
        namespace V20190923
        {
            namespace Model
            {
                /**
                * DeleteSecret请求参数结构体
                */
                class DeleteSecretRequest : public AbstractModel
                {
                public:
                    DeleteSecretRequest();
                    ~DeleteSecretRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>指定需要删除的凭据名称。</p>
                     * @return SecretName <p>指定需要删除的凭据名称。</p>
                     * 
                     */
                    std::string GetSecretName() const;

                    /**
                     * 设置<p>指定需要删除的凭据名称。</p>
                     * @param _secretName <p>指定需要删除的凭据名称。</p>
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
                     * 获取<p>指定计划删除日期，单位（天），0（默认）表示立即删除， 1-30 表示预留的天数，超出该日期之后彻底删除。<br>当凭据类型为SSH密钥对凭据时，此字段只能取值只能为0。</p>
                     * @return RecoveryWindowInDays <p>指定计划删除日期，单位（天），0（默认）表示立即删除， 1-30 表示预留的天数，超出该日期之后彻底删除。<br>当凭据类型为SSH密钥对凭据时，此字段只能取值只能为0。</p>
                     * 
                     */
                    uint64_t GetRecoveryWindowInDays() const;

                    /**
                     * 设置<p>指定计划删除日期，单位（天），0（默认）表示立即删除， 1-30 表示预留的天数，超出该日期之后彻底删除。<br>当凭据类型为SSH密钥对凭据时，此字段只能取值只能为0。</p>
                     * @param _recoveryWindowInDays <p>指定计划删除日期，单位（天），0（默认）表示立即删除， 1-30 表示预留的天数，超出该日期之后彻底删除。<br>当凭据类型为SSH密钥对凭据时，此字段只能取值只能为0。</p>
                     * 
                     */
                    void SetRecoveryWindowInDays(const uint64_t& _recoveryWindowInDays);

                    /**
                     * 判断参数 RecoveryWindowInDays 是否已赋值
                     * @return RecoveryWindowInDays 是否已赋值
                     * 
                     */
                    bool RecoveryWindowInDaysHasBeenSet() const;

                    /**
                     * 获取<p>当凭据类型为SSH密钥对凭据时，此字段有效，取值：<br>True -- 表示不仅仅清理此凭据中存储的SSH密钥信息，还会将SSH密钥对从CVM侧进行清理。注意，如果SSH密钥此时绑定了CVM实例，那么会清理失败。<br>False --  表示仅仅清理此凭据中存储的SSH密钥信息，不在CVM进侧进行清理。</p>
                     * @return CleanSSHKey <p>当凭据类型为SSH密钥对凭据时，此字段有效，取值：<br>True -- 表示不仅仅清理此凭据中存储的SSH密钥信息，还会将SSH密钥对从CVM侧进行清理。注意，如果SSH密钥此时绑定了CVM实例，那么会清理失败。<br>False --  表示仅仅清理此凭据中存储的SSH密钥信息，不在CVM进侧进行清理。</p>
                     * 
                     */
                    bool GetCleanSSHKey() const;

                    /**
                     * 设置<p>当凭据类型为SSH密钥对凭据时，此字段有效，取值：<br>True -- 表示不仅仅清理此凭据中存储的SSH密钥信息，还会将SSH密钥对从CVM侧进行清理。注意，如果SSH密钥此时绑定了CVM实例，那么会清理失败。<br>False --  表示仅仅清理此凭据中存储的SSH密钥信息，不在CVM进侧进行清理。</p>
                     * @param _cleanSSHKey <p>当凭据类型为SSH密钥对凭据时，此字段有效，取值：<br>True -- 表示不仅仅清理此凭据中存储的SSH密钥信息，还会将SSH密钥对从CVM侧进行清理。注意，如果SSH密钥此时绑定了CVM实例，那么会清理失败。<br>False --  表示仅仅清理此凭据中存储的SSH密钥信息，不在CVM进侧进行清理。</p>
                     * 
                     */
                    void SetCleanSSHKey(const bool& _cleanSSHKey);

                    /**
                     * 判断参数 CleanSSHKey 是否已赋值
                     * @return CleanSSHKey 是否已赋值
                     * 
                     */
                    bool CleanSSHKeyHasBeenSet() const;

                    /**
                     * 获取<p>删除模式</p><p>枚举值：</p><ul><li>0： 仅删除凭据</li><li>1： 删除凭据和账号</li></ul>
                     * @return DeleteMode <p>删除模式</p><p>枚举值：</p><ul><li>0： 仅删除凭据</li><li>1： 删除凭据和账号</li></ul>
                     * 
                     */
                    uint64_t GetDeleteMode() const;

                    /**
                     * 设置<p>删除模式</p><p>枚举值：</p><ul><li>0： 仅删除凭据</li><li>1： 删除凭据和账号</li></ul>
                     * @param _deleteMode <p>删除模式</p><p>枚举值：</p><ul><li>0： 仅删除凭据</li><li>1： 删除凭据和账号</li></ul>
                     * 
                     */
                    void SetDeleteMode(const uint64_t& _deleteMode);

                    /**
                     * 判断参数 DeleteMode 是否已赋值
                     * @return DeleteMode 是否已赋值
                     * 
                     */
                    bool DeleteModeHasBeenSet() const;

                private:

                    /**
                     * <p>指定需要删除的凭据名称。</p>
                     */
                    std::string m_secretName;
                    bool m_secretNameHasBeenSet;

                    /**
                     * <p>指定计划删除日期，单位（天），0（默认）表示立即删除， 1-30 表示预留的天数，超出该日期之后彻底删除。<br>当凭据类型为SSH密钥对凭据时，此字段只能取值只能为0。</p>
                     */
                    uint64_t m_recoveryWindowInDays;
                    bool m_recoveryWindowInDaysHasBeenSet;

                    /**
                     * <p>当凭据类型为SSH密钥对凭据时，此字段有效，取值：<br>True -- 表示不仅仅清理此凭据中存储的SSH密钥信息，还会将SSH密钥对从CVM侧进行清理。注意，如果SSH密钥此时绑定了CVM实例，那么会清理失败。<br>False --  表示仅仅清理此凭据中存储的SSH密钥信息，不在CVM进侧进行清理。</p>
                     */
                    bool m_cleanSSHKey;
                    bool m_cleanSSHKeyHasBeenSet;

                    /**
                     * <p>删除模式</p><p>枚举值：</p><ul><li>0： 仅删除凭据</li><li>1： 删除凭据和账号</li></ul>
                     */
                    uint64_t m_deleteMode;
                    bool m_deleteModeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SSM_V20190923_MODEL_DELETESECRETREQUEST_H_
