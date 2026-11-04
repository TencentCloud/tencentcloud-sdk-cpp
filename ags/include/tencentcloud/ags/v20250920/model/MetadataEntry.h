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

#ifndef TENCENTCLOUD_AGS_V20250920_MODEL_METADATAENTRY_H_
#define TENCENTCLOUD_AGS_V20250920_MODEL_METADATAENTRY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ags
    {
        namespace V20250920
        {
            namespace Model
            {
                /**
                * 版本元数据的字符串名称和值。Name 必须非空、小写且在同一 Metadata 数组内唯一；重复名称不允许覆盖。
                */
                class MetadataEntry : public AbstractModel
                {
                public:
                    MetadataEntry();
                    ~MetadataEntry() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>元数据名称。</p><p>参数格式：非空小写字符串，同一 Metadata 数组内唯一，不自动转换大小写。重复名称返回 InvalidParameter，即使 Value 相同也拒绝。</p>
                     * @return Name <p>元数据名称。</p><p>参数格式：非空小写字符串，同一 Metadata 数组内唯一，不自动转换大小写。重复名称返回 InvalidParameter，即使 Value 相同也拒绝。</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>元数据名称。</p><p>参数格式：非空小写字符串，同一 Metadata 数组内唯一，不自动转换大小写。重复名称返回 InvalidParameter，即使 Value 相同也拒绝。</p>
                     * @param _name <p>元数据名称。</p><p>参数格式：非空小写字符串，同一 Metadata 数组内唯一，不自动转换大小写。重复名称返回 InvalidParameter，即使 Value 相同也拒绝。</p>
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取<p>元数据的字符串值。</p><p>参数格式：允许空字符串，保留大小写，不支持嵌套对象、数组、数字、布尔值或 null。publisher 的 Value 为发布者展示名称。</p>
                     * @return Value <p>元数据的字符串值。</p><p>参数格式：允许空字符串，保留大小写，不支持嵌套对象、数组、数字、布尔值或 null。publisher 的 Value 为发布者展示名称。</p>
                     * 
                     */
                    std::string GetValue() const;

                    /**
                     * 设置<p>元数据的字符串值。</p><p>参数格式：允许空字符串，保留大小写，不支持嵌套对象、数组、数字、布尔值或 null。publisher 的 Value 为发布者展示名称。</p>
                     * @param _value <p>元数据的字符串值。</p><p>参数格式：允许空字符串，保留大小写，不支持嵌套对象、数组、数字、布尔值或 null。publisher 的 Value 为发布者展示名称。</p>
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
                     * <p>元数据名称。</p><p>参数格式：非空小写字符串，同一 Metadata 数组内唯一，不自动转换大小写。重复名称返回 InvalidParameter，即使 Value 相同也拒绝。</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>元数据的字符串值。</p><p>参数格式：允许空字符串，保留大小写，不支持嵌套对象、数组、数字、布尔值或 null。publisher 的 Value 为发布者展示名称。</p>
                     */
                    std::string m_value;
                    bool m_valueHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AGS_V20250920_MODEL_METADATAENTRY_H_
