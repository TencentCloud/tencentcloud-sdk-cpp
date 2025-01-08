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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_ADDMETRICSCALESTRATEGYREQUEST_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_ADDMETRICSCALESTRATEGYREQUEST_H_

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
                * AddMetricScaleStrategy请求参数结构体
                */
                class AddMetricScaleStrategyRequest : public AbstractModel
                {
                public:
                    AddMetricScaleStrategyRequest();
                    ~AddMetricScaleStrategyRequest() = default;
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
                     * 获取1表示按负载规则扩缩容，2表示按时间规则扩缩容。必须填写，并且和下面的规则策略匹配
                     * @return StrategyType 1表示按负载规则扩缩容，2表示按时间规则扩缩容。必须填写，并且和下面的规则策略匹配
                     * 
                     */
                    int64_t GetStrategyType() const;

                    /**
                     * 设置1表示按负载规则扩缩容，2表示按时间规则扩缩容。必须填写，并且和下面的规则策略匹配
                     * @param _strategyType 1表示按负载规则扩缩容，2表示按时间规则扩缩容。必须填写，并且和下面的规则策略匹配
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
                     * 获取按负载扩容的规则。
                     * @return LoadAutoScaleStrategy 按负载扩容的规则。
                     * 
                     */
                    LoadAutoScaleStrategy GetLoadAutoScaleStrategy() const;

                    /**
                     * 设置按负载扩容的规则。
                     * @param _loadAutoScaleStrategy 按负载扩容的规则。
                     * 
                     */
                    void SetLoadAutoScaleStrategy(const LoadAutoScaleStrategy& _loadAutoScaleStrategy);

                    /**
                     * 判断参数 LoadAutoScaleStrategy 是否已赋值
                     * @return LoadAutoScaleStrategy 是否已赋值
                     * 
                     */
                    bool LoadAutoScaleStrategyHasBeenSet() const;

                    /**
                     * 获取按时间扩缩容的规则。
                     * @return TimeAutoScaleStrategy 按时间扩缩容的规则。
                     * 
                     */
                    TimeAutoScaleStrategy GetTimeAutoScaleStrategy() const;

                    /**
                     * 设置按时间扩缩容的规则。
                     * @param _timeAutoScaleStrategy 按时间扩缩容的规则。
                     * 
                     */
                    void SetTimeAutoScaleStrategy(const TimeAutoScaleStrategy& _timeAutoScaleStrategy);

                    /**
                     * 判断参数 TimeAutoScaleStrategy 是否已赋值
                     * @return TimeAutoScaleStrategy 是否已赋值
                     * 
                     */
                    bool TimeAutoScaleStrategyHasBeenSet() const;

                private:

                    /**
                     * 实例ID。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 1表示按负载规则扩缩容，2表示按时间规则扩缩容。必须填写，并且和下面的规则策略匹配
                     */
                    int64_t m_strategyType;
                    bool m_strategyTypeHasBeenSet;

                    /**
                     * 按负载扩容的规则。
                     */
                    LoadAutoScaleStrategy m_loadAutoScaleStrategy;
                    bool m_loadAutoScaleStrategyHasBeenSet;

                    /**
                     * 按时间扩缩容的规则。
                     */
                    TimeAutoScaleStrategy m_timeAutoScaleStrategy;
                    bool m_timeAutoScaleStrategyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_ADDMETRICSCALESTRATEGYREQUEST_H_
