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

#ifndef TENCENTCLOUD_CKAFKA_V20190819_MODEL_MODIFYTHROTTLERULEREQUEST_H_
#define TENCENTCLOUD_CKAFKA_V20190819_MODEL_MODIFYTHROTTLERULEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ckafka
    {
        namespace V20190819
        {
            namespace Model
            {
                /**
                * ModifyThrottleRule请求参数结构体
                */
                class ModifyThrottleRuleRequest : public AbstractModel
                {
                public:
                    ModifyThrottleRuleRequest();
                    ~ModifyThrottleRuleRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取规则标识
                     * @return ThrottleRuleId 规则标识
                     * 
                     */
                    uint64_t GetThrottleRuleId() const;

                    /**
                     * 设置规则标识
                     * @param _throttleRuleId 规则标识
                     * 
                     */
                    void SetThrottleRuleId(const uint64_t& _throttleRuleId);

                    /**
                     * 判断参数 ThrottleRuleId 是否已赋值
                     * @return ThrottleRuleId 是否已赋值
                     * 
                     */
                    bool ThrottleRuleIdHasBeenSet() const;

                    /**
                     * 获取实例Id
                     * @return InstanceId 实例Id
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例Id
                     * @param _instanceId 实例Id
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
                     * 获取消费限流值单位MB/s
                     * @return ConsumeThrottle 消费限流值单位MB/s
                     * 
                     */
                    uint64_t GetConsumeThrottle() const;

                    /**
                     * 设置消费限流值单位MB/s
                     * @param _consumeThrottle 消费限流值单位MB/s
                     * 
                     */
                    void SetConsumeThrottle(const uint64_t& _consumeThrottle);

                    /**
                     * 判断参数 ConsumeThrottle 是否已赋值
                     * @return ConsumeThrottle 是否已赋值
                     * 
                     */
                    bool ConsumeThrottleHasBeenSet() const;

                private:

                    /**
                     * 规则标识
                     */
                    uint64_t m_throttleRuleId;
                    bool m_throttleRuleIdHasBeenSet;

                    /**
                     * 实例Id
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 消费限流值单位MB/s
                     */
                    uint64_t m_consumeThrottle;
                    bool m_consumeThrottleHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CKAFKA_V20190819_MODEL_MODIFYTHROTTLERULEREQUEST_H_
