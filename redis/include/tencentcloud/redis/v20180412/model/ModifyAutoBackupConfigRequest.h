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

#ifndef TENCENTCLOUD_REDIS_V20180412_MODEL_MODIFYAUTOBACKUPCONFIGREQUEST_H_
#define TENCENTCLOUD_REDIS_V20180412_MODEL_MODIFYAUTOBACKUPCONFIGREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Redis
    {
        namespace V20180412
        {
            namespace Model
            {
                /**
                * ModifyAutoBackupConfig请求参数结构体
                */
                class ModifyAutoBackupConfigRequest : public AbstractModel
                {
                public:
                    ModifyAutoBackupConfigRequest();
                    ~ModifyAutoBackupConfigRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>指定实例 ID。例如：crs-xjhsdj****。请登录<a href="https://console.cloud.tencent.com/redis">Redis控制台</a>在实例列表复制实例 ID。</p>
                     * @return InstanceId <p>指定实例 ID。例如：crs-xjhsdj****。请登录<a href="https://console.cloud.tencent.com/redis">Redis控制台</a>在实例列表复制实例 ID。</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>指定实例 ID。例如：crs-xjhsdj****。请登录<a href="https://console.cloud.tencent.com/redis">Redis控制台</a>在实例列表复制实例 ID。</p>
                     * @param _instanceId <p>指定实例 ID。例如：crs-xjhsdj****。请登录<a href="https://console.cloud.tencent.com/redis">Redis控制台</a>在实例列表复制实例 ID。</p>
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取<p>设置自动备份周期。可设置为Monday，Tuesday，Wednesday，Thursday，Friday，Saturday，Sunday。该参数暂不支持修改。</p>
                     * @return WeekDays <p>设置自动备份周期。可设置为Monday，Tuesday，Wednesday，Thursday，Friday，Saturday，Sunday。该参数暂不支持修改。</p>
                     * 
                     */
                    std::vector<std::string> GetWeekDays() const;

                    /**
                     * 设置<p>设置自动备份周期。可设置为Monday，Tuesday，Wednesday，Thursday，Friday，Saturday，Sunday。该参数暂不支持修改。</p>
                     * @param _weekDays <p>设置自动备份周期。可设置为Monday，Tuesday，Wednesday，Thursday，Friday，Saturday，Sunday。该参数暂不支持修改。</p>
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
                     * 获取<p>备份时间段。可设置为每个整点。格式如：00:00-01:00, 01:00-02:00...... 23:00-00:00。</p>
                     * @return TimePeriod <p>备份时间段。可设置为每个整点。格式如：00:00-01:00, 01:00-02:00...... 23:00-00:00。</p>
                     * 
                     */
                    std::string GetTimePeriod() const;

                    /**
                     * 设置<p>备份时间段。可设置为每个整点。格式如：00:00-01:00, 01:00-02:00...... 23:00-00:00。</p>
                     * @param _timePeriod <p>备份时间段。可设置为每个整点。格式如：00:00-01:00, 01:00-02:00...... 23:00-00:00。</p>
                     * 
                     */
                    void SetTimePeriod(const std::string& _timePeriod);

                    /**
                     * 判断参数 TimePeriod 是否已赋值
                     * @return TimePeriod 是否已赋值
                     * 
                     */
                    bool TimePeriodHasBeenSet() const;

                    /**
                     * 获取<p>自动备份类型。目前仅能配置为：1 ，指定时备份。</p>
                     * @return AutoBackupType <p>自动备份类型。目前仅能配置为：1 ，指定时备份。</p>
                     * 
                     */
                    int64_t GetAutoBackupType() const;

                    /**
                     * 设置<p>自动备份类型。目前仅能配置为：1 ，指定时备份。</p>
                     * @param _autoBackupType <p>自动备份类型。目前仅能配置为：1 ，指定时备份。</p>
                     * 
                     */
                    void SetAutoBackupType(const int64_t& _autoBackupType);

                    /**
                     * 判断参数 AutoBackupType 是否已赋值
                     * @return AutoBackupType 是否已赋值
                     * 
                     */
                    bool AutoBackupTypeHasBeenSet() const;

                    /**
                     * 获取<p>全量备份文件保存天数。 仅支持设置为 7，单位：天。如需更长天数，请<a href="https://console.cloud.tencent.com/workorder/category">提交工单</a>申请。</p>
                     * @return BackupStorageDays <p>全量备份文件保存天数。 仅支持设置为 7，单位：天。如需更长天数，请<a href="https://console.cloud.tencent.com/workorder/category">提交工单</a>申请。</p>
                     * 
                     */
                    int64_t GetBackupStorageDays() const;

                    /**
                     * 设置<p>全量备份文件保存天数。 仅支持设置为 7，单位：天。如需更长天数，请<a href="https://console.cloud.tencent.com/workorder/category">提交工单</a>申请。</p>
                     * @param _backupStorageDays <p>全量备份文件保存天数。 仅支持设置为 7，单位：天。如需更长天数，请<a href="https://console.cloud.tencent.com/workorder/category">提交工单</a>申请。</p>
                     * 
                     */
                    void SetBackupStorageDays(const int64_t& _backupStorageDays);

                    /**
                     * 判断参数 BackupStorageDays 是否已赋值
                     * @return BackupStorageDays 是否已赋值
                     * 
                     */
                    bool BackupStorageDaysHasBeenSet() const;

                private:

                    /**
                     * <p>指定实例 ID。例如：crs-xjhsdj****。请登录<a href="https://console.cloud.tencent.com/redis">Redis控制台</a>在实例列表复制实例 ID。</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>设置自动备份周期。可设置为Monday，Tuesday，Wednesday，Thursday，Friday，Saturday，Sunday。该参数暂不支持修改。</p>
                     */
                    std::vector<std::string> m_weekDays;
                    bool m_weekDaysHasBeenSet;

                    /**
                     * <p>备份时间段。可设置为每个整点。格式如：00:00-01:00, 01:00-02:00...... 23:00-00:00。</p>
                     */
                    std::string m_timePeriod;
                    bool m_timePeriodHasBeenSet;

                    /**
                     * <p>自动备份类型。目前仅能配置为：1 ，指定时备份。</p>
                     */
                    int64_t m_autoBackupType;
                    bool m_autoBackupTypeHasBeenSet;

                    /**
                     * <p>全量备份文件保存天数。 仅支持设置为 7，单位：天。如需更长天数，请<a href="https://console.cloud.tencent.com/workorder/category">提交工单</a>申请。</p>
                     */
                    int64_t m_backupStorageDays;
                    bool m_backupStorageDaysHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_REDIS_V20180412_MODEL_MODIFYAUTOBACKUPCONFIGREQUEST_H_
