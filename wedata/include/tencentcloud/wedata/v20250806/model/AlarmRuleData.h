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

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_ALARMRULEDATA_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_ALARMRULEDATA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20250806/model/AlarmRuleDetail.h>
#include <tencentcloud/wedata/v20250806/model/AlarmGroup.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20250806
        {
            namespace Model
            {
                /**
                * 告警规则详情
                */
                class AlarmRuleData : public AbstractModel
                {
                public:
                    AlarmRuleData();
                    ~AlarmRuleData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取告警规则id
                     * @return AlarmRuleId 告警规则id
                     * 
                     */
                    std::string GetAlarmRuleId() const;

                    /**
                     * 设置告警规则id
                     * @param _alarmRuleId 告警规则id
                     * 
                     */
                    void SetAlarmRuleId(const std::string& _alarmRuleId);

                    /**
                     * 判断参数 AlarmRuleId 是否已赋值
                     * @return AlarmRuleId 是否已赋值
                     * 
                     */
                    bool AlarmRuleIdHasBeenSet() const;

                    /**
                     * 获取告警规则名称
                     * @return AlarmRuleName 告警规则名称
                     * 
                     */
                    std::string GetAlarmRuleName() const;

                    /**
                     * 设置告警规则名称
                     * @param _alarmRuleName 告警规则名称
                     * 
                     */
                    void SetAlarmRuleName(const std::string& _alarmRuleName);

                    /**
                     * 判断参数 AlarmRuleName 是否已赋值
                     * @return AlarmRuleName 是否已赋值
                     * 
                     */
                    bool AlarmRuleNameHasBeenSet() const;

                    /**
                     * 获取告警规则描述
                     * @return Description 告警规则描述
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置告警规则描述
                     * @param _description 告警规则描述
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取监控对象类型,
任务维度监控： 可按照任务/工作流/项目来配置：1.任务、2.工作流、3.项目（默认为1.任务） 
项目维度监控： 项目整体任务波动告警， 7：项目波动监控告警
                     * @return MonitorObjectType 监控对象类型,
任务维度监控： 可按照任务/工作流/项目来配置：1.任务、2.工作流、3.项目（默认为1.任务） 
项目维度监控： 项目整体任务波动告警， 7：项目波动监控告警
                     * 
                     */
                    int64_t GetMonitorObjectType() const;

                    /**
                     * 设置监控对象类型,
任务维度监控： 可按照任务/工作流/项目来配置：1.任务、2.工作流、3.项目（默认为1.任务） 
项目维度监控： 项目整体任务波动告警， 7：项目波动监控告警
                     * @param _monitorObjectType 监控对象类型,
任务维度监控： 可按照任务/工作流/项目来配置：1.任务、2.工作流、3.项目（默认为1.任务） 
项目维度监控： 项目整体任务波动告警， 7：项目波动监控告警
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
                     * 获取根据MonitorType 的设置传入不同的业务id，如下1（任务）： MonitorObjectIds为任务id列表2（工作流）： MonitorObjectIds 为工作流id列表(工作流id可从接口ListWorkflows获取)3（项目）： MonitorObjectIds为项目id列表
                     * @return MonitorObjectIds 根据MonitorType 的设置传入不同的业务id，如下1（任务）： MonitorObjectIds为任务id列表2（工作流）： MonitorObjectIds 为工作流id列表(工作流id可从接口ListWorkflows获取)3（项目）： MonitorObjectIds为项目id列表
                     * 
                     */
                    std::vector<std::string> GetMonitorObjectIds() const;

                    /**
                     * 设置根据MonitorType 的设置传入不同的业务id，如下1（任务）： MonitorObjectIds为任务id列表2（工作流）： MonitorObjectIds 为工作流id列表(工作流id可从接口ListWorkflows获取)3（项目）： MonitorObjectIds为项目id列表
                     * @param _monitorObjectIds 根据MonitorType 的设置传入不同的业务id，如下1（任务）： MonitorObjectIds为任务id列表2（工作流）： MonitorObjectIds 为工作流id列表(工作流id可从接口ListWorkflows获取)3（项目）： MonitorObjectIds为项目id列表
                     * 
                     */
                    void SetMonitorObjectIds(const std::vector<std::string>& _monitorObjectIds);

                    /**
                     * 判断参数 MonitorObjectIds 是否已赋值
                     * @return MonitorObjectIds 是否已赋值
                     * 
                     */
                    bool MonitorObjectIdsHasBeenSet() const;

                    /**
                     * 获取告警规则监控类型
failure：失败告警 ；overtime：超时告警 success：成功告警; backTrackingOrRerunSuccess: 补录重跑成功告警 backTrackingOrRerunFailure：补录重跑失败告警；
项目波动告警
projectFailureInstanceUpwardFluctuationAlarm： 当天失败实例数向上波动率超过阀值告警；
projectSuccessInstanceDownwardFluctuationAlarm：当天成功实例数向下波动率超过阀值告警；

离线集成任务对账告警：
reconciliationFailure： 离线对账任务失败告警
reconciliationOvertime： 离线对账任务运行超时告警
reconciliationMismatch： 数据对账任务不一致条数超过阀值告警

                     * @return AlarmTypes 告警规则监控类型
failure：失败告警 ；overtime：超时告警 success：成功告警; backTrackingOrRerunSuccess: 补录重跑成功告警 backTrackingOrRerunFailure：补录重跑失败告警；
项目波动告警
projectFailureInstanceUpwardFluctuationAlarm： 当天失败实例数向上波动率超过阀值告警；
projectSuccessInstanceDownwardFluctuationAlarm：当天成功实例数向下波动率超过阀值告警；

离线集成任务对账告警：
reconciliationFailure： 离线对账任务失败告警
reconciliationOvertime： 离线对账任务运行超时告警
reconciliationMismatch： 数据对账任务不一致条数超过阀值告警

                     * 
                     */
                    std::vector<std::string> GetAlarmTypes() const;

                    /**
                     * 设置告警规则监控类型
failure：失败告警 ；overtime：超时告警 success：成功告警; backTrackingOrRerunSuccess: 补录重跑成功告警 backTrackingOrRerunFailure：补录重跑失败告警；
项目波动告警
projectFailureInstanceUpwardFluctuationAlarm： 当天失败实例数向上波动率超过阀值告警；
projectSuccessInstanceDownwardFluctuationAlarm：当天成功实例数向下波动率超过阀值告警；

离线集成任务对账告警：
reconciliationFailure： 离线对账任务失败告警
reconciliationOvertime： 离线对账任务运行超时告警
reconciliationMismatch： 数据对账任务不一致条数超过阀值告警

                     * @param _alarmTypes 告警规则监控类型
failure：失败告警 ；overtime：超时告警 success：成功告警; backTrackingOrRerunSuccess: 补录重跑成功告警 backTrackingOrRerunFailure：补录重跑失败告警；
项目波动告警
projectFailureInstanceUpwardFluctuationAlarm： 当天失败实例数向上波动率超过阀值告警；
projectSuccessInstanceDownwardFluctuationAlarm：当天成功实例数向下波动率超过阀值告警；

离线集成任务对账告警：
reconciliationFailure： 离线对账任务失败告警
reconciliationOvertime： 离线对账任务运行超时告警
reconciliationMismatch： 数据对账任务不一致条数超过阀值告警

                     * 
                     */
                    void SetAlarmTypes(const std::vector<std::string>& _alarmTypes);

                    /**
                     * 判断参数 AlarmTypes 是否已赋值
                     * @return AlarmTypes 是否已赋值
                     * 
                     */
                    bool AlarmTypesHasBeenSet() const;

                    /**
                     * 获取告警规则是否启用
0-- 禁用 1--启用
                     * @return Status 告警规则是否启用
0-- 禁用 1--启用
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置告警规则是否启用
0-- 禁用 1--启用
                     * @param _status 告警规则是否启用
0-- 禁用 1--启用
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
                     * 获取告警规则配置信息 成功告警无需配置；失败告警可以配置首次失败告警或者所有重试失败告警；超时配置需要配置超时类型及超时阀值；项目波动告警需要配置波动率及防抖周期配置
                     * @return AlarmRuleDetail 告警规则配置信息 成功告警无需配置；失败告警可以配置首次失败告警或者所有重试失败告警；超时配置需要配置超时类型及超时阀值；项目波动告警需要配置波动率及防抖周期配置
                     * 
                     */
                    AlarmRuleDetail GetAlarmRuleDetail() const;

                    /**
                     * 设置告警规则配置信息 成功告警无需配置；失败告警可以配置首次失败告警或者所有重试失败告警；超时配置需要配置超时类型及超时阀值；项目波动告警需要配置波动率及防抖周期配置
                     * @param _alarmRuleDetail 告警规则配置信息 成功告警无需配置；失败告警可以配置首次失败告警或者所有重试失败告警；超时配置需要配置超时类型及超时阀值；项目波动告警需要配置波动率及防抖周期配置
                     * 
                     */
                    void SetAlarmRuleDetail(const AlarmRuleDetail& _alarmRuleDetail);

                    /**
                     * 判断参数 AlarmRuleDetail 是否已赋值
                     * @return AlarmRuleDetail 是否已赋值
                     * 
                     */
                    bool AlarmRuleDetailHasBeenSet() const;

                    /**
                     * 获取告警级别 1.普通、2.重要、3.紧急
                     * @return AlarmLevel 告警级别 1.普通、2.重要、3.紧急
                     * 
                     */
                    int64_t GetAlarmLevel() const;

                    /**
                     * 设置告警级别 1.普通、2.重要、3.紧急
                     * @param _alarmLevel 告警级别 1.普通、2.重要、3.紧急
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
                     * 获取告警规则创建人uid
                     * @return OwnerUin 告警规则创建人uid
                     * 
                     */
                    std::string GetOwnerUin() const;

                    /**
                     * 设置告警规则创建人uid
                     * @param _ownerUin 告警规则创建人uid
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
                     * 获取bundle 客户端绑定的告警规则:  为空是正常的告警规则，不为空则是对应bundle客户端绑定的规则
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BundleId bundle 客户端绑定的告警规则:  为空是正常的告警规则，不为空则是对应bundle客户端绑定的规则
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetBundleId() const;

                    /**
                     * 设置bundle 客户端绑定的告警规则:  为空是正常的告警规则，不为空则是对应bundle客户端绑定的规则
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _bundleId bundle 客户端绑定的告警规则:  为空是正常的告警规则，不为空则是对应bundle客户端绑定的规则
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBundleId(const std::string& _bundleId);

                    /**
                     * 判断参数 BundleId 是否已赋值
                     * @return BundleId 是否已赋值
                     * 
                     */
                    bool BundleIdHasBeenSet() const;

                    /**
                     * 获取bundleId不为空 则表示绑定的bundle客户端名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BundleInfo bundleId不为空 则表示绑定的bundle客户端名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetBundleInfo() const;

                    /**
                     * 设置bundleId不为空 则表示绑定的bundle客户端名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _bundleInfo bundleId不为空 则表示绑定的bundle客户端名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBundleInfo(const std::string& _bundleInfo);

                    /**
                     * 判断参数 BundleInfo 是否已赋值
                     * @return BundleInfo 是否已赋值
                     * 
                     */
                    bool BundleInfoHasBeenSet() const;

                    /**
                     * 获取告警接收人配置列表
                     * @return AlarmGroups 告警接收人配置列表
                     * 
                     */
                    std::vector<AlarmGroup> GetAlarmGroups() const;

                    /**
                     * 设置告警接收人配置列表
                     * @param _alarmGroups 告警接收人配置列表
                     * 
                     */
                    void SetAlarmGroups(const std::vector<AlarmGroup>& _alarmGroups);

                    /**
                     * 判断参数 AlarmGroups 是否已赋值
                     * @return AlarmGroups 是否已赋值
                     * 
                     */
                    bool AlarmGroupsHasBeenSet() const;

                private:

                    /**
                     * 告警规则id
                     */
                    std::string m_alarmRuleId;
                    bool m_alarmRuleIdHasBeenSet;

                    /**
                     * 告警规则名称
                     */
                    std::string m_alarmRuleName;
                    bool m_alarmRuleNameHasBeenSet;

                    /**
                     * 告警规则描述
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 监控对象类型,
任务维度监控： 可按照任务/工作流/项目来配置：1.任务、2.工作流、3.项目（默认为1.任务） 
项目维度监控： 项目整体任务波动告警， 7：项目波动监控告警
                     */
                    int64_t m_monitorObjectType;
                    bool m_monitorObjectTypeHasBeenSet;

                    /**
                     * 根据MonitorType 的设置传入不同的业务id，如下1（任务）： MonitorObjectIds为任务id列表2（工作流）： MonitorObjectIds 为工作流id列表(工作流id可从接口ListWorkflows获取)3（项目）： MonitorObjectIds为项目id列表
                     */
                    std::vector<std::string> m_monitorObjectIds;
                    bool m_monitorObjectIdsHasBeenSet;

                    /**
                     * 告警规则监控类型
failure：失败告警 ；overtime：超时告警 success：成功告警; backTrackingOrRerunSuccess: 补录重跑成功告警 backTrackingOrRerunFailure：补录重跑失败告警；
项目波动告警
projectFailureInstanceUpwardFluctuationAlarm： 当天失败实例数向上波动率超过阀值告警；
projectSuccessInstanceDownwardFluctuationAlarm：当天成功实例数向下波动率超过阀值告警；

离线集成任务对账告警：
reconciliationFailure： 离线对账任务失败告警
reconciliationOvertime： 离线对账任务运行超时告警
reconciliationMismatch： 数据对账任务不一致条数超过阀值告警

                     */
                    std::vector<std::string> m_alarmTypes;
                    bool m_alarmTypesHasBeenSet;

                    /**
                     * 告警规则是否启用
0-- 禁用 1--启用
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 告警规则配置信息 成功告警无需配置；失败告警可以配置首次失败告警或者所有重试失败告警；超时配置需要配置超时类型及超时阀值；项目波动告警需要配置波动率及防抖周期配置
                     */
                    AlarmRuleDetail m_alarmRuleDetail;
                    bool m_alarmRuleDetailHasBeenSet;

                    /**
                     * 告警级别 1.普通、2.重要、3.紧急
                     */
                    int64_t m_alarmLevel;
                    bool m_alarmLevelHasBeenSet;

                    /**
                     * 告警规则创建人uid
                     */
                    std::string m_ownerUin;
                    bool m_ownerUinHasBeenSet;

                    /**
                     * bundle 客户端绑定的告警规则:  为空是正常的告警规则，不为空则是对应bundle客户端绑定的规则
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_bundleId;
                    bool m_bundleIdHasBeenSet;

                    /**
                     * bundleId不为空 则表示绑定的bundle客户端名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_bundleInfo;
                    bool m_bundleInfoHasBeenSet;

                    /**
                     * 告警接收人配置列表
                     */
                    std::vector<AlarmGroup> m_alarmGroups;
                    bool m_alarmGroupsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_ALARMRULEDATA_H_
