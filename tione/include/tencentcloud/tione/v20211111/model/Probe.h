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

#ifndef TENCENTCLOUD_TIONE_V20211111_MODEL_PROBE_H_
#define TENCENTCLOUD_TIONE_V20211111_MODEL_PROBE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tione/v20211111/model/ProbeAction.h>


namespace TencentCloud
{
    namespace Tione
    {
        namespace V20211111
        {
            namespace Model
            {
                /**
                * 探针结构信息
                */
                class Probe : public AbstractModel
                {
                public:
                    Probe();
                    ~Probe() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取探针行为
                     * @return ProbeAction 探针行为
                     * 
                     */
                    ProbeAction GetProbeAction() const;

                    /**
                     * 设置探针行为
                     * @param _probeAction 探针行为
                     * 
                     */
                    void SetProbeAction(const ProbeAction& _probeAction);

                    /**
                     * 判断参数 ProbeAction 是否已赋值
                     * @return ProbeAction 是否已赋值
                     * 
                     */
                    bool ProbeActionHasBeenSet() const;

                    /**
                     * 获取等待服务启动的延迟
                     * @return InitialDelaySeconds 等待服务启动的延迟
                     * 
                     */
                    int64_t GetInitialDelaySeconds() const;

                    /**
                     * 设置等待服务启动的延迟
                     * @param _initialDelaySeconds 等待服务启动的延迟
                     * 
                     */
                    void SetInitialDelaySeconds(const int64_t& _initialDelaySeconds);

                    /**
                     * 判断参数 InitialDelaySeconds 是否已赋值
                     * @return InitialDelaySeconds 是否已赋值
                     * 
                     */
                    bool InitialDelaySecondsHasBeenSet() const;

                    /**
                     * 获取轮询检查时间间隔
                     * @return PeriodSeconds 轮询检查时间间隔
                     * 
                     */
                    int64_t GetPeriodSeconds() const;

                    /**
                     * 设置轮询检查时间间隔
                     * @param _periodSeconds 轮询检查时间间隔
                     * 
                     */
                    void SetPeriodSeconds(const int64_t& _periodSeconds);

                    /**
                     * 判断参数 PeriodSeconds 是否已赋值
                     * @return PeriodSeconds 是否已赋值
                     * 
                     */
                    bool PeriodSecondsHasBeenSet() const;

                    /**
                     * 获取检查超时时长
                     * @return TimeoutSeconds 检查超时时长
                     * 
                     */
                    int64_t GetTimeoutSeconds() const;

                    /**
                     * 设置检查超时时长
                     * @param _timeoutSeconds 检查超时时长
                     * 
                     */
                    void SetTimeoutSeconds(const int64_t& _timeoutSeconds);

                    /**
                     * 判断参数 TimeoutSeconds 是否已赋值
                     * @return TimeoutSeconds 是否已赋值
                     * 
                     */
                    bool TimeoutSecondsHasBeenSet() const;

                    /**
                     * 获取检测失败认定次数
                     * @return FailureThreshold 检测失败认定次数
                     * 
                     */
                    int64_t GetFailureThreshold() const;

                    /**
                     * 设置检测失败认定次数
                     * @param _failureThreshold 检测失败认定次数
                     * 
                     */
                    void SetFailureThreshold(const int64_t& _failureThreshold);

                    /**
                     * 判断参数 FailureThreshold 是否已赋值
                     * @return FailureThreshold 是否已赋值
                     * 
                     */
                    bool FailureThresholdHasBeenSet() const;

                    /**
                     * 获取检测成功认定次数，就绪默认 3，存活/启动默认 1
                     * @return SuccessThreshold 检测成功认定次数，就绪默认 3，存活/启动默认 1
                     * 
                     */
                    int64_t GetSuccessThreshold() const;

                    /**
                     * 设置检测成功认定次数，就绪默认 3，存活/启动默认 1
                     * @param _successThreshold 检测成功认定次数，就绪默认 3，存活/启动默认 1
                     * 
                     */
                    void SetSuccessThreshold(const int64_t& _successThreshold);

                    /**
                     * 判断参数 SuccessThreshold 是否已赋值
                     * @return SuccessThreshold 是否已赋值
                     * 
                     */
                    bool SuccessThresholdHasBeenSet() const;

                private:

                    /**
                     * 探针行为
                     */
                    ProbeAction m_probeAction;
                    bool m_probeActionHasBeenSet;

                    /**
                     * 等待服务启动的延迟
                     */
                    int64_t m_initialDelaySeconds;
                    bool m_initialDelaySecondsHasBeenSet;

                    /**
                     * 轮询检查时间间隔
                     */
                    int64_t m_periodSeconds;
                    bool m_periodSecondsHasBeenSet;

                    /**
                     * 检查超时时长
                     */
                    int64_t m_timeoutSeconds;
                    bool m_timeoutSecondsHasBeenSet;

                    /**
                     * 检测失败认定次数
                     */
                    int64_t m_failureThreshold;
                    bool m_failureThresholdHasBeenSet;

                    /**
                     * 检测成功认定次数，就绪默认 3，存活/启动默认 1
                     */
                    int64_t m_successThreshold;
                    bool m_successThresholdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIONE_V20211111_MODEL_PROBE_H_
