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

#ifndef TENCENTCLOUD_TSE_V20201207_MODEL_KONGACTIVEHEALTHCHECK_H_
#define TENCENTCLOUD_TSE_V20201207_MODEL_KONGACTIVEHEALTHCHECK_H_

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
                * Kong网关主动健康检查配置
                */
                class KongActiveHealthCheck : public AbstractModel
                {
                public:
                    KongActiveHealthCheck();
                    ~KongActiveHealthCheck() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>主动健康检查健康探测间隔，单位：秒，0表示不开启</p>
                     * @return HealthyInterval <p>主动健康检查健康探测间隔，单位：秒，0表示不开启</p>
                     * 
                     */
                    uint64_t GetHealthyInterval() const;

                    /**
                     * 设置<p>主动健康检查健康探测间隔，单位：秒，0表示不开启</p>
                     * @param _healthyInterval <p>主动健康检查健康探测间隔，单位：秒，0表示不开启</p>
                     * 
                     */
                    void SetHealthyInterval(const uint64_t& _healthyInterval);

                    /**
                     * 判断参数 HealthyInterval 是否已赋值
                     * @return HealthyInterval 是否已赋值
                     * 
                     */
                    bool HealthyIntervalHasBeenSet() const;

                    /**
                     * 获取<p>主动健康检查异常探测间隔，单位：秒，0表示不开启</p>
                     * @return UnHealthyInterval <p>主动健康检查异常探测间隔，单位：秒，0表示不开启</p>
                     * 
                     */
                    uint64_t GetUnHealthyInterval() const;

                    /**
                     * 设置<p>主动健康检查异常探测间隔，单位：秒，0表示不开启</p>
                     * @param _unHealthyInterval <p>主动健康检查异常探测间隔，单位：秒，0表示不开启</p>
                     * 
                     */
                    void SetUnHealthyInterval(const uint64_t& _unHealthyInterval);

                    /**
                     * 判断参数 UnHealthyInterval 是否已赋值
                     * @return UnHealthyInterval 是否已赋值
                     * 
                     */
                    bool UnHealthyIntervalHasBeenSet() const;

                    /**
                     * 获取<p>在 GET HTTP 请求中使用的路径，以作为主动运行状况检查的探测器运行。默认： ”/”。</p>
                     * @return HttpPath <p>在 GET HTTP 请求中使用的路径，以作为主动运行状况检查的探测器运行。默认： ”/”。</p>
                     * 
                     */
                    std::string GetHttpPath() const;

                    /**
                     * 设置<p>在 GET HTTP 请求中使用的路径，以作为主动运行状况检查的探测器运行。默认： ”/”。</p>
                     * @param _httpPath <p>在 GET HTTP 请求中使用的路径，以作为主动运行状况检查的探测器运行。默认： ”/”。</p>
                     * 
                     */
                    void SetHttpPath(const std::string& _httpPath);

                    /**
                     * 判断参数 HttpPath 是否已赋值
                     * @return HttpPath 是否已赋值
                     * 
                     */
                    bool HttpPathHasBeenSet() const;

                    /**
                     * 获取<p>GET HTTP 请求的超时时间，单位：秒。默认 60。</p>
                     * @return Timeout <p>GET HTTP 请求的超时时间，单位：秒。默认 60。</p>
                     * 
                     */
                    double GetTimeout() const;

                    /**
                     * 设置<p>GET HTTP 请求的超时时间，单位：秒。默认 60。</p>
                     * @param _timeout <p>GET HTTP 请求的超时时间，单位：秒。默认 60。</p>
                     * 
                     */
                    void SetTimeout(const double& _timeout);

                    /**
                     * 判断参数 Timeout 是否已赋值
                     * @return Timeout 是否已赋值
                     * 
                     */
                    bool TimeoutHasBeenSet() const;

                    /**
                     * 获取<p>Host头</p>
                     * @return HostHeader <p>Host头</p>
                     * 
                     */
                    std::string GetHostHeader() const;

                    /**
                     * 设置<p>Host头</p>
                     * @param _hostHeader <p>Host头</p>
                     * 
                     */
                    void SetHostHeader(const std::string& _hostHeader);

                    /**
                     * 判断参数 HostHeader 是否已赋值
                     * @return HostHeader 是否已赋值
                     * 
                     */
                    bool HostHeaderHasBeenSet() const;

                private:

                    /**
                     * <p>主动健康检查健康探测间隔，单位：秒，0表示不开启</p>
                     */
                    uint64_t m_healthyInterval;
                    bool m_healthyIntervalHasBeenSet;

                    /**
                     * <p>主动健康检查异常探测间隔，单位：秒，0表示不开启</p>
                     */
                    uint64_t m_unHealthyInterval;
                    bool m_unHealthyIntervalHasBeenSet;

                    /**
                     * <p>在 GET HTTP 请求中使用的路径，以作为主动运行状况检查的探测器运行。默认： ”/”。</p>
                     */
                    std::string m_httpPath;
                    bool m_httpPathHasBeenSet;

                    /**
                     * <p>GET HTTP 请求的超时时间，单位：秒。默认 60。</p>
                     */
                    double m_timeout;
                    bool m_timeoutHasBeenSet;

                    /**
                     * <p>Host头</p>
                     */
                    std::string m_hostHeader;
                    bool m_hostHeaderHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSE_V20201207_MODEL_KONGACTIVEHEALTHCHECK_H_
