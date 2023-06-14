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

#ifndef TENCENTCLOUD_CDN_V20180606_MODEL_QUERYSTRINGKEY_H_
#define TENCENTCLOUD_CDN_V20180606_MODEL_QUERYSTRINGKEY_H_

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
                * 组成CacheKey的一部分
                */
                class QueryStringKey : public AbstractModel
                {
                public:
                    QueryStringKey();
                    ~QueryStringKey() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取CacheKey是否由QueryString组成配置开关，取值有：
on：开启
off：关闭
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Switch CacheKey是否由QueryString组成配置开关，取值有：
on：开启
off：关闭
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSwitch() const;

                    /**
                     * 设置CacheKey是否由QueryString组成配置开关，取值有：
on：开启
off：关闭
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _switch CacheKey是否由QueryString组成配置开关，取值有：
on：开启
off：关闭
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
                     * 获取是否重新排序
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Reorder 是否重新排序
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetReorder() const;

                    /**
                     * 设置是否重新排序
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _reorder 是否重新排序
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetReorder(const std::string& _reorder);

                    /**
                     * 判断参数 Reorder 是否已赋值
                     * @return Reorder 是否已赋值
                     * 
                     */
                    bool ReorderHasBeenSet() const;

                    /**
                     * 获取使用/排除部分url参数，取值有：
includeAll：包含所有
excludeAll：排除所有
includeCustom：自定义包含
excludeCustom：自定义排除
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Action 使用/排除部分url参数，取值有：
includeAll：包含所有
excludeAll：排除所有
includeCustom：自定义包含
excludeCustom：自定义排除
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAction() const;

                    /**
                     * 设置使用/排除部分url参数，取值有：
includeAll：包含所有
excludeAll：排除所有
includeCustom：自定义包含
excludeCustom：自定义排除
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _action 使用/排除部分url参数，取值有：
includeAll：包含所有
excludeAll：排除所有
includeCustom：自定义包含
excludeCustom：自定义排除
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
                     * CacheKey是否由QueryString组成配置开关，取值有：
on：开启
off：关闭
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_switch;
                    bool m_switchHasBeenSet;

                    /**
                     * 是否重新排序
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_reorder;
                    bool m_reorderHasBeenSet;

                    /**
                     * 使用/排除部分url参数，取值有：
includeAll：包含所有
excludeAll：排除所有
includeCustom：自定义包含
excludeCustom：自定义排除
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

#endif // !TENCENTCLOUD_CDN_V20180606_MODEL_QUERYSTRINGKEY_H_
