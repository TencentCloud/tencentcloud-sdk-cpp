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

#ifndef TENCENTCLOUD_REDIS_V20180412_MODEL_OPENLOGREQUEST_H_
#define TENCENTCLOUD_REDIS_V20180412_MODEL_OPENLOGREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Redis
    {
        namespace V20180412
        {
            namespace Model
            {
                /**
                * OpenLog请求参数结构体
                */
                class OpenLogRequest : public AbstractModel
                {
                public:
                    OpenLogRequest();
                    ~OpenLogRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>指定实例 ID。例如：crs-xjhsdj****。请登录<a href="https://console.cloud.tencent.com/redis">Redis控制台</a>在实例列表复制实例 ID。</p>
                     * @return InstanceId <p>指定实例 ID。例如：crs-xjhsdj****。请登录<a href="https://console.cloud.tencent.com/redis">Redis控制台</a>在实例列表复制实例 ID。</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>指定实例 ID。例如：crs-xjhsdj****。请登录<a href="https://console.cloud.tencent.com/redis">Redis控制台</a>在实例列表复制实例 ID。</p>
                     * @param _instanceId <p>指定实例 ID。例如：crs-xjhsdj****。请登录<a href="https://console.cloud.tencent.com/redis">Redis控制台</a>在实例列表复制实例 ID。</p>
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
                     * 获取<p>日志类型。</p><p>枚举值：</p><ul><li>auditLog： 审计日志。</li></ul>
                     * @return LogType <p>日志类型。</p><p>枚举值：</p><ul><li>auditLog： 审计日志。</li></ul>
                     * 
                     */
                    std::string GetLogType() const;

                    /**
                     * 设置<p>日志类型。</p><p>枚举值：</p><ul><li>auditLog： 审计日志。</li></ul>
                     * @param _logType <p>日志类型。</p><p>枚举值：</p><ul><li>auditLog： 审计日志。</li></ul>
                     * 
                     */
                    void SetLogType(const std::string& _logType);

                    /**
                     * 判断参数 LogType 是否已赋值
                     * @return LogType 是否已赋值
                     * 
                     */
                    bool LogTypeHasBeenSet() const;

                    /**
                     * 获取<p>日志子类型。</p><p>枚举值：</p><ul><li>write： 写命令。</li><li>read： 读命令。</li><li>all： 读写命令。</li></ul>
                     * @return LogSubType <p>日志子类型。</p><p>枚举值：</p><ul><li>write： 写命令。</li><li>read： 读命令。</li><li>all： 读写命令。</li></ul>
                     * 
                     */
                    std::string GetLogSubType() const;

                    /**
                     * 设置<p>日志子类型。</p><p>枚举值：</p><ul><li>write： 写命令。</li><li>read： 读命令。</li><li>all： 读写命令。</li></ul>
                     * @param _logSubType <p>日志子类型。</p><p>枚举值：</p><ul><li>write： 写命令。</li><li>read： 读命令。</li><li>all： 读写命令。</li></ul>
                     * 
                     */
                    void SetLogSubType(const std::string& _logSubType);

                    /**
                     * 判断参数 LogSubType 是否已赋值
                     * @return LogSubType 是否已赋值
                     * 
                     */
                    bool LogSubTypeHasBeenSet() const;

                    /**
                     * 获取<p>日志有效期, 单位：天。</p><p>枚举值：</p><ul><li>7：  7 天</li><li>30： 30 天</li></ul><p>默认值：7</p>
                     * @return LogExpireDay <p>日志有效期, 单位：天。</p><p>枚举值：</p><ul><li>7：  7 天</li><li>30： 30 天</li></ul><p>默认值：7</p>
                     * 
                     */
                    int64_t GetLogExpireDay() const;

                    /**
                     * 设置<p>日志有效期, 单位：天。</p><p>枚举值：</p><ul><li>7：  7 天</li><li>30： 30 天</li></ul><p>默认值：7</p>
                     * @param _logExpireDay <p>日志有效期, 单位：天。</p><p>枚举值：</p><ul><li>7：  7 天</li><li>30： 30 天</li></ul><p>默认值：7</p>
                     * 
                     */
                    void SetLogExpireDay(const int64_t& _logExpireDay);

                    /**
                     * 判断参数 LogExpireDay 是否已赋值
                     * @return LogExpireDay 是否已赋值
                     * 
                     */
                    bool LogExpireDayHasBeenSet() const;

                    /**
                     * 获取<p>高频日志有效期, 单位：天。</p><p>枚举值：</p><ul><li>7： 7天</li></ul><p>默认值：7</p>
                     * @return HighLogExpireDay <p>高频日志有效期, 单位：天。</p><p>枚举值：</p><ul><li>7： 7天</li></ul><p>默认值：7</p>
                     * 
                     */
                    int64_t GetHighLogExpireDay() const;

                    /**
                     * 设置<p>高频日志有效期, 单位：天。</p><p>枚举值：</p><ul><li>7： 7天</li></ul><p>默认值：7</p>
                     * @param _highLogExpireDay <p>高频日志有效期, 单位：天。</p><p>枚举值：</p><ul><li>7： 7天</li></ul><p>默认值：7</p>
                     * 
                     */
                    void SetHighLogExpireDay(const int64_t& _highLogExpireDay);

                    /**
                     * 判断参数 HighLogExpireDay 是否已赋值
                     * @return HighLogExpireDay 是否已赋值
                     * 
                     */
                    bool HighLogExpireDayHasBeenSet() const;

                    /**
                     * 获取<p>日志降级策略阈值。当实例 P99 延迟达到该阈值后，系统将自动丢弃审计日志数据，以优先保障业务可用性。</p><ul><li>单位：毫秒。</li><li>默认值：500。</li><li>取值范围：[300, 1000]。</li></ul>
                     * @return DegradeStrategy <p>日志降级策略阈值。当实例 P99 延迟达到该阈值后，系统将自动丢弃审计日志数据，以优先保障业务可用性。</p><ul><li>单位：毫秒。</li><li>默认值：500。</li><li>取值范围：[300, 1000]。</li></ul>
                     * 
                     */
                    int64_t GetDegradeStrategy() const;

                    /**
                     * 设置<p>日志降级策略阈值。当实例 P99 延迟达到该阈值后，系统将自动丢弃审计日志数据，以优先保障业务可用性。</p><ul><li>单位：毫秒。</li><li>默认值：500。</li><li>取值范围：[300, 1000]。</li></ul>
                     * @param _degradeStrategy <p>日志降级策略阈值。当实例 P99 延迟达到该阈值后，系统将自动丢弃审计日志数据，以优先保障业务可用性。</p><ul><li>单位：毫秒。</li><li>默认值：500。</li><li>取值范围：[300, 1000]。</li></ul>
                     * 
                     */
                    void SetDegradeStrategy(const int64_t& _degradeStrategy);

                    /**
                     * 判断参数 DegradeStrategy 是否已赋值
                     * @return DegradeStrategy 是否已赋值
                     * 
                     */
                    bool DegradeStrategyHasBeenSet() const;

                private:

                    /**
                     * <p>指定实例 ID。例如：crs-xjhsdj****。请登录<a href="https://console.cloud.tencent.com/redis">Redis控制台</a>在实例列表复制实例 ID。</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>日志类型。</p><p>枚举值：</p><ul><li>auditLog： 审计日志。</li></ul>
                     */
                    std::string m_logType;
                    bool m_logTypeHasBeenSet;

                    /**
                     * <p>日志子类型。</p><p>枚举值：</p><ul><li>write： 写命令。</li><li>read： 读命令。</li><li>all： 读写命令。</li></ul>
                     */
                    std::string m_logSubType;
                    bool m_logSubTypeHasBeenSet;

                    /**
                     * <p>日志有效期, 单位：天。</p><p>枚举值：</p><ul><li>7：  7 天</li><li>30： 30 天</li></ul><p>默认值：7</p>
                     */
                    int64_t m_logExpireDay;
                    bool m_logExpireDayHasBeenSet;

                    /**
                     * <p>高频日志有效期, 单位：天。</p><p>枚举值：</p><ul><li>7： 7天</li></ul><p>默认值：7</p>
                     */
                    int64_t m_highLogExpireDay;
                    bool m_highLogExpireDayHasBeenSet;

                    /**
                     * <p>日志降级策略阈值。当实例 P99 延迟达到该阈值后，系统将自动丢弃审计日志数据，以优先保障业务可用性。</p><ul><li>单位：毫秒。</li><li>默认值：500。</li><li>取值范围：[300, 1000]。</li></ul>
                     */
                    int64_t m_degradeStrategy;
                    bool m_degradeStrategyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_REDIS_V20180412_MODEL_OPENLOGREQUEST_H_
