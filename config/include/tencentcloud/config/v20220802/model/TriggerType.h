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

#ifndef TENCENTCLOUD_CONFIG_V20220802_MODEL_TRIGGERTYPE_H_
#define TENCENTCLOUD_CONFIG_V20220802_MODEL_TRIGGERTYPE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Config
    {
        namespace V20220802
        {
            namespace Model
            {
                /**
                * 规则支持触发类型
                */
                class TriggerType : public AbstractModel
                {
                public:
                    TriggerType();
                    ~TriggerType() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取触发类型
                     * @return MessageType 触发类型
                     * 
                     */
                    std::string GetMessageType() const;

                    /**
                     * 设置触发类型
                     * @param _messageType 触发类型
                     * 
                     */
                    void SetMessageType(const std::string& _messageType);

                    /**
                     * 判断参数 MessageType 是否已赋值
                     * @return MessageType 是否已赋值
                     * 
                     */
                    bool MessageTypeHasBeenSet() const;

                    /**
                     * 获取触发时间周期
                     * @return MaximumExecutionFrequency 触发时间周期
                     * 
                     */
                    std::string GetMaximumExecutionFrequency() const;

                    /**
                     * 设置触发时间周期
                     * @param _maximumExecutionFrequency 触发时间周期
                     * 
                     */
                    void SetMaximumExecutionFrequency(const std::string& _maximumExecutionFrequency);

                    /**
                     * 判断参数 MaximumExecutionFrequency 是否已赋值
                     * @return MaximumExecutionFrequency 是否已赋值
                     * 
                     */
                    bool MaximumExecutionFrequencyHasBeenSet() const;

                private:

                    /**
                     * 触发类型
                     */
                    std::string m_messageType;
                    bool m_messageTypeHasBeenSet;

                    /**
                     * 触发时间周期
                     */
                    std::string m_maximumExecutionFrequency;
                    bool m_maximumExecutionFrequencyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CONFIG_V20220802_MODEL_TRIGGERTYPE_H_
