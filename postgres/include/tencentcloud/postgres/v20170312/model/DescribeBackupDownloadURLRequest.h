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

#ifndef TENCENTCLOUD_POSTGRES_V20170312_MODEL_DESCRIBEBACKUPDOWNLOADURLREQUEST_H_
#define TENCENTCLOUD_POSTGRES_V20170312_MODEL_DESCRIBEBACKUPDOWNLOADURLREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/postgres/v20170312/model/BackupDownloadRestriction.h>


namespace TencentCloud
{
    namespace Postgres
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * DescribeBackupDownloadURL请求参数结构体
                */
                class DescribeBackupDownloadURLRequest : public AbstractModel
                {
                public:
                    DescribeBackupDownloadURLRequest();
                    ~DescribeBackupDownloadURLRequest() = default;
                    std::string ToJsonString() const;


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
                     * 获取备份类型，目前支持：LogBackup，BaseBackup。
                     * @return BackupType 备份类型，目前支持：LogBackup，BaseBackup。
                     * 
                     */
                    std::string GetBackupType() const;

                    /**
                     * 设置备份类型，目前支持：LogBackup，BaseBackup。
                     * @param _backupType 备份类型，目前支持：LogBackup，BaseBackup。
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
                     * 获取备份的唯一ID。
                     * @return BackupId 备份的唯一ID。
                     * 
                     */
                    std::string GetBackupId() const;

                    /**
                     * 设置备份的唯一ID。
                     * @param _backupId 备份的唯一ID。
                     * 
                     */
                    void SetBackupId(const std::string& _backupId);

                    /**
                     * 判断参数 BackupId 是否已赋值
                     * @return BackupId 是否已赋值
                     * 
                     */
                    bool BackupIdHasBeenSet() const;

                    /**
                     * 获取链接的有效时间，默认为12小时。
                     * @return URLExpireTime 链接的有效时间，默认为12小时。
                     * 
                     */
                    uint64_t GetURLExpireTime() const;

                    /**
                     * 设置链接的有效时间，默认为12小时。
                     * @param _uRLExpireTime 链接的有效时间，默认为12小时。
                     * 
                     */
                    void SetURLExpireTime(const uint64_t& _uRLExpireTime);

                    /**
                     * 判断参数 URLExpireTime 是否已赋值
                     * @return URLExpireTime 是否已赋值
                     * 
                     */
                    bool URLExpireTimeHasBeenSet() const;

                    /**
                     * 获取备份下载限制
                     * @return BackupDownloadRestriction 备份下载限制
                     * 
                     */
                    BackupDownloadRestriction GetBackupDownloadRestriction() const;

                    /**
                     * 设置备份下载限制
                     * @param _backupDownloadRestriction 备份下载限制
                     * 
                     */
                    void SetBackupDownloadRestriction(const BackupDownloadRestriction& _backupDownloadRestriction);

                    /**
                     * 判断参数 BackupDownloadRestriction 是否已赋值
                     * @return BackupDownloadRestriction 是否已赋值
                     * 
                     */
                    bool BackupDownloadRestrictionHasBeenSet() const;

                private:

                    /**
                     * 实例ID。
                     */
                    std::string m_dBInstanceId;
                    bool m_dBInstanceIdHasBeenSet;

                    /**
                     * 备份类型，目前支持：LogBackup，BaseBackup。
                     */
                    std::string m_backupType;
                    bool m_backupTypeHasBeenSet;

                    /**
                     * 备份的唯一ID。
                     */
                    std::string m_backupId;
                    bool m_backupIdHasBeenSet;

                    /**
                     * 链接的有效时间，默认为12小时。
                     */
                    uint64_t m_uRLExpireTime;
                    bool m_uRLExpireTimeHasBeenSet;

                    /**
                     * 备份下载限制
                     */
                    BackupDownloadRestriction m_backupDownloadRestriction;
                    bool m_backupDownloadRestrictionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_POSTGRES_V20170312_MODEL_DESCRIBEBACKUPDOWNLOADURLREQUEST_H_
