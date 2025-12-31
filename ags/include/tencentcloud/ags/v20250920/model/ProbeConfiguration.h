/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#ifndef TENCENTCLOUD_AGS_V20250920_MODEL_PROBECONFIGURATION_H_
#define TENCENTCLOUD_AGS_V20250920_MODEL_PROBECONFIGURATION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ags/v20250920/model/HttpGetAction.h>


namespace TencentCloud
{
    namespace Ags
    {
        namespace V20250920
        {
            namespace Model
            {
                /**
                * 健康检查探针配置
                */
                class ProbeConfiguration : public AbstractModel
                {
                public:
                    ProbeConfiguration();
                    ~ProbeConfiguration() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取HTTP GET 探测配置
                     * @return HttpGet HTTP GET 探测配置
                     * 
                     */
                    HttpGetAction GetHttpGet() const;

                    /**
                     * 设置HTTP GET 探测配置
                     * @param _httpGet HTTP GET 探测配置
                     * 
                     */
                    void SetHttpGet(const HttpGetAction& _httpGet);

                    /**
                     * 判断参数 HttpGet 是否已赋值
                     * @return HttpGet 是否已赋值
                     * 
                     */
                    bool HttpGetHasBeenSet() const;

                    /**
                     * 获取健康检查就绪超时
                     * @return ReadyTimeoutMs 健康检查就绪超时
                     * 
                     */
                    int64_t GetReadyTimeoutMs() const;

                    /**
                     * 设置健康检查就绪超时
                     * @param _readyTimeoutMs 健康检查就绪超时
                     * 
                     */
                    void SetReadyTimeoutMs(const int64_t& _readyTimeoutMs);

                    /**
                     * 判断参数 ReadyTimeoutMs 是否已赋值
                     * @return ReadyTimeoutMs 是否已赋值
                     * 
                     */
                    bool ReadyTimeoutMsHasBeenSet() const;

                    /**
                     * 获取健康检查单次探测超时
                     * @return ProbeTimeoutMs 健康检查单次探测超时
                     * 
                     */
                    int64_t GetProbeTimeoutMs() const;

                    /**
                     * 设置健康检查单次探测超时
                     * @param _probeTimeoutMs 健康检查单次探测超时
                     * 
                     */
                    void SetProbeTimeoutMs(const int64_t& _probeTimeoutMs);

                    /**
                     * 判断参数 ProbeTimeoutMs 是否已赋值
                     * @return ProbeTimeoutMs 是否已赋值
                     * 
                     */
                    bool ProbeTimeoutMsHasBeenSet() const;

                    /**
                     * 获取健康检查间隔
                     * @return ProbePeriodMs 健康检查间隔
                     * 
                     */
                    int64_t GetProbePeriodMs() const;

                    /**
                     * 设置健康检查间隔
                     * @param _probePeriodMs 健康检查间隔
                     * 
                     */
                    void SetProbePeriodMs(const int64_t& _probePeriodMs);

                    /**
                     * 判断参数 ProbePeriodMs 是否已赋值
                     * @return ProbePeriodMs 是否已赋值
                     * 
                     */
                    bool ProbePeriodMsHasBeenSet() const;

                    /**
                     * 获取健康检查成功阈值
                     * @return SuccessThreshold 健康检查成功阈值
                     * 
                     */
                    int64_t GetSuccessThreshold() const;

                    /**
                     * 设置健康检查成功阈值
                     * @param _successThreshold 健康检查成功阈值
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
                     * 获取健康检查失败阈值
                     * @return FailureThreshold 健康检查失败阈值
                     * 
                     */
                    int64_t GetFailureThreshold() const;

                    /**
                     * 设置健康检查失败阈值
                     * @param _failureThreshold 健康检查失败阈值
                     * 
                     */
                    void SetFailureThreshold(const int64_t& _failureThreshold);

                    /**
                     * 判断参数 FailureThreshold 是否已赋值
                     * @return FailureThreshold 是否已赋值
                     * 
                     */
                    bool FailureThresholdHasBeenSet() const;

                private:

                    /**
                     * HTTP GET 探测配置
                     */
                    HttpGetAction m_httpGet;
                    bool m_httpGetHasBeenSet;

                    /**
                     * 健康检查就绪超时
                     */
                    int64_t m_readyTimeoutMs;
                    bool m_readyTimeoutMsHasBeenSet;

                    /**
                     * 健康检查单次探测超时
                     */
                    int64_t m_probeTimeoutMs;
                    bool m_probeTimeoutMsHasBeenSet;

                    /**
                     * 健康检查间隔
                     */
                    int64_t m_probePeriodMs;
                    bool m_probePeriodMsHasBeenSet;

                    /**
                     * 健康检查成功阈值
                     */
                    int64_t m_successThreshold;
                    bool m_successThresholdHasBeenSet;

                    /**
                     * 健康检查失败阈值
                     */
                    int64_t m_failureThreshold;
                    bool m_failureThresholdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AGS_V20250920_MODEL_PROBECONFIGURATION_H_
