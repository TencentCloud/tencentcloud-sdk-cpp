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

#ifndef TENCENTCLOUD_BDRC_V20260330_MODEL_FILEBACKUPOVERVIEW_H_
#define TENCENTCLOUD_BDRC_V20260330_MODEL_FILEBACKUPOVERVIEW_H_

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
                * 文件备份概览数据
                */
                class FileBackupOverview : public AbstractModel
                {
                public:
                    FileBackupOverview();
                    ~FileBackupOverview() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>备份点总数</p>
                     * @return BackupCount <p>备份点总数</p>
                     * 
                     */
                    int64_t GetBackupCount() const;

                    /**
                     * 设置<p>备份点总数</p>
                     * @param _backupCount <p>备份点总数</p>
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
                     * 获取<p>创建中数量</p>
                     * @return CreatingBackupCount <p>创建中数量</p>
                     * 
                     */
                    int64_t GetCreatingBackupCount() const;

                    /**
                     * 设置<p>创建中数量</p>
                     * @param _creatingBackupCount <p>创建中数量</p>
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
                     * 获取<p>失败数量</p>
                     * @return FailedBackupCount <p>失败数量</p>
                     * 
                     */
                    int64_t GetFailedBackupCount() const;

                    /**
                     * 设置<p>失败数量</p>
                     * @param _failedBackupCount <p>失败数量</p>
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
                     * 获取<p>已完成数量</p>
                     * @return SuccessBackupCount <p>已完成数量</p>
                     * 
                     */
                    int64_t GetSuccessBackupCount() const;

                    /**
                     * 设置<p>已完成数量</p>
                     * @param _successBackupCount <p>已完成数量</p>
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
                     * 获取<p>恢复中的总数量</p>
                     * @return RestoringBackupCount <p>恢复中的总数量</p>
                     * 
                     */
                    int64_t GetRestoringBackupCount() const;

                    /**
                     * 设置<p>恢复中的总数量</p>
                     * @param _restoringBackupCount <p>恢复中的总数量</p>
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
                     * 获取<p>备份总容量</p>
                     * @return BackupSizeMb <p>备份总容量</p>
                     * 
                     */
                    int64_t GetBackupSizeMb() const;

                    /**
                     * 设置<p>备份总容量</p>
                     * @param _backupSizeMb <p>备份总容量</p>
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
                     * 获取<p>受保护资源数</p>
                     * @return BackupResourceCount <p>受保护资源数</p>
                     * 
                     */
                    int64_t GetBackupResourceCount() const;

                    /**
                     * 设置<p>受保护资源数</p>
                     * @param _backupResourceCount <p>受保护资源数</p>
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
                     * <p>备份点总数</p>
                     */
                    int64_t m_backupCount;
                    bool m_backupCountHasBeenSet;

                    /**
                     * <p>创建中数量</p>
                     */
                    int64_t m_creatingBackupCount;
                    bool m_creatingBackupCountHasBeenSet;

                    /**
                     * <p>失败数量</p>
                     */
                    int64_t m_failedBackupCount;
                    bool m_failedBackupCountHasBeenSet;

                    /**
                     * <p>已完成数量</p>
                     */
                    int64_t m_successBackupCount;
                    bool m_successBackupCountHasBeenSet;

                    /**
                     * <p>恢复中的总数量</p>
                     */
                    int64_t m_restoringBackupCount;
                    bool m_restoringBackupCountHasBeenSet;

                    /**
                     * <p>备份总容量</p>
                     */
                    int64_t m_backupSizeMb;
                    bool m_backupSizeMbHasBeenSet;

                    /**
                     * <p>受保护资源数</p>
                     */
                    int64_t m_backupResourceCount;
                    bool m_backupResourceCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BDRC_V20260330_MODEL_FILEBACKUPOVERVIEW_H_
