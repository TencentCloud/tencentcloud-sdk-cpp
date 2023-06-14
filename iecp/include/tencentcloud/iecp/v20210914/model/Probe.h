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

#ifndef TENCENTCLOUD_IECP_V20210914_MODEL_PROBE_H_
#define TENCENTCLOUD_IECP_V20210914_MODEL_PROBE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/iecp/v20210914/model/HttpProbe.h>
#include <tencentcloud/iecp/v20210914/model/TcpProbe.h>


namespace TencentCloud
{
    namespace Iecp
    {
        namespace V20210914
        {
            namespace Model
            {
                /**
                * 探针配置
                */
                class Probe : public AbstractModel
                {
                public:
                    Probe();
                    ~Probe() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取启动后，延迟探测时间 单位:秒
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InitialDelaySeconds 启动后，延迟探测时间 单位:秒
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetInitialDelaySeconds() const;

                    /**
                     * 设置启动后，延迟探测时间 单位:秒
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _initialDelaySeconds 启动后，延迟探测时间 单位:秒
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
                     * 获取探测间隔，单位：秒
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PeriodSeconds 探测间隔，单位：秒
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetPeriodSeconds() const;

                    /**
                     * 设置探测间隔，单位：秒
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _periodSeconds 探测间隔，单位：秒
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
                     * 获取探测超时时间 单位：秒
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TimeoutSeconds 探测超时时间 单位：秒
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetTimeoutSeconds() const;

                    /**
                     * 设置探测超时时间 单位：秒
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _timeoutSeconds 探测超时时间 单位：秒
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

                    /**
                     * 获取失败后检查成功的最小连续成功次数。默认为1.活跃度必须为1。最小值为1
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SuccessThreshold 失败后检查成功的最小连续成功次数。默认为1.活跃度必须为1。最小值为1
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetSuccessThreshold() const;

                    /**
                     * 设置失败后检查成功的最小连续成功次数。默认为1.活跃度必须为1。最小值为1
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _successThreshold 失败后检查成功的最小连续成功次数。默认为1.活跃度必须为1。最小值为1
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
                     * 获取当Pod成功启动且检查失败时，放弃之前尝试次数。默认为3.最小值为1
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FailureThreshold 当Pod成功启动且检查失败时，放弃之前尝试次数。默认为3.最小值为1
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetFailureThreshold() const;

                    /**
                     * 设置当Pod成功启动且检查失败时，放弃之前尝试次数。默认为3.最小值为1
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _failureThreshold 当Pod成功启动且检查失败时，放弃之前尝试次数。默认为3.最小值为1
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
                     * 获取HTTP探测配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @return HttpProbe HTTP探测配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    HttpProbe GetHttpProbe() const;

                    /**
                     * 设置HTTP探测配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _httpProbe HTTP探测配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetHttpProbe(const HttpProbe& _httpProbe);

                    /**
                     * 判断参数 HttpProbe 是否已赋值
                     * @return HttpProbe 是否已赋值
                     * 
                     */
                    bool HttpProbeHasBeenSet() const;

                    /**
                     * 获取TCP探测配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TcpProbe TCP探测配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    TcpProbe GetTcpProbe() const;

                    /**
                     * 设置TCP探测配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tcpProbe TCP探测配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTcpProbe(const TcpProbe& _tcpProbe);

                    /**
                     * 判断参数 TcpProbe 是否已赋值
                     * @return TcpProbe 是否已赋值
                     * 
                     */
                    bool TcpProbeHasBeenSet() const;

                private:

                    /**
                     * 启动后，延迟探测时间 单位:秒
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_initialDelaySeconds;
                    bool m_initialDelaySecondsHasBeenSet;

                    /**
                     * 探测间隔，单位：秒
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_periodSeconds;
                    bool m_periodSecondsHasBeenSet;

                    /**
                     * 探测超时时间 单位：秒
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_timeoutSeconds;
                    bool m_timeoutSecondsHasBeenSet;

                    /**
                     * 失败后检查成功的最小连续成功次数。默认为1.活跃度必须为1。最小值为1
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_successThreshold;
                    bool m_successThresholdHasBeenSet;

                    /**
                     * 当Pod成功启动且检查失败时，放弃之前尝试次数。默认为3.最小值为1
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_failureThreshold;
                    bool m_failureThresholdHasBeenSet;

                    /**
                     * HTTP探测配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    HttpProbe m_httpProbe;
                    bool m_httpProbeHasBeenSet;

                    /**
                     * TCP探测配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    TcpProbe m_tcpProbe;
                    bool m_tcpProbeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IECP_V20210914_MODEL_PROBE_H_
