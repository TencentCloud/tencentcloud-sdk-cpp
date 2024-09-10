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

#ifndef TENCENTCLOUD_MARIADB_V20170312_MODEL_BACKUPCONFIG_H_
#define TENCENTCLOUD_MARIADB_V20170312_MODEL_BACKUPCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mariadb
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * 数据库超期备份配置
                */
                class BackupConfig : public AbstractModel
                {
                public:
                    BackupConfig();
                    ~BackupConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取备份策略是否启用。
                     * @return EnableBackupPolicy 备份策略是否启用。
                     * 
                     */
                    bool GetEnableBackupPolicy() const;

                    /**
                     * 设置备份策略是否启用。
                     * @param _enableBackupPolicy 备份策略是否启用。
                     * 
                     */
                    void SetEnableBackupPolicy(const bool& _enableBackupPolicy);

                    /**
                     * 判断参数 EnableBackupPolicy 是否已赋值
                     * @return EnableBackupPolicy 是否已赋值
                     * 
                     */
                    bool EnableBackupPolicyHasBeenSet() const;

                    /**
                     * 获取超期保留开始日期，早于开始日期的超期备份不保留，格式：yyyy-mm-dd。
                     * @return BeginDate 超期保留开始日期，早于开始日期的超期备份不保留，格式：yyyy-mm-dd。
                     * 
                     */
                    std::string GetBeginDate() const;

                    /**
                     * 设置超期保留开始日期，早于开始日期的超期备份不保留，格式：yyyy-mm-dd。
                     * @param _beginDate 超期保留开始日期，早于开始日期的超期备份不保留，格式：yyyy-mm-dd。
                     * 
                     */
                    void SetBeginDate(const std::string& _beginDate);

                    /**
                     * 判断参数 BeginDate 是否已赋值
                     * @return BeginDate 是否已赋值
                     * 
                     */
                    bool BeginDateHasBeenSet() const;

                    /**
                     * 获取超期备份保留时长，超出保留时间的超期备份将被删除，可填写1-3650整数。
                     * @return MaxRetentionDays 超期备份保留时长，超出保留时间的超期备份将被删除，可填写1-3650整数。
                     * 
                     */
                    int64_t GetMaxRetentionDays() const;

                    /**
                     * 设置超期备份保留时长，超出保留时间的超期备份将被删除，可填写1-3650整数。
                     * @param _maxRetentionDays 超期备份保留时长，超出保留时间的超期备份将被删除，可填写1-3650整数。
                     * 
                     */
                    void SetMaxRetentionDays(const int64_t& _maxRetentionDays);

                    /**
                     * 判断参数 MaxRetentionDays 是否已赋值
                     * @return MaxRetentionDays 是否已赋值
                     * 
                     */
                    bool MaxRetentionDaysHasBeenSet() const;

                    /**
                     * 获取备份模式，可选择按年月周模式保存
* 按年：annually
* 按月：monthly
* 按周：weekly
                     * @return Frequency 备份模式，可选择按年月周模式保存
* 按年：annually
* 按月：monthly
* 按周：weekly
                     * 
                     */
                    std::string GetFrequency() const;

                    /**
                     * 设置备份模式，可选择按年月周模式保存
* 按年：annually
* 按月：monthly
* 按周：weekly
                     * @param _frequency 备份模式，可选择按年月周模式保存
* 按年：annually
* 按月：monthly
* 按周：weekly
                     * 
                     */
                    void SetFrequency(const std::string& _frequency);

                    /**
                     * 判断参数 Frequency 是否已赋值
                     * @return Frequency 是否已赋值
                     * 
                     */
                    bool FrequencyHasBeenSet() const;

                    /**
                     * 获取Frequency等于weekly时生效。
表示保留特定工作日备份。可选择周一到周日，支持多选，取星期英文：
* 星期一 ：Monday
* 星期二 ：Tuesday
* 星期三：Wednesday
* 星期四：Thursday
* 星期五：Friday
* 星期六：Saturday
* 星期日：Sunday
                     * @return WeekDays Frequency等于weekly时生效。
表示保留特定工作日备份。可选择周一到周日，支持多选，取星期英文：
* 星期一 ：Monday
* 星期二 ：Tuesday
* 星期三：Wednesday
* 星期四：Thursday
* 星期五：Friday
* 星期六：Saturday
* 星期日：Sunday
                     * 
                     */
                    std::vector<std::string> GetWeekDays() const;

                    /**
                     * 设置Frequency等于weekly时生效。
表示保留特定工作日备份。可选择周一到周日，支持多选，取星期英文：
* 星期一 ：Monday
* 星期二 ：Tuesday
* 星期三：Wednesday
* 星期四：Thursday
* 星期五：Friday
* 星期六：Saturday
* 星期日：Sunday
                     * @param _weekDays Frequency等于weekly时生效。
表示保留特定工作日备份。可选择周一到周日，支持多选，取星期英文：
* 星期一 ：Monday
* 星期二 ：Tuesday
* 星期三：Wednesday
* 星期四：Thursday
* 星期五：Friday
* 星期六：Saturday
* 星期日：Sunday
                     * 
                     */
                    void SetWeekDays(const std::vector<std::string>& _weekDays);

                    /**
                     * 判断参数 WeekDays 是否已赋值
                     * @return WeekDays 是否已赋值
                     * 
                     */
                    bool WeekDaysHasBeenSet() const;

                    /**
                     * 获取保留备份个数，Frequency等于monthly或weekly时生效。
备份模式选择按月时，可填写1-28整数；
备份模式选择年时，可填写1-336整数。
                     * @return BackupCount 保留备份个数，Frequency等于monthly或weekly时生效。
备份模式选择按月时，可填写1-28整数；
备份模式选择年时，可填写1-336整数。
                     * 
                     */
                    int64_t GetBackupCount() const;

                    /**
                     * 设置保留备份个数，Frequency等于monthly或weekly时生效。
备份模式选择按月时，可填写1-28整数；
备份模式选择年时，可填写1-336整数。
                     * @param _backupCount 保留备份个数，Frequency等于monthly或weekly时生效。
备份模式选择按月时，可填写1-28整数；
备份模式选择年时，可填写1-336整数。
                     * 
                     */
                    void SetBackupCount(const int64_t& _backupCount);

                    /**
                     * 判断参数 BackupCount 是否已赋值
                     * @return BackupCount 是否已赋值
                     * 
                     */
                    bool BackupCountHasBeenSet() const;

                private:

                    /**
                     * 备份策略是否启用。
                     */
                    bool m_enableBackupPolicy;
                    bool m_enableBackupPolicyHasBeenSet;

                    /**
                     * 超期保留开始日期，早于开始日期的超期备份不保留，格式：yyyy-mm-dd。
                     */
                    std::string m_beginDate;
                    bool m_beginDateHasBeenSet;

                    /**
                     * 超期备份保留时长，超出保留时间的超期备份将被删除，可填写1-3650整数。
                     */
                    int64_t m_maxRetentionDays;
                    bool m_maxRetentionDaysHasBeenSet;

                    /**
                     * 备份模式，可选择按年月周模式保存
* 按年：annually
* 按月：monthly
* 按周：weekly
                     */
                    std::string m_frequency;
                    bool m_frequencyHasBeenSet;

                    /**
                     * Frequency等于weekly时生效。
表示保留特定工作日备份。可选择周一到周日，支持多选，取星期英文：
* 星期一 ：Monday
* 星期二 ：Tuesday
* 星期三：Wednesday
* 星期四：Thursday
* 星期五：Friday
* 星期六：Saturday
* 星期日：Sunday
                     */
                    std::vector<std::string> m_weekDays;
                    bool m_weekDaysHasBeenSet;

                    /**
                     * 保留备份个数，Frequency等于monthly或weekly时生效。
备份模式选择按月时，可填写1-28整数；
备份模式选择年时，可填写1-336整数。
                     */
                    int64_t m_backupCount;
                    bool m_backupCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MARIADB_V20170312_MODEL_BACKUPCONFIG_H_
