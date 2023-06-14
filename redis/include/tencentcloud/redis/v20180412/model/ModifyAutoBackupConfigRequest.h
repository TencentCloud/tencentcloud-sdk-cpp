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
                     * 获取指定实例 ID。例如：crs-xjhsdj****。请登录[Redis控制台](https://console.cloud.tencent.com/redis)在实例列表复制实例 ID。

                     * @return InstanceId 指定实例 ID。例如：crs-xjhsdj****。请登录[Redis控制台](https://console.cloud.tencent.com/redis)在实例列表复制实例 ID。

                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置指定实例 ID。例如：crs-xjhsdj****。请登录[Redis控制台](https://console.cloud.tencent.com/redis)在实例列表复制实例 ID。

                     * @param _instanceId 指定实例 ID。例如：crs-xjhsdj****。请登录[Redis控制台](https://console.cloud.tencent.com/redis)在实例列表复制实例 ID。

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
                     * 获取设置自动备份周期。可设置为Monday，Tuesday，Wednesday，Thursday，Friday，Saturday，Sunday。该参数暂不支持修改。
                     * @return WeekDays 设置自动备份周期。可设置为Monday，Tuesday，Wednesday，Thursday，Friday，Saturday，Sunday。该参数暂不支持修改。
                     * 
                     */
                    std::vector<std::string> GetWeekDays() const;

                    /**
                     * 设置设置自动备份周期。可设置为Monday，Tuesday，Wednesday，Thursday，Friday，Saturday，Sunday。该参数暂不支持修改。
                     * @param _weekDays 设置自动备份周期。可设置为Monday，Tuesday，Wednesday，Thursday，Friday，Saturday，Sunday。该参数暂不支持修改。
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
                     * 获取备份时间段。可设置为每个整点。格式如：00:00-01:00, 01:00-02:00...... 23:00-00:00。
                     * @return TimePeriod 备份时间段。可设置为每个整点。格式如：00:00-01:00, 01:00-02:00...... 23:00-00:00。
                     * 
                     */
                    std::string GetTimePeriod() const;

                    /**
                     * 设置备份时间段。可设置为每个整点。格式如：00:00-01:00, 01:00-02:00...... 23:00-00:00。
                     * @param _timePeriod 备份时间段。可设置为每个整点。格式如：00:00-01:00, 01:00-02:00...... 23:00-00:00。
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
                     * 获取自动备份类型。目前仅能配置为：1 ，指定时备份。
                     * @return AutoBackupType 自动备份类型。目前仅能配置为：1 ，指定时备份。
                     * 
                     */
                    int64_t GetAutoBackupType() const;

                    /**
                     * 设置自动备份类型。目前仅能配置为：1 ，指定时备份。
                     * @param _autoBackupType 自动备份类型。目前仅能配置为：1 ，指定时备份。
                     * 
                     */
                    void SetAutoBackupType(const int64_t& _autoBackupType);

                    /**
                     * 判断参数 AutoBackupType 是否已赋值
                     * @return AutoBackupType 是否已赋值
                     * 
                     */
                    bool AutoBackupTypeHasBeenSet() const;

                private:

                    /**
                     * 指定实例 ID。例如：crs-xjhsdj****。请登录[Redis控制台](https://console.cloud.tencent.com/redis)在实例列表复制实例 ID。

                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 设置自动备份周期。可设置为Monday，Tuesday，Wednesday，Thursday，Friday，Saturday，Sunday。该参数暂不支持修改。
                     */
                    std::vector<std::string> m_weekDays;
                    bool m_weekDaysHasBeenSet;

                    /**
                     * 备份时间段。可设置为每个整点。格式如：00:00-01:00, 01:00-02:00...... 23:00-00:00。
                     */
                    std::string m_timePeriod;
                    bool m_timePeriodHasBeenSet;

                    /**
                     * 自动备份类型。目前仅能配置为：1 ，指定时备份。
                     */
                    int64_t m_autoBackupType;
                    bool m_autoBackupTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_REDIS_V20180412_MODEL_MODIFYAUTOBACKUPCONFIGREQUEST_H_
