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

#ifndef TENCENTCLOUD_CETCD_V20220325_MODEL_ETCDBACKUPSETTINGS_H_
#define TENCENTCLOUD_CETCD_V20220325_MODEL_ETCDBACKUPSETTINGS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cetcd
    {
        namespace V20220325
        {
            namespace Model
            {
                /**
                * etcd备份设置
                */
                class EtcdBackupSettings : public AbstractModel
                {
                public:
                    EtcdBackupSettings();
                    ~EtcdBackupSettings() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取备份间隔(s)
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BackupInterval 备份间隔(s)
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetBackupInterval() const;

                    /**
                     * 设置备份间隔(s)
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _backupInterval 备份间隔(s)
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBackupInterval(const int64_t& _backupInterval);

                    /**
                     * 判断参数 BackupInterval 是否已赋值
                     * @return BackupInterval 是否已赋值
                     * 
                     */
                    bool BackupIntervalHasBeenSet() const;

                    /**
                     * 获取最大备份个数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MaxBackupCount 最大备份个数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetMaxBackupCount() const;

                    /**
                     * 设置最大备份个数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _maxBackupCount 最大备份个数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMaxBackupCount(const int64_t& _maxBackupCount);

                    /**
                     * 判断参数 MaxBackupCount 是否已赋值
                     * @return MaxBackupCount 是否已赋值
                     * 
                     */
                    bool MaxBackupCountHasBeenSet() const;

                    /**
                     * 获取用户名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return User 用户名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUser() const;

                    /**
                     * 设置用户名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _user 用户名
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取密码
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Password 密码
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPassword() const;

                    /**
                     * 设置密码
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _password 密码
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取COS桶名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CosBucketName COS桶名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCosBucketName() const;

                    /**
                     * 设置COS桶名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _cosBucketName COS桶名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCosBucketName(const std::string& _cosBucketName);

                    /**
                     * 判断参数 CosBucketName 是否已赋值
                     * @return CosBucketName 是否已赋值
                     * 
                     */
                    bool CosBucketNameHasBeenSet() const;

                private:

                    /**
                     * 备份间隔(s)
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_backupInterval;
                    bool m_backupIntervalHasBeenSet;

                    /**
                     * 最大备份个数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_maxBackupCount;
                    bool m_maxBackupCountHasBeenSet;

                    /**
                     * 用户名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_user;
                    bool m_userHasBeenSet;

                    /**
                     * 密码
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_password;
                    bool m_passwordHasBeenSet;

                    /**
                     * COS桶名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_cosBucketName;
                    bool m_cosBucketNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CETCD_V20220325_MODEL_ETCDBACKUPSETTINGS_H_
