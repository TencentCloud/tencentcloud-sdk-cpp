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

#ifndef TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DESCRIBEBACKUPSUMMARYRESPONSE_H_
#define TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DESCRIBEBACKUPSUMMARYRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Sqlserver
    {
        namespace V20180328
        {
            namespace Model
            {
                /**
                * DescribeBackupSummary返回参数结构体
                */
                class DescribeBackupSummaryResponse : public AbstractModel
                {
                public:
                    DescribeBackupSummaryResponse();
                    ~DescribeBackupSummaryResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取实际免费总空间，单位(KB)。
                     * @return FreeSpace 实际免费总空间，单位(KB)。
                     * 
                     */
                    uint64_t GetFreeSpace() const;

                    /**
                     * 判断参数 FreeSpace 是否已赋值
                     * @return FreeSpace 是否已赋值
                     * 
                     */
                    bool FreeSpaceHasBeenSet() const;

                    /**
                     * 获取备份实际使用空间，单位(KB)。
                     * @return ActualUsedSpace 备份实际使用空间，单位(KB)。
                     * 
                     */
                    uint64_t GetActualUsedSpace() const;

                    /**
                     * 判断参数 ActualUsedSpace 是否已赋值
                     * @return ActualUsedSpace 是否已赋值
                     * 
                     */
                    bool ActualUsedSpaceHasBeenSet() const;

                    /**
                     * 获取备份文件总个数。
                     * @return BackupFilesTotal 备份文件总个数。
                     * 
                     */
                    uint64_t GetBackupFilesTotal() const;

                    /**
                     * 判断参数 BackupFilesTotal 是否已赋值
                     * @return BackupFilesTotal 是否已赋值
                     * 
                     */
                    bool BackupFilesTotalHasBeenSet() const;

                    /**
                     * 获取备份占用收费空间，单位(KB)。
                     * @return BillingSpace 备份占用收费空间，单位(KB)。
                     * 
                     */
                    uint64_t GetBillingSpace() const;

                    /**
                     * 判断参数 BillingSpace 是否已赋值
                     * @return BillingSpace 是否已赋值
                     * 
                     */
                    bool BillingSpaceHasBeenSet() const;

                    /**
                     * 获取数据备份使用空间，单位(KB)。
                     * @return DataBackupSpace 数据备份使用空间，单位(KB)。
                     * 
                     */
                    uint64_t GetDataBackupSpace() const;

                    /**
                     * 判断参数 DataBackupSpace 是否已赋值
                     * @return DataBackupSpace 是否已赋值
                     * 
                     */
                    bool DataBackupSpaceHasBeenSet() const;

                    /**
                     * 获取数据备份文件总个数。
                     * @return DataBackupCount 数据备份文件总个数。
                     * 
                     */
                    uint64_t GetDataBackupCount() const;

                    /**
                     * 判断参数 DataBackupCount 是否已赋值
                     * @return DataBackupCount 是否已赋值
                     * 
                     */
                    bool DataBackupCountHasBeenSet() const;

                    /**
                     * 获取数据备份中手动备份使用空间，单位(KB)。
                     * @return ManualBackupSpace 数据备份中手动备份使用空间，单位(KB)。
                     * 
                     */
                    uint64_t GetManualBackupSpace() const;

                    /**
                     * 判断参数 ManualBackupSpace 是否已赋值
                     * @return ManualBackupSpace 是否已赋值
                     * 
                     */
                    bool ManualBackupSpaceHasBeenSet() const;

                    /**
                     * 获取数据备份中手动备份文件总个数。
                     * @return ManualBackupCount 数据备份中手动备份文件总个数。
                     * 
                     */
                    uint64_t GetManualBackupCount() const;

                    /**
                     * 判断参数 ManualBackupCount 是否已赋值
                     * @return ManualBackupCount 是否已赋值
                     * 
                     */
                    bool ManualBackupCountHasBeenSet() const;

                    /**
                     * 获取数据备份中自动备份使用空间，单位(KB)。
                     * @return AutoBackupSpace 数据备份中自动备份使用空间，单位(KB)。
                     * 
                     */
                    uint64_t GetAutoBackupSpace() const;

                    /**
                     * 判断参数 AutoBackupSpace 是否已赋值
                     * @return AutoBackupSpace 是否已赋值
                     * 
                     */
                    bool AutoBackupSpaceHasBeenSet() const;

                    /**
                     * 获取数据备份中自动备份文件总个数。
                     * @return AutoBackupCount 数据备份中自动备份文件总个数。
                     * 
                     */
                    uint64_t GetAutoBackupCount() const;

                    /**
                     * 判断参数 AutoBackupCount 是否已赋值
                     * @return AutoBackupCount 是否已赋值
                     * 
                     */
                    bool AutoBackupCountHasBeenSet() const;

                    /**
                     * 获取日志备份使用空间，单位(KB)。
                     * @return LogBackupSpace 日志备份使用空间，单位(KB)。
                     * 
                     */
                    uint64_t GetLogBackupSpace() const;

                    /**
                     * 判断参数 LogBackupSpace 是否已赋值
                     * @return LogBackupSpace 是否已赋值
                     * 
                     */
                    bool LogBackupSpaceHasBeenSet() const;

                    /**
                     * 获取日志备份文件总个数。
                     * @return LogBackupCount 日志备份文件总个数。
                     * 
                     */
                    uint64_t GetLogBackupCount() const;

                    /**
                     * 判断参数 LogBackupCount 是否已赋值
                     * @return LogBackupCount 是否已赋值
                     * 
                     */
                    bool LogBackupCountHasBeenSet() const;

                    /**
                     * 获取预估收费金额，单位（元/小时）。
                     * @return EstimatedAmount 预估收费金额，单位（元/小时）。
                     * 
                     */
                    double GetEstimatedAmount() const;

                    /**
                     * 判断参数 EstimatedAmount 是否已赋值
                     * @return EstimatedAmount 是否已赋值
                     * 
                     */
                    bool EstimatedAmountHasBeenSet() const;

                    /**
                     * 获取本地备份文件总个数
                     * @return LocalBackupFilesTotal 本地备份文件总个数
                     * 
                     */
                    uint64_t GetLocalBackupFilesTotal() const;

                    /**
                     * 判断参数 LocalBackupFilesTotal 是否已赋值
                     * @return LocalBackupFilesTotal 是否已赋值
                     * 
                     */
                    bool LocalBackupFilesTotalHasBeenSet() const;

                    /**
                     * 获取跨地域备份文件总个数
                     * @return CrossBackupFilesTotal 跨地域备份文件总个数
                     * 
                     */
                    uint64_t GetCrossBackupFilesTotal() const;

                    /**
                     * 判断参数 CrossBackupFilesTotal 是否已赋值
                     * @return CrossBackupFilesTotal 是否已赋值
                     * 
                     */
                    bool CrossBackupFilesTotalHasBeenSet() const;

                    /**
                     * 获取跨地域备份占用收费空间，单位（KB）
                     * @return CrossBillingSpace 跨地域备份占用收费空间，单位（KB）
                     * 
                     */
                    uint64_t GetCrossBillingSpace() const;

                    /**
                     * 判断参数 CrossBillingSpace 是否已赋值
                     * @return CrossBillingSpace 是否已赋值
                     * 
                     */
                    bool CrossBillingSpaceHasBeenSet() const;

                    /**
                     * 获取跨地域自动数据备份使用空间，单位（KB）
                     * @return CrossAutoBackupSpace 跨地域自动数据备份使用空间，单位（KB）
                     * 
                     */
                    uint64_t GetCrossAutoBackupSpace() const;

                    /**
                     * 判断参数 CrossAutoBackupSpace 是否已赋值
                     * @return CrossAutoBackupSpace 是否已赋值
                     * 
                     */
                    bool CrossAutoBackupSpaceHasBeenSet() const;

                    /**
                     * 获取跨地域自动数据备份文件总个数
                     * @return CrossAutoBackupCount 跨地域自动数据备份文件总个数
                     * 
                     */
                    uint64_t GetCrossAutoBackupCount() const;

                    /**
                     * 判断参数 CrossAutoBackupCount 是否已赋值
                     * @return CrossAutoBackupCount 是否已赋值
                     * 
                     */
                    bool CrossAutoBackupCountHasBeenSet() const;

                    /**
                     * 获取本地日志备份使用空间，单位（KB）
                     * @return LocalLogBackupSpace 本地日志备份使用空间，单位（KB）
                     * 
                     */
                    uint64_t GetLocalLogBackupSpace() const;

                    /**
                     * 判断参数 LocalLogBackupSpace 是否已赋值
                     * @return LocalLogBackupSpace 是否已赋值
                     * 
                     */
                    bool LocalLogBackupSpaceHasBeenSet() const;

                    /**
                     * 获取本地日志备份文件总个数
                     * @return LocalLogBackupCount 本地日志备份文件总个数
                     * 
                     */
                    uint64_t GetLocalLogBackupCount() const;

                    /**
                     * 判断参数 LocalLogBackupCount 是否已赋值
                     * @return LocalLogBackupCount 是否已赋值
                     * 
                     */
                    bool LocalLogBackupCountHasBeenSet() const;

                    /**
                     * 获取跨地域日志备份使用空间，单位（KB）
                     * @return CrossLogBackupSpace 跨地域日志备份使用空间，单位（KB）
                     * 
                     */
                    uint64_t GetCrossLogBackupSpace() const;

                    /**
                     * 判断参数 CrossLogBackupSpace 是否已赋值
                     * @return CrossLogBackupSpace 是否已赋值
                     * 
                     */
                    bool CrossLogBackupSpaceHasBeenSet() const;

                    /**
                     * 获取跨地域日志备份文件总个数
                     * @return CrossLogBackupCount 跨地域日志备份文件总个数
                     * 
                     */
                    uint64_t GetCrossLogBackupCount() const;

                    /**
                     * 判断参数 CrossLogBackupCount 是否已赋值
                     * @return CrossLogBackupCount 是否已赋值
                     * 
                     */
                    bool CrossLogBackupCountHasBeenSet() const;

                    /**
                     * 获取跨地域备份预估收费金额，单位（元/小时）
                     * @return CrossEstimatedAmount 跨地域备份预估收费金额，单位（元/小时）
                     * 
                     */
                    double GetCrossEstimatedAmount() const;

                    /**
                     * 判断参数 CrossEstimatedAmount 是否已赋值
                     * @return CrossEstimatedAmount 是否已赋值
                     * 
                     */
                    bool CrossEstimatedAmountHasBeenSet() const;

                private:

                    /**
                     * 实际免费总空间，单位(KB)。
                     */
                    uint64_t m_freeSpace;
                    bool m_freeSpaceHasBeenSet;

                    /**
                     * 备份实际使用空间，单位(KB)。
                     */
                    uint64_t m_actualUsedSpace;
                    bool m_actualUsedSpaceHasBeenSet;

                    /**
                     * 备份文件总个数。
                     */
                    uint64_t m_backupFilesTotal;
                    bool m_backupFilesTotalHasBeenSet;

                    /**
                     * 备份占用收费空间，单位(KB)。
                     */
                    uint64_t m_billingSpace;
                    bool m_billingSpaceHasBeenSet;

                    /**
                     * 数据备份使用空间，单位(KB)。
                     */
                    uint64_t m_dataBackupSpace;
                    bool m_dataBackupSpaceHasBeenSet;

                    /**
                     * 数据备份文件总个数。
                     */
                    uint64_t m_dataBackupCount;
                    bool m_dataBackupCountHasBeenSet;

                    /**
                     * 数据备份中手动备份使用空间，单位(KB)。
                     */
                    uint64_t m_manualBackupSpace;
                    bool m_manualBackupSpaceHasBeenSet;

                    /**
                     * 数据备份中手动备份文件总个数。
                     */
                    uint64_t m_manualBackupCount;
                    bool m_manualBackupCountHasBeenSet;

                    /**
                     * 数据备份中自动备份使用空间，单位(KB)。
                     */
                    uint64_t m_autoBackupSpace;
                    bool m_autoBackupSpaceHasBeenSet;

                    /**
                     * 数据备份中自动备份文件总个数。
                     */
                    uint64_t m_autoBackupCount;
                    bool m_autoBackupCountHasBeenSet;

                    /**
                     * 日志备份使用空间，单位(KB)。
                     */
                    uint64_t m_logBackupSpace;
                    bool m_logBackupSpaceHasBeenSet;

                    /**
                     * 日志备份文件总个数。
                     */
                    uint64_t m_logBackupCount;
                    bool m_logBackupCountHasBeenSet;

                    /**
                     * 预估收费金额，单位（元/小时）。
                     */
                    double m_estimatedAmount;
                    bool m_estimatedAmountHasBeenSet;

                    /**
                     * 本地备份文件总个数
                     */
                    uint64_t m_localBackupFilesTotal;
                    bool m_localBackupFilesTotalHasBeenSet;

                    /**
                     * 跨地域备份文件总个数
                     */
                    uint64_t m_crossBackupFilesTotal;
                    bool m_crossBackupFilesTotalHasBeenSet;

                    /**
                     * 跨地域备份占用收费空间，单位（KB）
                     */
                    uint64_t m_crossBillingSpace;
                    bool m_crossBillingSpaceHasBeenSet;

                    /**
                     * 跨地域自动数据备份使用空间，单位（KB）
                     */
                    uint64_t m_crossAutoBackupSpace;
                    bool m_crossAutoBackupSpaceHasBeenSet;

                    /**
                     * 跨地域自动数据备份文件总个数
                     */
                    uint64_t m_crossAutoBackupCount;
                    bool m_crossAutoBackupCountHasBeenSet;

                    /**
                     * 本地日志备份使用空间，单位（KB）
                     */
                    uint64_t m_localLogBackupSpace;
                    bool m_localLogBackupSpaceHasBeenSet;

                    /**
                     * 本地日志备份文件总个数
                     */
                    uint64_t m_localLogBackupCount;
                    bool m_localLogBackupCountHasBeenSet;

                    /**
                     * 跨地域日志备份使用空间，单位（KB）
                     */
                    uint64_t m_crossLogBackupSpace;
                    bool m_crossLogBackupSpaceHasBeenSet;

                    /**
                     * 跨地域日志备份文件总个数
                     */
                    uint64_t m_crossLogBackupCount;
                    bool m_crossLogBackupCountHasBeenSet;

                    /**
                     * 跨地域备份预估收费金额，单位（元/小时）
                     */
                    double m_crossEstimatedAmount;
                    bool m_crossEstimatedAmountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DESCRIBEBACKUPSUMMARYRESPONSE_H_
