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

#ifndef TENCENTCLOUD_TCB_V20180608_MODEL_SMSTEMPLATEPARAMS_H_
#define TENCENTCLOUD_TCB_V20180608_MODEL_SMSTEMPLATEPARAMS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcb
    {
        namespace V20180608
        {
            namespace Model
            {
                /**
                * 自定义短信模板中的自定义参数
                */
                class SMSTemplateParams : public AbstractModel
                {
                public:
                    SMSTemplateParams();
                    ~SMSTemplateParams() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>短信模板的自定义参数的key。如果短信厂商的自定义参数按照命名占位的，才需要此参数；如果按照序号占位的， 不需要此参数。</p><p>腾讯云短信是按照序号占位的，不需要此参数。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Key <p>短信模板的自定义参数的key。如果短信厂商的自定义参数按照命名占位的，才需要此参数；如果按照序号占位的， 不需要此参数。</p><p>腾讯云短信是按照序号占位的，不需要此参数。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetKey() const;

                    /**
                     * 设置<p>短信模板的自定义参数的key。如果短信厂商的自定义参数按照命名占位的，才需要此参数；如果按照序号占位的， 不需要此参数。</p><p>腾讯云短信是按照序号占位的，不需要此参数。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _key <p>短信模板的自定义参数的key。如果短信厂商的自定义参数按照命名占位的，才需要此参数；如果按照序号占位的， 不需要此参数。</p><p>腾讯云短信是按照序号占位的，不需要此参数。</p>
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取<p>短信模板的自定义参数对应的value</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Value <p>短信模板的自定义参数对应的value</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetValue() const;

                    /**
                     * 设置<p>短信模板的自定义参数对应的value</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _value <p>短信模板的自定义参数对应的value</p>
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
                     * <p>短信模板的自定义参数的key。如果短信厂商的自定义参数按照命名占位的，才需要此参数；如果按照序号占位的， 不需要此参数。</p><p>腾讯云短信是按照序号占位的，不需要此参数。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_key;
                    bool m_keyHasBeenSet;

                    /**
                     * <p>短信模板的自定义参数对应的value</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_value;
                    bool m_valueHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCB_V20180608_MODEL_SMSTEMPLATEPARAMS_H_
