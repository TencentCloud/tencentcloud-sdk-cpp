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

#ifndef TENCENTCLOUD_MQTT_V20240516_MODEL_AUTHORIZATIONPOLICYPRIORITY_H_
#define TENCENTCLOUD_MQTT_V20240516_MODEL_AUTHORIZATIONPOLICYPRIORITY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mqtt
    {
        namespace V20240516
        {
            namespace Model
            {
                /**
                * 策略规则优先级
                */
                class AuthorizationPolicyPriority : public AbstractModel
                {
                public:
                    AuthorizationPolicyPriority();
                    ~AuthorizationPolicyPriority() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取授权策略规则id，可以从 [DescribeAuthorizationPolicies](https://cloud.tencent.com/document/api/1778/111074)接口获得。
                     * @return Id 授权策略规则id，可以从 [DescribeAuthorizationPolicies](https://cloud.tencent.com/document/api/1778/111074)接口获得。
                     * 
                     */
                    int64_t GetId() const;

                    /**
                     * 设置授权策略规则id，可以从 [DescribeAuthorizationPolicies](https://cloud.tencent.com/document/api/1778/111074)接口获得。
                     * @param _id 授权策略规则id，可以从 [DescribeAuthorizationPolicies](https://cloud.tencent.com/document/api/1778/111074)接口获得。
                     * 
                     */
                    void SetId(const int64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取优先级
                     * @return Priority 优先级
                     * 
                     */
                    int64_t GetPriority() const;

                    /**
                     * 设置优先级
                     * @param _priority 优先级
                     * 
                     */
                    void SetPriority(const int64_t& _priority);

                    /**
                     * 判断参数 Priority 是否已赋值
                     * @return Priority 是否已赋值
                     * 
                     */
                    bool PriorityHasBeenSet() const;

                private:

                    /**
                     * 授权策略规则id，可以从 [DescribeAuthorizationPolicies](https://cloud.tencent.com/document/api/1778/111074)接口获得。
                     */
                    int64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 优先级
                     */
                    int64_t m_priority;
                    bool m_priorityHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MQTT_V20240516_MODEL_AUTHORIZATIONPOLICYPRIORITY_H_
