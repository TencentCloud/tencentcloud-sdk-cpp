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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_CUSTOMFIELD_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_CUSTOMFIELD_H_

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
        namespace V20220901
        {
            namespace Model
            {
                /**
                * 实时日志投递任务中的自定义日志字段。
                */
                class CustomField : public AbstractModel
                {
                public:
                    CustomField();
                    ~CustomField() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取从 HTTP 请求和响应中的指定位置提取数据，取值有：
<li>ReqHeader：从 HTTP 请求头中提取指定字段值；</li>
<li>RspHeader：从 HTTP 响应头中提取指定字段值；</li>
<li>Cookie: 从 Cookie 中提取指定字段值。</li>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Name 从 HTTP 请求和响应中的指定位置提取数据，取值有：
<li>ReqHeader：从 HTTP 请求头中提取指定字段值；</li>
<li>RspHeader：从 HTTP 响应头中提取指定字段值；</li>
<li>Cookie: 从 Cookie 中提取指定字段值。</li>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置从 HTTP 请求和响应中的指定位置提取数据，取值有：
<li>ReqHeader：从 HTTP 请求头中提取指定字段值；</li>
<li>RspHeader：从 HTTP 响应头中提取指定字段值；</li>
<li>Cookie: 从 Cookie 中提取指定字段值。</li>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _name 从 HTTP 请求和响应中的指定位置提取数据，取值有：
<li>ReqHeader：从 HTTP 请求头中提取指定字段值；</li>
<li>RspHeader：从 HTTP 响应头中提取指定字段值；</li>
<li>Cookie: 从 Cookie 中提取指定字段值。</li>
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取需要提取值的参数名称，例如：Accept-Language。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Value 需要提取值的参数名称，例如：Accept-Language。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetValue() const;

                    /**
                     * 设置需要提取值的参数名称，例如：Accept-Language。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _value 需要提取值的参数名称，例如：Accept-Language。
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

                    /**
                     * 获取是否投递该字段，不填表示不投递此字段。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Enabled 是否投递该字段，不填表示不投递此字段。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetEnabled() const;

                    /**
                     * 设置是否投递该字段，不填表示不投递此字段。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _enabled 是否投递该字段，不填表示不投递此字段。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetEnabled(const bool& _enabled);

                    /**
                     * 判断参数 Enabled 是否已赋值
                     * @return Enabled 是否已赋值
                     * 
                     */
                    bool EnabledHasBeenSet() const;

                private:

                    /**
                     * 从 HTTP 请求和响应中的指定位置提取数据，取值有：
<li>ReqHeader：从 HTTP 请求头中提取指定字段值；</li>
<li>RspHeader：从 HTTP 响应头中提取指定字段值；</li>
<li>Cookie: 从 Cookie 中提取指定字段值。</li>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 需要提取值的参数名称，例如：Accept-Language。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_value;
                    bool m_valueHasBeenSet;

                    /**
                     * 是否投递该字段，不填表示不投递此字段。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_enabled;
                    bool m_enabledHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_CUSTOMFIELD_H_
