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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_AUTOSCALERESOURCECONF_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_AUTOSCALERESOURCECONF_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/emr/v20190103/model/AutoScaleGroupAdvanceAttrs.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * 弹性扩缩容规格配置
                */
                class AutoScaleResourceConf : public AbstractModel
                {
                public:
                    AutoScaleResourceConf();
                    ~AutoScaleResourceConf() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取配置ID。
                     * @return Id 配置ID。
                     * 
                     */
                    int64_t GetId() const;

                    /**
                     * 设置配置ID。
                     * @param _id 配置ID。
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
                     * 获取集群实例ID。
                     * @return ClusterId 集群实例ID。
                     * 
                     */
                    int64_t GetClusterId() const;

                    /**
                     * 设置集群实例ID。
                     * @param _clusterId 集群实例ID。
                     * 
                     */
                    void SetClusterId(const int64_t& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     * 
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取自动扩缩容保留最小实例数。
                     * @return ScaleLowerBound 自动扩缩容保留最小实例数。
                     * 
                     */
                    int64_t GetScaleLowerBound() const;

                    /**
                     * 设置自动扩缩容保留最小实例数。
                     * @param _scaleLowerBound 自动扩缩容保留最小实例数。
                     * 
                     */
                    void SetScaleLowerBound(const int64_t& _scaleLowerBound);

                    /**
                     * 判断参数 ScaleLowerBound 是否已赋值
                     * @return ScaleLowerBound 是否已赋值
                     * 
                     */
                    bool ScaleLowerBoundHasBeenSet() const;

                    /**
                     * 获取自动扩缩容最大实例数。
                     * @return ScaleUpperBound 自动扩缩容最大实例数。
                     * 
                     */
                    int64_t GetScaleUpperBound() const;

                    /**
                     * 设置自动扩缩容最大实例数。
                     * @param _scaleUpperBound 自动扩缩容最大实例数。
                     * 
                     */
                    void SetScaleUpperBound(const int64_t& _scaleUpperBound);

                    /**
                     * 判断参数 ScaleUpperBound 是否已赋值
                     * @return ScaleUpperBound 是否已赋值
                     * 
                     */
                    bool ScaleUpperBoundHasBeenSet() const;

                    /**
                     * 获取扩容规则类型，1为按负载指标扩容规则，2为按时间扩容规则
                     * @return StrategyType 扩容规则类型，1为按负载指标扩容规则，2为按时间扩容规则
                     * 
                     */
                    int64_t GetStrategyType() const;

                    /**
                     * 设置扩容规则类型，1为按负载指标扩容规则，2为按时间扩容规则
                     * @param _strategyType 扩容规则类型，1为按负载指标扩容规则，2为按时间扩容规则
                     * 
                     */
                    void SetStrategyType(const int64_t& _strategyType);

                    /**
                     * 判断参数 StrategyType 是否已赋值
                     * @return StrategyType 是否已赋值
                     * 
                     */
                    bool StrategyTypeHasBeenSet() const;

                    /**
                     * 获取下次可扩容时间。
                     * @return NextTimeCanScale 下次可扩容时间。
                     * 
                     */
                    uint64_t GetNextTimeCanScale() const;

                    /**
                     * 设置下次可扩容时间。
                     * @param _nextTimeCanScale 下次可扩容时间。
                     * 
                     */
                    void SetNextTimeCanScale(const uint64_t& _nextTimeCanScale);

                    /**
                     * 判断参数 NextTimeCanScale 是否已赋值
                     * @return NextTimeCanScale 是否已赋值
                     * 
                     */
                    bool NextTimeCanScaleHasBeenSet() const;

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
                     * 获取"CVM"表示规格全部使用CVM相关类型，"POD"表示规格使用容器相关类型,默认为"CVM"。
                     * @return HardwareType "CVM"表示规格全部使用CVM相关类型，"POD"表示规格使用容器相关类型,默认为"CVM"。
                     * 
                     */
                    std::string GetHardwareType() const;

                    /**
                     * 设置"CVM"表示规格全部使用CVM相关类型，"POD"表示规格使用容器相关类型,默认为"CVM"。
                     * @param _hardwareType "CVM"表示规格全部使用CVM相关类型，"POD"表示规格使用容器相关类型,默认为"CVM"。
                     * 
                     */
                    void SetHardwareType(const std::string& _hardwareType);

                    /**
                     * 判断参数 HardwareType 是否已赋值
                     * @return HardwareType 是否已赋值
                     * 
                     */
                    bool HardwareTypeHasBeenSet() const;

                    /**
                     * 获取"POSTPAY"表示只使用按量计费，"SPOT_FIRST"表示竞价实例优先，只有HardwareType为"HOST"时支持竞价实例优先，"POD"只支持纯按量计费。
                     * @return PayMode "POSTPAY"表示只使用按量计费，"SPOT_FIRST"表示竞价实例优先，只有HardwareType为"HOST"时支持竞价实例优先，"POD"只支持纯按量计费。
                     * 
                     */
                    std::string GetPayMode() const;

                    /**
                     * 设置"POSTPAY"表示只使用按量计费，"SPOT_FIRST"表示竞价实例优先，只有HardwareType为"HOST"时支持竞价实例优先，"POD"只支持纯按量计费。
                     * @param _payMode "POSTPAY"表示只使用按量计费，"SPOT_FIRST"表示竞价实例优先，只有HardwareType为"HOST"时支持竞价实例优先，"POD"只支持纯按量计费。
                     * 
                     */
                    void SetPayMode(const std::string& _payMode);

                    /**
                     * 判断参数 PayMode 是否已赋值
                     * @return PayMode 是否已赋值
                     * 
                     */
                    bool PayModeHasBeenSet() const;

                    /**
                     * 获取竞价实例优先的场景下，按量计费资源数量的最低百分比，整数
                     * @return PostPayPercentMin 竞价实例优先的场景下，按量计费资源数量的最低百分比，整数
                     * 
                     */
                    int64_t GetPostPayPercentMin() const;

                    /**
                     * 设置竞价实例优先的场景下，按量计费资源数量的最低百分比，整数
                     * @param _postPayPercentMin 竞价实例优先的场景下，按量计费资源数量的最低百分比，整数
                     * 
                     */
                    void SetPostPayPercentMin(const int64_t& _postPayPercentMin);

                    /**
                     * 判断参数 PostPayPercentMin 是否已赋值
                     * @return PostPayPercentMin 是否已赋值
                     * 
                     */
                    bool PostPayPercentMinHasBeenSet() const;

                    /**
                     * 获取预设资源类型为HOST时，支持勾选“资源不足时切换POD”；支持取消勾选；0表示默认不勾选（0），1表示勾选
                     * @return ChangeToPod 预设资源类型为HOST时，支持勾选“资源不足时切换POD”；支持取消勾选；0表示默认不勾选（0），1表示勾选
                     * 
                     */
                    int64_t GetChangeToPod() const;

                    /**
                     * 设置预设资源类型为HOST时，支持勾选“资源不足时切换POD”；支持取消勾选；0表示默认不勾选（0），1表示勾选
                     * @param _changeToPod 预设资源类型为HOST时，支持勾选“资源不足时切换POD”；支持取消勾选；0表示默认不勾选（0），1表示勾选
                     * 
                     */
                    void SetChangeToPod(const int64_t& _changeToPod);

                    /**
                     * 判断参数 ChangeToPod 是否已赋值
                     * @return ChangeToPod 是否已赋值
                     * 
                     */
                    bool ChangeToPodHasBeenSet() const;

                    /**
                     * 获取伸缩组名
                     * @return GroupName 伸缩组名
                     * 
                     */
                    std::string GetGroupName() const;

                    /**
                     * 设置伸缩组名
                     * @param _groupName 伸缩组名
                     * 
                     */
                    void SetGroupName(const std::string& _groupName);

                    /**
                     * 判断参数 GroupName 是否已赋值
                     * @return GroupName 是否已赋值
                     * 
                     */
                    bool GroupNameHasBeenSet() const;

                    /**
                     * 获取标签
                     * @return YarnNodeLabel 标签
                     * 
                     */
                    std::string GetYarnNodeLabel() const;

                    /**
                     * 设置标签
                     * @param _yarnNodeLabel 标签
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
                     * 获取伸缩组状态
                     * @return GroupStatus 伸缩组状态
                     * 
                     */
                    int64_t GetGroupStatus() const;

                    /**
                     * 设置伸缩组状态
                     * @param _groupStatus 伸缩组状态
                     * 
                     */
                    void SetGroupStatus(const int64_t& _groupStatus);

                    /**
                     * 判断参数 GroupStatus 是否已赋值
                     * @return GroupStatus 是否已赋值
                     * 
                     */
                    bool GroupStatusHasBeenSet() const;

                    /**
                     * 获取并行伸缩 0关闭；1开启
                     * @return Parallel 并行伸缩 0关闭；1开启
                     * 
                     */
                    int64_t GetParallel() const;

                    /**
                     * 设置并行伸缩 0关闭；1开启
                     * @param _parallel 并行伸缩 0关闭；1开启
                     * 
                     */
                    void SetParallel(const int64_t& _parallel);

                    /**
                     * 判断参数 Parallel 是否已赋值
                     * @return Parallel 是否已赋值
                     * 
                     */
                    bool ParallelHasBeenSet() const;

                    /**
                     * 获取是否支持MNode
                     * @return EnableMNode 是否支持MNode
                     * 
                     */
                    int64_t GetEnableMNode() const;

                    /**
                     * 设置是否支持MNode
                     * @param _enableMNode 是否支持MNode
                     * 
                     */
                    void SetEnableMNode(const int64_t& _enableMNode);

                    /**
                     * 判断参数 EnableMNode 是否已赋值
                     * @return EnableMNode 是否已赋值
                     * 
                     */
                    bool EnableMNodeHasBeenSet() const;

                    /**
                     * 获取伸缩组更多设置
                     * @return ExtraAdvanceAttrs 伸缩组更多设置
                     * 
                     */
                    AutoScaleGroupAdvanceAttrs GetExtraAdvanceAttrs() const;

                    /**
                     * 设置伸缩组更多设置
                     * @param _extraAdvanceAttrs 伸缩组更多设置
                     * 
                     */
                    void SetExtraAdvanceAttrs(const AutoScaleGroupAdvanceAttrs& _extraAdvanceAttrs);

                    /**
                     * 判断参数 ExtraAdvanceAttrs 是否已赋值
                     * @return ExtraAdvanceAttrs 是否已赋值
                     * 
                     */
                    bool ExtraAdvanceAttrsHasBeenSet() const;

                private:

                    /**
                     * 配置ID。
                     */
                    int64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 集群实例ID。
                     */
                    int64_t m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * 自动扩缩容保留最小实例数。
                     */
                    int64_t m_scaleLowerBound;
                    bool m_scaleLowerBoundHasBeenSet;

                    /**
                     * 自动扩缩容最大实例数。
                     */
                    int64_t m_scaleUpperBound;
                    bool m_scaleUpperBoundHasBeenSet;

                    /**
                     * 扩容规则类型，1为按负载指标扩容规则，2为按时间扩容规则
                     */
                    int64_t m_strategyType;
                    bool m_strategyTypeHasBeenSet;

                    /**
                     * 下次可扩容时间。
                     */
                    uint64_t m_nextTimeCanScale;
                    bool m_nextTimeCanScaleHasBeenSet;

                    /**
                     * 优雅缩容开关
                     */
                    bool m_graceDownFlag;
                    bool m_graceDownFlagHasBeenSet;

                    /**
                     * "CVM"表示规格全部使用CVM相关类型，"POD"表示规格使用容器相关类型,默认为"CVM"。
                     */
                    std::string m_hardwareType;
                    bool m_hardwareTypeHasBeenSet;

                    /**
                     * "POSTPAY"表示只使用按量计费，"SPOT_FIRST"表示竞价实例优先，只有HardwareType为"HOST"时支持竞价实例优先，"POD"只支持纯按量计费。
                     */
                    std::string m_payMode;
                    bool m_payModeHasBeenSet;

                    /**
                     * 竞价实例优先的场景下，按量计费资源数量的最低百分比，整数
                     */
                    int64_t m_postPayPercentMin;
                    bool m_postPayPercentMinHasBeenSet;

                    /**
                     * 预设资源类型为HOST时，支持勾选“资源不足时切换POD”；支持取消勾选；0表示默认不勾选（0），1表示勾选
                     */
                    int64_t m_changeToPod;
                    bool m_changeToPodHasBeenSet;

                    /**
                     * 伸缩组名
                     */
                    std::string m_groupName;
                    bool m_groupNameHasBeenSet;

                    /**
                     * 标签
                     */
                    std::string m_yarnNodeLabel;
                    bool m_yarnNodeLabelHasBeenSet;

                    /**
                     * 伸缩组状态
                     */
                    int64_t m_groupStatus;
                    bool m_groupStatusHasBeenSet;

                    /**
                     * 并行伸缩 0关闭；1开启
                     */
                    int64_t m_parallel;
                    bool m_parallelHasBeenSet;

                    /**
                     * 是否支持MNode
                     */
                    int64_t m_enableMNode;
                    bool m_enableMNodeHasBeenSet;

                    /**
                     * 伸缩组更多设置
                     */
                    AutoScaleGroupAdvanceAttrs m_extraAdvanceAttrs;
                    bool m_extraAdvanceAttrsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_AUTOSCALERESOURCECONF_H_
