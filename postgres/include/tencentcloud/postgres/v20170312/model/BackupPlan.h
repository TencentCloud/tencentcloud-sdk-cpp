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

#ifndef TENCENTCLOUD_POSTGRES_V20170312_MODEL_BACKUPPLAN_H_
#define TENCENTCLOUD_POSTGRES_V20170312_MODEL_BACKUPPLAN_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Postgres
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * 备份计划
                */
                class BackupPlan : public AbstractModel
                {
                public:
                    BackupPlan();
                    ~BackupPlan() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取备份周期
                     * @return BackupPeriod 备份周期
                     */
                    std::string GetBackupPeriod() const;

                    /**
                     * 设置备份周期
                     * @param BackupPeriod 备份周期
                     */
                    void SetBackupPeriod(const std::string& _backupPeriod);

                    /**
                     * 判断参数 BackupPeriod 是否已赋值
                     * @return BackupPeriod 是否已赋值
                     */
                    bool BackupPeriodHasBeenSet() const;

                    /**
                     * 获取基础备份保留时长
                     * @return BaseBackupRetentionPeriod 基础备份保留时长
                     */
                    uint64_t GetBaseBackupRetentionPeriod() const;

                    /**
                     * 设置基础备份保留时长
                     * @param BaseBackupRetentionPeriod 基础备份保留时长
                     */
                    void SetBaseBackupRetentionPeriod(const uint64_t& _baseBackupRetentionPeriod);

                    /**
                     * 判断参数 BaseBackupRetentionPeriod 是否已赋值
                     * @return BaseBackupRetentionPeriod 是否已赋值
                     */
                    bool BaseBackupRetentionPeriodHasBeenSet() const;

                    /**
                     * 获取开始备份的最早时间
                     * @return MinBackupStartTime 开始备份的最早时间
                     */
                    std::string GetMinBackupStartTime() const;

                    /**
                     * 设置开始备份的最早时间
                     * @param MinBackupStartTime 开始备份的最早时间
                     */
                    void SetMinBackupStartTime(const std::string& _minBackupStartTime);

                    /**
                     * 判断参数 MinBackupStartTime 是否已赋值
                     * @return MinBackupStartTime 是否已赋值
                     */
                    bool MinBackupStartTimeHasBeenSet() const;

                    /**
                     * 获取开始备份的最晚时间
                     * @return MaxBackupStartTime 开始备份的最晚时间
                     */
                    std::string GetMaxBackupStartTime() const;

                    /**
                     * 设置开始备份的最晚时间
                     * @param MaxBackupStartTime 开始备份的最晚时间
                     */
                    void SetMaxBackupStartTime(const std::string& _maxBackupStartTime);

                    /**
                     * 判断参数 MaxBackupStartTime 是否已赋值
                     * @return MaxBackupStartTime 是否已赋值
                     */
                    bool MaxBackupStartTimeHasBeenSet() const;

                private:

                    /**
                     * 备份周期
                     */
                    std::string m_backupPeriod;
                    bool m_backupPeriodHasBeenSet;

                    /**
                     * 基础备份保留时长
                     */
                    uint64_t m_baseBackupRetentionPeriod;
                    bool m_baseBackupRetentionPeriodHasBeenSet;

                    /**
                     * 开始备份的最早时间
                     */
                    std::string m_minBackupStartTime;
                    bool m_minBackupStartTimeHasBeenSet;

                    /**
                     * 开始备份的最晚时间
                     */
                    std::string m_maxBackupStartTime;
                    bool m_maxBackupStartTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_POSTGRES_V20170312_MODEL_BACKUPPLAN_H_
