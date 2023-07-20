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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_BASELINEDTO_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_BASELINEDTO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20210820/model/BaselineTaskDto.h>
#include <tencentcloud/wedata/v20210820/model/AlarmRuleDto.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * 基线实例
                */
                class BaselineDto : public AbstractModel
                {
                public:
                    BaselineDto();
                    ~BaselineDto() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取基线id
                     * @return Id 基线id
                     * 
                     */
                    int64_t GetId() const;

                    /**
                     * 设置基线id
                     * @param _id 基线id
                     * 
                     */
                    void SetId(const int64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

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
                     * 获取天基线/小时基线
                     * @return BaselineType 天基线/小时基线
                     * 
                     */
                    std::string GetBaselineType() const;

                    /**
                     * 设置天基线/小时基线
                     * @param _baselineType 天基线/小时基线
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
                     * 获取基线创建时间
                     * @return CreateTime 基线创建时间
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置基线创建时间
                     * @param _createTime 基线创建时间
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
                     * 获取保障任务
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PromiseTasks 保障任务
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<BaselineTaskDto> GetPromiseTasks() const;

                    /**
                     * 设置保障任务
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _promiseTasks 保障任务
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPromiseTasks(const std::vector<BaselineTaskDto>& _promiseTasks);

                    /**
                     * 判断参数 PromiseTasks 是否已赋值
                     * @return PromiseTasks 是否已赋值
                     * 
                     */
                    bool PromiseTasksHasBeenSet() const;

                    /**
                     * 获取告警规则
                     * @return AlarmRule 告警规则
                     * 
                     */
                    AlarmRuleDto GetAlarmRule() const;

                    /**
                     * 设置告警规则
                     * @param _alarmRule 告警规则
                     * 
                     */
                    void SetAlarmRule(const AlarmRuleDto& _alarmRule);

                    /**
                     * 判断参数 AlarmRule 是否已赋值
                     * @return AlarmRule 是否已赋值
                     * 
                     */
                    bool AlarmRuleHasBeenSet() const;

                    /**
                     * 获取基线状态，待提交, 运行中，停止
                     * @return BaselineStatus 基线状态，待提交, 运行中，停止
                     * 
                     */
                    std::string GetBaselineStatus() const;

                    /**
                     * 设置基线状态，待提交, 运行中，停止
                     * @param _baselineStatus 基线状态，待提交, 运行中，停止
                     * 
                     */
                    void SetBaselineStatus(const std::string& _baselineStatus);

                    /**
                     * 判断参数 BaselineStatus 是否已赋值
                     * @return BaselineStatus 是否已赋值
                     * 
                     */
                    bool BaselineStatusHasBeenSet() const;

                    /**
                     * 获取最新基线实例运行状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LatestBaselineInstanceStatus 最新基线实例运行状态
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLatestBaselineInstanceStatus() const;

                    /**
                     * 设置最新基线实例运行状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _latestBaselineInstanceStatus 最新基线实例运行状态
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLatestBaselineInstanceStatus(const std::string& _latestBaselineInstanceStatus);

                    /**
                     * 判断参数 LatestBaselineInstanceStatus 是否已赋值
                     * @return LatestBaselineInstanceStatus 是否已赋值
                     * 
                     */
                    bool LatestBaselineInstanceStatusHasBeenSet() const;

                    /**
                     * 获取预警余量/单位分钟
                     * @return WarningMargin 预警余量/单位分钟
                     * 
                     */
                    int64_t GetWarningMargin() const;

                    /**
                     * 设置预警余量/单位分钟
                     * @param _warningMargin 预警余量/单位分钟
                     * 
                     */
                    void SetWarningMargin(const int64_t& _warningMargin);

                    /**
                     * 判断参数 WarningMargin 是否已赋值
                     * @return WarningMargin 是否已赋值
                     * 
                     */
                    bool WarningMarginHasBeenSet() const;

                    /**
                     * 获取承诺时间
                     * @return PromiseTime 承诺时间
                     * 
                     */
                    std::string GetPromiseTime() const;

                    /**
                     * 设置承诺时间
                     * @param _promiseTime 承诺时间
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
                     * 获取责任人uin
                     * @return InChargeUin 责任人uin
                     * 
                     */
                    std::string GetInChargeUin() const;

                    /**
                     * 设置责任人uin
                     * @param _inChargeUin 责任人uin
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
                     * 获取责任人名称
                     * @return InChargeName 责任人名称
                     * 
                     */
                    std::string GetInChargeName() const;

                    /**
                     * 设置责任人名称
                     * @param _inChargeName 责任人名称
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
                     * 获取当前用户uin
                     * @return UserUin 当前用户uin
                     * 
                     */
                    std::string GetUserUin() const;

                    /**
                     * 设置当前用户uin
                     * @param _userUin 当前用户uin
                     * 
                     */
                    void SetUserUin(const std::string& _userUin);

                    /**
                     * 判断参数 UserUin 是否已赋值
                     * @return UserUin 是否已赋值
                     * 
                     */
                    bool UserUinHasBeenSet() const;

                    /**
                     * 获取当前用户名字
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UserName 当前用户名字
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUserName() const;

                    /**
                     * 设置当前用户名字
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _userName 当前用户名字
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUserName(const std::string& _userName);

                    /**
                     * 判断参数 UserName 是否已赋值
                     * @return UserName 是否已赋值
                     * 
                     */
                    bool UserNameHasBeenSet() const;

                    /**
                     * 获取主账号uin
                     * @return OwnerUin 主账号uin
                     * 
                     */
                    std::string GetOwnerUin() const;

                    /**
                     * 设置主账号uin
                     * @param _ownerUin 主账号uin
                     * 
                     */
                    void SetOwnerUin(const std::string& _ownerUin);

                    /**
                     * 判断参数 OwnerUin 是否已赋值
                     * @return OwnerUin 是否已赋值
                     * 
                     */
                    bool OwnerUinHasBeenSet() const;

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
                     * 获取租户id
                     * @return AppId 租户id
                     * 
                     */
                    std::string GetAppId() const;

                    /**
                     * 设置租户id
                     * @param _appId 租户id
                     * 
                     */
                    void SetAppId(const std::string& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     * 
                     */
                    bool AppIdHasBeenSet() const;

                    /**
                     * 获取更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UpdateTime 更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _updateTime 更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                private:

                    /**
                     * 基线id
                     */
                    int64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 基线名称
                     */
                    std::string m_baselineName;
                    bool m_baselineNameHasBeenSet;

                    /**
                     * 天基线/小时基线
                     */
                    std::string m_baselineType;
                    bool m_baselineTypeHasBeenSet;

                    /**
                     * 基线创建时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 保障任务
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<BaselineTaskDto> m_promiseTasks;
                    bool m_promiseTasksHasBeenSet;

                    /**
                     * 告警规则
                     */
                    AlarmRuleDto m_alarmRule;
                    bool m_alarmRuleHasBeenSet;

                    /**
                     * 基线状态，待提交, 运行中，停止
                     */
                    std::string m_baselineStatus;
                    bool m_baselineStatusHasBeenSet;

                    /**
                     * 最新基线实例运行状态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_latestBaselineInstanceStatus;
                    bool m_latestBaselineInstanceStatusHasBeenSet;

                    /**
                     * 预警余量/单位分钟
                     */
                    int64_t m_warningMargin;
                    bool m_warningMarginHasBeenSet;

                    /**
                     * 承诺时间
                     */
                    std::string m_promiseTime;
                    bool m_promiseTimeHasBeenSet;

                    /**
                     * 责任人uin
                     */
                    std::string m_inChargeUin;
                    bool m_inChargeUinHasBeenSet;

                    /**
                     * 责任人名称
                     */
                    std::string m_inChargeName;
                    bool m_inChargeNameHasBeenSet;

                    /**
                     * 当前用户uin
                     */
                    std::string m_userUin;
                    bool m_userUinHasBeenSet;

                    /**
                     * 当前用户名字
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_userName;
                    bool m_userNameHasBeenSet;

                    /**
                     * 主账号uin
                     */
                    std::string m_ownerUin;
                    bool m_ownerUinHasBeenSet;

                    /**
                     * 项目id
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 租户id
                     */
                    std::string m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * 更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_BASELINEDTO_H_
