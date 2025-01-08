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

#ifndef TENCENTCLOUD_MONGODB_V20190725_MODEL_BACKUPDOWNLOADTASK_H_
#define TENCENTCLOUD_MONGODB_V20190725_MODEL_BACKUPDOWNLOADTASK_H_

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
                * 备份下载任务
                */
                class BackupDownloadTask : public AbstractModel
                {
                public:
                    BackupDownloadTask();
                    ~BackupDownloadTask() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取任务创建时间
                     * @return CreateTime 任务创建时间
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置任务创建时间
                     * @param _createTime 任务创建时间
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取备份文件名
                     * @return BackupName 备份文件名
                     * 
                     */
                    std::string GetBackupName() const;

                    /**
                     * 设置备份文件名
                     * @param _backupName 备份文件名
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
                     * 获取分片名称
                     * @return ReplicaSetId 分片名称
                     * 
                     */
                    std::string GetReplicaSetId() const;

                    /**
                     * 设置分片名称
                     * @param _replicaSetId 分片名称
                     * 
                     */
                    void SetReplicaSetId(const std::string& _replicaSetId);

                    /**
                     * 判断参数 ReplicaSetId 是否已赋值
                     * @return ReplicaSetId 是否已赋值
                     * 
                     */
                    bool ReplicaSetIdHasBeenSet() const;

                    /**
                     * 获取备份数据大小，单位为字节
                     * @return BackupSize 备份数据大小，单位为字节
                     * 
                     */
                    int64_t GetBackupSize() const;

                    /**
                     * 设置备份数据大小，单位为字节
                     * @param _backupSize 备份数据大小，单位为字节
                     * 
                     */
                    void SetBackupSize(const int64_t& _backupSize);

                    /**
                     * 判断参数 BackupSize 是否已赋值
                     * @return BackupSize 是否已赋值
                     * 
                     */
                    bool BackupSizeHasBeenSet() const;

                    /**
                     * 获取任务状态。0-等待执行，1-正在下载，2-下载完成，3-下载失败，4-等待重试
                     * @return Status 任务状态。0-等待执行，1-正在下载，2-下载完成，3-下载失败，4-等待重试
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置任务状态。0-等待执行，1-正在下载，2-下载完成，3-下载失败，4-等待重试
                     * @param _status 任务状态。0-等待执行，1-正在下载，2-下载完成，3-下载失败，4-等待重试
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取任务进度百分比
                     * @return Percent 任务进度百分比
                     * 
                     */
                    int64_t GetPercent() const;

                    /**
                     * 设置任务进度百分比
                     * @param _percent 任务进度百分比
                     * 
                     */
                    void SetPercent(const int64_t& _percent);

                    /**
                     * 判断参数 Percent 是否已赋值
                     * @return Percent 是否已赋值
                     * 
                     */
                    bool PercentHasBeenSet() const;

                    /**
                     * 获取耗时，单位为秒
                     * @return TimeSpend 耗时，单位为秒
                     * 
                     */
                    int64_t GetTimeSpend() const;

                    /**
                     * 设置耗时，单位为秒
                     * @param _timeSpend 耗时，单位为秒
                     * 
                     */
                    void SetTimeSpend(const int64_t& _timeSpend);

                    /**
                     * 判断参数 TimeSpend 是否已赋值
                     * @return TimeSpend 是否已赋值
                     * 
                     */
                    bool TimeSpendHasBeenSet() const;

                    /**
                     * 获取备份数据下载链接
                     * @return Url 备份数据下载链接
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置备份数据下载链接
                     * @param _url 备份数据下载链接
                     * 
                     */
                    void SetUrl(const std::string& _url);

                    /**
                     * 判断参数 Url 是否已赋值
                     * @return Url 是否已赋值
                     * 
                     */
                    bool UrlHasBeenSet() const;

                    /**
                     * 获取备份文件备份类型，0-逻辑备份，1-物理备份
                     * @return BackupMethod 备份文件备份类型，0-逻辑备份，1-物理备份
                     * 
                     */
                    int64_t GetBackupMethod() const;

                    /**
                     * 设置备份文件备份类型，0-逻辑备份，1-物理备份
                     * @param _backupMethod 备份文件备份类型，0-逻辑备份，1-物理备份
                     * 
                     */
                    void SetBackupMethod(const int64_t& _backupMethod);

                    /**
                     * 判断参数 BackupMethod 是否已赋值
                     * @return BackupMethod 是否已赋值
                     * 
                     */
                    bool BackupMethodHasBeenSet() const;

                    /**
                     * 获取发起备份时指定的备注信息
                     * @return BackupDesc 发起备份时指定的备注信息
                     * 
                     */
                    std::string GetBackupDesc() const;

                    /**
                     * 设置发起备份时指定的备注信息
                     * @param _backupDesc 发起备份时指定的备注信息
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
                     * 获取地区信息。
                     * @return Region 地区信息。
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置地区信息。
                     * @param _region 地区信息。
                     * 
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     * 
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取Bucket信息。
                     * @return Bucket Bucket信息。
                     * 
                     */
                    std::string GetBucket() const;

                    /**
                     * 设置Bucket信息。
                     * @param _bucket Bucket信息。
                     * 
                     */
                    void SetBucket(const std::string& _bucket);

                    /**
                     * 判断参数 Bucket 是否已赋值
                     * @return Bucket 是否已赋值
                     * 
                     */
                    bool BucketHasBeenSet() const;

                private:

                    /**
                     * 任务创建时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 备份文件名
                     */
                    std::string m_backupName;
                    bool m_backupNameHasBeenSet;

                    /**
                     * 分片名称
                     */
                    std::string m_replicaSetId;
                    bool m_replicaSetIdHasBeenSet;

                    /**
                     * 备份数据大小，单位为字节
                     */
                    int64_t m_backupSize;
                    bool m_backupSizeHasBeenSet;

                    /**
                     * 任务状态。0-等待执行，1-正在下载，2-下载完成，3-下载失败，4-等待重试
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 任务进度百分比
                     */
                    int64_t m_percent;
                    bool m_percentHasBeenSet;

                    /**
                     * 耗时，单位为秒
                     */
                    int64_t m_timeSpend;
                    bool m_timeSpendHasBeenSet;

                    /**
                     * 备份数据下载链接
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * 备份文件备份类型，0-逻辑备份，1-物理备份
                     */
                    int64_t m_backupMethod;
                    bool m_backupMethodHasBeenSet;

                    /**
                     * 发起备份时指定的备注信息
                     */
                    std::string m_backupDesc;
                    bool m_backupDescHasBeenSet;

                    /**
                     * 地区信息。
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * Bucket信息。
                     */
                    std::string m_bucket;
                    bool m_bucketHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONGODB_V20190725_MODEL_BACKUPDOWNLOADTASK_H_
