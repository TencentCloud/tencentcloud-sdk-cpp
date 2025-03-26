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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_PROBE_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_PROBE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
        {
            namespace Model
            {
                /**
                * 健康检查探测参数
                */
                class Probe : public AbstractModel
                {
                public:
                    Probe();
                    ~Probe() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Minimum consecutive failures for the probe to be considered failed after having succeeded.Defaults to 3. Minimum value is 1.
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FailureThreshold Minimum consecutive failures for the probe to be considered failed after having succeeded.Defaults to 3. Minimum value is 1.
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetFailureThreshold() const;

                    /**
                     * 设置Minimum consecutive failures for the probe to be considered failed after having succeeded.Defaults to 3. Minimum value is 1.
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _failureThreshold Minimum consecutive failures for the probe to be considered failed after having succeeded.Defaults to 3. Minimum value is 1.
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取Number of seconds after the container has started before liveness probes are initiated.
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InitialDelaySeconds Number of seconds after the container has started before liveness probes are initiated.
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetInitialDelaySeconds() const;

                    /**
                     * 设置Number of seconds after the container has started before liveness probes are initiated.
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _initialDelaySeconds Number of seconds after the container has started before liveness probes are initiated.
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取How often (in seconds) to perform the probe. Default to 10 seconds. Minimum value is 1.
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PeriodSeconds How often (in seconds) to perform the probe. Default to 10 seconds. Minimum value is 1.
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetPeriodSeconds() const;

                    /**
                     * 设置How often (in seconds) to perform the probe. Default to 10 seconds. Minimum value is 1.
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _periodSeconds How often (in seconds) to perform the probe. Default to 10 seconds. Minimum value is 1.
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取Minimum consecutive successes for the probe to be considered successful after having failed.Defaults to 1. Must be 1 for liveness. Minimum value is 1.
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SuccessThreshold Minimum consecutive successes for the probe to be considered successful after having failed.Defaults to 1. Must be 1 for liveness. Minimum value is 1.
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetSuccessThreshold() const;

                    /**
                     * 设置Minimum consecutive successes for the probe to be considered successful after having failed.Defaults to 1. Must be 1 for liveness. Minimum value is 1.
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _successThreshold Minimum consecutive successes for the probe to be considered successful after having failed.Defaults to 1. Must be 1 for liveness. Minimum value is 1.
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSuccessThreshold(const int64_t& _successThreshold);

                    /**
                     * 判断参数 SuccessThreshold 是否已赋值
                     * @return SuccessThreshold 是否已赋值
                     * 
                     */
                    bool SuccessThresholdHasBeenSet() const;

                    /**
                     * 获取Number of seconds after which the probe times out.
Defaults to 1 second. Minimum value is 1.
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TimeoutSeconds Number of seconds after which the probe times out.
Defaults to 1 second. Minimum value is 1.
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetTimeoutSeconds() const;

                    /**
                     * 设置Number of seconds after which the probe times out.
Defaults to 1 second. Minimum value is 1.
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _timeoutSeconds Number of seconds after which the probe times out.
Defaults to 1 second. Minimum value is 1.
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTimeoutSeconds(const int64_t& _timeoutSeconds);

                    /**
                     * 判断参数 TimeoutSeconds 是否已赋值
                     * @return TimeoutSeconds 是否已赋值
                     * 
                     */
                    bool TimeoutSecondsHasBeenSet() const;

                private:

                    /**
                     * Minimum consecutive failures for the probe to be considered failed after having succeeded.Defaults to 3. Minimum value is 1.
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_failureThreshold;
                    bool m_failureThresholdHasBeenSet;

                    /**
                     * Number of seconds after the container has started before liveness probes are initiated.
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_initialDelaySeconds;
                    bool m_initialDelaySecondsHasBeenSet;

                    /**
                     * How often (in seconds) to perform the probe. Default to 10 seconds. Minimum value is 1.
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_periodSeconds;
                    bool m_periodSecondsHasBeenSet;

                    /**
                     * Minimum consecutive successes for the probe to be considered successful after having failed.Defaults to 1. Must be 1 for liveness. Minimum value is 1.
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_successThreshold;
                    bool m_successThresholdHasBeenSet;

                    /**
                     * Number of seconds after which the probe times out.
Defaults to 1 second. Minimum value is 1.
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_timeoutSeconds;
                    bool m_timeoutSecondsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_PROBE_H_
