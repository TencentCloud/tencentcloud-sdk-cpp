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

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_LISTOPSALARMRULESREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_LISTOPSALARMRULESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20250806
        {
            namespace Model
            {
                /**
                * ListOpsAlarmRules请求参数结构体
                */
                class ListOpsAlarmRulesRequest : public AbstractModel
                {
                public:
                    ListOpsAlarmRulesRequest();
                    ~ListOpsAlarmRulesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取项目id
                     * @return ProjectId 项目id
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置项目id
                     * @param _projectId 项目id
                     * 
                     */
                    void SetProjectId(const std::string& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取分页的页数，默认为1
                     * @return PageNumber 分页的页数，默认为1
                     * 
                     */
                    uint64_t GetPageNumber() const;

                    /**
                     * 设置分页的页数，默认为1
                     * @param _pageNumber 分页的页数，默认为1
                     * 
                     */
                    void SetPageNumber(const uint64_t& _pageNumber);

                    /**
                     * 判断参数 PageNumber 是否已赋值
                     * @return PageNumber 是否已赋值
                     * 
                     */
                    bool PageNumberHasBeenSet() const;

                    /**
                     * 获取每页显示的条数，默认为20，最小值为1、最大值为200
                     * @return PageSize 每页显示的条数，默认为20，最小值为1、最大值为200
                     * 
                     */
                    uint64_t GetPageSize() const;

                    /**
                     * 设置每页显示的条数，默认为20，最小值为1、最大值为200
                     * @param _pageSize 每页显示的条数，默认为20，最小值为1、最大值为200
                     * 
                     */
                    void SetPageSize(const uint64_t& _pageSize);

                    /**
                     * 判断参数 PageSize 是否已赋值
                     * @return PageSize 是否已赋值
                     * 
                     */
                    bool PageSizeHasBeenSet() const;

                    /**
                     * 获取监控对象类型, 任务维度监控： 可按照任务/工作流/项目来配置：1.任务、2.工作流、3.项目（默认为1.任务） 项目维度监控： 项目整体任务波动告警， 7：项目波动监控告警
                     * @return MonitorObjectType 监控对象类型, 任务维度监控： 可按照任务/工作流/项目来配置：1.任务、2.工作流、3.项目（默认为1.任务） 项目维度监控： 项目整体任务波动告警， 7：项目波动监控告警
                     * 
                     */
                    int64_t GetMonitorObjectType() const;

                    /**
                     * 设置监控对象类型, 任务维度监控： 可按照任务/工作流/项目来配置：1.任务、2.工作流、3.项目（默认为1.任务） 项目维度监控： 项目整体任务波动告警， 7：项目波动监控告警
                     * @param _monitorObjectType 监控对象类型, 任务维度监控： 可按照任务/工作流/项目来配置：1.任务、2.工作流、3.项目（默认为1.任务） 项目维度监控： 项目整体任务波动告警， 7：项目波动监控告警
                     * 
                     */
                    void SetMonitorObjectType(const int64_t& _monitorObjectType);

                    /**
                     * 判断参数 MonitorObjectType 是否已赋值
                     * @return MonitorObjectType 是否已赋值
                     * 
                     */
                    bool MonitorObjectTypeHasBeenSet() const;

                    /**
                     * 获取根据任务id查询告警规则
                     * @return TaskId 根据任务id查询告警规则
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置根据任务id查询告警规则
                     * @param _taskId 根据任务id查询告警规则
                     * 
                     */
                    void SetTaskId(const std::string& _taskId);

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取查询配置对应告警类型的告警规则
告警规则监控类型 failure：失败告警 ；overtime：超时告警 success：成功告警; backTrackingOrRerunSuccess: 补录重跑成功告警 backTrackingOrRerunFailure：补录重跑失败告警；
项目波动告警
projectFailureInstanceUpwardFluctuationAlarm： 当天失败实例数向上波动率超过阀值告警； projectSuccessInstanceDownwardFluctuationAlarm：当天成功实例数向下波动率超过阀值告警；
离线集成任务对账告警： reconciliationFailure： 离线对账任务失败告警 reconciliationOvertime： 离线对账任务运行超时告警 reconciliationMismatch： 数据对账任务不一致条数超过阀值告警
                     * @return AlarmType 查询配置对应告警类型的告警规则
告警规则监控类型 failure：失败告警 ；overtime：超时告警 success：成功告警; backTrackingOrRerunSuccess: 补录重跑成功告警 backTrackingOrRerunFailure：补录重跑失败告警；
项目波动告警
projectFailureInstanceUpwardFluctuationAlarm： 当天失败实例数向上波动率超过阀值告警； projectSuccessInstanceDownwardFluctuationAlarm：当天成功实例数向下波动率超过阀值告警；
离线集成任务对账告警： reconciliationFailure： 离线对账任务失败告警 reconciliationOvertime： 离线对账任务运行超时告警 reconciliationMismatch： 数据对账任务不一致条数超过阀值告警
                     * 
                     */
                    std::string GetAlarmType() const;

                    /**
                     * 设置查询配置对应告警类型的告警规则
告警规则监控类型 failure：失败告警 ；overtime：超时告警 success：成功告警; backTrackingOrRerunSuccess: 补录重跑成功告警 backTrackingOrRerunFailure：补录重跑失败告警；
项目波动告警
projectFailureInstanceUpwardFluctuationAlarm： 当天失败实例数向上波动率超过阀值告警； projectSuccessInstanceDownwardFluctuationAlarm：当天成功实例数向下波动率超过阀值告警；
离线集成任务对账告警： reconciliationFailure： 离线对账任务失败告警 reconciliationOvertime： 离线对账任务运行超时告警 reconciliationMismatch： 数据对账任务不一致条数超过阀值告警
                     * @param _alarmType 查询配置对应告警类型的告警规则
告警规则监控类型 failure：失败告警 ；overtime：超时告警 success：成功告警; backTrackingOrRerunSuccess: 补录重跑成功告警 backTrackingOrRerunFailure：补录重跑失败告警；
项目波动告警
projectFailureInstanceUpwardFluctuationAlarm： 当天失败实例数向上波动率超过阀值告警； projectSuccessInstanceDownwardFluctuationAlarm：当天成功实例数向下波动率超过阀值告警；
离线集成任务对账告警： reconciliationFailure： 离线对账任务失败告警 reconciliationOvertime： 离线对账任务运行超时告警 reconciliationMismatch： 数据对账任务不一致条数超过阀值告警
                     * 
                     */
                    void SetAlarmType(const std::string& _alarmType);

                    /**
                     * 判断参数 AlarmType 是否已赋值
                     * @return AlarmType 是否已赋值
                     * 
                     */
                    bool AlarmTypeHasBeenSet() const;

                    /**
                     * 获取查询配置了对应告警级别的告警规则
告警级别 1.普通、2.重要、3.紧急
                     * @return AlarmLevel 查询配置了对应告警级别的告警规则
告警级别 1.普通、2.重要、3.紧急
                     * 
                     */
                    int64_t GetAlarmLevel() const;

                    /**
                     * 设置查询配置了对应告警级别的告警规则
告警级别 1.普通、2.重要、3.紧急
                     * @param _alarmLevel 查询配置了对应告警级别的告警规则
告警级别 1.普通、2.重要、3.紧急
                     * 
                     */
                    void SetAlarmLevel(const int64_t& _alarmLevel);

                    /**
                     * 判断参数 AlarmLevel 是否已赋值
                     * @return AlarmLevel 是否已赋值
                     * 
                     */
                    bool AlarmLevelHasBeenSet() const;

                    /**
                     * 获取查询配置对应告警接收人的告警规则
                     * @return AlarmRecipientId 查询配置对应告警接收人的告警规则
                     * 
                     */
                    std::string GetAlarmRecipientId() const;

                    /**
                     * 设置查询配置对应告警接收人的告警规则
                     * @param _alarmRecipientId 查询配置对应告警接收人的告警规则
                     * 
                     */
                    void SetAlarmRecipientId(const std::string& _alarmRecipientId);

                    /**
                     * 判断参数 AlarmRecipientId 是否已赋值
                     * @return AlarmRecipientId 是否已赋值
                     * 
                     */
                    bool AlarmRecipientIdHasBeenSet() const;

                    /**
                     * 获取根据告警规则id/规则名称查询对应的告警规则
                     * @return Keyword 根据告警规则id/规则名称查询对应的告警规则
                     * 
                     */
                    std::string GetKeyword() const;

                    /**
                     * 设置根据告警规则id/规则名称查询对应的告警规则
                     * @param _keyword 根据告警规则id/规则名称查询对应的告警规则
                     * 
                     */
                    void SetKeyword(const std::string& _keyword);

                    /**
                     * 判断参数 Keyword 是否已赋值
                     * @return Keyword 是否已赋值
                     * 
                     */
                    bool KeywordHasBeenSet() const;

                    /**
                     * 获取告警规则创建人过滤
                     * @return CreateUserUin 告警规则创建人过滤
                     * 
                     */
                    std::string GetCreateUserUin() const;

                    /**
                     * 设置告警规则创建人过滤
                     * @param _createUserUin 告警规则创建人过滤
                     * 
                     */
                    void SetCreateUserUin(const std::string& _createUserUin);

                    /**
                     * 判断参数 CreateUserUin 是否已赋值
                     * @return CreateUserUin 是否已赋值
                     * 
                     */
                    bool CreateUserUinHasBeenSet() const;

                    /**
                     * 获取告警规则创建时间范围起始时间, 格式如2025-08-17 00:00:00
                     * @return CreateTimeFrom 告警规则创建时间范围起始时间, 格式如2025-08-17 00:00:00
                     * 
                     */
                    std::string GetCreateTimeFrom() const;

                    /**
                     * 设置告警规则创建时间范围起始时间, 格式如2025-08-17 00:00:00
                     * @param _createTimeFrom 告警规则创建时间范围起始时间, 格式如2025-08-17 00:00:00
                     * 
                     */
                    void SetCreateTimeFrom(const std::string& _createTimeFrom);

                    /**
                     * 判断参数 CreateTimeFrom 是否已赋值
                     * @return CreateTimeFrom 是否已赋值
                     * 
                     */
                    bool CreateTimeFromHasBeenSet() const;

                    /**
                     * 获取告警规则创建时间范围结束时间，格式如"2025-08-26 23:59:59"

                     * @return CreateTimeTo 告警规则创建时间范围结束时间，格式如"2025-08-26 23:59:59"

                     * 
                     */
                    std::string GetCreateTimeTo() const;

                    /**
                     * 设置告警规则创建时间范围结束时间，格式如"2025-08-26 23:59:59"

                     * @param _createTimeTo 告警规则创建时间范围结束时间，格式如"2025-08-26 23:59:59"

                     * 
                     */
                    void SetCreateTimeTo(const std::string& _createTimeTo);

                    /**
                     * 判断参数 CreateTimeTo 是否已赋值
                     * @return CreateTimeTo 是否已赋值
                     * 
                     */
                    bool CreateTimeToHasBeenSet() const;

                    /**
                     * 获取最后更新时间过滤告警规则， 格式如"2025-08-26 00:00:00"

                     * @return UpdateTimeFrom 最后更新时间过滤告警规则， 格式如"2025-08-26 00:00:00"

                     * 
                     */
                    std::string GetUpdateTimeFrom() const;

                    /**
                     * 设置最后更新时间过滤告警规则， 格式如"2025-08-26 00:00:00"

                     * @param _updateTimeFrom 最后更新时间过滤告警规则， 格式如"2025-08-26 00:00:00"

                     * 
                     */
                    void SetUpdateTimeFrom(const std::string& _updateTimeFrom);

                    /**
                     * 判断参数 UpdateTimeFrom 是否已赋值
                     * @return UpdateTimeFrom 是否已赋值
                     * 
                     */
                    bool UpdateTimeFromHasBeenSet() const;

                    /**
                     * 获取最后更新时间过滤告警规则 格式如： "2025-08-26 23:59:59"

                     * @return UpdateTimeTo 最后更新时间过滤告警规则 格式如： "2025-08-26 23:59:59"

                     * 
                     */
                    std::string GetUpdateTimeTo() const;

                    /**
                     * 设置最后更新时间过滤告警规则 格式如： "2025-08-26 23:59:59"

                     * @param _updateTimeTo 最后更新时间过滤告警规则 格式如： "2025-08-26 23:59:59"

                     * 
                     */
                    void SetUpdateTimeTo(const std::string& _updateTimeTo);

                    /**
                     * 判断参数 UpdateTimeTo 是否已赋值
                     * @return UpdateTimeTo 是否已赋值
                     * 
                     */
                    bool UpdateTimeToHasBeenSet() const;

                private:

                    /**
                     * 项目id
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 分页的页数，默认为1
                     */
                    uint64_t m_pageNumber;
                    bool m_pageNumberHasBeenSet;

                    /**
                     * 每页显示的条数，默认为20，最小值为1、最大值为200
                     */
                    uint64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * 监控对象类型, 任务维度监控： 可按照任务/工作流/项目来配置：1.任务、2.工作流、3.项目（默认为1.任务） 项目维度监控： 项目整体任务波动告警， 7：项目波动监控告警
                     */
                    int64_t m_monitorObjectType;
                    bool m_monitorObjectTypeHasBeenSet;

                    /**
                     * 根据任务id查询告警规则
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * 查询配置对应告警类型的告警规则
告警规则监控类型 failure：失败告警 ；overtime：超时告警 success：成功告警; backTrackingOrRerunSuccess: 补录重跑成功告警 backTrackingOrRerunFailure：补录重跑失败告警；
项目波动告警
projectFailureInstanceUpwardFluctuationAlarm： 当天失败实例数向上波动率超过阀值告警； projectSuccessInstanceDownwardFluctuationAlarm：当天成功实例数向下波动率超过阀值告警；
离线集成任务对账告警： reconciliationFailure： 离线对账任务失败告警 reconciliationOvertime： 离线对账任务运行超时告警 reconciliationMismatch： 数据对账任务不一致条数超过阀值告警
                     */
                    std::string m_alarmType;
                    bool m_alarmTypeHasBeenSet;

                    /**
                     * 查询配置了对应告警级别的告警规则
告警级别 1.普通、2.重要、3.紧急
                     */
                    int64_t m_alarmLevel;
                    bool m_alarmLevelHasBeenSet;

                    /**
                     * 查询配置对应告警接收人的告警规则
                     */
                    std::string m_alarmRecipientId;
                    bool m_alarmRecipientIdHasBeenSet;

                    /**
                     * 根据告警规则id/规则名称查询对应的告警规则
                     */
                    std::string m_keyword;
                    bool m_keywordHasBeenSet;

                    /**
                     * 告警规则创建人过滤
                     */
                    std::string m_createUserUin;
                    bool m_createUserUinHasBeenSet;

                    /**
                     * 告警规则创建时间范围起始时间, 格式如2025-08-17 00:00:00
                     */
                    std::string m_createTimeFrom;
                    bool m_createTimeFromHasBeenSet;

                    /**
                     * 告警规则创建时间范围结束时间，格式如"2025-08-26 23:59:59"

                     */
                    std::string m_createTimeTo;
                    bool m_createTimeToHasBeenSet;

                    /**
                     * 最后更新时间过滤告警规则， 格式如"2025-08-26 00:00:00"

                     */
                    std::string m_updateTimeFrom;
                    bool m_updateTimeFromHasBeenSet;

                    /**
                     * 最后更新时间过滤告警规则 格式如： "2025-08-26 23:59:59"

                     */
                    std::string m_updateTimeTo;
                    bool m_updateTimeToHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_LISTOPSALARMRULESREQUEST_H_
