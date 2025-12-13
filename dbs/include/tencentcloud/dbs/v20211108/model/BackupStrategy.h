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

#ifndef TENCENTCLOUD_DBS_V20211108_MODEL_BACKUPSTRATEGY_H_
#define TENCENTCLOUD_DBS_V20211108_MODEL_BACKUPSTRATEGY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dbs/v20211108/model/StorageStrategy.h>
#include <tencentcloud/dbs/v20211108/model/BackupPeriod.h>


namespace TencentCloud
{
    namespace Dbs
    {
        namespace V20211108
        {
            namespace Model
            {
                /**
                * 备份策略
                */
                class BackupStrategy : public AbstractModel
                {
                public:
                    BackupStrategy();
                    ~BackupStrategy() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取全量备份开始时间。周期性的全量备份将在当天该时间开始。
                     * @return BackupStartTime 全量备份开始时间。周期性的全量备份将在当天该时间开始。
                     * 
                     */
                    std::string GetBackupStartTime() const;

                    /**
                     * 设置全量备份开始时间。周期性的全量备份将在当天该时间开始。
                     * @param _backupStartTime 全量备份开始时间。周期性的全量备份将在当天该时间开始。
                     * 
                     */
                    void SetBackupStartTime(const std::string& _backupStartTime);

                    /**
                     * 判断参数 BackupStartTime 是否已赋值
                     * @return BackupStartTime 是否已赋值
                     * 
                     */
                    bool BackupStartTimeHasBeenSet() const;

                    /**
                     * 获取存储策略。
                     * @return StorageStrategy 存储策略。
                     * 
                     */
                    StorageStrategy GetStorageStrategy() const;

                    /**
                     * 设置存储策略。
                     * @param _storageStrategy 存储策略。
                     * 
                     */
                    void SetStorageStrategy(const StorageStrategy& _storageStrategy);

                    /**
                     * 判断参数 StorageStrategy 是否已赋值
                     * @return StorageStrategy 是否已赋值
                     * 
                     */
                    bool StorageStrategyHasBeenSet() const;

                    /**
                     * 获取备份周期。
                     * @return BackupPeriod 备份周期。
                     * 
                     */
                    BackupPeriod GetBackupPeriod() const;

                    /**
                     * 设置备份周期。
                     * @param _backupPeriod 备份周期。
                     * 
                     */
                    void SetBackupPeriod(const BackupPeriod& _backupPeriod);

                    /**
                     * 判断参数 BackupPeriod 是否已赋值
                     * @return BackupPeriod 是否已赋值
                     * 
                     */
                    bool BackupPeriodHasBeenSet() const;

                    /**
                     * 获取备份方法。目前仅支持 "logical" - 逻辑备份。
                     * @return BackupMethod 备份方法。目前仅支持 "logical" - 逻辑备份。
                     * 
                     */
                    std::string GetBackupMethod() const;

                    /**
                     * 设置备份方法。目前仅支持 "logical" - 逻辑备份。
                     * @param _backupMethod 备份方法。目前仅支持 "logical" - 逻辑备份。
                     * 
                     */
                    void SetBackupMethod(const std::string& _backupMethod);

                    /**
                     * 判断参数 BackupMethod 是否已赋值
                     * @return BackupMethod 是否已赋值
                     * 
                     */
                    bool BackupMethodHasBeenSet() const;

                    /**
                     * 获取备份周期。支持的值包括：
"period" - 周期性备份；
"single" - 单次备份。
默认值为"period"。
                     * @return StrategyType 备份周期。支持的值包括：
"period" - 周期性备份；
"single" - 单次备份。
默认值为"period"。
                     * 
                     */
                    std::string GetStrategyType() const;

                    /**
                     * 设置备份周期。支持的值包括：
"period" - 周期性备份；
"single" - 单次备份。
默认值为"period"。
                     * @param _strategyType 备份周期。支持的值包括：
"period" - 周期性备份；
"single" - 单次备份。
默认值为"period"。
                     * 
                     */
                    void SetStrategyType(const std::string& _strategyType);

                    /**
                     * 判断参数 StrategyType 是否已赋值
                     * @return StrategyType 是否已赋值
                     * 
                     */
                    bool StrategyTypeHasBeenSet() const;

                    /**
                     * 获取是否开启增量备份。可能的取值为["true", "false"]。默认值为"true"。
                     * @return EnableIncrement 是否开启增量备份。可能的取值为["true", "false"]。默认值为"true"。
                     * 
                     */
                    bool GetEnableIncrement() const;

                    /**
                     * 设置是否开启增量备份。可能的取值为["true", "false"]。默认值为"true"。
                     * @param _enableIncrement 是否开启增量备份。可能的取值为["true", "false"]。默认值为"true"。
                     * 
                     */
                    void SetEnableIncrement(const bool& _enableIncrement);

                    /**
                     * 判断参数 EnableIncrement 是否已赋值
                     * @return EnableIncrement 是否已赋值
                     * 
                     */
                    bool EnableIncrementHasBeenSet() const;

                private:

                    /**
                     * 全量备份开始时间。周期性的全量备份将在当天该时间开始。
                     */
                    std::string m_backupStartTime;
                    bool m_backupStartTimeHasBeenSet;

                    /**
                     * 存储策略。
                     */
                    StorageStrategy m_storageStrategy;
                    bool m_storageStrategyHasBeenSet;

                    /**
                     * 备份周期。
                     */
                    BackupPeriod m_backupPeriod;
                    bool m_backupPeriodHasBeenSet;

                    /**
                     * 备份方法。目前仅支持 "logical" - 逻辑备份。
                     */
                    std::string m_backupMethod;
                    bool m_backupMethodHasBeenSet;

                    /**
                     * 备份周期。支持的值包括：
"period" - 周期性备份；
"single" - 单次备份。
默认值为"period"。
                     */
                    std::string m_strategyType;
                    bool m_strategyTypeHasBeenSet;

                    /**
                     * 是否开启增量备份。可能的取值为["true", "false"]。默认值为"true"。
                     */
                    bool m_enableIncrement;
                    bool m_enableIncrementHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DBS_V20211108_MODEL_BACKUPSTRATEGY_H_
