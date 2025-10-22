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

#ifndef TENCENTCLOUD_ESSBASIC_V20210526_MODEL_OPTION_H_
#define TENCENTCLOUD_ESSBASIC_V20210526_MODEL_OPTION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Essbasic
    {
        namespace V20210526
        {
            namespace Model
            {
                /**
                * 业务逻辑个性化配置字段，默认不传

注: `配置前请联系对接的客户经理沟通确认。`
                */
                class Option : public AbstractModel
                {
                public:
                    Option();
                    ~Option() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取个性化配置参数Key字段，对应传入字段的字段名
                     * @return Key 个性化配置参数Key字段，对应传入字段的字段名
                     * 
                     */
                    std::string GetKey() const;

                    /**
                     * 设置个性化配置参数Key字段，对应传入字段的字段名
                     * @param _key 个性化配置参数Key字段，对应传入字段的字段名
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
                     * 获取个性化配置参数Value字段，对应传入字段的字段值
                     * @return Value 个性化配置参数Value字段，对应传入字段的字段值
                     * 
                     */
                    std::string GetValue() const;

                    /**
                     * 设置个性化配置参数Value字段，对应传入字段的字段值
                     * @param _value 个性化配置参数Value字段，对应传入字段的字段值
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
                     * 个性化配置参数Key字段，对应传入字段的字段名
                     */
                    std::string m_key;
                    bool m_keyHasBeenSet;

                    /**
                     * 个性化配置参数Value字段，对应传入字段的字段值
                     */
                    std::string m_value;
                    bool m_valueHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESSBASIC_V20210526_MODEL_OPTION_H_
