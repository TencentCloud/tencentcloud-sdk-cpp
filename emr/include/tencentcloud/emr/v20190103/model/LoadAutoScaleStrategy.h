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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_LOADAUTOSCALESTRATEGY_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_LOADAUTOSCALESTRATEGY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/emr/v20190103/model/Tag.h>
#include <tencentcloud/emr/v20190103/model/LoadMetricsConditions.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * 自动扩缩容基于负载指标的规则
                */
                class LoadAutoScaleStrategy : public AbstractModel
                {
                public:
                    LoadAutoScaleStrategy();
                    ~LoadAutoScaleStrategy() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取规则ID。
                     * @return StrategyId 规则ID。
                     * 
                     */
                    int64_t GetStrategyId() const;

                    /**
                     * 设置规则ID。
                     * @param _strategyId 规则ID。
                     * 
                     */
                    void SetStrategyId(const int64_t& _strategyId);

                    /**
                     * 判断参数 StrategyId 是否已赋值
                     * @return StrategyId 是否已赋值
                     * 
                     */
                    bool StrategyIdHasBeenSet() const;

                    /**
                     * 获取规则名称。
                     * @return StrategyName 规则名称。
                     * 
                     */
                    std::string GetStrategyName() const;

                    /**
                     * 设置规则名称。
                     * @param _strategyName 规则名称。
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
                     * 获取规则生效冷却时间。
                     * @return CalmDownTime 规则生效冷却时间。
                     * 
                     */
                    int64_t GetCalmDownTime() const;

                    /**
                     * 设置规则生效冷却时间。
                     * @param _calmDownTime 规则生效冷却时间。
                     * 
                     */
                    void SetCalmDownTime(const int64_t& _calmDownTime);

                    /**
                     * 判断参数 CalmDownTime 是否已赋值
                     * @return CalmDownTime 是否已赋值
                     * 
                     */
                    bool CalmDownTimeHasBeenSet() const;

                    /**
                     * 获取扩缩容动作，1表示扩容，2表示缩容。
                     * @return ScaleAction 扩缩容动作，1表示扩容，2表示缩容。
                     * 
                     */
                    int64_t GetScaleAction() const;

                    /**
                     * 设置扩缩容动作，1表示扩容，2表示缩容。
                     * @param _scaleAction 扩缩容动作，1表示扩容，2表示缩容。
                     * 
                     */
                    void SetScaleAction(const int64_t& _scaleAction);

                    /**
                     * 判断参数 ScaleAction 是否已赋值
                     * @return ScaleAction 是否已赋值
                     * 
                     */
                    bool ScaleActionHasBeenSet() const;

                    /**
                     * 获取每次规则生效时的扩缩容数量。
                     * @return ScaleNum 每次规则生效时的扩缩容数量。
                     * 
                     */
                    int64_t GetScaleNum() const;

                    /**
                     * 设置每次规则生效时的扩缩容数量。
                     * @param _scaleNum 每次规则生效时的扩缩容数量。
                     * 
                     */
                    void SetScaleNum(const int64_t& _scaleNum);

                    /**
                     * 判断参数 ScaleNum 是否已赋值
                     * @return ScaleNum 是否已赋值
                     * 
                     */
                    bool ScaleNumHasBeenSet() const;

                    /**
                     * 获取指标处理方法，1表示MAX，2表示MIN，3表示AVG。
                     * @return ProcessMethod 指标处理方法，1表示MAX，2表示MIN，3表示AVG。
                     * 
                     */
                    int64_t GetProcessMethod() const;

                    /**
                     * 设置指标处理方法，1表示MAX，2表示MIN，3表示AVG。
                     * @param _processMethod 指标处理方法，1表示MAX，2表示MIN，3表示AVG。
                     * 
                     */
                    void SetProcessMethod(const int64_t& _processMethod);

                    /**
                     * 判断参数 ProcessMethod 是否已赋值
                     * @return ProcessMethod 是否已赋值
                     * 
                     */
                    bool ProcessMethodHasBeenSet() const;

                    /**
                     * 获取规则优先级，添加时无效，默认为自增。
                     * @return Priority 规则优先级，添加时无效，默认为自增。
                     * 
                     */
                    int64_t GetPriority() const;

                    /**
                     * 设置规则优先级，添加时无效，默认为自增。
                     * @param _priority 规则优先级，添加时无效，默认为自增。
                     * 
                     */
                    void SetPriority(const int64_t& _priority);

                    /**
                     * 判断参数 Priority 是否已赋值
                     * @return Priority 是否已赋值
                     * 
                     */
                    bool PriorityHasBeenSet() const;

                    /**
                     * 获取规则状态，1表示启动，3表示禁用。
                     * @return StrategyStatus 规则状态，1表示启动，3表示禁用。
                     * 
                     */
                    int64_t GetStrategyStatus() const;

                    /**
                     * 设置规则状态，1表示启动，3表示禁用。
                     * @param _strategyStatus 规则状态，1表示启动，3表示禁用。
                     * 
                     */
                    void SetStrategyStatus(const int64_t& _strategyStatus);

                    /**
                     * 判断参数 StrategyStatus 是否已赋值
                     * @return StrategyStatus 是否已赋值
                     * 
                     */
                    bool StrategyStatusHasBeenSet() const;

                    /**
                     * 获取规则扩容指定 yarn node label
                     * @return YarnNodeLabel 规则扩容指定 yarn node label
                     * 
                     */
                    std::string GetYarnNodeLabel() const;

                    /**
                     * 设置规则扩容指定 yarn node label
                     * @param _yarnNodeLabel 规则扩容指定 yarn node label
                     * 
                     */
                    void SetYarnNodeLabel(const std::string& _yarnNodeLabel);

                    /**
                     * 判断参数 YarnNodeLabel 是否已赋值
                     * @return YarnNodeLabel 是否已赋值
                     * 
                     */
                    bool YarnNodeLabelHasBeenSet() const;

                    /**
                     * 获取规则生效的有效时间
                     * @return PeriodValid 规则生效的有效时间
                     * 
                     */
                    std::string GetPeriodValid() const;

                    /**
                     * 设置规则生效的有效时间
                     * @param _periodValid 规则生效的有效时间
                     * 
                     */
                    void SetPeriodValid(const std::string& _periodValid);

                    /**
                     * 判断参数 PeriodValid 是否已赋值
                     * @return PeriodValid 是否已赋值
                     * 
                     */
                    bool PeriodValidHasBeenSet() const;

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
                     * 获取节点部署服务列表，例如["HDFS-3.1.2","YARN-3.1.2"]。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SoftDeployDesc 节点部署服务列表，例如["HDFS-3.1.2","YARN-3.1.2"]。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetSoftDeployDesc() const;

                    /**
                     * 设置节点部署服务列表，例如["HDFS-3.1.2","YARN-3.1.2"]。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _softDeployDesc 节点部署服务列表，例如["HDFS-3.1.2","YARN-3.1.2"]。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSoftDeployDesc(const std::vector<std::string>& _softDeployDesc);

                    /**
                     * 判断参数 SoftDeployDesc 是否已赋值
                     * @return SoftDeployDesc 是否已赋值
                     * 
                     */
                    bool SoftDeployDescHasBeenSet() const;

                    /**
                     * 获取启动进程列表，例如["NodeManager"]。
                     * @return ServiceNodeDesc 启动进程列表，例如["NodeManager"]。
                     * 
                     */
                    std::string GetServiceNodeDesc() const;

                    /**
                     * 设置启动进程列表，例如["NodeManager"]。
                     * @param _serviceNodeDesc 启动进程列表，例如["NodeManager"]。
                     * 
                     */
                    void SetServiceNodeDesc(const std::string& _serviceNodeDesc);

                    /**
                     * 判断参数 ServiceNodeDesc 是否已赋值
                     * @return ServiceNodeDesc 是否已赋值
                     * 
                     */
                    bool ServiceNodeDescHasBeenSet() const;

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
                     * 获取多指标触发条件
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LoadMetricsConditions 多指标触发条件
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    LoadMetricsConditions GetLoadMetricsConditions() const;

                    /**
                     * 设置多指标触发条件
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _loadMetricsConditions 多指标触发条件
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLoadMetricsConditions(const LoadMetricsConditions& _loadMetricsConditions);

                    /**
                     * 判断参数 LoadMetricsConditions 是否已赋值
                     * @return LoadMetricsConditions 是否已赋值
                     * 
                     */
                    bool LoadMetricsConditionsHasBeenSet() const;

                    /**
                     * 获取伸缩组Id
                     * @return GroupId 伸缩组Id
                     * 
                     */
                    int64_t GetGroupId() const;

                    /**
                     * 设置伸缩组Id
                     * @param _groupId 伸缩组Id
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
                     * 获取soft例如yarn
                     * @return Soft soft例如yarn
                     * 
                     */
                    std::string GetSoft() const;

                    /**
                     * 设置soft例如yarn
                     * @param _soft soft例如yarn
                     * 
                     */
                    void SetSoft(const std::string& _soft);

                    /**
                     * 判断参数 Soft 是否已赋值
                     * @return Soft 是否已赋值
                     * 
                     */
                    bool SoftHasBeenSet() const;

                private:

                    /**
                     * 规则ID。
                     */
                    int64_t m_strategyId;
                    bool m_strategyIdHasBeenSet;

                    /**
                     * 规则名称。
                     */
                    std::string m_strategyName;
                    bool m_strategyNameHasBeenSet;

                    /**
                     * 规则生效冷却时间。
                     */
                    int64_t m_calmDownTime;
                    bool m_calmDownTimeHasBeenSet;

                    /**
                     * 扩缩容动作，1表示扩容，2表示缩容。
                     */
                    int64_t m_scaleAction;
                    bool m_scaleActionHasBeenSet;

                    /**
                     * 每次规则生效时的扩缩容数量。
                     */
                    int64_t m_scaleNum;
                    bool m_scaleNumHasBeenSet;

                    /**
                     * 指标处理方法，1表示MAX，2表示MIN，3表示AVG。
                     */
                    int64_t m_processMethod;
                    bool m_processMethodHasBeenSet;

                    /**
                     * 规则优先级，添加时无效，默认为自增。
                     */
                    int64_t m_priority;
                    bool m_priorityHasBeenSet;

                    /**
                     * 规则状态，1表示启动，3表示禁用。
                     */
                    int64_t m_strategyStatus;
                    bool m_strategyStatusHasBeenSet;

                    /**
                     * 规则扩容指定 yarn node label
                     */
                    std::string m_yarnNodeLabel;
                    bool m_yarnNodeLabelHasBeenSet;

                    /**
                     * 规则生效的有效时间
                     */
                    std::string m_periodValid;
                    bool m_periodValidHasBeenSet;

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
                     * 节点部署服务列表，例如["HDFS-3.1.2","YARN-3.1.2"]。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_softDeployDesc;
                    bool m_softDeployDescHasBeenSet;

                    /**
                     * 启动进程列表，例如["NodeManager"]。
                     */
                    std::string m_serviceNodeDesc;
                    bool m_serviceNodeDescHasBeenSet;

                    /**
                     * 启动进程列表。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<int64_t> m_serviceNodeInfo;
                    bool m_serviceNodeInfoHasBeenSet;

                    /**
                     * 节点部署服务列表。部署服务仅填写HDFS、YARN。[组件名对应的映射关系表](https://cloud.tencent.com/document/product/589/98760)
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<int64_t> m_softDeployInfo;
                    bool m_softDeployInfoHasBeenSet;

                    /**
                     * 多指标触发条件
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    LoadMetricsConditions m_loadMetricsConditions;
                    bool m_loadMetricsConditionsHasBeenSet;

                    /**
                     * 伸缩组Id
                     */
                    int64_t m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * soft例如yarn
                     */
                    std::string m_soft;
                    bool m_softHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_LOADAUTOSCALESTRATEGY_H_
