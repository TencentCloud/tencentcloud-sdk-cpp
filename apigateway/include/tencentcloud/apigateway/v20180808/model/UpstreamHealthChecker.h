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

#ifndef TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_UPSTREAMHEALTHCHECKER_H_
#define TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_UPSTREAMHEALTHCHECKER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/apigateway/v20180808/model/UpstreamHealthCheckerReqHeaders.h>


namespace TencentCloud
{
    namespace Apigateway
    {
        namespace V20180808
        {
            namespace Model
            {
                /**
                * 后端通道健康检查参数配置
                */
                class UpstreamHealthChecker : public AbstractModel
                {
                public:
                    UpstreamHealthChecker();
                    ~UpstreamHealthChecker() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取标识是否开启主动健康检查。
                     * @return EnableActiveCheck 标识是否开启主动健康检查。
                     * 
                     */
                    bool GetEnableActiveCheck() const;

                    /**
                     * 设置标识是否开启主动健康检查。
                     * @param _enableActiveCheck 标识是否开启主动健康检查。
                     * 
                     */
                    void SetEnableActiveCheck(const bool& _enableActiveCheck);

                    /**
                     * 判断参数 EnableActiveCheck 是否已赋值
                     * @return EnableActiveCheck 是否已赋值
                     * 
                     */
                    bool EnableActiveCheckHasBeenSet() const;

                    /**
                     * 获取标识是否开启被动健康检查。
                     * @return EnablePassiveCheck 标识是否开启被动健康检查。
                     * 
                     */
                    bool GetEnablePassiveCheck() const;

                    /**
                     * 设置标识是否开启被动健康检查。
                     * @param _enablePassiveCheck 标识是否开启被动健康检查。
                     * 
                     */
                    void SetEnablePassiveCheck(const bool& _enablePassiveCheck);

                    /**
                     * 判断参数 EnablePassiveCheck 是否已赋值
                     * @return EnablePassiveCheck 是否已赋值
                     * 
                     */
                    bool EnablePassiveCheckHasBeenSet() const;

                    /**
                     * 获取健康检查时，判断为成功请求的 HTTP 状态码。
                     * @return HealthyHttpStatus 健康检查时，判断为成功请求的 HTTP 状态码。
                     * 
                     */
                    std::string GetHealthyHttpStatus() const;

                    /**
                     * 设置健康检查时，判断为成功请求的 HTTP 状态码。
                     * @param _healthyHttpStatus 健康检查时，判断为成功请求的 HTTP 状态码。
                     * 
                     */
                    void SetHealthyHttpStatus(const std::string& _healthyHttpStatus);

                    /**
                     * 判断参数 HealthyHttpStatus 是否已赋值
                     * @return HealthyHttpStatus 是否已赋值
                     * 
                     */
                    bool HealthyHttpStatusHasBeenSet() const;

                    /**
                     * 获取健康检查时，判断为失败请求的 HTTP 状态码。
                     * @return UnhealthyHttpStatus 健康检查时，判断为失败请求的 HTTP 状态码。
                     * 
                     */
                    std::string GetUnhealthyHttpStatus() const;

                    /**
                     * 设置健康检查时，判断为失败请求的 HTTP 状态码。
                     * @param _unhealthyHttpStatus 健康检查时，判断为失败请求的 HTTP 状态码。
                     * 
                     */
                    void SetUnhealthyHttpStatus(const std::string& _unhealthyHttpStatus);

                    /**
                     * 判断参数 UnhealthyHttpStatus 是否已赋值
                     * @return UnhealthyHttpStatus 是否已赋值
                     * 
                     */
                    bool UnhealthyHttpStatusHasBeenSet() const;

                    /**
                     * 获取TCP连续错误阈值。0 表示禁用 TCP 检查。取值范围：[0, 254]。
                     * @return TcpFailureThreshold TCP连续错误阈值。0 表示禁用 TCP 检查。取值范围：[0, 254]。
                     * 
                     */
                    uint64_t GetTcpFailureThreshold() const;

                    /**
                     * 设置TCP连续错误阈值。0 表示禁用 TCP 检查。取值范围：[0, 254]。
                     * @param _tcpFailureThreshold TCP连续错误阈值。0 表示禁用 TCP 检查。取值范围：[0, 254]。
                     * 
                     */
                    void SetTcpFailureThreshold(const uint64_t& _tcpFailureThreshold);

                    /**
                     * 判断参数 TcpFailureThreshold 是否已赋值
                     * @return TcpFailureThreshold 是否已赋值
                     * 
                     */
                    bool TcpFailureThresholdHasBeenSet() const;

                    /**
                     * 获取连续超时阈值。0 表示禁用超时检查。取值范围：[0, 254]。
                     * @return TimeoutThreshold 连续超时阈值。0 表示禁用超时检查。取值范围：[0, 254]。
                     * 
                     */
                    uint64_t GetTimeoutThreshold() const;

                    /**
                     * 设置连续超时阈值。0 表示禁用超时检查。取值范围：[0, 254]。
                     * @param _timeoutThreshold 连续超时阈值。0 表示禁用超时检查。取值范围：[0, 254]。
                     * 
                     */
                    void SetTimeoutThreshold(const uint64_t& _timeoutThreshold);

                    /**
                     * 判断参数 TimeoutThreshold 是否已赋值
                     * @return TimeoutThreshold 是否已赋值
                     * 
                     */
                    bool TimeoutThresholdHasBeenSet() const;

                    /**
                     * 获取HTTP连续错误阈值。0 表示禁用HTTP检查。取值范围：[0, 254]。
                     * @return HttpFailureThreshold HTTP连续错误阈值。0 表示禁用HTTP检查。取值范围：[0, 254]。
                     * 
                     */
                    uint64_t GetHttpFailureThreshold() const;

                    /**
                     * 设置HTTP连续错误阈值。0 表示禁用HTTP检查。取值范围：[0, 254]。
                     * @param _httpFailureThreshold HTTP连续错误阈值。0 表示禁用HTTP检查。取值范围：[0, 254]。
                     * 
                     */
                    void SetHttpFailureThreshold(const uint64_t& _httpFailureThreshold);

                    /**
                     * 判断参数 HttpFailureThreshold 是否已赋值
                     * @return HttpFailureThreshold 是否已赋值
                     * 
                     */
                    bool HttpFailureThresholdHasBeenSet() const;

                    /**
                     * 获取主动健康检查时探测请求的路径。默认为"/"。
                     * @return ActiveCheckHttpPath 主动健康检查时探测请求的路径。默认为"/"。
                     * 
                     */
                    std::string GetActiveCheckHttpPath() const;

                    /**
                     * 设置主动健康检查时探测请求的路径。默认为"/"。
                     * @param _activeCheckHttpPath 主动健康检查时探测请求的路径。默认为"/"。
                     * 
                     */
                    void SetActiveCheckHttpPath(const std::string& _activeCheckHttpPath);

                    /**
                     * 判断参数 ActiveCheckHttpPath 是否已赋值
                     * @return ActiveCheckHttpPath 是否已赋值
                     * 
                     */
                    bool ActiveCheckHttpPathHasBeenSet() const;

                    /**
                     * 获取主动健康检查的探测请求超时，单位秒。默认为5秒。
                     * @return ActiveCheckTimeout 主动健康检查的探测请求超时，单位秒。默认为5秒。
                     * 
                     */
                    uint64_t GetActiveCheckTimeout() const;

                    /**
                     * 设置主动健康检查的探测请求超时，单位秒。默认为5秒。
                     * @param _activeCheckTimeout 主动健康检查的探测请求超时，单位秒。默认为5秒。
                     * 
                     */
                    void SetActiveCheckTimeout(const uint64_t& _activeCheckTimeout);

                    /**
                     * 判断参数 ActiveCheckTimeout 是否已赋值
                     * @return ActiveCheckTimeout 是否已赋值
                     * 
                     */
                    bool ActiveCheckTimeoutHasBeenSet() const;

                    /**
                     * 获取主动健康检查的时间间隔，默认5秒。
                     * @return ActiveCheckInterval 主动健康检查的时间间隔，默认5秒。
                     * 
                     */
                    uint64_t GetActiveCheckInterval() const;

                    /**
                     * 设置主动健康检查的时间间隔，默认5秒。
                     * @param _activeCheckInterval 主动健康检查的时间间隔，默认5秒。
                     * 
                     */
                    void SetActiveCheckInterval(const uint64_t& _activeCheckInterval);

                    /**
                     * 判断参数 ActiveCheckInterval 是否已赋值
                     * @return ActiveCheckInterval 是否已赋值
                     * 
                     */
                    bool ActiveCheckIntervalHasBeenSet() const;

                    /**
                     * 获取主动健康检查时探测请求的的请求头。
                     * @return ActiveRequestHeader 主动健康检查时探测请求的的请求头。
                     * 
                     */
                    std::vector<UpstreamHealthCheckerReqHeaders> GetActiveRequestHeader() const;

                    /**
                     * 设置主动健康检查时探测请求的的请求头。
                     * @param _activeRequestHeader 主动健康检查时探测请求的的请求头。
                     * 
                     */
                    void SetActiveRequestHeader(const std::vector<UpstreamHealthCheckerReqHeaders>& _activeRequestHeader);

                    /**
                     * 判断参数 ActiveRequestHeader 是否已赋值
                     * @return ActiveRequestHeader 是否已赋值
                     * 
                     */
                    bool ActiveRequestHeaderHasBeenSet() const;

                    /**
                     * 获取异常节点的状态自动恢复时间，单位秒。当只开启被动检查的话，必须设置为 > 0 的值，否则被动异常节点将无法恢复。默认30秒。
                     * @return UnhealthyTimeout 异常节点的状态自动恢复时间，单位秒。当只开启被动检查的话，必须设置为 > 0 的值，否则被动异常节点将无法恢复。默认30秒。
                     * 
                     */
                    uint64_t GetUnhealthyTimeout() const;

                    /**
                     * 设置异常节点的状态自动恢复时间，单位秒。当只开启被动检查的话，必须设置为 > 0 的值，否则被动异常节点将无法恢复。默认30秒。
                     * @param _unhealthyTimeout 异常节点的状态自动恢复时间，单位秒。当只开启被动检查的话，必须设置为 > 0 的值，否则被动异常节点将无法恢复。默认30秒。
                     * 
                     */
                    void SetUnhealthyTimeout(const uint64_t& _unhealthyTimeout);

                    /**
                     * 判断参数 UnhealthyTimeout 是否已赋值
                     * @return UnhealthyTimeout 是否已赋值
                     * 
                     */
                    bool UnhealthyTimeoutHasBeenSet() const;

                private:

                    /**
                     * 标识是否开启主动健康检查。
                     */
                    bool m_enableActiveCheck;
                    bool m_enableActiveCheckHasBeenSet;

                    /**
                     * 标识是否开启被动健康检查。
                     */
                    bool m_enablePassiveCheck;
                    bool m_enablePassiveCheckHasBeenSet;

                    /**
                     * 健康检查时，判断为成功请求的 HTTP 状态码。
                     */
                    std::string m_healthyHttpStatus;
                    bool m_healthyHttpStatusHasBeenSet;

                    /**
                     * 健康检查时，判断为失败请求的 HTTP 状态码。
                     */
                    std::string m_unhealthyHttpStatus;
                    bool m_unhealthyHttpStatusHasBeenSet;

                    /**
                     * TCP连续错误阈值。0 表示禁用 TCP 检查。取值范围：[0, 254]。
                     */
                    uint64_t m_tcpFailureThreshold;
                    bool m_tcpFailureThresholdHasBeenSet;

                    /**
                     * 连续超时阈值。0 表示禁用超时检查。取值范围：[0, 254]。
                     */
                    uint64_t m_timeoutThreshold;
                    bool m_timeoutThresholdHasBeenSet;

                    /**
                     * HTTP连续错误阈值。0 表示禁用HTTP检查。取值范围：[0, 254]。
                     */
                    uint64_t m_httpFailureThreshold;
                    bool m_httpFailureThresholdHasBeenSet;

                    /**
                     * 主动健康检查时探测请求的路径。默认为"/"。
                     */
                    std::string m_activeCheckHttpPath;
                    bool m_activeCheckHttpPathHasBeenSet;

                    /**
                     * 主动健康检查的探测请求超时，单位秒。默认为5秒。
                     */
                    uint64_t m_activeCheckTimeout;
                    bool m_activeCheckTimeoutHasBeenSet;

                    /**
                     * 主动健康检查的时间间隔，默认5秒。
                     */
                    uint64_t m_activeCheckInterval;
                    bool m_activeCheckIntervalHasBeenSet;

                    /**
                     * 主动健康检查时探测请求的的请求头。
                     */
                    std::vector<UpstreamHealthCheckerReqHeaders> m_activeRequestHeader;
                    bool m_activeRequestHeaderHasBeenSet;

                    /**
                     * 异常节点的状态自动恢复时间，单位秒。当只开启被动检查的话，必须设置为 > 0 的值，否则被动异常节点将无法恢复。默认30秒。
                     */
                    uint64_t m_unhealthyTimeout;
                    bool m_unhealthyTimeoutHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_UPSTREAMHEALTHCHECKER_H_
