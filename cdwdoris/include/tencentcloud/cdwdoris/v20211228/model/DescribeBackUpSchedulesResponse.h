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

#ifndef TENCENTCLOUD_CDWDORIS_V20211228_MODEL_DESCRIBEBACKUPSCHEDULESRESPONSE_H_
#define TENCENTCLOUD_CDWDORIS_V20211228_MODEL_DESCRIBEBACKUPSCHEDULESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdwdoris/v20211228/model/BackupScheduleInfo.h>
#include <tencentcloud/cdwdoris/v20211228/model/BucketEncryptionInfo.h>


namespace TencentCloud
{
    namespace Cdwdoris
    {
        namespace V20211228
        {
            namespace Model
            {
                /**
                * DescribeBackUpSchedules返回参数结构体
                */
                class DescribeBackUpSchedulesResponse : public AbstractModel
                {
                public:
                    DescribeBackUpSchedulesResponse();
                    ~DescribeBackUpSchedulesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>备份是否开启</p>
                     * @return BackUpOpened <p>备份是否开启</p>
                     * 
                     */
                    bool GetBackUpOpened() const;

                    /**
                     * 判断参数 BackUpOpened 是否已赋值
                     * @return BackUpOpened 是否已赋值
                     * 
                     */
                    bool BackUpOpenedHasBeenSet() const;

                    /**
                     * 获取<p>备份桶</p>
                     * @return CosBucketName <p>备份桶</p>
                     * 
                     */
                    std::string GetCosBucketName() const;

                    /**
                     * 判断参数 CosBucketName 是否已赋值
                     * @return CosBucketName 是否已赋值
                     * 
                     */
                    bool CosBucketNameHasBeenSet() const;

                    /**
                     * 获取<p>备份的状态</p>
                     * @return BackUpStatus <p>备份的状态</p>
                     * 
                     */
                    int64_t GetBackUpStatus() const;

                    /**
                     * 判断参数 BackUpStatus 是否已赋值
                     * @return BackUpStatus 是否已赋值
                     * 
                     */
                    bool BackUpStatusHasBeenSet() const;

                    /**
                     * 获取<p>备份、迁移任务信息</p>
                     * @return BackupScheduleInfos <p>备份、迁移任务信息</p>
                     * 
                     */
                    std::vector<BackupScheduleInfo> GetBackupScheduleInfos() const;

                    /**
                     * 判断参数 BackupScheduleInfos 是否已赋值
                     * @return BackupScheduleInfos 是否已赋值
                     * 
                     */
                    bool BackupScheduleInfosHasBeenSet() const;

                    /**
                     * 获取<p>当前系统时间</p>
                     * @return CurrentTime <p>当前系统时间</p>
                     * 
                     */
                    std::string GetCurrentTime() const;

                    /**
                     * 判断参数 CurrentTime 是否已赋值
                     * @return CurrentTime 是否已赋值
                     * 
                     */
                    bool CurrentTimeHasBeenSet() const;

                    /**
                     * 获取<p>桶加密状态信息</p>
                     * @return BucketEncryption <p>桶加密状态信息</p>
                     * 
                     */
                    BucketEncryptionInfo GetBucketEncryption() const;

                    /**
                     * 判断参数 BucketEncryption 是否已赋值
                     * @return BucketEncryption 是否已赋值
                     * 
                     */
                    bool BucketEncryptionHasBeenSet() const;

                private:

                    /**
                     * <p>备份是否开启</p>
                     */
                    bool m_backUpOpened;
                    bool m_backUpOpenedHasBeenSet;

                    /**
                     * <p>备份桶</p>
                     */
                    std::string m_cosBucketName;
                    bool m_cosBucketNameHasBeenSet;

                    /**
                     * <p>备份的状态</p>
                     */
                    int64_t m_backUpStatus;
                    bool m_backUpStatusHasBeenSet;

                    /**
                     * <p>备份、迁移任务信息</p>
                     */
                    std::vector<BackupScheduleInfo> m_backupScheduleInfos;
                    bool m_backupScheduleInfosHasBeenSet;

                    /**
                     * <p>当前系统时间</p>
                     */
                    std::string m_currentTime;
                    bool m_currentTimeHasBeenSet;

                    /**
                     * <p>桶加密状态信息</p>
                     */
                    BucketEncryptionInfo m_bucketEncryption;
                    bool m_bucketEncryptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDWDORIS_V20211228_MODEL_DESCRIBEBACKUPSCHEDULESRESPONSE_H_
