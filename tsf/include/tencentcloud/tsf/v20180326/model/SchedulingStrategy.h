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

#ifndef TENCENTCLOUD_TSF_V20180326_MODEL_SCHEDULINGSTRATEGY_H_
#define TENCENTCLOUD_TSF_V20180326_MODEL_SCHEDULINGSTRATEGY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tsf/v20180326/model/CommonOption.h>
#include <tencentcloud/tsf/v20180326/model/AvailableZoneScatterScheduleRule.h>
#include <tencentcloud/tsf/v20180326/model/CustomPodSchedule.h>
#include <tencentcloud/tsf/v20180326/model/CustomTolerateSchedule.h>


namespace TencentCloud
{
    namespace Tsf
    {
        namespace V20180326
        {
            namespace Model
            {
                /**
                * tsf 容器集群节点调度策略
                */
                class SchedulingStrategy : public AbstractModel
                {
                public:
                    SchedulingStrategy();
                    ~SchedulingStrategy() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取NONE：不使用调度策略；CROSS_AZ：跨可用区部署
                     * @return Type NONE：不使用调度策略；CROSS_AZ：跨可用区部署
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置NONE：不使用调度策略；CROSS_AZ：跨可用区部署
                     * @param _type NONE：不使用调度策略；CROSS_AZ：跨可用区部署
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取-
                     * @return NodeScheduleStrategyType -
                     * 
                     */
                    std::string GetNodeScheduleStrategyType() const;

                    /**
                     * 设置-
                     * @param _nodeScheduleStrategyType -
                     * 
                     */
                    void SetNodeScheduleStrategyType(const std::string& _nodeScheduleStrategyType);

                    /**
                     * 判断参数 NodeScheduleStrategyType 是否已赋值
                     * @return NodeScheduleStrategyType 是否已赋值
                     * 
                     */
                    bool NodeScheduleStrategyTypeHasBeenSet() const;

                    /**
                     * 获取-
                     * @return NodeScheduleOptions -
                     * 
                     */
                    std::vector<CommonOption> GetNodeScheduleOptions() const;

                    /**
                     * 设置-
                     * @param _nodeScheduleOptions -
                     * 
                     */
                    void SetNodeScheduleOptions(const std::vector<CommonOption>& _nodeScheduleOptions);

                    /**
                     * 判断参数 NodeScheduleOptions 是否已赋值
                     * @return NodeScheduleOptions 是否已赋值
                     * 
                     */
                    bool NodeScheduleOptionsHasBeenSet() const;

                    /**
                     * 获取-
                     * @return StrongAffinityList -
                     * 
                     */
                    std::vector<CommonOption> GetStrongAffinityList() const;

                    /**
                     * 设置-
                     * @param _strongAffinityList -
                     * 
                     */
                    void SetStrongAffinityList(const std::vector<CommonOption>& _strongAffinityList);

                    /**
                     * 判断参数 StrongAffinityList 是否已赋值
                     * @return StrongAffinityList 是否已赋值
                     * 
                     */
                    bool StrongAffinityListHasBeenSet() const;

                    /**
                     * 获取-
                     * @return WeakAffinityList -
                     * 
                     */
                    std::vector<CommonOption> GetWeakAffinityList() const;

                    /**
                     * 设置-
                     * @param _weakAffinityList -
                     * 
                     */
                    void SetWeakAffinityList(const std::vector<CommonOption>& _weakAffinityList);

                    /**
                     * 判断参数 WeakAffinityList 是否已赋值
                     * @return WeakAffinityList 是否已赋值
                     * 
                     */
                    bool WeakAffinityListHasBeenSet() const;

                    /**
                     * 获取-
                     * @return WeakAffinityWeight -
                     * 
                     */
                    int64_t GetWeakAffinityWeight() const;

                    /**
                     * 设置-
                     * @param _weakAffinityWeight -
                     * 
                     */
                    void SetWeakAffinityWeight(const int64_t& _weakAffinityWeight);

                    /**
                     * 判断参数 WeakAffinityWeight 是否已赋值
                     * @return WeakAffinityWeight 是否已赋值
                     * 
                     */
                    bool WeakAffinityWeightHasBeenSet() const;

                    /**
                     * 获取-
                     * @return AvailableZoneScatterScheduleType -
                     * 
                     */
                    std::string GetAvailableZoneScatterScheduleType() const;

                    /**
                     * 设置-
                     * @param _availableZoneScatterScheduleType -
                     * 
                     */
                    void SetAvailableZoneScatterScheduleType(const std::string& _availableZoneScatterScheduleType);

                    /**
                     * 判断参数 AvailableZoneScatterScheduleType 是否已赋值
                     * @return AvailableZoneScatterScheduleType 是否已赋值
                     * 
                     */
                    bool AvailableZoneScatterScheduleTypeHasBeenSet() const;

                    /**
                     * 获取-
                     * @return AvailableZoneScatterScheduleRules -
                     * 
                     */
                    std::vector<AvailableZoneScatterScheduleRule> GetAvailableZoneScatterScheduleRules() const;

                    /**
                     * 设置-
                     * @param _availableZoneScatterScheduleRules -
                     * 
                     */
                    void SetAvailableZoneScatterScheduleRules(const std::vector<AvailableZoneScatterScheduleRule>& _availableZoneScatterScheduleRules);

                    /**
                     * 判断参数 AvailableZoneScatterScheduleRules 是否已赋值
                     * @return AvailableZoneScatterScheduleRules 是否已赋值
                     * 
                     */
                    bool AvailableZoneScatterScheduleRulesHasBeenSet() const;

                    /**
                     * 获取-
                     * @return PodScheduleStrategyType -
                     * 
                     */
                    std::string GetPodScheduleStrategyType() const;

                    /**
                     * 设置-
                     * @param _podScheduleStrategyType -
                     * 
                     */
                    void SetPodScheduleStrategyType(const std::string& _podScheduleStrategyType);

                    /**
                     * 判断参数 PodScheduleStrategyType 是否已赋值
                     * @return PodScheduleStrategyType 是否已赋值
                     * 
                     */
                    bool PodScheduleStrategyTypeHasBeenSet() const;

                    /**
                     * 获取-
                     * @return CustomPodSchedule -
                     * 
                     */
                    CustomPodSchedule GetCustomPodSchedule() const;

                    /**
                     * 设置-
                     * @param _customPodSchedule -
                     * 
                     */
                    void SetCustomPodSchedule(const CustomPodSchedule& _customPodSchedule);

                    /**
                     * 判断参数 CustomPodSchedule 是否已赋值
                     * @return CustomPodSchedule 是否已赋值
                     * 
                     */
                    bool CustomPodScheduleHasBeenSet() const;

                    /**
                     * 获取-
                     * @return TolerateScheduleType -
                     * 
                     */
                    std::string GetTolerateScheduleType() const;

                    /**
                     * 设置-
                     * @param _tolerateScheduleType -
                     * 
                     */
                    void SetTolerateScheduleType(const std::string& _tolerateScheduleType);

                    /**
                     * 判断参数 TolerateScheduleType 是否已赋值
                     * @return TolerateScheduleType 是否已赋值
                     * 
                     */
                    bool TolerateScheduleTypeHasBeenSet() const;

                    /**
                     * 获取-
                     * @return CustomTolerateSchedules -
                     * 
                     */
                    std::vector<CustomTolerateSchedule> GetCustomTolerateSchedules() const;

                    /**
                     * 设置-
                     * @param _customTolerateSchedules -
                     * 
                     */
                    void SetCustomTolerateSchedules(const std::vector<CustomTolerateSchedule>& _customTolerateSchedules);

                    /**
                     * 判断参数 CustomTolerateSchedules 是否已赋值
                     * @return CustomTolerateSchedules 是否已赋值
                     * 
                     */
                    bool CustomTolerateSchedulesHasBeenSet() const;

                private:

                    /**
                     * NONE：不使用调度策略；CROSS_AZ：跨可用区部署
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * -
                     */
                    std::string m_nodeScheduleStrategyType;
                    bool m_nodeScheduleStrategyTypeHasBeenSet;

                    /**
                     * -
                     */
                    std::vector<CommonOption> m_nodeScheduleOptions;
                    bool m_nodeScheduleOptionsHasBeenSet;

                    /**
                     * -
                     */
                    std::vector<CommonOption> m_strongAffinityList;
                    bool m_strongAffinityListHasBeenSet;

                    /**
                     * -
                     */
                    std::vector<CommonOption> m_weakAffinityList;
                    bool m_weakAffinityListHasBeenSet;

                    /**
                     * -
                     */
                    int64_t m_weakAffinityWeight;
                    bool m_weakAffinityWeightHasBeenSet;

                    /**
                     * -
                     */
                    std::string m_availableZoneScatterScheduleType;
                    bool m_availableZoneScatterScheduleTypeHasBeenSet;

                    /**
                     * -
                     */
                    std::vector<AvailableZoneScatterScheduleRule> m_availableZoneScatterScheduleRules;
                    bool m_availableZoneScatterScheduleRulesHasBeenSet;

                    /**
                     * -
                     */
                    std::string m_podScheduleStrategyType;
                    bool m_podScheduleStrategyTypeHasBeenSet;

                    /**
                     * -
                     */
                    CustomPodSchedule m_customPodSchedule;
                    bool m_customPodScheduleHasBeenSet;

                    /**
                     * -
                     */
                    std::string m_tolerateScheduleType;
                    bool m_tolerateScheduleTypeHasBeenSet;

                    /**
                     * -
                     */
                    std::vector<CustomTolerateSchedule> m_customTolerateSchedules;
                    bool m_customTolerateSchedulesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSF_V20180326_MODEL_SCHEDULINGSTRATEGY_H_
