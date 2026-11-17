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

#ifndef TENCENTCLOUD_DBS_V20211108_MODEL_BACKUPPROGRESS_H_
#define TENCENTCLOUD_DBS_V20211108_MODEL_BACKUPPROGRESS_H_

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
                * 备份进度信息
                */
                class BackupProgress : public AbstractModel
                {
                public:
                    BackupProgress();
                    ~BackupProgress() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取全量备份状态。
                     * @return FullBackupStatus 全量备份状态。
                     * 
                     */
                    std::string GetFullBackupStatus() const;

                    /**
                     * 设置全量备份状态。
                     * @param _fullBackupStatus 全量备份状态。
                     * 
                     */
                    void SetFullBackupStatus(const std::string& _fullBackupStatus);

                    /**
                     * 判断参数 FullBackupStatus 是否已赋值
                     * @return FullBackupStatus 是否已赋值
                     * 
                     */
                    bool FullBackupStatusHasBeenSet() const;

                    /**
                     * 获取增量备份状态。
                     * @return IncrementBackupStatus 增量备份状态。
                     * 
                     */
                    std::string GetIncrementBackupStatus() const;

                    /**
                     * 设置增量备份状态。
                     * @param _incrementBackupStatus 增量备份状态。
                     * 
                     */
                    void SetIncrementBackupStatus(const std::string& _incrementBackupStatus);

                    /**
                     * 判断参数 IncrementBackupStatus 是否已赋值
                     * @return IncrementBackupStatus 是否已赋值
                     * 
                     */
                    bool IncrementBackupStatusHasBeenSet() const;

                    /**
                     * 获取上次备份执行时间。格式为 YYYY-MM-DD HH:mm:ss，如 2024-01-01 00:00:00，尚未执行过备份时为空字符串。
                     * @return LastBackupTime 上次备份执行时间。格式为 YYYY-MM-DD HH:mm:ss，如 2024-01-01 00:00:00，尚未执行过备份时为空字符串。
                     * 
                     */
                    std::string GetLastBackupTime() const;

                    /**
                     * 设置上次备份执行时间。格式为 YYYY-MM-DD HH:mm:ss，如 2024-01-01 00:00:00，尚未执行过备份时为空字符串。
                     * @param _lastBackupTime 上次备份执行时间。格式为 YYYY-MM-DD HH:mm:ss，如 2024-01-01 00:00:00，尚未执行过备份时为空字符串。
                     * 
                     */
                    void SetLastBackupTime(const std::string& _lastBackupTime);

                    /**
                     * 判断参数 LastBackupTime 是否已赋值
                     * @return LastBackupTime 是否已赋值
                     * 
                     */
                    bool LastBackupTimeHasBeenSet() const;

                    /**
                     * 获取下次备份执行时间。格式为 YYYY-MM-DD HH:mm:ss，如 2024-01-01 00:00:00，尚未确定时为空字符串。
                     * @return NextBackupTime 下次备份执行时间。格式为 YYYY-MM-DD HH:mm:ss，如 2024-01-01 00:00:00，尚未确定时为空字符串。
                     * 
                     */
                    std::string GetNextBackupTime() const;

                    /**
                     * 设置下次备份执行时间。格式为 YYYY-MM-DD HH:mm:ss，如 2024-01-01 00:00:00，尚未确定时为空字符串。
                     * @param _nextBackupTime 下次备份执行时间。格式为 YYYY-MM-DD HH:mm:ss，如 2024-01-01 00:00:00，尚未确定时为空字符串。
                     * 
                     */
                    void SetNextBackupTime(const std::string& _nextBackupTime);

                    /**
                     * 判断参数 NextBackupTime 是否已赋值
                     * @return NextBackupTime 是否已赋值
                     * 
                     */
                    bool NextBackupTimeHasBeenSet() const;

                    /**
                     * 获取上次恢复时间。格式为 YYYY-MM-DD HH:mm:ss，如 2024-01-01 00:00:00，尚未执行过恢复时为空字符串。
                     * @return LastRestoreTime 上次恢复时间。格式为 YYYY-MM-DD HH:mm:ss，如 2024-01-01 00:00:00，尚未执行过恢复时为空字符串。
                     * 
                     */
                    std::string GetLastRestoreTime() const;

                    /**
                     * 设置上次恢复时间。格式为 YYYY-MM-DD HH:mm:ss，如 2024-01-01 00:00:00，尚未执行过恢复时为空字符串。
                     * @param _lastRestoreTime 上次恢复时间。格式为 YYYY-MM-DD HH:mm:ss，如 2024-01-01 00:00:00，尚未执行过恢复时为空字符串。
                     * 
                     */
                    void SetLastRestoreTime(const std::string& _lastRestoreTime);

                    /**
                     * 判断参数 LastRestoreTime 是否已赋值
                     * @return LastRestoreTime 是否已赋值
                     * 
                     */
                    bool LastRestoreTimeHasBeenSet() const;

                    /**
                     * 获取上次恢复任务状态。
                     * @return LastRestoreStatus 上次恢复任务状态。
                     * 
                     */
                    std::string GetLastRestoreStatus() const;

                    /**
                     * 设置上次恢复任务状态。
                     * @param _lastRestoreStatus 上次恢复任务状态。
                     * 
                     */
                    void SetLastRestoreStatus(const std::string& _lastRestoreStatus);

                    /**
                     * 判断参数 LastRestoreStatus 是否已赋值
                     * @return LastRestoreStatus 是否已赋值
                     * 
                     */
                    bool LastRestoreStatusHasBeenSet() const;

                    /**
                     * 获取当前备份作业状态。
                     * @return CurrentBackupJobStatus 当前备份作业状态。
                     * 
                     */
                    std::string GetCurrentBackupJobStatus() const;

                    /**
                     * 设置当前备份作业状态。
                     * @param _currentBackupJobStatus 当前备份作业状态。
                     * 
                     */
                    void SetCurrentBackupJobStatus(const std::string& _currentBackupJobStatus);

                    /**
                     * 判断参数 CurrentBackupJobStatus 是否已赋值
                     * @return CurrentBackupJobStatus 是否已赋值
                     * 
                     */
                    bool CurrentBackupJobStatusHasBeenSet() const;

                private:

                    /**
                     * 全量备份状态。
                     */
                    std::string m_fullBackupStatus;
                    bool m_fullBackupStatusHasBeenSet;

                    /**
                     * 增量备份状态。
                     */
                    std::string m_incrementBackupStatus;
                    bool m_incrementBackupStatusHasBeenSet;

                    /**
                     * 上次备份执行时间。格式为 YYYY-MM-DD HH:mm:ss，如 2024-01-01 00:00:00，尚未执行过备份时为空字符串。
                     */
                    std::string m_lastBackupTime;
                    bool m_lastBackupTimeHasBeenSet;

                    /**
                     * 下次备份执行时间。格式为 YYYY-MM-DD HH:mm:ss，如 2024-01-01 00:00:00，尚未确定时为空字符串。
                     */
                    std::string m_nextBackupTime;
                    bool m_nextBackupTimeHasBeenSet;

                    /**
                     * 上次恢复时间。格式为 YYYY-MM-DD HH:mm:ss，如 2024-01-01 00:00:00，尚未执行过恢复时为空字符串。
                     */
                    std::string m_lastRestoreTime;
                    bool m_lastRestoreTimeHasBeenSet;

                    /**
                     * 上次恢复任务状态。
                     */
                    std::string m_lastRestoreStatus;
                    bool m_lastRestoreStatusHasBeenSet;

                    /**
                     * 当前备份作业状态。
                     */
                    std::string m_currentBackupJobStatus;
                    bool m_currentBackupJobStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DBS_V20211108_MODEL_BACKUPPROGRESS_H_
