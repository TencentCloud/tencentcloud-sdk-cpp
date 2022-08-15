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

#ifndef TENCENTCLOUD_TEO_V20220106_MODEL_QUERYSTRING_H_
#define TENCENTCLOUD_TEO_V20220106_MODEL_QUERYSTRING_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220106
        {
            namespace Model
            {
                /**
                * CacheKey中包含请求参数
                */
                class QueryString : public AbstractModel
                {
                public:
                    QueryString();
                    ~QueryString() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取CacheKey是否由QueryString组成，取值有：
<li>on：是；</li>
<li>off：否。</li>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Switch CacheKey是否由QueryString组成，取值有：
<li>on：是；</li>
<li>off：否。</li>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetSwitch() const;

                    /**
                     * 设置CacheKey是否由QueryString组成，取值有：
<li>on：是；</li>
<li>off：否。</li>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Switch CacheKey是否由QueryString组成，取值有：
<li>on：是；</li>
<li>off：否。</li>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetSwitch(const std::string& _switch);

                    /**
                     * 判断参数 Switch 是否已赋值
                     * @return Switch 是否已赋值
                     */
                    bool SwitchHasBeenSet() const;

                    /**
                     * 获取CacheKey使用QueryString的方式，取值有：
<li>includeCustom：使用部分url参数；</li>
<li>excludeCustom：排除部分url参数。</li>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Action CacheKey使用QueryString的方式，取值有：
<li>includeCustom：使用部分url参数；</li>
<li>excludeCustom：排除部分url参数。</li>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetAction() const;

                    /**
                     * 设置CacheKey使用QueryString的方式，取值有：
<li>includeCustom：使用部分url参数；</li>
<li>excludeCustom：排除部分url参数。</li>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Action CacheKey使用QueryString的方式，取值有：
<li>includeCustom：使用部分url参数；</li>
<li>excludeCustom：排除部分url参数。</li>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetAction(const std::string& _action);

                    /**
                     * 判断参数 Action 是否已赋值
                     * @return Action 是否已赋值
                     */
                    bool ActionHasBeenSet() const;

                    /**
                     * 获取使用/排除的url参数数组。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Value 使用/排除的url参数数组。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> GetValue() const;

                    /**
                     * 设置使用/排除的url参数数组。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Value 使用/排除的url参数数组。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetValue(const std::vector<std::string>& _value);

                    /**
                     * 判断参数 Value 是否已赋值
                     * @return Value 是否已赋值
                     */
                    bool ValueHasBeenSet() const;

                private:

                    /**
                     * CacheKey是否由QueryString组成，取值有：
<li>on：是；</li>
<li>off：否。</li>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_switch;
                    bool m_switchHasBeenSet;

                    /**
                     * CacheKey使用QueryString的方式，取值有：
<li>includeCustom：使用部分url参数；</li>
<li>excludeCustom：排除部分url参数。</li>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_action;
                    bool m_actionHasBeenSet;

                    /**
                     * 使用/排除的url参数数组。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_value;
                    bool m_valueHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220106_MODEL_QUERYSTRING_H_
