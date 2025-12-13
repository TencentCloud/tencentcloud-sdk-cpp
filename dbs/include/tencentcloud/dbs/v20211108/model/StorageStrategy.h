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

#ifndef TENCENTCLOUD_DBS_V20211108_MODEL_STORAGESTRATEGY_H_
#define TENCENTCLOUD_DBS_V20211108_MODEL_STORAGESTRATEGY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dbs
    {
        namespace V20211108
        {
            namespace Model
            {
                /**
                * 备份存储策略。
                */
                class StorageStrategy : public AbstractModel
                {
                public:
                    StorageStrategy();
                    ~StorageStrategy() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取存储类型。目前仅支持 "system" - DBS 内置存储。默认值为 "system"。
                     * @return StorageType 存储类型。目前仅支持 "system" - DBS 内置存储。默认值为 "system"。
                     * 
                     */
                    std::string GetStorageType() const;

                    /**
                     * 设置存储类型。目前仅支持 "system" - DBS 内置存储。默认值为 "system"。
                     * @param _storageType 存储类型。目前仅支持 "system" - DBS 内置存储。默认值为 "system"。
                     * 
                     */
                    void SetStorageType(const std::string& _storageType);

                    /**
                     * 判断参数 StorageType 是否已赋值
                     * @return StorageType 是否已赋值
                     * 
                     */
                    bool StorageTypeHasBeenSet() const;

                    /**
                     * 获取加密方式。可能的取值为：
"UnEncrypted" - 非加密存储;
"SSE-COS" - 内置加密存储;
当该参数用作入参时，默认值为 "UnEncrypted"。
                     * @return Encryption 加密方式。可能的取值为：
"UnEncrypted" - 非加密存储;
"SSE-COS" - 内置加密存储;
当该参数用作入参时，默认值为 "UnEncrypted"。
                     * 
                     */
                    std::string GetEncryption() const;

                    /**
                     * 设置加密方式。可能的取值为：
"UnEncrypted" - 非加密存储;
"SSE-COS" - 内置加密存储;
当该参数用作入参时，默认值为 "UnEncrypted"。
                     * @param _encryption 加密方式。可能的取值为：
"UnEncrypted" - 非加密存储;
"SSE-COS" - 内置加密存储;
当该参数用作入参时，默认值为 "UnEncrypted"。
                     * 
                     */
                    void SetEncryption(const std::string& _encryption);

                    /**
                     * 判断参数 Encryption 是否已赋值
                     * @return Encryption 是否已赋值
                     * 
                     */
                    bool EncryptionHasBeenSet() const;

                    /**
                     * 获取日志保留时间，单位为天。取值范围为[7, 3650]，默认值为 30。
                     * @return BackupRetentionPeriod 日志保留时间，单位为天。取值范围为[7, 3650]，默认值为 30。
                     * 
                     */
                    int64_t GetBackupRetentionPeriod() const;

                    /**
                     * 设置日志保留时间，单位为天。取值范围为[7, 3650]，默认值为 30。
                     * @param _backupRetentionPeriod 日志保留时间，单位为天。取值范围为[7, 3650]，默认值为 30。
                     * 
                     */
                    void SetBackupRetentionPeriod(const int64_t& _backupRetentionPeriod);

                    /**
                     * 判断参数 BackupRetentionPeriod 是否已赋值
                     * @return BackupRetentionPeriod 是否已赋值
                     * 
                     */
                    bool BackupRetentionPeriodHasBeenSet() const;

                private:

                    /**
                     * 存储类型。目前仅支持 "system" - DBS 内置存储。默认值为 "system"。
                     */
                    std::string m_storageType;
                    bool m_storageTypeHasBeenSet;

                    /**
                     * 加密方式。可能的取值为：
"UnEncrypted" - 非加密存储;
"SSE-COS" - 内置加密存储;
当该参数用作入参时，默认值为 "UnEncrypted"。
                     */
                    std::string m_encryption;
                    bool m_encryptionHasBeenSet;

                    /**
                     * 日志保留时间，单位为天。取值范围为[7, 3650]，默认值为 30。
                     */
                    int64_t m_backupRetentionPeriod;
                    bool m_backupRetentionPeriodHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DBS_V20211108_MODEL_STORAGESTRATEGY_H_
