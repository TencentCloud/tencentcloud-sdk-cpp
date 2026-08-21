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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_WEBHOOKCUSTOMFIELD_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_WEBHOOKCUSTOMFIELD_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * 自定义透传字段
                */
                class WebhookCustomField : public AbstractModel
                {
                public:
                    WebhookCustomField();
                    ~WebhookCustomField() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取字段名
入参限制：长度 1-64
                     * @return Key 字段名
入参限制：长度 1-64
                     * 
                     */
                    std::string GetKey() const;

                    /**
                     * 设置字段名
入参限制：长度 1-64
                     * @param _key 字段名
入参限制：长度 1-64
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
                     * 获取字段值
入参限制：长度 1-256
                     * @return Value 字段值
入参限制：长度 1-256
                     * 
                     */
                    std::string GetValue() const;

                    /**
                     * 设置字段值
入参限制：长度 1-256
                     * @param _value 字段值
入参限制：长度 1-256
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
                     * 字段名
入参限制：长度 1-64
                     */
                    std::string m_key;
                    bool m_keyHasBeenSet;

                    /**
                     * 字段值
入参限制：长度 1-256
                     */
                    std::string m_value;
                    bool m_valueHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_WEBHOOKCUSTOMFIELD_H_
