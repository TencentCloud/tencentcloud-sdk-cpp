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

#ifndef TENCENTCLOUD_MONGODB_V20190725_MODEL_BACKUPINFO_H_
#define TENCENTCLOUD_MONGODB_V20190725_MODEL_BACKUPINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mongodb
    {
        namespace V20190725
        {
            namespace Model
            {
                /**
                * 备份信息
                */
                class BackupInfo : public AbstractModel
                {
                public:
                    BackupInfo();
                    ~BackupInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取实例ID。
                     * @return InstanceId 实例ID。
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例ID。
                     * @param _instanceId 实例ID。
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
                     * 获取备份方式，0-自动备份，1-手动备份
                     * @return BackupType 备份方式，0-自动备份，1-手动备份
                     * 
                     */
                    uint64_t GetBackupType() const;

                    /**
                     * 设置备份方式，0-自动备份，1-手动备份
                     * @param _backupType 备份方式，0-自动备份，1-手动备份
                     * 
                     */
                    void SetBackupType(const uint64_t& _backupType);

                    /**
                     * 判断参数 BackupType 是否已赋值
                     * @return BackupType 是否已赋值
                     * 
                     */
                    bool BackupTypeHasBeenSet() const;

                    /**
                     * 获取备份名称
                     * @return BackupName 备份名称
                     * 
                     */
                    std::string GetBackupName() const;

                    /**
                     * 设置备份名称
                     * @param _backupName 备份名称
                     * 
                     */
                    void SetBackupName(const std::string& _backupName);

                    /**
                     * 判断参数 BackupName 是否已赋值
                     * @return BackupName 是否已赋值
                     * 
                     */
                    bool BackupNameHasBeenSet() const;

                    /**
                     * 获取备份备注
                     * @return BackupDesc 备份备注
                     * 
                     */
                    std::string GetBackupDesc() const;

                    /**
                     * 设置备份备注
                     * @param _backupDesc 备份备注
                     * 
                     */
                    void SetBackupDesc(const std::string& _backupDesc);

                    /**
                     * 判断参数 BackupDesc 是否已赋值
                     * @return BackupDesc 是否已赋值
                     * 
                     */
                    bool BackupDescHasBeenSet() const;

                    /**
                     * 获取备份文件大小，单位KB
                     * @return BackupSize 备份文件大小，单位KB
                     * 
                     */
                    uint64_t GetBackupSize() const;

                    /**
                     * 设置备份文件大小，单位KB
                     * @param _backupSize 备份文件大小，单位KB
                     * 
                     */
                    void SetBackupSize(const uint64_t& _backupSize);

                    /**
                     * 判断参数 BackupSize 是否已赋值
                     * @return BackupSize 是否已赋值
                     * 
                     */
                    bool BackupSizeHasBeenSet() const;

                    /**
                     * 获取备份开始时间
                     * @return StartTime 备份开始时间
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置备份开始时间
                     * @param _startTime 备份开始时间
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
                     * 获取备份结束时间
                     * @return EndTime 备份结束时间
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置备份结束时间
                     * @param _endTime 备份结束时间
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取备份状态，1-备份中，2-备份成功
                     * @return Status 备份状态，1-备份中，2-备份成功
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置备份状态，1-备份中，2-备份成功
                     * @param _status 备份状态，1-备份中，2-备份成功
                     * 
                     */
                    void SetStatus(const uint64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取备份方法，0-逻辑备份，1-物理备份
                     * @return BackupMethod 备份方法，0-逻辑备份，1-物理备份
                     * 
                     */
                    uint64_t GetBackupMethod() const;

                    /**
                     * 设置备份方法，0-逻辑备份，1-物理备份
                     * @param _backupMethod 备份方法，0-逻辑备份，1-物理备份
                     * 
                     */
                    void SetBackupMethod(const uint64_t& _backupMethod);

                    /**
                     * 判断参数 BackupMethod 是否已赋值
                     * @return BackupMethod 是否已赋值
                     * 
                     */
                    bool BackupMethodHasBeenSet() const;

                    /**
                     * 获取备份记录id
                     * @return BackId 备份记录id
                     * 
                     */
                    int64_t GetBackId() const;

                    /**
                     * 设置备份记录id
                     * @param _backId 备份记录id
                     * 
                     */
                    void SetBackId(const int64_t& _backId);

                    /**
                     * 判断参数 BackId 是否已赋值
                     * @return BackId 是否已赋值
                     * 
                     */
                    bool BackIdHasBeenSet() const;

                    /**
                     * 获取备份删除时间
                     * @return DeleteTime 备份删除时间
                     * 
                     */
                    std::string GetDeleteTime() const;

                    /**
                     * 设置备份删除时间
                     * @param _deleteTime 备份删除时间
                     * 
                     */
                    void SetDeleteTime(const std::string& _deleteTime);

                    /**
                     * 判断参数 DeleteTime 是否已赋值
                     * @return DeleteTime 是否已赋值
                     * 
                     */
                    bool DeleteTimeHasBeenSet() const;

                    /**
                     * 获取异地备份地域
                     * @return BackupRegion 异地备份地域
                     * 
                     */
                    std::string GetBackupRegion() const;

                    /**
                     * 设置异地备份地域
                     * @param _backupRegion 异地备份地域
                     * 
                     */
                    void SetBackupRegion(const std::string& _backupRegion);

                    /**
                     * 判断参数 BackupRegion 是否已赋值
                     * @return BackupRegion 是否已赋值
                     * 
                     */
                    bool BackupRegionHasBeenSet() const;

                private:

                    /**
                     * 实例ID。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 备份方式，0-自动备份，1-手动备份
                     */
                    uint64_t m_backupType;
                    bool m_backupTypeHasBeenSet;

                    /**
                     * 备份名称
                     */
                    std::string m_backupName;
                    bool m_backupNameHasBeenSet;

                    /**
                     * 备份备注
                     */
                    std::string m_backupDesc;
                    bool m_backupDescHasBeenSet;

                    /**
                     * 备份文件大小，单位KB
                     */
                    uint64_t m_backupSize;
                    bool m_backupSizeHasBeenSet;

                    /**
                     * 备份开始时间
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 备份结束时间
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 备份状态，1-备份中，2-备份成功
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 备份方法，0-逻辑备份，1-物理备份
                     */
                    uint64_t m_backupMethod;
                    bool m_backupMethodHasBeenSet;

                    /**
                     * 备份记录id
                     */
                    int64_t m_backId;
                    bool m_backIdHasBeenSet;

                    /**
                     * 备份删除时间
                     */
                    std::string m_deleteTime;
                    bool m_deleteTimeHasBeenSet;

                    /**
                     * 异地备份地域
                     */
                    std::string m_backupRegion;
                    bool m_backupRegionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONGODB_V20190725_MODEL_BACKUPINFO_H_
