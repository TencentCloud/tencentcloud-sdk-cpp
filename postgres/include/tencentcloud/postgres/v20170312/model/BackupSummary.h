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

#ifndef TENCENTCLOUD_POSTGRES_V20170312_MODEL_BACKUPSUMMARY_H_
#define TENCENTCLOUD_POSTGRES_V20170312_MODEL_BACKUPSUMMARY_H_

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
                * 实例备份统计项
                */
                class BackupSummary : public AbstractModel
                {
                public:
                    BackupSummary();
                    ~BackupSummary() = default;
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
                     * 获取实例日志备份数量。
                     * @return LogBackupCount 实例日志备份数量。
                     * 
                     */
                    uint64_t GetLogBackupCount() const;

                    /**
                     * 设置实例日志备份数量。
                     * @param _logBackupCount 实例日志备份数量。
                     * 
                     */
                    void SetLogBackupCount(const uint64_t& _logBackupCount);

                    /**
                     * 判断参数 LogBackupCount 是否已赋值
                     * @return LogBackupCount 是否已赋值
                     * 
                     */
                    bool LogBackupCountHasBeenSet() const;

                    /**
                     * 获取实例日志备份大小。
                     * @return LogBackupSize 实例日志备份大小。
                     * 
                     */
                    uint64_t GetLogBackupSize() const;

                    /**
                     * 设置实例日志备份大小。
                     * @param _logBackupSize 实例日志备份大小。
                     * 
                     */
                    void SetLogBackupSize(const uint64_t& _logBackupSize);

                    /**
                     * 判断参数 LogBackupSize 是否已赋值
                     * @return LogBackupSize 是否已赋值
                     * 
                     */
                    bool LogBackupSizeHasBeenSet() const;

                    /**
                     * 获取手动创建的实例数据备份数量。
                     * @return ManualBaseBackupCount 手动创建的实例数据备份数量。
                     * 
                     */
                    uint64_t GetManualBaseBackupCount() const;

                    /**
                     * 设置手动创建的实例数据备份数量。
                     * @param _manualBaseBackupCount 手动创建的实例数据备份数量。
                     * 
                     */
                    void SetManualBaseBackupCount(const uint64_t& _manualBaseBackupCount);

                    /**
                     * 判断参数 ManualBaseBackupCount 是否已赋值
                     * @return ManualBaseBackupCount 是否已赋值
                     * 
                     */
                    bool ManualBaseBackupCountHasBeenSet() const;

                    /**
                     * 获取手动创建的实例数据备份大小。
                     * @return ManualBaseBackupSize 手动创建的实例数据备份大小。
                     * 
                     */
                    uint64_t GetManualBaseBackupSize() const;

                    /**
                     * 设置手动创建的实例数据备份大小。
                     * @param _manualBaseBackupSize 手动创建的实例数据备份大小。
                     * 
                     */
                    void SetManualBaseBackupSize(const uint64_t& _manualBaseBackupSize);

                    /**
                     * 判断参数 ManualBaseBackupSize 是否已赋值
                     * @return ManualBaseBackupSize 是否已赋值
                     * 
                     */
                    bool ManualBaseBackupSizeHasBeenSet() const;

                    /**
                     * 获取自动创建的实例数据备份数量。
                     * @return AutoBaseBackupCount 自动创建的实例数据备份数量。
                     * 
                     */
                    uint64_t GetAutoBaseBackupCount() const;

                    /**
                     * 设置自动创建的实例数据备份数量。
                     * @param _autoBaseBackupCount 自动创建的实例数据备份数量。
                     * 
                     */
                    void SetAutoBaseBackupCount(const uint64_t& _autoBaseBackupCount);

                    /**
                     * 判断参数 AutoBaseBackupCount 是否已赋值
                     * @return AutoBaseBackupCount 是否已赋值
                     * 
                     */
                    bool AutoBaseBackupCountHasBeenSet() const;

                    /**
                     * 获取自动创建的实例数据备份大小。
                     * @return AutoBaseBackupSize 自动创建的实例数据备份大小。
                     * 
                     */
                    uint64_t GetAutoBaseBackupSize() const;

                    /**
                     * 设置自动创建的实例数据备份大小。
                     * @param _autoBaseBackupSize 自动创建的实例数据备份大小。
                     * 
                     */
                    void SetAutoBaseBackupSize(const uint64_t& _autoBaseBackupSize);

                    /**
                     * 判断参数 AutoBaseBackupSize 是否已赋值
                     * @return AutoBaseBackupSize 是否已赋值
                     * 
                     */
                    bool AutoBaseBackupSizeHasBeenSet() const;

                    /**
                     * 获取总备份数量
                     * @return TotalBackupCount 总备份数量
                     * 
                     */
                    uint64_t GetTotalBackupCount() const;

                    /**
                     * 设置总备份数量
                     * @param _totalBackupCount 总备份数量
                     * 
                     */
                    void SetTotalBackupCount(const uint64_t& _totalBackupCount);

                    /**
                     * 判断参数 TotalBackupCount 是否已赋值
                     * @return TotalBackupCount 是否已赋值
                     * 
                     */
                    bool TotalBackupCountHasBeenSet() const;

                    /**
                     * 获取总备份大小
                     * @return TotalBackupSize 总备份大小
                     * 
                     */
                    uint64_t GetTotalBackupSize() const;

                    /**
                     * 设置总备份大小
                     * @param _totalBackupSize 总备份大小
                     * 
                     */
                    void SetTotalBackupSize(const uint64_t& _totalBackupSize);

                    /**
                     * 判断参数 TotalBackupSize 是否已赋值
                     * @return TotalBackupSize 是否已赋值
                     * 
                     */
                    bool TotalBackupSizeHasBeenSet() const;

                private:

                    /**
                     * 实例ID。
                     */
                    std::string m_dBInstanceId;
                    bool m_dBInstanceIdHasBeenSet;

                    /**
                     * 实例日志备份数量。
                     */
                    uint64_t m_logBackupCount;
                    bool m_logBackupCountHasBeenSet;

                    /**
                     * 实例日志备份大小。
                     */
                    uint64_t m_logBackupSize;
                    bool m_logBackupSizeHasBeenSet;

                    /**
                     * 手动创建的实例数据备份数量。
                     */
                    uint64_t m_manualBaseBackupCount;
                    bool m_manualBaseBackupCountHasBeenSet;

                    /**
                     * 手动创建的实例数据备份大小。
                     */
                    uint64_t m_manualBaseBackupSize;
                    bool m_manualBaseBackupSizeHasBeenSet;

                    /**
                     * 自动创建的实例数据备份数量。
                     */
                    uint64_t m_autoBaseBackupCount;
                    bool m_autoBaseBackupCountHasBeenSet;

                    /**
                     * 自动创建的实例数据备份大小。
                     */
                    uint64_t m_autoBaseBackupSize;
                    bool m_autoBaseBackupSizeHasBeenSet;

                    /**
                     * 总备份数量
                     */
                    uint64_t m_totalBackupCount;
                    bool m_totalBackupCountHasBeenSet;

                    /**
                     * 总备份大小
                     */
                    uint64_t m_totalBackupSize;
                    bool m_totalBackupSizeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_POSTGRES_V20170312_MODEL_BACKUPSUMMARY_H_
