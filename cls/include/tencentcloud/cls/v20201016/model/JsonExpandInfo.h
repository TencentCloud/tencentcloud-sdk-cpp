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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_JSONEXPANDINFO_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_JSONEXPANDINFO_H_

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
                * **JsonExpandInfo 数据结构描述**：
```
JSON嵌套展开配置
```

**各字段描述**：

| 字段 | 描述 |
|------|------|
| Switch | 是否开启JSON嵌套展开 |
| Fields | 待展开的JSON字段列表，1~3个 |
| DropOriginal | 展开后是否丢弃原始字段，默认true |
| ConflictPolicy | 字段冲突策略，keep_outer:保留外层(默认)，keep_inner:保留内层 |

**LogRechargeRuleInfo 新增字段**：

| 字段 | 描述 |
|------|------|
| JsonExpand | JSON嵌套展开配置，仅RechargeType为json_log时生效 |
                */
                class JsonExpandInfo : public AbstractModel
                {
                public:
                    JsonExpandInfo();
                    ~JsonExpandInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>是否开启JSON嵌套展开功能。开启后将对指定JSON字段进行扁平化展开处理</p><p>默认值：无（必选参数）</p>
                     * @return Switch <p>是否开启JSON嵌套展开功能。开启后将对指定JSON字段进行扁平化展开处理</p><p>默认值：无（必选参数）</p>
                     * 
                     */
                    bool GetSwitch() const;

                    /**
                     * 设置<p>是否开启JSON嵌套展开功能。开启后将对指定JSON字段进行扁平化展开处理</p><p>默认值：无（必选参数）</p>
                     * @param _switch <p>是否开启JSON嵌套展开功能。开启后将对指定JSON字段进行扁平化展开处理</p><p>默认值：无（必选参数）</p>
                     * 
                     */
                    void SetSwitch(const bool& _switch);

                    /**
                     * 判断参数 Switch 是否已赋值
                     * @return Switch 是否已赋值
                     * 
                     */
                    bool SwitchHasBeenSet() const;

                    /**
                     * 获取<p>待展开的JSON字段名列表，支持1~3个字段，字段名不可为空串且不可重复 </p><p>入参限制：1. 字段数量：1~3个2. 每个字段名长度不超过128个字符3. 字段名不可为空字符串4. 字段名之间不可重复</p><p>默认值：无（必选参数）</p><p>取值参考：取值：message；描述：示例字段名</p><p>示例：[&quot;message&quot;, &quot;data&quot;, &quot;content&quot;]</p>
                     * @return Fields <p>待展开的JSON字段名列表，支持1~3个字段，字段名不可为空串且不可重复 </p><p>入参限制：1. 字段数量：1~3个2. 每个字段名长度不超过128个字符3. 字段名不可为空字符串4. 字段名之间不可重复</p><p>默认值：无（必选参数）</p><p>取值参考：取值：message；描述：示例字段名</p><p>示例：[&quot;message&quot;, &quot;data&quot;, &quot;content&quot;]</p>
                     * 
                     */
                    std::vector<std::string> GetFields() const;

                    /**
                     * 设置<p>待展开的JSON字段名列表，支持1~3个字段，字段名不可为空串且不可重复 </p><p>入参限制：1. 字段数量：1~3个2. 每个字段名长度不超过128个字符3. 字段名不可为空字符串4. 字段名之间不可重复</p><p>默认值：无（必选参数）</p><p>取值参考：取值：message；描述：示例字段名</p><p>示例：[&quot;message&quot;, &quot;data&quot;, &quot;content&quot;]</p>
                     * @param _fields <p>待展开的JSON字段名列表，支持1~3个字段，字段名不可为空串且不可重复 </p><p>入参限制：1. 字段数量：1~3个2. 每个字段名长度不超过128个字符3. 字段名不可为空字符串4. 字段名之间不可重复</p><p>默认值：无（必选参数）</p><p>取值参考：取值：message；描述：示例字段名</p><p>示例：[&quot;message&quot;, &quot;data&quot;, &quot;content&quot;]</p>
                     * 
                     */
                    void SetFields(const std::vector<std::string>& _fields);

                    /**
                     * 判断参数 Fields 是否已赋值
                     * @return Fields 是否已赋值
                     * 
                     */
                    bool FieldsHasBeenSet() const;

                    /**
                     * 获取<p>展开后是否丢弃原始的嵌套字段。true: 丢弃原始字段只保留展开后的平铺字段; false: 保留原始字段同时增加展开后的平铺字段</p><p>枚举值：</p><ul><li>true / false： 丢弃原字段 / 保留原字段</li></ul><p>默认值：true</p><p>非必选，不传时默认为true</p>
                     * @return DropOriginal <p>展开后是否丢弃原始的嵌套字段。true: 丢弃原始字段只保留展开后的平铺字段; false: 保留原始字段同时增加展开后的平铺字段</p><p>枚举值：</p><ul><li>true / false： 丢弃原字段 / 保留原字段</li></ul><p>默认值：true</p><p>非必选，不传时默认为true</p>
                     * 
                     */
                    bool GetDropOriginal() const;

                    /**
                     * 设置<p>展开后是否丢弃原始的嵌套字段。true: 丢弃原始字段只保留展开后的平铺字段; false: 保留原始字段同时增加展开后的平铺字段</p><p>枚举值：</p><ul><li>true / false： 丢弃原字段 / 保留原字段</li></ul><p>默认值：true</p><p>非必选，不传时默认为true</p>
                     * @param _dropOriginal <p>展开后是否丢弃原始的嵌套字段。true: 丢弃原始字段只保留展开后的平铺字段; false: 保留原始字段同时增加展开后的平铺字段</p><p>枚举值：</p><ul><li>true / false： 丢弃原字段 / 保留原字段</li></ul><p>默认值：true</p><p>非必选，不传时默认为true</p>
                     * 
                     */
                    void SetDropOriginal(const bool& _dropOriginal);

                    /**
                     * 判断参数 DropOriginal 是否已赋值
                     * @return DropOriginal 是否已赋值
                     * 
                     */
                    bool DropOriginalHasBeenSet() const;

                    /**
                     * 获取<p>展开后的字段与已有字段发生冲突时的处理策略</p><p>枚举值：</p><ul><li>keep_outer / keep_inner： 保留外层(已存在)字段 / 保留内层(新展开)字段</li></ul><p>默认值：keep_outer</p><p>非必选，不传时默认为keep_outer</p>
                     * @return ConflictPolicy <p>展开后的字段与已有字段发生冲突时的处理策略</p><p>枚举值：</p><ul><li>keep_outer / keep_inner： 保留外层(已存在)字段 / 保留内层(新展开)字段</li></ul><p>默认值：keep_outer</p><p>非必选，不传时默认为keep_outer</p>
                     * 
                     */
                    std::string GetConflictPolicy() const;

                    /**
                     * 设置<p>展开后的字段与已有字段发生冲突时的处理策略</p><p>枚举值：</p><ul><li>keep_outer / keep_inner： 保留外层(已存在)字段 / 保留内层(新展开)字段</li></ul><p>默认值：keep_outer</p><p>非必选，不传时默认为keep_outer</p>
                     * @param _conflictPolicy <p>展开后的字段与已有字段发生冲突时的处理策略</p><p>枚举值：</p><ul><li>keep_outer / keep_inner： 保留外层(已存在)字段 / 保留内层(新展开)字段</li></ul><p>默认值：keep_outer</p><p>非必选，不传时默认为keep_outer</p>
                     * 
                     */
                    void SetConflictPolicy(const std::string& _conflictPolicy);

                    /**
                     * 判断参数 ConflictPolicy 是否已赋值
                     * @return ConflictPolicy 是否已赋值
                     * 
                     */
                    bool ConflictPolicyHasBeenSet() const;

                private:

                    /**
                     * <p>是否开启JSON嵌套展开功能。开启后将对指定JSON字段进行扁平化展开处理</p><p>默认值：无（必选参数）</p>
                     */
                    bool m_switch;
                    bool m_switchHasBeenSet;

                    /**
                     * <p>待展开的JSON字段名列表，支持1~3个字段，字段名不可为空串且不可重复 </p><p>入参限制：1. 字段数量：1~3个2. 每个字段名长度不超过128个字符3. 字段名不可为空字符串4. 字段名之间不可重复</p><p>默认值：无（必选参数）</p><p>取值参考：取值：message；描述：示例字段名</p><p>示例：[&quot;message&quot;, &quot;data&quot;, &quot;content&quot;]</p>
                     */
                    std::vector<std::string> m_fields;
                    bool m_fieldsHasBeenSet;

                    /**
                     * <p>展开后是否丢弃原始的嵌套字段。true: 丢弃原始字段只保留展开后的平铺字段; false: 保留原始字段同时增加展开后的平铺字段</p><p>枚举值：</p><ul><li>true / false： 丢弃原字段 / 保留原字段</li></ul><p>默认值：true</p><p>非必选，不传时默认为true</p>
                     */
                    bool m_dropOriginal;
                    bool m_dropOriginalHasBeenSet;

                    /**
                     * <p>展开后的字段与已有字段发生冲突时的处理策略</p><p>枚举值：</p><ul><li>keep_outer / keep_inner： 保留外层(已存在)字段 / 保留内层(新展开)字段</li></ul><p>默认值：keep_outer</p><p>非必选，不传时默认为keep_outer</p>
                     */
                    std::string m_conflictPolicy;
                    bool m_conflictPolicyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_JSONEXPANDINFO_H_
