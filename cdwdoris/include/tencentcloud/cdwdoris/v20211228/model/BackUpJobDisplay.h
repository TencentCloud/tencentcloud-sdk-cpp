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

#ifndef TENCENTCLOUD_CDWDORIS_V20211228_MODEL_BACKUPJOBDISPLAY_H_
#define TENCENTCLOUD_CDWDORIS_V20211228_MODEL_BACKUPJOBDISPLAY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdwdoris/v20211228/model/DorisSourceInfo.h>
#include <tencentcloud/cdwdoris/v20211228/model/BackupCosInfo.h>


namespace TencentCloud
{
    namespace Cdwdoris
    {
        namespace V20211228
        {
            namespace Model
            {
                /**
                * 备份实例详情
                */
                class BackUpJobDisplay : public AbstractModel
                {
                public:
                    BackUpJobDisplay();
                    ~BackUpJobDisplay() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取备份实例id
                     * @return JobId 备份实例id
                     * 
                     */
                    int64_t GetJobId() const;

                    /**
                     * 设置备份实例id
                     * @param _jobId 备份实例id
                     * 
                     */
                    void SetJobId(const int64_t& _jobId);

                    /**
                     * 判断参数 JobId 是否已赋值
                     * @return JobId 是否已赋值
                     * 
                     */
                    bool JobIdHasBeenSet() const;

                    /**
                     * 获取备份实例名
                     * @return Snapshot 备份实例名
                     * 
                     */
                    std::string GetSnapshot() const;

                    /**
                     * 设置备份实例名
                     * @param _snapshot 备份实例名
                     * 
                     */
                    void SetSnapshot(const std::string& _snapshot);

                    /**
                     * 判断参数 Snapshot 是否已赋值
                     * @return Snapshot 是否已赋值
                     * 
                     */
                    bool SnapshotHasBeenSet() const;

                    /**
                     * 获取备份数据量
                     * @return BackUpSize 备份数据量
                     * 
                     */
                    int64_t GetBackUpSize() const;

                    /**
                     * 设置备份数据量
                     * @param _backUpSize 备份数据量
                     * 
                     */
                    void SetBackUpSize(const int64_t& _backUpSize);

                    /**
                     * 判断参数 BackUpSize 是否已赋值
                     * @return BackUpSize 是否已赋值
                     * 
                     */
                    bool BackUpSizeHasBeenSet() const;

                    /**
                     * 获取备份单副本数据量
                     * @return BackUpSingleSize 备份单副本数据量
                     * 
                     */
                    int64_t GetBackUpSingleSize() const;

                    /**
                     * 设置备份单副本数据量
                     * @param _backUpSingleSize 备份单副本数据量
                     * 
                     */
                    void SetBackUpSingleSize(const int64_t& _backUpSingleSize);

                    /**
                     * 判断参数 BackUpSingleSize 是否已赋值
                     * @return BackUpSingleSize 是否已赋值
                     * 
                     */
                    bool BackUpSingleSizeHasBeenSet() const;

                    /**
                     * 获取实例创建时间
                     * @return BackUpTime 实例创建时间
                     * 
                     */
                    std::string GetBackUpTime() const;

                    /**
                     * 设置实例创建时间
                     * @param _backUpTime 实例创建时间
                     * 
                     */
                    void SetBackUpTime(const std::string& _backUpTime);

                    /**
                     * 判断参数 BackUpTime 是否已赋值
                     * @return BackUpTime 是否已赋值
                     * 
                     */
                    bool BackUpTimeHasBeenSet() const;

                    /**
                     * 获取实例过期时间
                     * @return ExpireTime 实例过期时间
                     * 
                     */
                    std::string GetExpireTime() const;

                    /**
                     * 设置实例过期时间
                     * @param _expireTime 实例过期时间
                     * 
                     */
                    void SetExpireTime(const std::string& _expireTime);

                    /**
                     * 判断参数 ExpireTime 是否已赋值
                     * @return ExpireTime 是否已赋值
                     * 
                     */
                    bool ExpireTimeHasBeenSet() const;

                    /**
                     * 获取实例状态
                     * @return JobStatus 实例状态
                     * 
                     */
                    std::string GetJobStatus() const;

                    /**
                     * 设置实例状态
                     * @param _jobStatus 实例状态
                     * 
                     */
                    void SetJobStatus(const std::string& _jobStatus);

                    /**
                     * 判断参数 JobStatus 是否已赋值
                     * @return JobStatus 是否已赋值
                     * 
                     */
                    bool JobStatusHasBeenSet() const;

                    /**
                     * 获取0为默认。1时是对远端的doris进行备份，不周期，一次性
                     * @return BackupType 0为默认。1时是对远端的doris进行备份，不周期，一次性
                     * 
                     */
                    int64_t GetBackupType() const;

                    /**
                     * 设置0为默认。1时是对远端的doris进行备份，不周期，一次性
                     * @param _backupType 0为默认。1时是对远端的doris进行备份，不周期，一次性
                     * 
                     */
                    void SetBackupType(const int64_t& _backupType);

                    /**
                     * 判断参数 BackupType 是否已赋值
                     * @return BackupType 是否已赋值
                     * 
                     */
                    bool BackupTypeHasBeenSet() const;

                    /**
                     * 获取0为默认。1时是立即备份。2时是迁移
                     * @return BackupTimeType 0为默认。1时是立即备份。2时是迁移
                     * 
                     */
                    int64_t GetBackupTimeType() const;

                    /**
                     * 设置0为默认。1时是立即备份。2时是迁移
                     * @param _backupTimeType 0为默认。1时是立即备份。2时是迁移
                     * 
                     */
                    void SetBackupTimeType(const int64_t& _backupTimeType);

                    /**
                     * 判断参数 BackupTimeType 是否已赋值
                     * @return BackupTimeType 是否已赋值
                     * 
                     */
                    bool BackupTimeTypeHasBeenSet() const;

                    /**
                     * 获取远端doris的连接信息
                     * @return DorisSourceInfo 远端doris的连接信息
                     * 
                     */
                    DorisSourceInfo GetDorisSourceInfo() const;

                    /**
                     * 设置远端doris的连接信息
                     * @param _dorisSourceInfo 远端doris的连接信息
                     * 
                     */
                    void SetDorisSourceInfo(const DorisSourceInfo& _dorisSourceInfo);

                    /**
                     * 判断参数 DorisSourceInfo 是否已赋值
                     * @return DorisSourceInfo 是否已赋值
                     * 
                     */
                    bool DorisSourceInfoHasBeenSet() const;

                    /**
                     * 获取实例状态对应的数值
                     * @return JobStatusNum 实例状态对应的数值
                     * 
                     */
                    int64_t GetJobStatusNum() const;

                    /**
                     * 设置实例状态对应的数值
                     * @param _jobStatusNum 实例状态对应的数值
                     * 
                     */
                    void SetJobStatusNum(const int64_t& _jobStatusNum);

                    /**
                     * 判断参数 JobStatusNum 是否已赋值
                     * @return JobStatusNum 是否已赋值
                     * 
                     */
                    bool JobStatusNumHasBeenSet() const;

                    /**
                     * 获取备份实例中关于cos的信息	
                     * @return BackupCosInfo 备份实例中关于cos的信息	
                     * 
                     */
                    BackupCosInfo GetBackupCosInfo() const;

                    /**
                     * 设置备份实例中关于cos的信息	
                     * @param _backupCosInfo 备份实例中关于cos的信息	
                     * 
                     */
                    void SetBackupCosInfo(const BackupCosInfo& _backupCosInfo);

                    /**
                     * 判断参数 BackupCosInfo 是否已赋值
                     * @return BackupCosInfo 是否已赋值
                     * 
                     */
                    bool BackupCosInfoHasBeenSet() const;

                    /**
                     * 获取是否使用的自定义桶
                     * @return IsUserDefineBucket 是否使用的自定义桶
                     * 
                     */
                    bool GetIsUserDefineBucket() const;

                    /**
                     * 设置是否使用的自定义桶
                     * @param _isUserDefineBucket 是否使用的自定义桶
                     * 
                     */
                    void SetIsUserDefineBucket(const bool& _isUserDefineBucket);

                    /**
                     * 判断参数 IsUserDefineBucket 是否已赋值
                     * @return IsUserDefineBucket 是否已赋值
                     * 
                     */
                    bool IsUserDefineBucketHasBeenSet() const;

                    /**
                     * 获取错误原因
                     * @return ErrorReason 错误原因
                     * 
                     */
                    std::string GetErrorReason() const;

                    /**
                     * 设置错误原因
                     * @param _errorReason 错误原因
                     * 
                     */
                    void SetErrorReason(const std::string& _errorReason);

                    /**
                     * 判断参数 ErrorReason 是否已赋值
                     * @return ErrorReason 是否已赋值
                     * 
                     */
                    bool ErrorReasonHasBeenSet() const;

                private:

                    /**
                     * 备份实例id
                     */
                    int64_t m_jobId;
                    bool m_jobIdHasBeenSet;

                    /**
                     * 备份实例名
                     */
                    std::string m_snapshot;
                    bool m_snapshotHasBeenSet;

                    /**
                     * 备份数据量
                     */
                    int64_t m_backUpSize;
                    bool m_backUpSizeHasBeenSet;

                    /**
                     * 备份单副本数据量
                     */
                    int64_t m_backUpSingleSize;
                    bool m_backUpSingleSizeHasBeenSet;

                    /**
                     * 实例创建时间
                     */
                    std::string m_backUpTime;
                    bool m_backUpTimeHasBeenSet;

                    /**
                     * 实例过期时间
                     */
                    std::string m_expireTime;
                    bool m_expireTimeHasBeenSet;

                    /**
                     * 实例状态
                     */
                    std::string m_jobStatus;
                    bool m_jobStatusHasBeenSet;

                    /**
                     * 0为默认。1时是对远端的doris进行备份，不周期，一次性
                     */
                    int64_t m_backupType;
                    bool m_backupTypeHasBeenSet;

                    /**
                     * 0为默认。1时是立即备份。2时是迁移
                     */
                    int64_t m_backupTimeType;
                    bool m_backupTimeTypeHasBeenSet;

                    /**
                     * 远端doris的连接信息
                     */
                    DorisSourceInfo m_dorisSourceInfo;
                    bool m_dorisSourceInfoHasBeenSet;

                    /**
                     * 实例状态对应的数值
                     */
                    int64_t m_jobStatusNum;
                    bool m_jobStatusNumHasBeenSet;

                    /**
                     * 备份实例中关于cos的信息	
                     */
                    BackupCosInfo m_backupCosInfo;
                    bool m_backupCosInfoHasBeenSet;

                    /**
                     * 是否使用的自定义桶
                     */
                    bool m_isUserDefineBucket;
                    bool m_isUserDefineBucketHasBeenSet;

                    /**
                     * 错误原因
                     */
                    std::string m_errorReason;
                    bool m_errorReasonHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDWDORIS_V20211228_MODEL_BACKUPJOBDISPLAY_H_
