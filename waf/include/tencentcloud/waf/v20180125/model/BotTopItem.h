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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_BOTTOPITEM_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_BOTTOPITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Waf
    {
        namespace V20180125
        {
            namespace Model
            {
                /**
                * bot的topN复杂类型
                */
                class BotTopItem : public AbstractModel
                {
                public:
                    BotTopItem();
                    ~BotTopItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取对应的key
                     * @return Key 对应的key
                     * 
                     */
                    std::string GetKey() const;

                    /**
                     * 设置对应的key
                     * @param _key 对应的key
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
                     * 获取对应的值
                     * @return Value 对应的值
                     * 
                     */
                    uint64_t GetValue() const;

                    /**
                     * 设置对应的值
                     * @param _value 对应的值
                     * 
                     */
                    void SetValue(const uint64_t& _value);

                    /**
                     * 判断参数 Value 是否已赋值
                     * @return Value 是否已赋值
                     * 
                     */
                    bool ValueHasBeenSet() const;

                    /**
                     * 获取key对应的展示描述语
                     * @return Label key对应的展示描述语
                     * 
                     */
                    std::string GetLabel() const;

                    /**
                     * 设置key对应的展示描述语
                     * @param _label key对应的展示描述语
                     * 
                     */
                    void SetLabel(const std::string& _label);

                    /**
                     * 判断参数 Label 是否已赋值
                     * @return Label 是否已赋值
                     * 
                     */
                    bool LabelHasBeenSet() const;

                private:

                    /**
                     * 对应的key
                     */
                    std::string m_key;
                    bool m_keyHasBeenSet;

                    /**
                     * 对应的值
                     */
                    uint64_t m_value;
                    bool m_valueHasBeenSet;

                    /**
                     * key对应的展示描述语
                     */
                    std::string m_label;
                    bool m_labelHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_BOTTOPITEM_H_
