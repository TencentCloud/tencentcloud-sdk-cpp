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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_MODIFYAUTOSCALESTRATEGYREQUEST_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_MODIFYAUTOSCALESTRATEGYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/emr/v20190103/model/LoadAutoScaleStrategy.h>
#include <tencentcloud/emr/v20190103/model/TimeAutoScaleStrategy.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * ModifyAutoScaleStrategy请求参数结构体
                */
                class ModifyAutoScaleStrategyRequest : public AbstractModel
                {
                public:
                    ModifyAutoScaleStrategyRequest();
                    ~ModifyAutoScaleStrategyRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例ID。
                     * @return InstanceId 实例ID。
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例ID。
                     * @param _instanceId 实例ID。
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
                     * 获取自动扩缩容规则类型，1表示按负载指标扩缩容，2表示按时间扩缩容。
                     * @return StrategyType 自动扩缩容规则类型，1表示按负载指标扩缩容，2表示按时间扩缩容。
                     * 
                     */
                    int64_t GetStrategyType() const;

                    /**
                     * 设置自动扩缩容规则类型，1表示按负载指标扩缩容，2表示按时间扩缩容。
                     * @param _strategyType 自动扩缩容规则类型，1表示按负载指标扩缩容，2表示按时间扩缩容。
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
                     * 获取按负载扩缩容的指标。
                     * @return LoadAutoScaleStrategies 按负载扩缩容的指标。
                     * 
                     */
                    std::vector<LoadAutoScaleStrategy> GetLoadAutoScaleStrategies() const;

                    /**
                     * 设置按负载扩缩容的指标。
                     * @param _loadAutoScaleStrategies 按负载扩缩容的指标。
                     * 
                     */
                    void SetLoadAutoScaleStrategies(const std::vector<LoadAutoScaleStrategy>& _loadAutoScaleStrategies);

                    /**
                     * 判断参数 LoadAutoScaleStrategies 是否已赋值
                     * @return LoadAutoScaleStrategies 是否已赋值
                     * 
                     */
                    bool LoadAutoScaleStrategiesHasBeenSet() const;

                    /**
                     * 获取按时间扩缩容的规则。
                     * @return TimeAutoScaleStrategies 按时间扩缩容的规则。
                     * 
                     */
                    std::vector<TimeAutoScaleStrategy> GetTimeAutoScaleStrategies() const;

                    /**
                     * 设置按时间扩缩容的规则。
                     * @param _timeAutoScaleStrategies 按时间扩缩容的规则。
                     * 
                     */
                    void SetTimeAutoScaleStrategies(const std::vector<TimeAutoScaleStrategy>& _timeAutoScaleStrategies);

                    /**
                     * 判断参数 TimeAutoScaleStrategies 是否已赋值
                     * @return TimeAutoScaleStrategies 是否已赋值
                     * 
                     */
                    bool TimeAutoScaleStrategiesHasBeenSet() const;

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

                private:

                    /**
                     * 实例ID。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 自动扩缩容规则类型，1表示按负载指标扩缩容，2表示按时间扩缩容。
                     */
                    int64_t m_strategyType;
                    bool m_strategyTypeHasBeenSet;

                    /**
                     * 按负载扩缩容的指标。
                     */
                    std::vector<LoadAutoScaleStrategy> m_loadAutoScaleStrategies;
                    bool m_loadAutoScaleStrategiesHasBeenSet;

                    /**
                     * 按时间扩缩容的规则。
                     */
                    std::vector<TimeAutoScaleStrategy> m_timeAutoScaleStrategies;
                    bool m_timeAutoScaleStrategiesHasBeenSet;

                    /**
                     * 伸缩组Id
                     */
                    int64_t m_groupId;
                    bool m_groupIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_MODIFYAUTOSCALESTRATEGYREQUEST_H_
