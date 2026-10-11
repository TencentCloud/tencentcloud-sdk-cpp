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

#ifndef TENCENTCLOUD_DATABUDDY_V20260715_MODEL_TASKTYPEPROPERTY_H_
#define TENCENTCLOUD_DATABUDDY_V20260715_MODEL_TASKTYPEPROPERTY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Databuddy
    {
        namespace V20260715
        {
            namespace Model
            {
                /**
                * 任务类型属性键值对
                */
                class TaskTypeProperty : public AbstractModel
                {
                public:
                    TaskTypeProperty();
                    ~TaskTypeProperty() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>属性键名。用于TaskType内的入参时，若不传或为空，该属性项被服务端静默忽略（不报错），等同于该属性未配置。合法 PropertyKey 清单请参考TaskType中描述。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PropertyKey <p>属性键名。用于TaskType内的入参时，若不传或为空，该属性项被服务端静默忽略（不报错），等同于该属性未配置。合法 PropertyKey 清单请参考TaskType中描述。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPropertyKey() const;

                    /**
                     * 设置<p>属性键名。用于TaskType内的入参时，若不传或为空，该属性项被服务端静默忽略（不报错），等同于该属性未配置。合法 PropertyKey 清单请参考TaskType中描述。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _propertyKey <p>属性键名。用于TaskType内的入参时，若不传或为空，该属性项被服务端静默忽略（不报错），等同于该属性未配置。合法 PropertyKey 清单请参考TaskType中描述。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPropertyKey(const std::string& _propertyKey);

                    /**
                     * 判断参数 PropertyKey 是否已赋值
                     * @return PropertyKey 是否已赋值
                     * 
                     */
                    bool PropertyKeyHasBeenSet() const;

                    /**
                     * 获取<p>属性值</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PropertyValue <p>属性值</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPropertyValue() const;

                    /**
                     * 设置<p>属性值</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _propertyValue <p>属性值</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPropertyValue(const std::string& _propertyValue);

                    /**
                     * 判断参数 PropertyValue 是否已赋值
                     * @return PropertyValue 是否已赋值
                     * 
                     */
                    bool PropertyValueHasBeenSet() const;

                private:

                    /**
                     * <p>属性键名。用于TaskType内的入参时，若不传或为空，该属性项被服务端静默忽略（不报错），等同于该属性未配置。合法 PropertyKey 清单请参考TaskType中描述。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_propertyKey;
                    bool m_propertyKeyHasBeenSet;

                    /**
                     * <p>属性值</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_propertyValue;
                    bool m_propertyValueHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DATABUDDY_V20260715_MODEL_TASKTYPEPROPERTY_H_
