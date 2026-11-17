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

#ifndef TENCENTCLOUD_DBS_V20211108_MODEL_STORAGESTRATEGYITEM_H_
#define TENCENTCLOUD_DBS_V20211108_MODEL_STORAGESTRATEGYITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dbs/v20211108/model/StorageStrategySingle.h>


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
                class StorageStrategyItem : public AbstractModel
                {
                public:
                    StorageStrategyItem();
                    ~StorageStrategyItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取存储类型。目前仅支持 "system" - DBS 内置存储。默认值为 "system"。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StorageType 存储类型。目前仅支持 "system" - DBS 内置存储。默认值为 "system"。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetStorageType() const;

                    /**
                     * 设置存储类型。目前仅支持 "system" - DBS 内置存储。默认值为 "system"。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _storageType 存储类型。目前仅支持 "system" - DBS 内置存储。默认值为 "system"。
注意：此字段可能返回 null，表示取不到有效值。
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
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Encryption 加密方式。可能的取值为：
"UnEncrypted" - 非加密存储;
"SSE-COS" - 内置加密存储;
当该参数用作入参时，默认值为 "UnEncrypted"。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetEncryption() const;

                    /**
                     * 设置加密方式。可能的取值为：
"UnEncrypted" - 非加密存储;
"SSE-COS" - 内置加密存储;
当该参数用作入参时，默认值为 "UnEncrypted"。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _encryption 加密方式。可能的取值为：
"UnEncrypted" - 非加密存储;
"SSE-COS" - 内置加密存储;
当该参数用作入参时，默认值为 "UnEncrypted"。
注意：此字段可能返回 null，表示取不到有效值。
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
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BackupRetentionPeriod 日志保留时间，单位为天。取值范围为[7, 3650]，默认值为 30。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetBackupRetentionPeriod() const;

                    /**
                     * 设置日志保留时间，单位为天。取值范围为[7, 3650]，默认值为 30。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _backupRetentionPeriod 日志保留时间，单位为天。取值范围为[7, 3650]，默认值为 30。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBackupRetentionPeriod(const int64_t& _backupRetentionPeriod);

                    /**
                     * 判断参数 BackupRetentionPeriod 是否已赋值
                     * @return BackupRetentionPeriod 是否已赋值
                     * 
                     */
                    bool BackupRetentionPeriodHasBeenSet() const;

                    /**
                     * 获取全量备份存储策略。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FullStorageStrategy 全量备份存储策略。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    StorageStrategySingle GetFullStorageStrategy() const;

                    /**
                     * 设置全量备份存储策略。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _fullStorageStrategy 全量备份存储策略。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFullStorageStrategy(const StorageStrategySingle& _fullStorageStrategy);

                    /**
                     * 判断参数 FullStorageStrategy 是否已赋值
                     * @return FullStorageStrategy 是否已赋值
                     * 
                     */
                    bool FullStorageStrategyHasBeenSet() const;

                    /**
                     * 获取增量备份存储策略。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IncStorageStrategy 增量备份存储策略。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    StorageStrategySingle GetIncStorageStrategy() const;

                    /**
                     * 设置增量备份存储策略。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _incStorageStrategy 增量备份存储策略。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIncStorageStrategy(const StorageStrategySingle& _incStorageStrategy);

                    /**
                     * 判断参数 IncStorageStrategy 是否已赋值
                     * @return IncStorageStrategy 是否已赋值
                     * 
                     */
                    bool IncStorageStrategyHasBeenSet() const;

                private:

                    /**
                     * 存储类型。目前仅支持 "system" - DBS 内置存储。默认值为 "system"。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_storageType;
                    bool m_storageTypeHasBeenSet;

                    /**
                     * 加密方式。可能的取值为：
"UnEncrypted" - 非加密存储;
"SSE-COS" - 内置加密存储;
当该参数用作入参时，默认值为 "UnEncrypted"。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_encryption;
                    bool m_encryptionHasBeenSet;

                    /**
                     * 日志保留时间，单位为天。取值范围为[7, 3650]，默认值为 30。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_backupRetentionPeriod;
                    bool m_backupRetentionPeriodHasBeenSet;

                    /**
                     * 全量备份存储策略。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    StorageStrategySingle m_fullStorageStrategy;
                    bool m_fullStorageStrategyHasBeenSet;

                    /**
                     * 增量备份存储策略。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    StorageStrategySingle m_incStorageStrategy;
                    bool m_incStorageStrategyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DBS_V20211108_MODEL_STORAGESTRATEGYITEM_H_
