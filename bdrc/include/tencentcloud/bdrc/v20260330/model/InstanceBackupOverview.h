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

#ifndef TENCENTCLOUD_BDRC_V20260330_MODEL_INSTANCEBACKUPOVERVIEW_H_
#define TENCENTCLOUD_BDRC_V20260330_MODEL_INSTANCEBACKUPOVERVIEW_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Bdrc
    {
        namespace V20260330
        {
            namespace Model
            {
                /**
                * 整机备份（CVM 备份组）概览数据
                */
                class InstanceBackupOverview : public AbstractModel
                {
                public:
                    InstanceBackupOverview();
                    ~InstanceBackupOverview() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取整机备份点总数
                     * @return BackupCount 整机备份点总数
                     * 
                     */
                    int64_t GetBackupCount() const;

                    /**
                     * 设置整机备份点总数
                     * @param _backupCount 整机备份点总数
                     * 
                     */
                    void SetBackupCount(const int64_t& _backupCount);

                    /**
                     * 判断参数 BackupCount 是否已赋值
                     * @return BackupCount 是否已赋值
                     * 
                     */
                    bool BackupCountHasBeenSet() const;

                    /**
                     * 获取创建中数量
                     * @return CreatingBackupCount 创建中数量
                     * 
                     */
                    int64_t GetCreatingBackupCount() const;

                    /**
                     * 设置创建中数量
                     * @param _creatingBackupCount 创建中数量
                     * 
                     */
                    void SetCreatingBackupCount(const int64_t& _creatingBackupCount);

                    /**
                     * 判断参数 CreatingBackupCount 是否已赋值
                     * @return CreatingBackupCount 是否已赋值
                     * 
                     */
                    bool CreatingBackupCountHasBeenSet() const;

                    /**
                     * 获取失败数量
                     * @return FailedBackupCount 失败数量
                     * 
                     */
                    int64_t GetFailedBackupCount() const;

                    /**
                     * 设置失败数量
                     * @param _failedBackupCount 失败数量
                     * 
                     */
                    void SetFailedBackupCount(const int64_t& _failedBackupCount);

                    /**
                     * 判断参数 FailedBackupCount 是否已赋值
                     * @return FailedBackupCount 是否已赋值
                     * 
                     */
                    bool FailedBackupCountHasBeenSet() const;

                    /**
                     * 获取已完成数量
                     * @return SuccessBackupCount 已完成数量
                     * 
                     */
                    int64_t GetSuccessBackupCount() const;

                    /**
                     * 设置已完成数量
                     * @param _successBackupCount 已完成数量
                     * 
                     */
                    void SetSuccessBackupCount(const int64_t& _successBackupCount);

                    /**
                     * 判断参数 SuccessBackupCount 是否已赋值
                     * @return SuccessBackupCount 是否已赋值
                     * 
                     */
                    bool SuccessBackupCountHasBeenSet() const;

                    /**
                     * 获取恢复中的总数量
                     * @return RestoringBackupCount 恢复中的总数量
                     * 
                     */
                    int64_t GetRestoringBackupCount() const;

                    /**
                     * 设置恢复中的总数量
                     * @param _restoringBackupCount 恢复中的总数量
                     * 
                     */
                    void SetRestoringBackupCount(const int64_t& _restoringBackupCount);

                    /**
                     * 判断参数 RestoringBackupCount 是否已赋值
                     * @return RestoringBackupCount 是否已赋值
                     * 
                     */
                    bool RestoringBackupCountHasBeenSet() const;

                    /**
                     * 获取整机备份总容量
                     * @return BackupSizeMb 整机备份总容量
                     * 
                     */
                    int64_t GetBackupSizeMb() const;

                    /**
                     * 设置整机备份总容量
                     * @param _backupSizeMb 整机备份总容量
                     * 
                     */
                    void SetBackupSizeMb(const int64_t& _backupSizeMb);

                    /**
                     * 判断参数 BackupSizeMb 是否已赋值
                     * @return BackupSizeMb 是否已赋值
                     * 
                     */
                    bool BackupSizeMbHasBeenSet() const;

                    /**
                     * 获取受保护 CVM 资源数
                     * @return BackupResourceCount 受保护 CVM 资源数
                     * 
                     */
                    int64_t GetBackupResourceCount() const;

                    /**
                     * 设置受保护 CVM 资源数
                     * @param _backupResourceCount 受保护 CVM 资源数
                     * 
                     */
                    void SetBackupResourceCount(const int64_t& _backupResourceCount);

                    /**
                     * 判断参数 BackupResourceCount 是否已赋值
                     * @return BackupResourceCount 是否已赋值
                     * 
                     */
                    bool BackupResourceCountHasBeenSet() const;

                private:

                    /**
                     * 整机备份点总数
                     */
                    int64_t m_backupCount;
                    bool m_backupCountHasBeenSet;

                    /**
                     * 创建中数量
                     */
                    int64_t m_creatingBackupCount;
                    bool m_creatingBackupCountHasBeenSet;

                    /**
                     * 失败数量
                     */
                    int64_t m_failedBackupCount;
                    bool m_failedBackupCountHasBeenSet;

                    /**
                     * 已完成数量
                     */
                    int64_t m_successBackupCount;
                    bool m_successBackupCountHasBeenSet;

                    /**
                     * 恢复中的总数量
                     */
                    int64_t m_restoringBackupCount;
                    bool m_restoringBackupCountHasBeenSet;

                    /**
                     * 整机备份总容量
                     */
                    int64_t m_backupSizeMb;
                    bool m_backupSizeMbHasBeenSet;

                    /**
                     * 受保护 CVM 资源数
                     */
                    int64_t m_backupResourceCount;
                    bool m_backupResourceCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BDRC_V20260330_MODEL_INSTANCEBACKUPOVERVIEW_H_
