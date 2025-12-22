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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_APPOINTLABEL_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_APPOINTLABEL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * 元数据Pod label标签结构体
                */
                class AppointLabel : public AbstractModel
                {
                public:
                    AppointLabel();
                    ~AppointLabel() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取指定标签类型。

- 0：所有Pod label，Keys字段无效
- 1：指定Pod label，Keys字段不能为空
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Type 指定标签类型。

- 0：所有Pod label，Keys字段无效
- 1：指定Pod label，Keys字段不能为空
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetType() const;

                    /**
                     * 设置指定标签类型。

- 0：所有Pod label，Keys字段无效
- 1：指定Pod label，Keys字段不能为空
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _type 指定标签类型。

- 0：所有Pod label，Keys字段无效
- 1：指定Pod label，Keys字段不能为空
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetType(const uint64_t& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取元数据Pod标签的键。有效标签键有两个部分：可选前缀和名称，以斜杠 (/) 分隔。名称部分是必需的，并且必须不超过 63 个字符，以字母数字字符 ([a-z0-9A-Z]) 开头和结尾，中间有破折号(-)、下划线(_)、点(.) 和字母数字。前缀是可选的。如果指定，前缀必须是 DNS 子域：一系列以点 (.) 分隔的 DNS 标签，总长度不超过 253 个字符，后跟斜杠 ( /)。

-  prefix 格式  `[a-z0-9]([-a-z0-9]*[a-z0-9])?(\.[a-z0-9]([-a-z0-9]*[a-z0-9])?)*`
-  name 格式 `([A-Za-z0-9][-A-Za-z0-9_.]*)?[A-Za-z0-9]`
- key不能重复
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Keys 元数据Pod标签的键。有效标签键有两个部分：可选前缀和名称，以斜杠 (/) 分隔。名称部分是必需的，并且必须不超过 63 个字符，以字母数字字符 ([a-z0-9A-Z]) 开头和结尾，中间有破折号(-)、下划线(_)、点(.) 和字母数字。前缀是可选的。如果指定，前缀必须是 DNS 子域：一系列以点 (.) 分隔的 DNS 标签，总长度不超过 253 个字符，后跟斜杠 ( /)。

-  prefix 格式  `[a-z0-9]([-a-z0-9]*[a-z0-9])?(\.[a-z0-9]([-a-z0-9]*[a-z0-9])?)*`
-  name 格式 `([A-Za-z0-9][-A-Za-z0-9_.]*)?[A-Za-z0-9]`
- key不能重复
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetKeys() const;

                    /**
                     * 设置元数据Pod标签的键。有效标签键有两个部分：可选前缀和名称，以斜杠 (/) 分隔。名称部分是必需的，并且必须不超过 63 个字符，以字母数字字符 ([a-z0-9A-Z]) 开头和结尾，中间有破折号(-)、下划线(_)、点(.) 和字母数字。前缀是可选的。如果指定，前缀必须是 DNS 子域：一系列以点 (.) 分隔的 DNS 标签，总长度不超过 253 个字符，后跟斜杠 ( /)。

-  prefix 格式  `[a-z0-9]([-a-z0-9]*[a-z0-9])?(\.[a-z0-9]([-a-z0-9]*[a-z0-9])?)*`
-  name 格式 `([A-Za-z0-9][-A-Za-z0-9_.]*)?[A-Za-z0-9]`
- key不能重复
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _keys 元数据Pod标签的键。有效标签键有两个部分：可选前缀和名称，以斜杠 (/) 分隔。名称部分是必需的，并且必须不超过 63 个字符，以字母数字字符 ([a-z0-9A-Z]) 开头和结尾，中间有破折号(-)、下划线(_)、点(.) 和字母数字。前缀是可选的。如果指定，前缀必须是 DNS 子域：一系列以点 (.) 分隔的 DNS 标签，总长度不超过 253 个字符，后跟斜杠 ( /)。

-  prefix 格式  `[a-z0-9]([-a-z0-9]*[a-z0-9])?(\.[a-z0-9]([-a-z0-9]*[a-z0-9])?)*`
-  name 格式 `([A-Za-z0-9][-A-Za-z0-9_.]*)?[A-Za-z0-9]`
- key不能重复
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetKeys(const std::vector<std::string>& _keys);

                    /**
                     * 判断参数 Keys 是否已赋值
                     * @return Keys 是否已赋值
                     * 
                     */
                    bool KeysHasBeenSet() const;

                private:

                    /**
                     * 指定标签类型。

- 0：所有Pod label，Keys字段无效
- 1：指定Pod label，Keys字段不能为空
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 元数据Pod标签的键。有效标签键有两个部分：可选前缀和名称，以斜杠 (/) 分隔。名称部分是必需的，并且必须不超过 63 个字符，以字母数字字符 ([a-z0-9A-Z]) 开头和结尾，中间有破折号(-)、下划线(_)、点(.) 和字母数字。前缀是可选的。如果指定，前缀必须是 DNS 子域：一系列以点 (.) 分隔的 DNS 标签，总长度不超过 253 个字符，后跟斜杠 ( /)。

-  prefix 格式  `[a-z0-9]([-a-z0-9]*[a-z0-9])?(\.[a-z0-9]([-a-z0-9]*[a-z0-9])?)*`
-  name 格式 `([A-Za-z0-9][-A-Za-z0-9_.]*)?[A-Za-z0-9]`
- key不能重复
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_keys;
                    bool m_keysHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_APPOINTLABEL_H_
