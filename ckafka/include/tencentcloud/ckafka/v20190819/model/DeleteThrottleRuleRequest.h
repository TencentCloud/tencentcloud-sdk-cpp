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

#ifndef TENCENTCLOUD_CKAFKA_V20190819_MODEL_DELETETHROTTLERULEREQUEST_H_
#define TENCENTCLOUD_CKAFKA_V20190819_MODEL_DELETETHROTTLERULEREQUEST_H_

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
                * DeleteThrottleRule请求参数结构体
                */
                class DeleteThrottleRuleRequest : public AbstractModel
                {
                public:
                    DeleteThrottleRuleRequest();
                    ~DeleteThrottleRuleRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取限流规则Id
                     * @return ThrottleRuleId 限流规则Id
                     * 
                     */
                    std::string GetThrottleRuleId() const;

                    /**
                     * 设置限流规则Id
                     * @param _throttleRuleId 限流规则Id
                     * 
                     */
                    void SetThrottleRuleId(const std::string& _throttleRuleId);

                    /**
                     * 判断参数 ThrottleRuleId 是否已赋值
                     * @return ThrottleRuleId 是否已赋值
                     * 
                     */
                    bool ThrottleRuleIdHasBeenSet() const;

                    /**
                     * 获取实例标识
                     * @return InstanceId 实例标识
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例标识
                     * @param _instanceId 实例标识
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                private:

                    /**
                     * 限流规则Id
                     */
                    std::string m_throttleRuleId;
                    bool m_throttleRuleIdHasBeenSet;

                    /**
                     * 实例标识
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CKAFKA_V20190819_MODEL_DELETETHROTTLERULEREQUEST_H_
