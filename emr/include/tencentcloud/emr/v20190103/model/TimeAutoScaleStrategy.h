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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_TIMEAUTOSCALESTRATEGY_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_TIMEAUTOSCALESTRATEGY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/emr/v20190103/model/RepeatStrategy.h>
#include <tencentcloud/emr/v20190103/model/Tag.h>
#include <tencentcloud/emr/v20190103/model/TkeLabel.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * 时间扩缩容规则
                */
                class TimeAutoScaleStrategy : public AbstractModel
                {
                public:
                    TimeAutoScaleStrategy();
                    ~TimeAutoScaleStrategy() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取策略名字，集群内唯一。
                     * @return StrategyName 策略名字，集群内唯一。
                     * 
                     */
                    std::string GetStrategyName() const;

                    /**
                     * 设置策略名字，集群内唯一。
                     * @param _strategyName 策略名字，集群内唯一。
                     * 
                     */
                    void SetStrategyName(const std::string& _strategyName);

                    /**
                     * 判断参数 StrategyName 是否已赋值
                     * @return StrategyName 是否已赋值
                     * 
                     */
                    bool StrategyNameHasBeenSet() const;

                    /**
                     * 获取策略触发后的冷却时间，该段时间内，将不能触发弹性扩缩容。
                     * @return IntervalTime 策略触发后的冷却时间，该段时间内，将不能触发弹性扩缩容。
                     * 
                     */
                    uint64_t GetIntervalTime() const;

                    /**
                     * 设置策略触发后的冷却时间，该段时间内，将不能触发弹性扩缩容。
                     * @param _intervalTime 策略触发后的冷却时间，该段时间内，将不能触发弹性扩缩容。
                     * 
                     */
                    void SetIntervalTime(const uint64_t& _intervalTime);

                    /**
                     * 判断参数 IntervalTime 是否已赋值
                     * @return IntervalTime 是否已赋值
                     * 
                     */
                    bool IntervalTimeHasBeenSet() const;

                    /**
                     * 获取扩缩容动作，1表示扩容，2表示缩容。
                     * @return ScaleAction 扩缩容动作，1表示扩容，2表示缩容。
                     * 
                     */
                    uint64_t GetScaleAction() const;

                    /**
                     * 设置扩缩容动作，1表示扩容，2表示缩容。
                     * @param _scaleAction 扩缩容动作，1表示扩容，2表示缩容。
                     * 
                     */
                    void SetScaleAction(const uint64_t& _scaleAction);

                    /**
                     * 判断参数 ScaleAction 是否已赋值
                     * @return ScaleAction 是否已赋值
                     * 
                     */
                    bool ScaleActionHasBeenSet() const;

                    /**
                     * 获取扩缩容数量。
                     * @return ScaleNum 扩缩容数量。
                     * 
                     */
                    uint64_t GetScaleNum() const;

                    /**
                     * 设置扩缩容数量。
                     * @param _scaleNum 扩缩容数量。
                     * 
                     */
                    void SetScaleNum(const uint64_t& _scaleNum);

                    /**
                     * 判断参数 ScaleNum 是否已赋值
                     * @return ScaleNum 是否已赋值
                     * 
                     */
                    bool ScaleNumHasBeenSet() const;

                    /**
                     * 获取规则状态，1表示有效，2表示无效，3表示暂停。必须填写
                     * @return StrategyStatus 规则状态，1表示有效，2表示无效，3表示暂停。必须填写
                     * 
                     */
                    uint64_t GetStrategyStatus() const;

                    /**
                     * 设置规则状态，1表示有效，2表示无效，3表示暂停。必须填写
                     * @param _strategyStatus 规则状态，1表示有效，2表示无效，3表示暂停。必须填写
                     * 
                     */
                    void SetStrategyStatus(const uint64_t& _strategyStatus);

                    /**
                     * 判断参数 StrategyStatus 是否已赋值
                     * @return StrategyStatus 是否已赋值
                     * 
                     */
                    bool StrategyStatusHasBeenSet() const;

                    /**
                     * 获取规则优先级，越小越高。
                     * @return Priority 规则优先级，越小越高。
                     * 
                     */
                    uint64_t GetPriority() const;

                    /**
                     * 设置规则优先级，越小越高。
                     * @param _priority 规则优先级，越小越高。
                     * 
                     */
                    void SetPriority(const uint64_t& _priority);

                    /**
                     * 判断参数 Priority 是否已赋值
                     * @return Priority 是否已赋值
                     * 
                     */
                    bool PriorityHasBeenSet() const;

                    /**
                     * 获取当多条规则同时触发，其中某些未真正执行时，在该时间范围内，将会重试。
                     * @return RetryValidTime 当多条规则同时触发，其中某些未真正执行时，在该时间范围内，将会重试。
                     * 
                     */
                    uint64_t GetRetryValidTime() const;

                    /**
                     * 设置当多条规则同时触发，其中某些未真正执行时，在该时间范围内，将会重试。
                     * @param _retryValidTime 当多条规则同时触发，其中某些未真正执行时，在该时间范围内，将会重试。
                     * 
                     */
                    void SetRetryValidTime(const uint64_t& _retryValidTime);

                    /**
                     * 判断参数 RetryValidTime 是否已赋值
                     * @return RetryValidTime 是否已赋值
                     * 
                     */
                    bool RetryValidTimeHasBeenSet() const;

                    /**
                     * 获取时间扩缩容重复策略
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RepeatStrategy 时间扩缩容重复策略
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    RepeatStrategy GetRepeatStrategy() const;

                    /**
                     * 设置时间扩缩容重复策略
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _repeatStrategy 时间扩缩容重复策略
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRepeatStrategy(const RepeatStrategy& _repeatStrategy);

                    /**
                     * 判断参数 RepeatStrategy 是否已赋值
                     * @return RepeatStrategy 是否已赋值
                     * 
                     */
                    bool RepeatStrategyHasBeenSet() const;

                    /**
                     * 获取策略唯一ID。
                     * @return StrategyId 策略唯一ID。
                     * 
                     */
                    uint64_t GetStrategyId() const;

                    /**
                     * 设置策略唯一ID。
                     * @param _strategyId 策略唯一ID。
                     * 
                     */
                    void SetStrategyId(const uint64_t& _strategyId);

                    /**
                     * 判断参数 StrategyId 是否已赋值
                     * @return StrategyId 是否已赋值
                     * 
                     */
                    bool StrategyIdHasBeenSet() const;

                    /**
                     * 获取优雅缩容开关
                     * @return GraceDownFlag 优雅缩容开关
                     * 
                     */
                    bool GetGraceDownFlag() const;

                    /**
                     * 设置优雅缩容开关
                     * @param _graceDownFlag 优雅缩容开关
                     * 
                     */
                    void SetGraceDownFlag(const bool& _graceDownFlag);

                    /**
                     * 判断参数 GraceDownFlag 是否已赋值
                     * @return GraceDownFlag 是否已赋值
                     * 
                     */
                    bool GraceDownFlagHasBeenSet() const;

                    /**
                     * 获取优雅缩容等待时间
                     * @return GraceDownTime 优雅缩容等待时间
                     * 
                     */
                    int64_t GetGraceDownTime() const;

                    /**
                     * 设置优雅缩容等待时间
                     * @param _graceDownTime 优雅缩容等待时间
                     * 
                     */
                    void SetGraceDownTime(const int64_t& _graceDownTime);

                    /**
                     * 判断参数 GraceDownTime 是否已赋值
                     * @return GraceDownTime 是否已赋值
                     * 
                     */
                    bool GraceDownTimeHasBeenSet() const;

                    /**
                     * 获取绑定标签列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Tags 绑定标签列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置绑定标签列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tags 绑定标签列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTags(const std::vector<Tag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取预设配置组
                     * @return ConfigGroupAssigned 预设配置组
                     * 
                     */
                    std::string GetConfigGroupAssigned() const;

                    /**
                     * 设置预设配置组
                     * @param _configGroupAssigned 预设配置组
                     * 
                     */
                    void SetConfigGroupAssigned(const std::string& _configGroupAssigned);

                    /**
                     * 判断参数 ConfigGroupAssigned 是否已赋值
                     * @return ConfigGroupAssigned 是否已赋值
                     * 
                     */
                    bool ConfigGroupAssignedHasBeenSet() const;

                    /**
                     * 获取扩容资源计算方法，"DEFAULT","INSTANCE", "CPU", "MEMORYGB"。
"DEFAULT"表示默认方式，与"INSTANCE"意义相同。
"INSTANCE"表示按照节点计算，默认方式。
"CPU"表示按照机器的核数计算。
"MEMORYGB"表示按照机器内存数计算。
                     * @return MeasureMethod 扩容资源计算方法，"DEFAULT","INSTANCE", "CPU", "MEMORYGB"。
"DEFAULT"表示默认方式，与"INSTANCE"意义相同。
"INSTANCE"表示按照节点计算，默认方式。
"CPU"表示按照机器的核数计算。
"MEMORYGB"表示按照机器内存数计算。
                     * 
                     */
                    std::string GetMeasureMethod() const;

                    /**
                     * 设置扩容资源计算方法，"DEFAULT","INSTANCE", "CPU", "MEMORYGB"。
"DEFAULT"表示默认方式，与"INSTANCE"意义相同。
"INSTANCE"表示按照节点计算，默认方式。
"CPU"表示按照机器的核数计算。
"MEMORYGB"表示按照机器内存数计算。
                     * @param _measureMethod 扩容资源计算方法，"DEFAULT","INSTANCE", "CPU", "MEMORYGB"。
"DEFAULT"表示默认方式，与"INSTANCE"意义相同。
"INSTANCE"表示按照节点计算，默认方式。
"CPU"表示按照机器的核数计算。
"MEMORYGB"表示按照机器内存数计算。
                     * 
                     */
                    void SetMeasureMethod(const std::string& _measureMethod);

                    /**
                     * 判断参数 MeasureMethod 是否已赋值
                     * @return MeasureMethod 是否已赋值
                     * 
                     */
                    bool MeasureMethodHasBeenSet() const;

                    /**
                     * 获取销毁策略, "DEFAULT",默认销毁策略，由缩容规则触发缩容，"TIMING"表示定时销毁
                     * @return TerminatePolicy 销毁策略, "DEFAULT",默认销毁策略，由缩容规则触发缩容，"TIMING"表示定时销毁
                     * 
                     */
                    std::string GetTerminatePolicy() const;

                    /**
                     * 设置销毁策略, "DEFAULT",默认销毁策略，由缩容规则触发缩容，"TIMING"表示定时销毁
                     * @param _terminatePolicy 销毁策略, "DEFAULT",默认销毁策略，由缩容规则触发缩容，"TIMING"表示定时销毁
                     * 
                     */
                    void SetTerminatePolicy(const std::string& _terminatePolicy);

                    /**
                     * 判断参数 TerminatePolicy 是否已赋值
                     * @return TerminatePolicy 是否已赋值
                     * 
                     */
                    bool TerminatePolicyHasBeenSet() const;

                    /**
                     * 获取最长使用时间， 秒数，最短1小时，最长24小时
                     * @return MaxUse 最长使用时间， 秒数，最短1小时，最长24小时
                     * 
                     */
                    int64_t GetMaxUse() const;

                    /**
                     * 设置最长使用时间， 秒数，最短1小时，最长24小时
                     * @param _maxUse 最长使用时间， 秒数，最短1小时，最长24小时
                     * 
                     */
                    void SetMaxUse(const int64_t& _maxUse);

                    /**
                     * 判断参数 MaxUse 是否已赋值
                     * @return MaxUse 是否已赋值
                     * 
                     */
                    bool MaxUseHasBeenSet() const;

                    /**
                     * 获取节点部署服务列表。部署服务仅填写HDFS、YARN。[组件名对应的映射关系表](https://cloud.tencent.com/document/product/589/98760)
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SoftDeployInfo 节点部署服务列表。部署服务仅填写HDFS、YARN。[组件名对应的映射关系表](https://cloud.tencent.com/document/product/589/98760)
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<int64_t> GetSoftDeployInfo() const;

                    /**
                     * 设置节点部署服务列表。部署服务仅填写HDFS、YARN。[组件名对应的映射关系表](https://cloud.tencent.com/document/product/589/98760)
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _softDeployInfo 节点部署服务列表。部署服务仅填写HDFS、YARN。[组件名对应的映射关系表](https://cloud.tencent.com/document/product/589/98760)
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSoftDeployInfo(const std::vector<int64_t>& _softDeployInfo);

                    /**
                     * 判断参数 SoftDeployInfo 是否已赋值
                     * @return SoftDeployInfo 是否已赋值
                     * 
                     */
                    bool SoftDeployInfoHasBeenSet() const;

                    /**
                     * 获取启动进程列表。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ServiceNodeInfo 启动进程列表。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<int64_t> GetServiceNodeInfo() const;

                    /**
                     * 设置启动进程列表。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _serviceNodeInfo 启动进程列表。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetServiceNodeInfo(const std::vector<int64_t>& _serviceNodeInfo);

                    /**
                     * 判断参数 ServiceNodeInfo 是否已赋值
                     * @return ServiceNodeInfo 是否已赋值
                     * 
                     */
                    bool ServiceNodeInfoHasBeenSet() const;

                    /**
                     * 获取补偿扩容，0表示不开启，1表示开启
                     * @return CompensateFlag 补偿扩容，0表示不开启，1表示开启
                     * 
                     */
                    int64_t GetCompensateFlag() const;

                    /**
                     * 设置补偿扩容，0表示不开启，1表示开启
                     * @param _compensateFlag 补偿扩容，0表示不开启，1表示开启
                     * 
                     */
                    void SetCompensateFlag(const int64_t& _compensateFlag);

                    /**
                     * 判断参数 CompensateFlag 是否已赋值
                     * @return CompensateFlag 是否已赋值
                     * 
                     */
                    bool CompensateFlagHasBeenSet() const;

                    /**
                     * 获取伸缩组id
                     * @return GroupId 伸缩组id
                     * 
                     */
                    int64_t GetGroupId() const;

                    /**
                     * 设置伸缩组id
                     * @param _groupId 伸缩组id
                     * 
                     */
                    void SetGroupId(const int64_t& _groupId);

                    /**
                     * 判断参数 GroupId 是否已赋值
                     * @return GroupId 是否已赋值
                     * 
                     */
                    bool GroupIdHasBeenSet() const;

                    /**
                     * 获取优雅缩容业务pod标签，当node不存在上述pod或超过优雅缩容时间时，缩容节点
                     * @return GraceDownLabel 优雅缩容业务pod标签，当node不存在上述pod或超过优雅缩容时间时，缩容节点
                     * 
                     */
                    std::vector<TkeLabel> GetGraceDownLabel() const;

                    /**
                     * 设置优雅缩容业务pod标签，当node不存在上述pod或超过优雅缩容时间时，缩容节点
                     * @param _graceDownLabel 优雅缩容业务pod标签，当node不存在上述pod或超过优雅缩容时间时，缩容节点
                     * 
                     */
                    void SetGraceDownLabel(const std::vector<TkeLabel>& _graceDownLabel);

                    /**
                     * 判断参数 GraceDownLabel 是否已赋值
                     * @return GraceDownLabel 是否已赋值
                     * 
                     */
                    bool GraceDownLabelHasBeenSet() const;

                private:

                    /**
                     * 策略名字，集群内唯一。
                     */
                    std::string m_strategyName;
                    bool m_strategyNameHasBeenSet;

                    /**
                     * 策略触发后的冷却时间，该段时间内，将不能触发弹性扩缩容。
                     */
                    uint64_t m_intervalTime;
                    bool m_intervalTimeHasBeenSet;

                    /**
                     * 扩缩容动作，1表示扩容，2表示缩容。
                     */
                    uint64_t m_scaleAction;
                    bool m_scaleActionHasBeenSet;

                    /**
                     * 扩缩容数量。
                     */
                    uint64_t m_scaleNum;
                    bool m_scaleNumHasBeenSet;

                    /**
                     * 规则状态，1表示有效，2表示无效，3表示暂停。必须填写
                     */
                    uint64_t m_strategyStatus;
                    bool m_strategyStatusHasBeenSet;

                    /**
                     * 规则优先级，越小越高。
                     */
                    uint64_t m_priority;
                    bool m_priorityHasBeenSet;

                    /**
                     * 当多条规则同时触发，其中某些未真正执行时，在该时间范围内，将会重试。
                     */
                    uint64_t m_retryValidTime;
                    bool m_retryValidTimeHasBeenSet;

                    /**
                     * 时间扩缩容重复策略
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    RepeatStrategy m_repeatStrategy;
                    bool m_repeatStrategyHasBeenSet;

                    /**
                     * 策略唯一ID。
                     */
                    uint64_t m_strategyId;
                    bool m_strategyIdHasBeenSet;

                    /**
                     * 优雅缩容开关
                     */
                    bool m_graceDownFlag;
                    bool m_graceDownFlagHasBeenSet;

                    /**
                     * 优雅缩容等待时间
                     */
                    int64_t m_graceDownTime;
                    bool m_graceDownTimeHasBeenSet;

                    /**
                     * 绑定标签列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * 预设配置组
                     */
                    std::string m_configGroupAssigned;
                    bool m_configGroupAssignedHasBeenSet;

                    /**
                     * 扩容资源计算方法，"DEFAULT","INSTANCE", "CPU", "MEMORYGB"。
"DEFAULT"表示默认方式，与"INSTANCE"意义相同。
"INSTANCE"表示按照节点计算，默认方式。
"CPU"表示按照机器的核数计算。
"MEMORYGB"表示按照机器内存数计算。
                     */
                    std::string m_measureMethod;
                    bool m_measureMethodHasBeenSet;

                    /**
                     * 销毁策略, "DEFAULT",默认销毁策略，由缩容规则触发缩容，"TIMING"表示定时销毁
                     */
                    std::string m_terminatePolicy;
                    bool m_terminatePolicyHasBeenSet;

                    /**
                     * 最长使用时间， 秒数，最短1小时，最长24小时
                     */
                    int64_t m_maxUse;
                    bool m_maxUseHasBeenSet;

                    /**
                     * 节点部署服务列表。部署服务仅填写HDFS、YARN。[组件名对应的映射关系表](https://cloud.tencent.com/document/product/589/98760)
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<int64_t> m_softDeployInfo;
                    bool m_softDeployInfoHasBeenSet;

                    /**
                     * 启动进程列表。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<int64_t> m_serviceNodeInfo;
                    bool m_serviceNodeInfoHasBeenSet;

                    /**
                     * 补偿扩容，0表示不开启，1表示开启
                     */
                    int64_t m_compensateFlag;
                    bool m_compensateFlagHasBeenSet;

                    /**
                     * 伸缩组id
                     */
                    int64_t m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * 优雅缩容业务pod标签，当node不存在上述pod或超过优雅缩容时间时，缩容节点
                     */
                    std::vector<TkeLabel> m_graceDownLabel;
                    bool m_graceDownLabelHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_TIMEAUTOSCALESTRATEGY_H_
