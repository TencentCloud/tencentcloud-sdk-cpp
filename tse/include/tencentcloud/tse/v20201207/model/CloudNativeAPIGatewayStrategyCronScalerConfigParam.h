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

#ifndef TENCENTCLOUD_TSE_V20201207_MODEL_CLOUDNATIVEAPIGATEWAYSTRATEGYCRONSCALERCONFIGPARAM_H_
#define TENCENTCLOUD_TSE_V20201207_MODEL_CLOUDNATIVEAPIGATEWAYSTRATEGYCRONSCALERCONFIGPARAM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tse
    {
        namespace V20201207
        {
            namespace Model
            {
                /**
                * 定时伸缩配置参数
                */
                class CloudNativeAPIGatewayStrategyCronScalerConfigParam : public AbstractModel
                {
                public:
                    CloudNativeAPIGatewayStrategyCronScalerConfigParam();
                    ~CloudNativeAPIGatewayStrategyCronScalerConfigParam() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取定时伸缩周期
                     * @return Period 定时伸缩周期
                     * 
                     */
                    std::string GetPeriod() const;

                    /**
                     * 设置定时伸缩周期
                     * @param _period 定时伸缩周期
                     * 
                     */
                    void SetPeriod(const std::string& _period);

                    /**
                     * 判断参数 Period 是否已赋值
                     * @return Period 是否已赋值
                     * 
                     */
                    bool PeriodHasBeenSet() const;

                    /**
                     * 获取定时伸缩开始时间
                     * @return StartAt 定时伸缩开始时间
                     * 
                     */
                    std::string GetStartAt() const;

                    /**
                     * 设置定时伸缩开始时间
                     * @param _startAt 定时伸缩开始时间
                     * 
                     */
                    void SetStartAt(const std::string& _startAt);

                    /**
                     * 判断参数 StartAt 是否已赋值
                     * @return StartAt 是否已赋值
                     * 
                     */
                    bool StartAtHasBeenSet() const;

                    /**
                     * 获取定时伸缩目标节点数，不超过指标伸缩中定义的最大节点数
                     * @return TargetReplicas 定时伸缩目标节点数，不超过指标伸缩中定义的最大节点数
                     * 
                     */
                    int64_t GetTargetReplicas() const;

                    /**
                     * 设置定时伸缩目标节点数，不超过指标伸缩中定义的最大节点数
                     * @param _targetReplicas 定时伸缩目标节点数，不超过指标伸缩中定义的最大节点数
                     * 
                     */
                    void SetTargetReplicas(const int64_t& _targetReplicas);

                    /**
                     * 判断参数 TargetReplicas 是否已赋值
                     * @return TargetReplicas 是否已赋值
                     * 
                     */
                    bool TargetReplicasHasBeenSet() const;

                    /**
                     * 获取定时伸缩cron表达式，无需输入
                     * @return Crontab 定时伸缩cron表达式，无需输入
                     * 
                     */
                    std::string GetCrontab() const;

                    /**
                     * 设置定时伸缩cron表达式，无需输入
                     * @param _crontab 定时伸缩cron表达式，无需输入
                     * 
                     */
                    void SetCrontab(const std::string& _crontab);

                    /**
                     * 判断参数 Crontab 是否已赋值
                     * @return Crontab 是否已赋值
                     * 
                     */
                    bool CrontabHasBeenSet() const;

                private:

                    /**
                     * 定时伸缩周期
                     */
                    std::string m_period;
                    bool m_periodHasBeenSet;

                    /**
                     * 定时伸缩开始时间
                     */
                    std::string m_startAt;
                    bool m_startAtHasBeenSet;

                    /**
                     * 定时伸缩目标节点数，不超过指标伸缩中定义的最大节点数
                     */
                    int64_t m_targetReplicas;
                    bool m_targetReplicasHasBeenSet;

                    /**
                     * 定时伸缩cron表达式，无需输入
                     */
                    std::string m_crontab;
                    bool m_crontabHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSE_V20201207_MODEL_CLOUDNATIVEAPIGATEWAYSTRATEGYCRONSCALERCONFIGPARAM_H_
