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

#ifndef TENCENTCLOUD_DBS_V20211108_MODEL_BACKUPPLANPAYINFO_H_
#define TENCENTCLOUD_DBS_V20211108_MODEL_BACKUPPLANPAYINFO_H_

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
                * 备份计划付费信息
                */
                class BackupPlanPayInfo : public AbstractModel
                {
                public:
                    BackupPlanPayInfo();
                    ~BackupPlanPayInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取实例规格。
                     * @return InstanceClass 实例规格。
                     * 
                     */
                    std::string GetInstanceClass() const;

                    /**
                     * 设置实例规格。
                     * @param _instanceClass 实例规格。
                     * 
                     */
                    void SetInstanceClass(const std::string& _instanceClass);

                    /**
                     * 判断参数 InstanceClass 是否已赋值
                     * @return InstanceClass 是否已赋值
                     * 
                     */
                    bool InstanceClassHasBeenSet() const;

                    /**
                     * 获取付费方式。取值：
- postPay：后付费
- prePay：预付费
                     * @return PayType 付费方式。取值：
- postPay：后付费
- prePay：预付费
                     * 
                     */
                    std::string GetPayType() const;

                    /**
                     * 设置付费方式。取值：
- postPay：后付费
- prePay：预付费
                     * @param _payType 付费方式。取值：
- postPay：后付费
- prePay：预付费
                     * 
                     */
                    void SetPayType(const std::string& _payType);

                    /**
                     * 判断参数 PayType 是否已赋值
                     * @return PayType 是否已赋值
                     * 
                     */
                    bool PayTypeHasBeenSet() const;

                    /**
                     * 获取免费额度，单位：字节。取值为 -1 表示不限量。
                     * @return FreeSpace 免费额度，单位：字节。取值为 -1 表示不限量。
                     * 
                     */
                    int64_t GetFreeSpace() const;

                    /**
                     * 设置免费额度，单位：字节。取值为 -1 表示不限量。
                     * @param _freeSpace 免费额度，单位：字节。取值为 -1 表示不限量。
                     * 
                     */
                    void SetFreeSpace(const int64_t& _freeSpace);

                    /**
                     * 判断参数 FreeSpace 是否已赋值
                     * @return FreeSpace 是否已赋值
                     * 
                     */
                    bool FreeSpaceHasBeenSet() const;

                    /**
                     * 获取本月计费空间，单位：字节。
                     * @return TotalChargeSpace 本月计费空间，单位：字节。
                     * 
                     */
                    int64_t GetTotalChargeSpace() const;

                    /**
                     * 设置本月计费空间，单位：字节。
                     * @param _totalChargeSpace 本月计费空间，单位：字节。
                     * 
                     */
                    void SetTotalChargeSpace(const int64_t& _totalChargeSpace);

                    /**
                     * 判断参数 TotalChargeSpace 是否已赋值
                     * @return TotalChargeSpace 是否已赋值
                     * 
                     */
                    bool TotalChargeSpaceHasBeenSet() const;

                    /**
                     * 获取全量计费空间，单位：字节。
                     * @return FullChargeSpace 全量计费空间，单位：字节。
                     * 
                     */
                    int64_t GetFullChargeSpace() const;

                    /**
                     * 设置全量计费空间，单位：字节。
                     * @param _fullChargeSpace 全量计费空间，单位：字节。
                     * 
                     */
                    void SetFullChargeSpace(const int64_t& _fullChargeSpace);

                    /**
                     * 判断参数 FullChargeSpace 是否已赋值
                     * @return FullChargeSpace 是否已赋值
                     * 
                     */
                    bool FullChargeSpaceHasBeenSet() const;

                    /**
                     * 获取增量计费空间，单位：字节。
                     * @return IncrementChargeSpace 增量计费空间，单位：字节。
                     * 
                     */
                    int64_t GetIncrementChargeSpace() const;

                    /**
                     * 设置增量计费空间，单位：字节。
                     * @param _incrementChargeSpace 增量计费空间，单位：字节。
                     * 
                     */
                    void SetIncrementChargeSpace(const int64_t& _incrementChargeSpace);

                    /**
                     * 判断参数 IncrementChargeSpace 是否已赋值
                     * @return IncrementChargeSpace 是否已赋值
                     * 
                     */
                    bool IncrementChargeSpaceHasBeenSet() const;

                    /**
                     * 获取本月全量备份集大小，单位：字节。
                     * @return FullBackupSetSize 本月全量备份集大小，单位：字节。
                     * 
                     */
                    int64_t GetFullBackupSetSize() const;

                    /**
                     * 设置本月全量备份集大小，单位：字节。
                     * @param _fullBackupSetSize 本月全量备份集大小，单位：字节。
                     * 
                     */
                    void SetFullBackupSetSize(const int64_t& _fullBackupSetSize);

                    /**
                     * 判断参数 FullBackupSetSize 是否已赋值
                     * @return FullBackupSetSize 是否已赋值
                     * 
                     */
                    bool FullBackupSetSizeHasBeenSet() const;

                    /**
                     * 获取本月增量备份集大小，单位：字节。
                     * @return IncrementBackupSetSize 本月增量备份集大小，单位：字节。
                     * 
                     */
                    int64_t GetIncrementBackupSetSize() const;

                    /**
                     * 设置本月增量备份集大小，单位：字节。
                     * @param _incrementBackupSetSize 本月增量备份集大小，单位：字节。
                     * 
                     */
                    void SetIncrementBackupSetSize(const int64_t& _incrementBackupSetSize);

                    /**
                     * 判断参数 IncrementBackupSetSize 是否已赋值
                     * @return IncrementBackupSetSize 是否已赋值
                     * 
                     */
                    bool IncrementBackupSetSizeHasBeenSet() const;

                    /**
                     * 获取创建时间。格式为 YYYY-MM-DD HH:mm:ss，如 2024-01-01 00:00:00。
                     * @return CreateTime 创建时间。格式为 YYYY-MM-DD HH:mm:ss，如 2024-01-01 00:00:00。
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置创建时间。格式为 YYYY-MM-DD HH:mm:ss，如 2024-01-01 00:00:00。
                     * @param _createTime 创建时间。格式为 YYYY-MM-DD HH:mm:ss，如 2024-01-01 00:00:00。
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
                     * 获取统计周期，格式为“开始时间 - 结束时间”。
                     * @return TimeRange 统计周期，格式为“开始时间 - 结束时间”。
                     * 
                     */
                    std::string GetTimeRange() const;

                    /**
                     * 设置统计周期，格式为“开始时间 - 结束时间”。
                     * @param _timeRange 统计周期，格式为“开始时间 - 结束时间”。
                     * 
                     */
                    void SetTimeRange(const std::string& _timeRange);

                    /**
                     * 判断参数 TimeRange 是否已赋值
                     * @return TimeRange 是否已赋值
                     * 
                     */
                    bool TimeRangeHasBeenSet() const;

                private:

                    /**
                     * 实例规格。
                     */
                    std::string m_instanceClass;
                    bool m_instanceClassHasBeenSet;

                    /**
                     * 付费方式。取值：
- postPay：后付费
- prePay：预付费
                     */
                    std::string m_payType;
                    bool m_payTypeHasBeenSet;

                    /**
                     * 免费额度，单位：字节。取值为 -1 表示不限量。
                     */
                    int64_t m_freeSpace;
                    bool m_freeSpaceHasBeenSet;

                    /**
                     * 本月计费空间，单位：字节。
                     */
                    int64_t m_totalChargeSpace;
                    bool m_totalChargeSpaceHasBeenSet;

                    /**
                     * 全量计费空间，单位：字节。
                     */
                    int64_t m_fullChargeSpace;
                    bool m_fullChargeSpaceHasBeenSet;

                    /**
                     * 增量计费空间，单位：字节。
                     */
                    int64_t m_incrementChargeSpace;
                    bool m_incrementChargeSpaceHasBeenSet;

                    /**
                     * 本月全量备份集大小，单位：字节。
                     */
                    int64_t m_fullBackupSetSize;
                    bool m_fullBackupSetSizeHasBeenSet;

                    /**
                     * 本月增量备份集大小，单位：字节。
                     */
                    int64_t m_incrementBackupSetSize;
                    bool m_incrementBackupSetSizeHasBeenSet;

                    /**
                     * 创建时间。格式为 YYYY-MM-DD HH:mm:ss，如 2024-01-01 00:00:00。
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 统计周期，格式为“开始时间 - 结束时间”。
                     */
                    std::string m_timeRange;
                    bool m_timeRangeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DBS_V20211108_MODEL_BACKUPPLANPAYINFO_H_
