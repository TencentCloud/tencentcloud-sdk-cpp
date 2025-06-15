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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_STARTCPUEXPANDREQUEST_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_STARTCPUEXPANDREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdb/v20170320/model/AutoStrategy.h>
#include <tencentcloud/cdb/v20170320/model/TimeIntervalStrategy.h>
#include <tencentcloud/cdb/v20170320/model/PeriodStrategy.h>


namespace TencentCloud
{
    namespace Cdb
    {
        namespace V20170320
        {
            namespace Model
            {
                /**
                * StartCpuExpand请求参数结构体
                */
                class StartCpuExpandRequest : public AbstractModel
                {
                public:
                    StartCpuExpandRequest();
                    ~StartCpuExpandRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例 ID。
                     * @return InstanceId 实例 ID。
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例 ID。
                     * @param _instanceId 实例 ID。
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
                     * 获取扩容类型，支持自动扩容和自定义扩容。
说明：1. auto 表示自动扩容。2. manual 表示自定义扩容，扩容时间为立即生效。3. timeInterval 表示自定义扩容，扩容时间为按时间段。4. period 表示自定义扩容，扩容时间为按周期。
                     * @return Type 扩容类型，支持自动扩容和自定义扩容。
说明：1. auto 表示自动扩容。2. manual 表示自定义扩容，扩容时间为立即生效。3. timeInterval 表示自定义扩容，扩容时间为按时间段。4. period 表示自定义扩容，扩容时间为按周期。
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置扩容类型，支持自动扩容和自定义扩容。
说明：1. auto 表示自动扩容。2. manual 表示自定义扩容，扩容时间为立即生效。3. timeInterval 表示自定义扩容，扩容时间为按时间段。4. period 表示自定义扩容，扩容时间为按周期。
                     * @param _type 扩容类型，支持自动扩容和自定义扩容。
说明：1. auto 表示自动扩容。2. manual 表示自定义扩容，扩容时间为立即生效。3. timeInterval 表示自定义扩容，扩容时间为按时间段。4. period 表示自定义扩容，扩容时间为按周期。
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
                     * 获取自定义扩容时，扩容的 CPU 核心数。
说明：1. Type 为 manual、timeInterval、period 时必传。2. 扩容的 CPU 核心数上限为当前实例 CPU 核心数，比如8核16G最大可手动扩容的 CPU 核心数为8，即范围为1 - 8。
                     * @return ExpandCpu 自定义扩容时，扩容的 CPU 核心数。
说明：1. Type 为 manual、timeInterval、period 时必传。2. 扩容的 CPU 核心数上限为当前实例 CPU 核心数，比如8核16G最大可手动扩容的 CPU 核心数为8，即范围为1 - 8。
                     * 
                     */
                    int64_t GetExpandCpu() const;

                    /**
                     * 设置自定义扩容时，扩容的 CPU 核心数。
说明：1. Type 为 manual、timeInterval、period 时必传。2. 扩容的 CPU 核心数上限为当前实例 CPU 核心数，比如8核16G最大可手动扩容的 CPU 核心数为8，即范围为1 - 8。
                     * @param _expandCpu 自定义扩容时，扩容的 CPU 核心数。
说明：1. Type 为 manual、timeInterval、period 时必传。2. 扩容的 CPU 核心数上限为当前实例 CPU 核心数，比如8核16G最大可手动扩容的 CPU 核心数为8，即范围为1 - 8。
                     * 
                     */
                    void SetExpandCpu(const int64_t& _expandCpu);

                    /**
                     * 判断参数 ExpandCpu 是否已赋值
                     * @return ExpandCpu 是否已赋值
                     * 
                     */
                    bool ExpandCpuHasBeenSet() const;

                    /**
                     * 获取自动扩容策略。Type 为 auto 时必传。
                     * @return AutoStrategy 自动扩容策略。Type 为 auto 时必传。
                     * 
                     */
                    AutoStrategy GetAutoStrategy() const;

                    /**
                     * 设置自动扩容策略。Type 为 auto 时必传。
                     * @param _autoStrategy 自动扩容策略。Type 为 auto 时必传。
                     * 
                     */
                    void SetAutoStrategy(const AutoStrategy& _autoStrategy);

                    /**
                     * 判断参数 AutoStrategy 是否已赋值
                     * @return AutoStrategy 是否已赋值
                     * 
                     */
                    bool AutoStrategyHasBeenSet() const;

                    /**
                     * 获取按时间段扩容策略。
                     * @return TimeIntervalStrategy 按时间段扩容策略。
                     * 
                     */
                    TimeIntervalStrategy GetTimeIntervalStrategy() const;

                    /**
                     * 设置按时间段扩容策略。
                     * @param _timeIntervalStrategy 按时间段扩容策略。
                     * 
                     */
                    void SetTimeIntervalStrategy(const TimeIntervalStrategy& _timeIntervalStrategy);

                    /**
                     * 判断参数 TimeIntervalStrategy 是否已赋值
                     * @return TimeIntervalStrategy 是否已赋值
                     * 
                     */
                    bool TimeIntervalStrategyHasBeenSet() const;

                    /**
                     * 获取按周期扩容策略。
                     * @return PeriodStrategy 按周期扩容策略。
                     * 
                     */
                    PeriodStrategy GetPeriodStrategy() const;

                    /**
                     * 设置按周期扩容策略。
                     * @param _periodStrategy 按周期扩容策略。
                     * 
                     */
                    void SetPeriodStrategy(const PeriodStrategy& _periodStrategy);

                    /**
                     * 判断参数 PeriodStrategy 是否已赋值
                     * @return PeriodStrategy 是否已赋值
                     * 
                     */
                    bool PeriodStrategyHasBeenSet() const;

                private:

                    /**
                     * 实例 ID。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 扩容类型，支持自动扩容和自定义扩容。
说明：1. auto 表示自动扩容。2. manual 表示自定义扩容，扩容时间为立即生效。3. timeInterval 表示自定义扩容，扩容时间为按时间段。4. period 表示自定义扩容，扩容时间为按周期。
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 自定义扩容时，扩容的 CPU 核心数。
说明：1. Type 为 manual、timeInterval、period 时必传。2. 扩容的 CPU 核心数上限为当前实例 CPU 核心数，比如8核16G最大可手动扩容的 CPU 核心数为8，即范围为1 - 8。
                     */
                    int64_t m_expandCpu;
                    bool m_expandCpuHasBeenSet;

                    /**
                     * 自动扩容策略。Type 为 auto 时必传。
                     */
                    AutoStrategy m_autoStrategy;
                    bool m_autoStrategyHasBeenSet;

                    /**
                     * 按时间段扩容策略。
                     */
                    TimeIntervalStrategy m_timeIntervalStrategy;
                    bool m_timeIntervalStrategyHasBeenSet;

                    /**
                     * 按周期扩容策略。
                     */
                    PeriodStrategy m_periodStrategy;
                    bool m_periodStrategyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_STARTCPUEXPANDREQUEST_H_
