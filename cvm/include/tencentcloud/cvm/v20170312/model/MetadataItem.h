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

#ifndef TENCENTCLOUD_CVM_V20170312_MODEL_METADATAITEM_H_
#define TENCENTCLOUD_CVM_V20170312_MODEL_METADATAITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cvm
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * 自定义metadata key和value
                */
                class MetadataItem : public AbstractModel
                {
                public:
                    MetadataItem();
                    ~MetadataItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取自定义metadata键，由大写字母（A-Z）、小写字母（a-z）、数字（0-9）、下划线（_）或连字符（-）组成，大小上限为128 字节。
                     * @return Key 自定义metadata键，由大写字母（A-Z）、小写字母（a-z）、数字（0-9）、下划线（_）或连字符（-）组成，大小上限为128 字节。
                     * 
                     */
                    std::string GetKey() const;

                    /**
                     * 设置自定义metadata键，由大写字母（A-Z）、小写字母（a-z）、数字（0-9）、下划线（_）或连字符（-）组成，大小上限为128 字节。
                     * @param _key 自定义metadata键，由大写字母（A-Z）、小写字母（a-z）、数字（0-9）、下划线（_）或连字符（-）组成，大小上限为128 字节。
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
                     * 获取自定义metadata值，大小上限为256 KB。
                     * @return Value 自定义metadata值，大小上限为256 KB。
                     * 
                     */
                    std::string GetValue() const;

                    /**
                     * 设置自定义metadata值，大小上限为256 KB。
                     * @param _value 自定义metadata值，大小上限为256 KB。
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
                     * 自定义metadata键，由大写字母（A-Z）、小写字母（a-z）、数字（0-9）、下划线（_）或连字符（-）组成，大小上限为128 字节。
                     */
                    std::string m_key;
                    bool m_keyHasBeenSet;

                    /**
                     * 自定义metadata值，大小上限为256 KB。
                     */
                    std::string m_value;
                    bool m_valueHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CVM_V20170312_MODEL_METADATAITEM_H_
