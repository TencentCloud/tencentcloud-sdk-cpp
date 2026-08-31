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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_SERVICEPROVIDERHEALTHCHECKCONFIGITEMINPUT_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_SERVICEPROVIDERHEALTHCHECKCONFIGITEMINPUT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Clb
    {
        namespace V20180317
        {
            namespace Model
            {
                /**
                * 健康检查配置
                */
                class ServiceProviderHealthCheckConfigItemInput : public AbstractModel
                {
                public:
                    ServiceProviderHealthCheckConfigItemInput();
                    ~ServiceProviderHealthCheckConfigItemInput() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>是否开启健康检查</p><p>枚举值：</p><ul><li>true： 是</li><li>false： 否</li></ul>
                     * @return HealthCheckEnabled <p>是否开启健康检查</p><p>枚举值：</p><ul><li>true： 是</li><li>false： 否</li></ul>
                     * 
                     */
                    bool GetHealthCheckEnabled() const;

                    /**
                     * 设置<p>是否开启健康检查</p><p>枚举值：</p><ul><li>true： 是</li><li>false： 否</li></ul>
                     * @param _healthCheckEnabled <p>是否开启健康检查</p><p>枚举值：</p><ul><li>true： 是</li><li>false： 否</li></ul>
                     * 
                     */
                    void SetHealthCheckEnabled(const bool& _healthCheckEnabled);

                    /**
                     * 判断参数 HealthCheckEnabled 是否已赋值
                     * @return HealthCheckEnabled 是否已赋值
                     * 
                     */
                    bool HealthCheckEnabledHasBeenSet() const;

                    /**
                     * 获取<p>健康检查间隔。支持以300s为步长配置。</p><p>取值范围：[300, 14400]</p><p>单位：s</p><p>默认值：300</p>
                     * @return HealthCheckInterval <p>健康检查间隔。支持以300s为步长配置。</p><p>取值范围：[300, 14400]</p><p>单位：s</p><p>默认值：300</p>
                     * 
                     */
                    uint64_t GetHealthCheckInterval() const;

                    /**
                     * 设置<p>健康检查间隔。支持以300s为步长配置。</p><p>取值范围：[300, 14400]</p><p>单位：s</p><p>默认值：300</p>
                     * @param _healthCheckInterval <p>健康检查间隔。支持以300s为步长配置。</p><p>取值范围：[300, 14400]</p><p>单位：s</p><p>默认值：300</p>
                     * 
                     */
                    void SetHealthCheckInterval(const uint64_t& _healthCheckInterval);

                    /**
                     * 判断参数 HealthCheckInterval 是否已赋值
                     * @return HealthCheckInterval 是否已赋值
                     * 
                     */
                    bool HealthCheckIntervalHasBeenSet() const;

                    /**
                     * 获取<p>不健康阈值。表示当模型连续多少次不健康时认为该模型不健康。</p><p>取值范围：[1, 10]</p>
                     * @return HealthCheckUnhealthyThreshold <p>不健康阈值。表示当模型连续多少次不健康时认为该模型不健康。</p><p>取值范围：[1, 10]</p>
                     * 
                     */
                    uint64_t GetHealthCheckUnhealthyThreshold() const;

                    /**
                     * 设置<p>不健康阈值。表示当模型连续多少次不健康时认为该模型不健康。</p><p>取值范围：[1, 10]</p>
                     * @param _healthCheckUnhealthyThreshold <p>不健康阈值。表示当模型连续多少次不健康时认为该模型不健康。</p><p>取值范围：[1, 10]</p>
                     * 
                     */
                    void SetHealthCheckUnhealthyThreshold(const uint64_t& _healthCheckUnhealthyThreshold);

                    /**
                     * 判断参数 HealthCheckUnhealthyThreshold 是否已赋值
                     * @return HealthCheckUnhealthyThreshold 是否已赋值
                     * 
                     */
                    bool HealthCheckUnhealthyThresholdHasBeenSet() const;

                    /**
                     * 获取<p>健康检查使用的最大Token数量。部分模型如gpt系列可能仅支持大于等于16。</p><p>取值范围：[1, 1024]</p><p>默认值：1</p>
                     * @return HealthCheckMaxTokens <p>健康检查使用的最大Token数量。部分模型如gpt系列可能仅支持大于等于16。</p><p>取值范围：[1, 1024]</p><p>默认值：1</p>
                     * 
                     */
                    uint64_t GetHealthCheckMaxTokens() const;

                    /**
                     * 设置<p>健康检查使用的最大Token数量。部分模型如gpt系列可能仅支持大于等于16。</p><p>取值范围：[1, 1024]</p><p>默认值：1</p>
                     * @param _healthCheckMaxTokens <p>健康检查使用的最大Token数量。部分模型如gpt系列可能仅支持大于等于16。</p><p>取值范围：[1, 1024]</p><p>默认值：1</p>
                     * 
                     */
                    void SetHealthCheckMaxTokens(const uint64_t& _healthCheckMaxTokens);

                    /**
                     * 判断参数 HealthCheckMaxTokens 是否已赋值
                     * @return HealthCheckMaxTokens 是否已赋值
                     * 
                     */
                    bool HealthCheckMaxTokensHasBeenSet() const;

                    /**
                     * 获取<p>健康检查协议</p><p>枚举值：</p><ul><li>chat： 表示/chat/completion协议</li><li>messages： 表示/v1/messages协议</li><li>responses： 表示/v1/messages协议</li></ul>
                     * @return HealthCheckProtocol <p>健康检查协议</p><p>枚举值：</p><ul><li>chat： 表示/chat/completion协议</li><li>messages： 表示/v1/messages协议</li><li>responses： 表示/v1/messages协议</li></ul>
                     * 
                     */
                    std::string GetHealthCheckProtocol() const;

                    /**
                     * 设置<p>健康检查协议</p><p>枚举值：</p><ul><li>chat： 表示/chat/completion协议</li><li>messages： 表示/v1/messages协议</li><li>responses： 表示/v1/messages协议</li></ul>
                     * @param _healthCheckProtocol <p>健康检查协议</p><p>枚举值：</p><ul><li>chat： 表示/chat/completion协议</li><li>messages： 表示/v1/messages协议</li><li>responses： 表示/v1/messages协议</li></ul>
                     * 
                     */
                    void SetHealthCheckProtocol(const std::string& _healthCheckProtocol);

                    /**
                     * 判断参数 HealthCheckProtocol 是否已赋值
                     * @return HealthCheckProtocol 是否已赋值
                     * 
                     */
                    bool HealthCheckProtocolHasBeenSet() const;

                private:

                    /**
                     * <p>是否开启健康检查</p><p>枚举值：</p><ul><li>true： 是</li><li>false： 否</li></ul>
                     */
                    bool m_healthCheckEnabled;
                    bool m_healthCheckEnabledHasBeenSet;

                    /**
                     * <p>健康检查间隔。支持以300s为步长配置。</p><p>取值范围：[300, 14400]</p><p>单位：s</p><p>默认值：300</p>
                     */
                    uint64_t m_healthCheckInterval;
                    bool m_healthCheckIntervalHasBeenSet;

                    /**
                     * <p>不健康阈值。表示当模型连续多少次不健康时认为该模型不健康。</p><p>取值范围：[1, 10]</p>
                     */
                    uint64_t m_healthCheckUnhealthyThreshold;
                    bool m_healthCheckUnhealthyThresholdHasBeenSet;

                    /**
                     * <p>健康检查使用的最大Token数量。部分模型如gpt系列可能仅支持大于等于16。</p><p>取值范围：[1, 1024]</p><p>默认值：1</p>
                     */
                    uint64_t m_healthCheckMaxTokens;
                    bool m_healthCheckMaxTokensHasBeenSet;

                    /**
                     * <p>健康检查协议</p><p>枚举值：</p><ul><li>chat： 表示/chat/completion协议</li><li>messages： 表示/v1/messages协议</li><li>responses： 表示/v1/messages协议</li></ul>
                     */
                    std::string m_healthCheckProtocol;
                    bool m_healthCheckProtocolHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_SERVICEPROVIDERHEALTHCHECKCONFIGITEMINPUT_H_
