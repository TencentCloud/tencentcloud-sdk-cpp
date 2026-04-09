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

#ifndef TENCENTCLOUD_HAI_V20230812_MODEL_PROBECONFIG_H_
#define TENCENTCLOUD_HAI_V20230812_MODEL_PROBECONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/hai/v20230812/model/HttpConfig.h>


namespace TencentCloud
{
    namespace Hai
    {
        namespace V20230812
        {
            namespace Model
            {
                /**
                * 探针配置信息
                */
                class ProbeConfig : public AbstractModel
                {
                public:
                    ProbeConfig();
                    ~ProbeConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>HTTP GET请求进行健康检查</p>
                     * @return HttpGet <p>HTTP GET请求进行健康检查</p>
                     * 
                     */
                    HttpConfig GetHttpGet() const;

                    /**
                     * 设置<p>HTTP GET请求进行健康检查</p>
                     * @param _httpGet <p>HTTP GET请求进行健康检查</p>
                     * 
                     */
                    void SetHttpGet(const HttpConfig& _httpGet);

                    /**
                     * 判断参数 HttpGet 是否已赋值
                     * @return HttpGet 是否已赋值
                     * 
                     */
                    bool HttpGetHasBeenSet() const;

                    /**
                     * 获取<p>容器启动后，等待多少秒开始第一次探测</p>
                     * @return InitialDelaySeconds <p>容器启动后，等待多少秒开始第一次探测</p>
                     * 
                     */
                    int64_t GetInitialDelaySeconds() const;

                    /**
                     * 设置<p>容器启动后，等待多少秒开始第一次探测</p>
                     * @param _initialDelaySeconds <p>容器启动后，等待多少秒开始第一次探测</p>
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
                     * 获取<p>每次执行探测的间隔时间（秒）</p>
                     * @return PeriodSeconds <p>每次执行探测的间隔时间（秒）</p>
                     * 
                     */
                    int64_t GetPeriodSeconds() const;

                    /**
                     * 设置<p>每次执行探测的间隔时间（秒）</p>
                     * @param _periodSeconds <p>每次执行探测的间隔时间（秒）</p>
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
                     * 获取<p>每次探测等待响应的超时时间（秒）</p>
                     * @return TimeoutSeconds <p>每次探测等待响应的超时时间（秒）</p>
                     * 
                     */
                    int64_t GetTimeoutSeconds() const;

                    /**
                     * 设置<p>每次探测等待响应的超时时间（秒）</p>
                     * @param _timeoutSeconds <p>每次探测等待响应的超时时间（秒）</p>
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
                     * 获取<p>探测失败后，最小连续成功次数才被认为成功</p>
                     * @return SuccessThreshold <p>探测失败后，最小连续成功次数才被认为成功</p>
                     * 
                     */
                    int64_t GetSuccessThreshold() const;

                    /**
                     * 设置<p>探测失败后，最小连续成功次数才被认为成功</p>
                     * @param _successThreshold <p>探测失败后，最小连续成功次数才被认为成功</p>
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
                     * 获取<p>探测失败后，Kubernetes的重试次数</p>
                     * @return FailureThreshold <p>探测失败后，Kubernetes的重试次数</p>
                     * 
                     */
                    int64_t GetFailureThreshold() const;

                    /**
                     * 设置<p>探测失败后，Kubernetes的重试次数</p>
                     * @param _failureThreshold <p>探测失败后，Kubernetes的重试次数</p>
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
                     * <p>HTTP GET请求进行健康检查</p>
                     */
                    HttpConfig m_httpGet;
                    bool m_httpGetHasBeenSet;

                    /**
                     * <p>容器启动后，等待多少秒开始第一次探测</p>
                     */
                    int64_t m_initialDelaySeconds;
                    bool m_initialDelaySecondsHasBeenSet;

                    /**
                     * <p>每次执行探测的间隔时间（秒）</p>
                     */
                    int64_t m_periodSeconds;
                    bool m_periodSecondsHasBeenSet;

                    /**
                     * <p>每次探测等待响应的超时时间（秒）</p>
                     */
                    int64_t m_timeoutSeconds;
                    bool m_timeoutSecondsHasBeenSet;

                    /**
                     * <p>探测失败后，最小连续成功次数才被认为成功</p>
                     */
                    int64_t m_successThreshold;
                    bool m_successThresholdHasBeenSet;

                    /**
                     * <p>探测失败后，Kubernetes的重试次数</p>
                     */
                    int64_t m_failureThreshold;
                    bool m_failureThresholdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_HAI_V20230812_MODEL_PROBECONFIG_H_
