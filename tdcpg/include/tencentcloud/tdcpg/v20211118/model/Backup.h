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

#ifndef TENCENTCLOUD_TDCPG_V20211118_MODEL_BACKUP_H_
#define TENCENTCLOUD_TDCPG_V20211118_MODEL_BACKUP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tdcpg
    {
        namespace V20211118
        {
            namespace Model
            {
                /**
                * 集群备份集信息
                */
                class Backup : public AbstractModel
                {
                public:
                    Backup();
                    ~Backup() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取备份集ID，集群内唯一
                     * @return BackupId 备份集ID，集群内唯一
                     * 
                     */
                    int64_t GetBackupId() const;

                    /**
                     * 设置备份集ID，集群内唯一
                     * @param _backupId 备份集ID，集群内唯一
                     * 
                     */
                    void SetBackupId(const int64_t& _backupId);

                    /**
                     * 判断参数 BackupId 是否已赋值
                     * @return BackupId 是否已赋值
                     * 
                     */
                    bool BackupIdHasBeenSet() const;

                    /**
                     * 获取备份集类型，目前只支持 SNAPSHOT：快照
                     * @return BackupType 备份集类型，目前只支持 SNAPSHOT：快照
                     * 
                     */
                    std::string GetBackupType() const;

                    /**
                     * 设置备份集类型，目前只支持 SNAPSHOT：快照
                     * @param _backupType 备份集类型，目前只支持 SNAPSHOT：快照
                     * 
                     */
                    void SetBackupType(const std::string& _backupType);

                    /**
                     * 判断参数 BackupType 是否已赋值
                     * @return BackupType 是否已赋值
                     * 
                     */
                    bool BackupTypeHasBeenSet() const;

                    /**
                     * 获取备份集产生的方案，目前只支持 AUTO：自动
                     * @return BackupMethod 备份集产生的方案，目前只支持 AUTO：自动
                     * 
                     */
                    std::string GetBackupMethod() const;

                    /**
                     * 设置备份集产生的方案，目前只支持 AUTO：自动
                     * @param _backupMethod 备份集产生的方案，目前只支持 AUTO：自动
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
                     * 获取备份集对应的数据时间。按照RFC3339标准表示，并且使用东八区时区时间，格式为：YYYY-MM-DDThh:mm:ss+08:00。
                     * @return BackupDataTime 备份集对应的数据时间。按照RFC3339标准表示，并且使用东八区时区时间，格式为：YYYY-MM-DDThh:mm:ss+08:00。
                     * 
                     */
                    std::string GetBackupDataTime() const;

                    /**
                     * 设置备份集对应的数据时间。按照RFC3339标准表示，并且使用东八区时区时间，格式为：YYYY-MM-DDThh:mm:ss+08:00。
                     * @param _backupDataTime 备份集对应的数据时间。按照RFC3339标准表示，并且使用东八区时区时间，格式为：YYYY-MM-DDThh:mm:ss+08:00。
                     * 
                     */
                    void SetBackupDataTime(const std::string& _backupDataTime);

                    /**
                     * 判断参数 BackupDataTime 是否已赋值
                     * @return BackupDataTime 是否已赋值
                     * 
                     */
                    bool BackupDataTimeHasBeenSet() const;

                    /**
                     * 获取备份集数据大小，单位GiB
                     * @return BackupDataSize 备份集数据大小，单位GiB
                     * 
                     */
                    int64_t GetBackupDataSize() const;

                    /**
                     * 设置备份集数据大小，单位GiB
                     * @param _backupDataSize 备份集数据大小，单位GiB
                     * 
                     */
                    void SetBackupDataSize(const int64_t& _backupDataSize);

                    /**
                     * 判断参数 BackupDataSize 是否已赋值
                     * @return BackupDataSize 是否已赋值
                     * 
                     */
                    bool BackupDataSizeHasBeenSet() const;

                    /**
                     * 获取备份集对应的任务开始时间。按照RFC3339标准表示，并且使用东八区时区时间，格式为：YYYY-MM-DDThh:mm:ss+08:00。
                     * @return BackupTaskStartTime 备份集对应的任务开始时间。按照RFC3339标准表示，并且使用东八区时区时间，格式为：YYYY-MM-DDThh:mm:ss+08:00。
                     * 
                     */
                    std::string GetBackupTaskStartTime() const;

                    /**
                     * 设置备份集对应的任务开始时间。按照RFC3339标准表示，并且使用东八区时区时间，格式为：YYYY-MM-DDThh:mm:ss+08:00。
                     * @param _backupTaskStartTime 备份集对应的任务开始时间。按照RFC3339标准表示，并且使用东八区时区时间，格式为：YYYY-MM-DDThh:mm:ss+08:00。
                     * 
                     */
                    void SetBackupTaskStartTime(const std::string& _backupTaskStartTime);

                    /**
                     * 判断参数 BackupTaskStartTime 是否已赋值
                     * @return BackupTaskStartTime 是否已赋值
                     * 
                     */
                    bool BackupTaskStartTimeHasBeenSet() const;

                    /**
                     * 获取备份集对应的任务结束时间。按照RFC3339标准表示，并且使用东八区时区时间，格式为：YYYY-MM-DDThh:mm:ss+08:00。
                     * @return BackupTaskEndTime 备份集对应的任务结束时间。按照RFC3339标准表示，并且使用东八区时区时间，格式为：YYYY-MM-DDThh:mm:ss+08:00。
                     * 
                     */
                    std::string GetBackupTaskEndTime() const;

                    /**
                     * 设置备份集对应的任务结束时间。按照RFC3339标准表示，并且使用东八区时区时间，格式为：YYYY-MM-DDThh:mm:ss+08:00。
                     * @param _backupTaskEndTime 备份集对应的任务结束时间。按照RFC3339标准表示，并且使用东八区时区时间，格式为：YYYY-MM-DDThh:mm:ss+08:00。
                     * 
                     */
                    void SetBackupTaskEndTime(const std::string& _backupTaskEndTime);

                    /**
                     * 判断参数 BackupTaskEndTime 是否已赋值
                     * @return BackupTaskEndTime 是否已赋值
                     * 
                     */
                    bool BackupTaskEndTimeHasBeenSet() const;

                    /**
                     * 获取备份集对应的任务状态  SUCCESS：成功
                     * @return BackupTaskStatus 备份集对应的任务状态  SUCCESS：成功
                     * 
                     */
                    std::string GetBackupTaskStatus() const;

                    /**
                     * 设置备份集对应的任务状态  SUCCESS：成功
                     * @param _backupTaskStatus 备份集对应的任务状态  SUCCESS：成功
                     * 
                     */
                    void SetBackupTaskStatus(const std::string& _backupTaskStatus);

                    /**
                     * 判断参数 BackupTaskStatus 是否已赋值
                     * @return BackupTaskStatus 是否已赋值
                     * 
                     */
                    bool BackupTaskStatusHasBeenSet() const;

                private:

                    /**
                     * 备份集ID，集群内唯一
                     */
                    int64_t m_backupId;
                    bool m_backupIdHasBeenSet;

                    /**
                     * 备份集类型，目前只支持 SNAPSHOT：快照
                     */
                    std::string m_backupType;
                    bool m_backupTypeHasBeenSet;

                    /**
                     * 备份集产生的方案，目前只支持 AUTO：自动
                     */
                    std::string m_backupMethod;
                    bool m_backupMethodHasBeenSet;

                    /**
                     * 备份集对应的数据时间。按照RFC3339标准表示，并且使用东八区时区时间，格式为：YYYY-MM-DDThh:mm:ss+08:00。
                     */
                    std::string m_backupDataTime;
                    bool m_backupDataTimeHasBeenSet;

                    /**
                     * 备份集数据大小，单位GiB
                     */
                    int64_t m_backupDataSize;
                    bool m_backupDataSizeHasBeenSet;

                    /**
                     * 备份集对应的任务开始时间。按照RFC3339标准表示，并且使用东八区时区时间，格式为：YYYY-MM-DDThh:mm:ss+08:00。
                     */
                    std::string m_backupTaskStartTime;
                    bool m_backupTaskStartTimeHasBeenSet;

                    /**
                     * 备份集对应的任务结束时间。按照RFC3339标准表示，并且使用东八区时区时间，格式为：YYYY-MM-DDThh:mm:ss+08:00。
                     */
                    std::string m_backupTaskEndTime;
                    bool m_backupTaskEndTimeHasBeenSet;

                    /**
                     * 备份集对应的任务状态  SUCCESS：成功
                     */
                    std::string m_backupTaskStatus;
                    bool m_backupTaskStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDCPG_V20211118_MODEL_BACKUP_H_
