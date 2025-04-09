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
                     * 获取主动健康检查健康探测间隔，单位：秒，0表示不开启
                     * @return HealthyInterval 主动健康检查健康探测间隔，单位：秒，0表示不开启
                     * 
                     */
                    uint64_t GetHealthyInterval() const;

                    /**
                     * 设置主动健康检查健康探测间隔，单位：秒，0表示不开启
                     * @param _healthyInterval 主动健康检查健康探测间隔，单位：秒，0表示不开启
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
                     * 获取主动健康检查异常探测间隔，单位：秒，0表示不开启
                     * @return UnHealthyInterval 主动健康检查异常探测间隔，单位：秒，0表示不开启
                     * 
                     */
                    uint64_t GetUnHealthyInterval() const;

                    /**
                     * 设置主动健康检查异常探测间隔，单位：秒，0表示不开启
                     * @param _unHealthyInterval 主动健康检查异常探测间隔，单位：秒，0表示不开启
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
                     * 获取在 GET HTTP 请求中使用的路径，以作为主动运行状况检查的探测器运行。默认： ”/”。
                     * @return HttpPath 在 GET HTTP 请求中使用的路径，以作为主动运行状况检查的探测器运行。默认： ”/”。
                     * 
                     */
                    std::string GetHttpPath() const;

                    /**
                     * 设置在 GET HTTP 请求中使用的路径，以作为主动运行状况检查的探测器运行。默认： ”/”。
                     * @param _httpPath 在 GET HTTP 请求中使用的路径，以作为主动运行状况检查的探测器运行。默认： ”/”。
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
                     * 获取GET HTTP 请求的超时时间，单位：秒。默认 60。
                     * @return Timeout GET HTTP 请求的超时时间，单位：秒。默认 60。
                     * 
                     */
                    double GetTimeout() const;

                    /**
                     * 设置GET HTTP 请求的超时时间，单位：秒。默认 60。
                     * @param _timeout GET HTTP 请求的超时时间，单位：秒。默认 60。
                     * 
                     */
                    void SetTimeout(const double& _timeout);

                    /**
                     * 判断参数 Timeout 是否已赋值
                     * @return Timeout 是否已赋值
                     * 
                     */
                    bool TimeoutHasBeenSet() const;

                private:

                    /**
                     * 主动健康检查健康探测间隔，单位：秒，0表示不开启
                     */
                    uint64_t m_healthyInterval;
                    bool m_healthyIntervalHasBeenSet;

                    /**
                     * 主动健康检查异常探测间隔，单位：秒，0表示不开启
                     */
                    uint64_t m_unHealthyInterval;
                    bool m_unHealthyIntervalHasBeenSet;

                    /**
                     * 在 GET HTTP 请求中使用的路径，以作为主动运行状况检查的探测器运行。默认： ”/”。
                     */
                    std::string m_httpPath;
                    bool m_httpPathHasBeenSet;

                    /**
                     * GET HTTP 请求的超时时间，单位：秒。默认 60。
                     */
                    double m_timeout;
                    bool m_timeoutHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSE_V20201207_MODEL_KONGACTIVEHEALTHCHECK_H_
