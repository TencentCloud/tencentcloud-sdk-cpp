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

#ifndef TENCENTCLOUD_CKAFKA_V20190819_MODEL_MODIFYROUTINEMAINTENANCETASKREQUEST_H_
#define TENCENTCLOUD_CKAFKA_V20190819_MODEL_MODIFYROUTINEMAINTENANCETASKREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ckafka
    {
        namespace V20190819
        {
            namespace Model
            {
                /**
                * ModifyRoutineMaintenanceTask请求参数结构体
                */
                class ModifyRoutineMaintenanceTaskRequest : public AbstractModel
                {
                public:
                    ModifyRoutineMaintenanceTaskRequest();
                    ~ModifyRoutineMaintenanceTaskRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例id
                     * @return InstanceId 实例id
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例id
                     * @param _instanceId 实例id
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
                     * 获取自动化运维类别
                     * @return MaintenanceType 自动化运维类别
                     * 
                     */
                    std::string GetMaintenanceType() const;

                    /**
                     * 设置自动化运维类别
                     * @param _maintenanceType 自动化运维类别
                     * 
                     */
                    void SetMaintenanceType(const std::string& _maintenanceType);

                    /**
                     * 判断参数 MaintenanceType 是否已赋值
                     * @return MaintenanceType 是否已赋值
                     * 
                     */
                    bool MaintenanceTypeHasBeenSet() const;

                    /**
                     * 获取INSTANCE_STORAGE_CAPACITY(磁盘自动扩容)/MESSAGE_RETENTION_PERIOD(磁盘动态消息保留策略)
                     * @return MaintenanceSubtype INSTANCE_STORAGE_CAPACITY(磁盘自动扩容)/MESSAGE_RETENTION_PERIOD(磁盘动态消息保留策略)
                     * 
                     */
                    std::string GetMaintenanceSubtype() const;

                    /**
                     * 设置INSTANCE_STORAGE_CAPACITY(磁盘自动扩容)/MESSAGE_RETENTION_PERIOD(磁盘动态消息保留策略)
                     * @param _maintenanceSubtype INSTANCE_STORAGE_CAPACITY(磁盘自动扩容)/MESSAGE_RETENTION_PERIOD(磁盘动态消息保留策略)
                     * 
                     */
                    void SetMaintenanceSubtype(const std::string& _maintenanceSubtype);

                    /**
                     * 判断参数 MaintenanceSubtype 是否已赋值
                     * @return MaintenanceSubtype 是否已赋值
                     * 
                     */
                    bool MaintenanceSubtypeHasBeenSet() const;

                    /**
                     * 获取主题名
                     * @return TopicName 主题名
                     * 
                     */
                    std::string GetTopicName() const;

                    /**
                     * 设置主题名
                     * @param _topicName 主题名
                     * 
                     */
                    void SetTopicName(const std::string& _topicName);

                    /**
                     * 判断参数 TopicName 是否已赋值
                     * @return TopicName 是否已赋值
                     * 
                     */
                    bool TopicNameHasBeenSet() const;

                    /**
                     * 获取任务触发阈值
                     * @return ConfigureThreshold 任务触发阈值
                     * 
                     */
                    int64_t GetConfigureThreshold() const;

                    /**
                     * 设置任务触发阈值
                     * @param _configureThreshold 任务触发阈值
                     * 
                     */
                    void SetConfigureThreshold(const int64_t& _configureThreshold);

                    /**
                     * 判断参数 ConfigureThreshold 是否已赋值
                     * @return ConfigureThreshold 是否已赋值
                     * 
                     */
                    bool ConfigureThresholdHasBeenSet() const;

                    /**
                     * 获取任务调整步长
                     * @return ConfigureStepSize 任务调整步长
                     * 
                     */
                    int64_t GetConfigureStepSize() const;

                    /**
                     * 设置任务调整步长
                     * @param _configureStepSize 任务调整步长
                     * 
                     */
                    void SetConfigureStepSize(const int64_t& _configureStepSize);

                    /**
                     * 判断参数 ConfigureStepSize 是否已赋值
                     * @return ConfigureStepSize 是否已赋值
                     * 
                     */
                    bool ConfigureStepSizeHasBeenSet() const;

                    /**
                     * 获取任务调整上限
                     * @return ConfigureLimit 任务调整上限
                     * 
                     */
                    int64_t GetConfigureLimit() const;

                    /**
                     * 设置任务调整上限
                     * @param _configureLimit 任务调整上限
                     * 
                     */
                    void SetConfigureLimit(const int64_t& _configureLimit);

                    /**
                     * 判断参数 ConfigureLimit 是否已赋值
                     * @return ConfigureLimit 是否已赋值
                     * 
                     */
                    bool ConfigureLimitHasBeenSet() const;

                    /**
                     * 获取任务预期触发时间，存储从当日 0AM 开始偏移的秒数
                     * @return PlannedTime 任务预期触发时间，存储从当日 0AM 开始偏移的秒数
                     * 
                     */
                    int64_t GetPlannedTime() const;

                    /**
                     * 设置任务预期触发时间，存储从当日 0AM 开始偏移的秒数
                     * @param _plannedTime 任务预期触发时间，存储从当日 0AM 开始偏移的秒数
                     * 
                     */
                    void SetPlannedTime(const int64_t& _plannedTime);

                    /**
                     * 判断参数 PlannedTime 是否已赋值
                     * @return PlannedTime 是否已赋值
                     * 
                     */
                    bool PlannedTimeHasBeenSet() const;

                    /**
                     * 获取任务额外信息
                     * @return ExtraConfig 任务额外信息
                     * 
                     */
                    std::string GetExtraConfig() const;

                    /**
                     * 设置任务额外信息
                     * @param _extraConfig 任务额外信息
                     * 
                     */
                    void SetExtraConfig(const std::string& _extraConfig);

                    /**
                     * 判断参数 ExtraConfig 是否已赋值
                     * @return ExtraConfig 是否已赋值
                     * 
                     */
                    bool ExtraConfigHasBeenSet() const;

                    /**
                     * 获取任务状态
                     * @return Status 任务状态
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置任务状态
                     * @param _status 任务状态
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取执行week day
                     * @return Week 执行week day
                     * 
                     */
                    std::string GetWeek() const;

                    /**
                     * 设置执行week day
                     * @param _week 执行week day
                     * 
                     */
                    void SetWeek(const std::string& _week);

                    /**
                     * 判断参数 Week 是否已赋值
                     * @return Week 是否已赋值
                     * 
                     */
                    bool WeekHasBeenSet() const;

                private:

                    /**
                     * 实例id
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 自动化运维类别
                     */
                    std::string m_maintenanceType;
                    bool m_maintenanceTypeHasBeenSet;

                    /**
                     * INSTANCE_STORAGE_CAPACITY(磁盘自动扩容)/MESSAGE_RETENTION_PERIOD(磁盘动态消息保留策略)
                     */
                    std::string m_maintenanceSubtype;
                    bool m_maintenanceSubtypeHasBeenSet;

                    /**
                     * 主题名
                     */
                    std::string m_topicName;
                    bool m_topicNameHasBeenSet;

                    /**
                     * 任务触发阈值
                     */
                    int64_t m_configureThreshold;
                    bool m_configureThresholdHasBeenSet;

                    /**
                     * 任务调整步长
                     */
                    int64_t m_configureStepSize;
                    bool m_configureStepSizeHasBeenSet;

                    /**
                     * 任务调整上限
                     */
                    int64_t m_configureLimit;
                    bool m_configureLimitHasBeenSet;

                    /**
                     * 任务预期触发时间，存储从当日 0AM 开始偏移的秒数
                     */
                    int64_t m_plannedTime;
                    bool m_plannedTimeHasBeenSet;

                    /**
                     * 任务额外信息
                     */
                    std::string m_extraConfig;
                    bool m_extraConfigHasBeenSet;

                    /**
                     * 任务状态
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 执行week day
                     */
                    std::string m_week;
                    bool m_weekHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CKAFKA_V20190819_MODEL_MODIFYROUTINEMAINTENANCETASKREQUEST_H_
