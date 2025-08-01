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

#ifndef TENCENTCLOUD_MQTT_V20240516_MODEL_SUBSCRIPTIONUSERPROPERTY_H_
#define TENCENTCLOUD_MQTT_V20240516_MODEL_SUBSCRIPTIONUSERPROPERTY_H_

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
                * 订阅的UserProperty结构
                */
                class SubscriptionUserProperty : public AbstractModel
                {
                public:
                    SubscriptionUserProperty();
                    ~SubscriptionUserProperty() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取订阅的UserProperty键
                     * @return Key 订阅的UserProperty键
                     * 
                     */
                    std::string GetKey() const;

                    /**
                     * 设置订阅的UserProperty键
                     * @param _key 订阅的UserProperty键
                     * 
                     */
                    void SetKey(const std::string& _key);

                    /**
                     * 判断参数 Key 是否已赋值
                     * @return Key 是否已赋值
                     * 
                     */
                    bool KeyHasBeenSet() const;

                    /**
                     * 获取订阅的UserProperty值
                     * @return Value 订阅的UserProperty值
                     * 
                     */
                    std::string GetValue() const;

                    /**
                     * 设置订阅的UserProperty值
                     * @param _value 订阅的UserProperty值
                     * 
                     */
                    void SetValue(const std::string& _value);

                    /**
                     * 判断参数 Value 是否已赋值
                     * @return Value 是否已赋值
                     * 
                     */
                    bool ValueHasBeenSet() const;

                private:

                    /**
                     * 订阅的UserProperty键
                     */
                    std::string m_key;
                    bool m_keyHasBeenSet;

                    /**
                     * 订阅的UserProperty值
                     */
                    std::string m_value;
                    bool m_valueHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MQTT_V20240516_MODEL_SUBSCRIPTIONUSERPROPERTY_H_
