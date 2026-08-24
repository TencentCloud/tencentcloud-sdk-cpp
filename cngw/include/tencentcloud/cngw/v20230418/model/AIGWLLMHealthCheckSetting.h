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

#ifndef TENCENTCLOUD_CNGW_V20230418_MODEL_AIGWLLMHEALTHCHECKSETTING_H_
#define TENCENTCLOUD_CNGW_V20230418_MODEL_AIGWLLMHEALTHCHECKSETTING_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cngw
    {
        namespace V20230418
        {
            namespace Model
            {
                /**
                * AI网关LLM健康检查配置
                */
                class AIGWLLMHealthCheckSetting : public AbstractModel
                {
                public:
                    AIGWLLMHealthCheckSetting();
                    ~AIGWLLMHealthCheckSetting() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>检查失败阈值</p>
                     * @return HealthCheckFailThreshold <p>检查失败阈值</p>
                     * 
                     */
                    uint64_t GetHealthCheckFailThreshold() const;

                    /**
                     * 设置<p>检查失败阈值</p>
                     * @param _healthCheckFailThreshold <p>检查失败阈值</p>
                     * 
                     */
                    void SetHealthCheckFailThreshold(const uint64_t& _healthCheckFailThreshold);

                    /**
                     * 判断参数 HealthCheckFailThreshold 是否已赋值
                     * @return HealthCheckFailThreshold 是否已赋值
                     * 
                     */
                    bool HealthCheckFailThresholdHasBeenSet() const;

                    /**
                     * 获取<p>检查间隔</p>
                     * @return HealthCheckIntervalSecond <p>检查间隔</p>
                     * 
                     */
                    uint64_t GetHealthCheckIntervalSecond() const;

                    /**
                     * 设置<p>检查间隔</p>
                     * @param _healthCheckIntervalSecond <p>检查间隔</p>
                     * 
                     */
                    void SetHealthCheckIntervalSecond(const uint64_t& _healthCheckIntervalSecond);

                    /**
                     * 判断参数 HealthCheckIntervalSecond 是否已赋值
                     * @return HealthCheckIntervalSecond 是否已赋值
                     * 
                     */
                    bool HealthCheckIntervalSecondHasBeenSet() const;

                    /**
                     * 获取<p>检查恢复阈值</p>
                     * @return HealthCheckRecoverThreshold <p>检查恢复阈值</p>
                     * 
                     */
                    uint64_t GetHealthCheckRecoverThreshold() const;

                    /**
                     * 设置<p>检查恢复阈值</p>
                     * @param _healthCheckRecoverThreshold <p>检查恢复阈值</p>
                     * 
                     */
                    void SetHealthCheckRecoverThreshold(const uint64_t& _healthCheckRecoverThreshold);

                    /**
                     * 判断参数 HealthCheckRecoverThreshold 是否已赋值
                     * @return HealthCheckRecoverThreshold 是否已赋值
                     * 
                     */
                    bool HealthCheckRecoverThresholdHasBeenSet() const;

                    /**
                     * 获取<p>检查超时时间</p>
                     * @return HealthCheckTimeout <p>检查超时时间</p>
                     * 
                     */
                    uint64_t GetHealthCheckTimeout() const;

                    /**
                     * 设置<p>检查超时时间</p>
                     * @param _healthCheckTimeout <p>检查超时时间</p>
                     * 
                     */
                    void SetHealthCheckTimeout(const uint64_t& _healthCheckTimeout);

                    /**
                     * 判断参数 HealthCheckTimeout 是否已赋值
                     * @return HealthCheckTimeout 是否已赋值
                     * 
                     */
                    bool HealthCheckTimeoutHasBeenSet() const;

                    /**
                     * 获取<p>检查路径</p>
                     * @return HealthCheckPath <p>检查路径</p>
                     * 
                     */
                    std::string GetHealthCheckPath() const;

                    /**
                     * 设置<p>检查路径</p>
                     * @param _healthCheckPath <p>检查路径</p>
                     * 
                     */
                    void SetHealthCheckPath(const std::string& _healthCheckPath);

                    /**
                     * 判断参数 HealthCheckPath 是否已赋值
                     * @return HealthCheckPath 是否已赋值
                     * 
                     */
                    bool HealthCheckPathHasBeenSet() const;

                private:

                    /**
                     * <p>检查失败阈值</p>
                     */
                    uint64_t m_healthCheckFailThreshold;
                    bool m_healthCheckFailThresholdHasBeenSet;

                    /**
                     * <p>检查间隔</p>
                     */
                    uint64_t m_healthCheckIntervalSecond;
                    bool m_healthCheckIntervalSecondHasBeenSet;

                    /**
                     * <p>检查恢复阈值</p>
                     */
                    uint64_t m_healthCheckRecoverThreshold;
                    bool m_healthCheckRecoverThresholdHasBeenSet;

                    /**
                     * <p>检查超时时间</p>
                     */
                    uint64_t m_healthCheckTimeout;
                    bool m_healthCheckTimeoutHasBeenSet;

                    /**
                     * <p>检查路径</p>
                     */
                    std::string m_healthCheckPath;
                    bool m_healthCheckPathHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CNGW_V20230418_MODEL_AIGWLLMHEALTHCHECKSETTING_H_
