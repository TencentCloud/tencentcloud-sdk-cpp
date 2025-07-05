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

#ifndef TENCENTCLOUD_CDN_V20180606_MODEL_RULEQUERYSTRING_H_
#define TENCENTCLOUD_CDN_V20180606_MODEL_RULEQUERYSTRING_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdn
    {
        namespace V20180606
        {
            namespace Model
            {
                /**
                * 路径保留参数配置
                */
                class RuleQueryString : public AbstractModel
                {
                public:
                    RuleQueryString();
                    ~RuleQueryString() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取路径保留参数配置开关，取值有：
on：开启，CacheKey由QueryString组成
off：关闭，CacheKey不由QueryString组成

注意：此字段可能返回 null，表示取不到有效值。
                     * @return Switch 路径保留参数配置开关，取值有：
on：开启，CacheKey由QueryString组成
off：关闭，CacheKey不由QueryString组成

注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSwitch() const;

                    /**
                     * 设置路径保留参数配置开关，取值有：
on：开启，CacheKey由QueryString组成
off：关闭，CacheKey不由QueryString组成

注意：此字段可能返回 null，表示取不到有效值。
                     * @param _switch 路径保留参数配置开关，取值有：
on：开启，CacheKey由QueryString组成
off：关闭，CacheKey不由QueryString组成

注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSwitch(const std::string& _switch);

                    /**
                     * 判断参数 Switch 是否已赋值
                     * @return Switch 是否已赋值
                     * 
                     */
                    bool SwitchHasBeenSet() const;

                    /**
                     * 获取includeCustom 包含部分url参数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Action includeCustom 包含部分url参数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAction() const;

                    /**
                     * 设置includeCustom 包含部分url参数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _action includeCustom 包含部分url参数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAction(const std::string& _action);

                    /**
                     * 判断参数 Action 是否已赋值
                     * @return Action 是否已赋值
                     * 
                     */
                    bool ActionHasBeenSet() const;

                    /**
                     * 获取使用/排除的url参数数组，';' 分割
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Value 使用/排除的url参数数组，';' 分割
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetValue() const;

                    /**
                     * 设置使用/排除的url参数数组，';' 分割
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _value 使用/排除的url参数数组，';' 分割
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 路径保留参数配置开关，取值有：
on：开启，CacheKey由QueryString组成
off：关闭，CacheKey不由QueryString组成

注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_switch;
                    bool m_switchHasBeenSet;

                    /**
                     * includeCustom 包含部分url参数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_action;
                    bool m_actionHasBeenSet;

                    /**
                     * 使用/排除的url参数数组，';' 分割
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_value;
                    bool m_valueHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDN_V20180606_MODEL_RULEQUERYSTRING_H_
