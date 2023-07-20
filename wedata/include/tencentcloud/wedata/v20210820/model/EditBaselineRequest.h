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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_EDITBASELINEREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_EDITBASELINEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20210820/model/BaselineTaskInfo.h>
#include <tencentcloud/wedata/v20210820/model/AlarmRuleDto.h>
#include <tencentcloud/wedata/v20210820/model/ModifyAlarmRuleRequest.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * EditBaseline请求参数结构体
                */
                class EditBaselineRequest : public AbstractModel
                {
                public:
                    EditBaselineRequest();
                    ~EditBaselineRequest() = default;
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
                     * 获取基线名称
                     * @return BaselineName 基线名称
                     * 
                     */
                    std::string GetBaselineName() const;

                    /**
                     * 设置基线名称
                     * @param _baselineName 基线名称
                     * 
                     */
                    void SetBaselineName(const std::string& _baselineName);

                    /**
                     * 判断参数 BaselineName 是否已赋值
                     * @return BaselineName 是否已赋值
                     * 
                     */
                    bool BaselineNameHasBeenSet() const;

                    /**
                     * 获取D或者H；分别表示天基线和小时基线
                     * @return BaselineType D或者H；分别表示天基线和小时基线
                     * 
                     */
                    std::string GetBaselineType() const;

                    /**
                     * 设置D或者H；分别表示天基线和小时基线
                     * @param _baselineType D或者H；分别表示天基线和小时基线
                     * 
                     */
                    void SetBaselineType(const std::string& _baselineType);

                    /**
                     * 判断参数 BaselineType 是否已赋值
                     * @return BaselineType 是否已赋值
                     * 
                     */
                    bool BaselineTypeHasBeenSet() const;

                    /**
                     * 获取基线负责人id
                     * @return InChargeUin 基线负责人id
                     * 
                     */
                    std::string GetInChargeUin() const;

                    /**
                     * 设置基线负责人id
                     * @param _inChargeUin 基线负责人id
                     * 
                     */
                    void SetInChargeUin(const std::string& _inChargeUin);

                    /**
                     * 判断参数 InChargeUin 是否已赋值
                     * @return InChargeUin 是否已赋值
                     * 
                     */
                    bool InChargeUinHasBeenSet() const;

                    /**
                     * 获取基线负责人名称
                     * @return InChargeName 基线负责人名称
                     * 
                     */
                    std::string GetInChargeName() const;

                    /**
                     * 设置基线负责人名称
                     * @param _inChargeName 基线负责人名称
                     * 
                     */
                    void SetInChargeName(const std::string& _inChargeName);

                    /**
                     * 判断参数 InChargeName 是否已赋值
                     * @return InChargeName 是否已赋值
                     * 
                     */
                    bool InChargeNameHasBeenSet() const;

                    /**
                     * 获取保障任务
                     * @return PromiseTasks 保障任务
                     * 
                     */
                    std::vector<BaselineTaskInfo> GetPromiseTasks() const;

                    /**
                     * 设置保障任务
                     * @param _promiseTasks 保障任务
                     * 
                     */
                    void SetPromiseTasks(const std::vector<BaselineTaskInfo>& _promiseTasks);

                    /**
                     * 判断参数 PromiseTasks 是否已赋值
                     * @return PromiseTasks 是否已赋值
                     * 
                     */
                    bool PromiseTasksHasBeenSet() const;

                    /**
                     * 获取保障时间
                     * @return PromiseTime 保障时间
                     * 
                     */
                    std::string GetPromiseTime() const;

                    /**
                     * 设置保障时间
                     * @param _promiseTime 保障时间
                     * 
                     */
                    void SetPromiseTime(const std::string& _promiseTime);

                    /**
                     * 判断参数 PromiseTime 是否已赋值
                     * @return PromiseTime 是否已赋值
                     * 
                     */
                    bool PromiseTimeHasBeenSet() const;

                    /**
                     * 获取告警余量/分钟
                     * @return WarningMargin 告警余量/分钟
                     * 
                     */
                    uint64_t GetWarningMargin() const;

                    /**
                     * 设置告警余量/分钟
                     * @param _warningMargin 告警余量/分钟
                     * 
                     */
                    void SetWarningMargin(const uint64_t& _warningMargin);

                    /**
                     * 判断参数 WarningMargin 是否已赋值
                     * @return WarningMargin 是否已赋值
                     * 
                     */
                    bool WarningMarginHasBeenSet() const;

                    /**
                     * 获取基线id
                     * @return BaselineId 基线id
                     * 
                     */
                    std::string GetBaselineId() const;

                    /**
                     * 设置基线id
                     * @param _baselineId 基线id
                     * 
                     */
                    void SetBaselineId(const std::string& _baselineId);

                    /**
                     * 判断参数 BaselineId 是否已赋值
                     * @return BaselineId 是否已赋值
                     * 
                     */
                    bool BaselineIdHasBeenSet() const;

                    /**
                     * 获取更新人id
                     * @return UpdateUin 更新人id
                     * 
                     */
                    std::string GetUpdateUin() const;

                    /**
                     * 设置更新人id
                     * @param _updateUin 更新人id
                     * 
                     */
                    void SetUpdateUin(const std::string& _updateUin);

                    /**
                     * 判断参数 UpdateUin 是否已赋值
                     * @return UpdateUin 是否已赋值
                     * 
                     */
                    bool UpdateUinHasBeenSet() const;

                    /**
                     * 获取更新人名字
                     * @return UpdateName 更新人名字
                     * 
                     */
                    std::string GetUpdateName() const;

                    /**
                     * 设置更新人名字
                     * @param _updateName 更新人名字
                     * 
                     */
                    void SetUpdateName(const std::string& _updateName);

                    /**
                     * 判断参数 UpdateName 是否已赋值
                     * @return UpdateName 是否已赋值
                     * 
                     */
                    bool UpdateNameHasBeenSet() const;

                    /**
                     * 获取无
                     * @return IsNewAlarm 无
                     * 
                     */
                    bool GetIsNewAlarm() const;

                    /**
                     * 设置无
                     * @param _isNewAlarm 无
                     * 
                     */
                    void SetIsNewAlarm(const bool& _isNewAlarm);

                    /**
                     * 判断参数 IsNewAlarm 是否已赋值
                     * @return IsNewAlarm 是否已赋值
                     * 
                     */
                    bool IsNewAlarmHasBeenSet() const;

                    /**
                     * 获取现有告警规则信息
                     * @return AlarmRuleDto 现有告警规则信息
                     * 
                     */
                    AlarmRuleDto GetAlarmRuleDto() const;

                    /**
                     * 设置现有告警规则信息
                     * @param _alarmRuleDto 现有告警规则信息
                     * 
                     */
                    void SetAlarmRuleDto(const AlarmRuleDto& _alarmRuleDto);

                    /**
                     * 判断参数 AlarmRuleDto 是否已赋值
                     * @return AlarmRuleDto 是否已赋值
                     * 
                     */
                    bool AlarmRuleDtoHasBeenSet() const;

                    /**
                     * 获取告警更新请求
                     * @return BaselineModifyAlarmRuleRequest 告警更新请求
                     * 
                     */
                    ModifyAlarmRuleRequest GetBaselineModifyAlarmRuleRequest() const;

                    /**
                     * 设置告警更新请求
                     * @param _baselineModifyAlarmRuleRequest 告警更新请求
                     * 
                     */
                    void SetBaselineModifyAlarmRuleRequest(const ModifyAlarmRuleRequest& _baselineModifyAlarmRuleRequest);

                    /**
                     * 判断参数 BaselineModifyAlarmRuleRequest 是否已赋值
                     * @return BaselineModifyAlarmRuleRequest 是否已赋值
                     * 
                     */
                    bool BaselineModifyAlarmRuleRequestHasBeenSet() const;

                private:

                    /**
                     * 项目id
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 基线名称
                     */
                    std::string m_baselineName;
                    bool m_baselineNameHasBeenSet;

                    /**
                     * D或者H；分别表示天基线和小时基线
                     */
                    std::string m_baselineType;
                    bool m_baselineTypeHasBeenSet;

                    /**
                     * 基线负责人id
                     */
                    std::string m_inChargeUin;
                    bool m_inChargeUinHasBeenSet;

                    /**
                     * 基线负责人名称
                     */
                    std::string m_inChargeName;
                    bool m_inChargeNameHasBeenSet;

                    /**
                     * 保障任务
                     */
                    std::vector<BaselineTaskInfo> m_promiseTasks;
                    bool m_promiseTasksHasBeenSet;

                    /**
                     * 保障时间
                     */
                    std::string m_promiseTime;
                    bool m_promiseTimeHasBeenSet;

                    /**
                     * 告警余量/分钟
                     */
                    uint64_t m_warningMargin;
                    bool m_warningMarginHasBeenSet;

                    /**
                     * 基线id
                     */
                    std::string m_baselineId;
                    bool m_baselineIdHasBeenSet;

                    /**
                     * 更新人id
                     */
                    std::string m_updateUin;
                    bool m_updateUinHasBeenSet;

                    /**
                     * 更新人名字
                     */
                    std::string m_updateName;
                    bool m_updateNameHasBeenSet;

                    /**
                     * 无
                     */
                    bool m_isNewAlarm;
                    bool m_isNewAlarmHasBeenSet;

                    /**
                     * 现有告警规则信息
                     */
                    AlarmRuleDto m_alarmRuleDto;
                    bool m_alarmRuleDtoHasBeenSet;

                    /**
                     * 告警更新请求
                     */
                    ModifyAlarmRuleRequest m_baselineModifyAlarmRuleRequest;
                    bool m_baselineModifyAlarmRuleRequestHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_EDITBASELINEREQUEST_H_
