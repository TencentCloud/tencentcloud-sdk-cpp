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

#ifndef TENCENTCLOUD_TSE_V20201207_MODEL_AIGWCROSSSERVICEFALLBACKCONFIG_H_
#define TENCENTCLOUD_TSE_V20201207_MODEL_AIGWCROSSSERVICEFALLBACKCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tse/v20201207/model/AIGWFallbackServiceItem.h>


namespace TencentCloud
{
    namespace Tse
    {
        namespace V20201207
        {
            namespace Model
            {
                /**
                * 跨服务降级配置
                */
                class AIGWCrossServiceFallbackConfig : public AbstractModel
                {
                public:
                    AIGWCrossServiceFallbackConfig();
                    ~AIGWCrossServiceFallbackConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>触发条件</p><p>枚举值：</p><ul><li>ServiceUnavailable： 服务不可用</li><li>ConnectionTimeout： 连接超时</li><li>RateLimited： 限流</li></ul>
                     * @return TriggerConditions <p>触发条件</p><p>枚举值：</p><ul><li>ServiceUnavailable： 服务不可用</li><li>ConnectionTimeout： 连接超时</li><li>RateLimited： 限流</li></ul>
                     * 
                     */
                    std::vector<std::string> GetTriggerConditions() const;

                    /**
                     * 设置<p>触发条件</p><p>枚举值：</p><ul><li>ServiceUnavailable： 服务不可用</li><li>ConnectionTimeout： 连接超时</li><li>RateLimited： 限流</li></ul>
                     * @param _triggerConditions <p>触发条件</p><p>枚举值：</p><ul><li>ServiceUnavailable： 服务不可用</li><li>ConnectionTimeout： 连接超时</li><li>RateLimited： 限流</li></ul>
                     * 
                     */
                    void SetTriggerConditions(const std::vector<std::string>& _triggerConditions);

                    /**
                     * 判断参数 TriggerConditions 是否已赋值
                     * @return TriggerConditions 是否已赋值
                     * 
                     */
                    bool TriggerConditionsHasBeenSet() const;

                    /**
                     * 获取<p>fallback 服务链</p>
                     * @return FallbackServiceChain <p>fallback 服务链</p>
                     * 
                     */
                    std::vector<AIGWFallbackServiceItem> GetFallbackServiceChain() const;

                    /**
                     * 设置<p>fallback 服务链</p>
                     * @param _fallbackServiceChain <p>fallback 服务链</p>
                     * 
                     */
                    void SetFallbackServiceChain(const std::vector<AIGWFallbackServiceItem>& _fallbackServiceChain);

                    /**
                     * 判断参数 FallbackServiceChain 是否已赋值
                     * @return FallbackServiceChain 是否已赋值
                     * 
                     */
                    bool FallbackServiceChainHasBeenSet() const;

                private:

                    /**
                     * <p>触发条件</p><p>枚举值：</p><ul><li>ServiceUnavailable： 服务不可用</li><li>ConnectionTimeout： 连接超时</li><li>RateLimited： 限流</li></ul>
                     */
                    std::vector<std::string> m_triggerConditions;
                    bool m_triggerConditionsHasBeenSet;

                    /**
                     * <p>fallback 服务链</p>
                     */
                    std::vector<AIGWFallbackServiceItem> m_fallbackServiceChain;
                    bool m_fallbackServiceChainHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSE_V20201207_MODEL_AIGWCROSSSERVICEFALLBACKCONFIG_H_
