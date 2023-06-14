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

#ifndef TENCENTCLOUD_POSTGRES_V20170312_MODEL_LOGBACKUP_H_
#define TENCENTCLOUD_POSTGRES_V20170312_MODEL_LOGBACKUP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Postgres
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * 数据库日志备份信息
                */
                class LogBackup : public AbstractModel
                {
                public:
                    LogBackup();
                    ~LogBackup() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


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
                     * 获取备份文件唯一标识。
                     * @return Id 备份文件唯一标识。
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置备份文件唯一标识。
                     * @param _id 备份文件唯一标识。
                     * 
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取备份文件名称。
                     * @return Name 备份文件名称。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置备份文件名称。
                     * @param _name 备份文件名称。
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取备份方式：物理备份、逻辑备份。
                     * @return BackupMethod 备份方式：物理备份、逻辑备份。
                     * 
                     */
                    std::string GetBackupMethod() const;

                    /**
                     * 设置备份方式：物理备份、逻辑备份。
                     * @param _backupMethod 备份方式：物理备份、逻辑备份。
                     * 
                     */
                    void SetBackupMethod(const std::string& _backupMethod);

                    /**
                     * 判断参数 BackupMethod 是否已赋值
                     * @return BackupMethod 是否已赋值
                     * 
                     */
                    bool BackupMethodHasBeenSet() const;

                    /**
                     * 获取备份模式：自动备份、手动备份。
                     * @return BackupMode 备份模式：自动备份、手动备份。
                     * 
                     */
                    std::string GetBackupMode() const;

                    /**
                     * 设置备份模式：自动备份、手动备份。
                     * @param _backupMode 备份模式：自动备份、手动备份。
                     * 
                     */
                    void SetBackupMode(const std::string& _backupMode);

                    /**
                     * 判断参数 BackupMode 是否已赋值
                     * @return BackupMode 是否已赋值
                     * 
                     */
                    bool BackupModeHasBeenSet() const;

                    /**
                     * 获取备份任务状态。
                     * @return State 备份任务状态。
                     * 
                     */
                    std::string GetState() const;

                    /**
                     * 设置备份任务状态。
                     * @param _state 备份任务状态。
                     * 
                     */
                    void SetState(const std::string& _state);

                    /**
                     * 判断参数 State 是否已赋值
                     * @return State 是否已赋值
                     * 
                     */
                    bool StateHasBeenSet() const;

                    /**
                     * 获取备份集大小，单位bytes。
                     * @return Size 备份集大小，单位bytes。
                     * 
                     */
                    uint64_t GetSize() const;

                    /**
                     * 设置备份集大小，单位bytes。
                     * @param _size 备份集大小，单位bytes。
                     * 
                     */
                    void SetSize(const uint64_t& _size);

                    /**
                     * 判断参数 Size 是否已赋值
                     * @return Size 是否已赋值
                     * 
                     */
                    bool SizeHasBeenSet() const;

                    /**
                     * 获取备份的开始时间。
                     * @return StartTime 备份的开始时间。
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置备份的开始时间。
                     * @param _startTime 备份的开始时间。
                     * 
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取备份的结束时间。
                     * @return FinishTime 备份的结束时间。
                     * 
                     */
                    std::string GetFinishTime() const;

                    /**
                     * 设置备份的结束时间。
                     * @param _finishTime 备份的结束时间。
                     * 
                     */
                    void SetFinishTime(const std::string& _finishTime);

                    /**
                     * 判断参数 FinishTime 是否已赋值
                     * @return FinishTime 是否已赋值
                     * 
                     */
                    bool FinishTimeHasBeenSet() const;

                    /**
                     * 获取备份的过期时间。
                     * @return ExpireTime 备份的过期时间。
                     * 
                     */
                    std::string GetExpireTime() const;

                    /**
                     * 设置备份的过期时间。
                     * @param _expireTime 备份的过期时间。
                     * 
                     */
                    void SetExpireTime(const std::string& _expireTime);

                    /**
                     * 判断参数 ExpireTime 是否已赋值
                     * @return ExpireTime 是否已赋值
                     * 
                     */
                    bool ExpireTimeHasBeenSet() const;

                private:

                    /**
                     * 实例ID。
                     */
                    std::string m_dBInstanceId;
                    bool m_dBInstanceIdHasBeenSet;

                    /**
                     * 备份文件唯一标识。
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 备份文件名称。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 备份方式：物理备份、逻辑备份。
                     */
                    std::string m_backupMethod;
                    bool m_backupMethodHasBeenSet;

                    /**
                     * 备份模式：自动备份、手动备份。
                     */
                    std::string m_backupMode;
                    bool m_backupModeHasBeenSet;

                    /**
                     * 备份任务状态。
                     */
                    std::string m_state;
                    bool m_stateHasBeenSet;

                    /**
                     * 备份集大小，单位bytes。
                     */
                    uint64_t m_size;
                    bool m_sizeHasBeenSet;

                    /**
                     * 备份的开始时间。
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 备份的结束时间。
                     */
                    std::string m_finishTime;
                    bool m_finishTimeHasBeenSet;

                    /**
                     * 备份的过期时间。
                     */
                    std::string m_expireTime;
                    bool m_expireTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_POSTGRES_V20170312_MODEL_LOGBACKUP_H_
