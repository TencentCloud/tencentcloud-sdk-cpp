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

#ifndef TENCENTCLOUD_IOTCLOUD_V20180614_MODEL_DEVICETAG_H_
#define TENCENTCLOUD_IOTCLOUD_V20180614_MODEL_DEVICETAG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iotcloud
    {
        namespace V20180614
        {
            namespace Model
            {
                /**
                * 设备属性
                */
                class DeviceTag : public AbstractModel
                {
                public:
                    DeviceTag();
                    ~DeviceTag() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取属性名称
                     * @return Tag 属性名称
                     * 
                     */
                    std::string GetTag() const;

                    /**
                     * 设置属性名称
                     * @param _tag 属性名称
                     * 
                     */
                    void SetTag(const std::string& _tag);

                    /**
                     * 判断参数 Tag 是否已赋值
                     * @return Tag 是否已赋值
                     * 
                     */
                    bool TagHasBeenSet() const;

                    /**
                     * 获取属性值的类型，1 int，2 string
                     * @return Type 属性值的类型，1 int，2 string
                     * 
                     */
                    uint64_t GetType() const;

                    /**
                     * 设置属性值的类型，1 int，2 string
                     * @param _type 属性值的类型，1 int，2 string
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
                     * 获取属性的值
                     * @return Value 属性的值
                     * 
                     */
                    std::string GetValue() const;

                    /**
                     * 设置属性的值
                     * @param _value 属性的值
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
                     * 获取属性描述名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Name 属性描述名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置属性描述名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _name 属性描述名称
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

                private:

                    /**
                     * 属性名称
                     */
                    std::string m_tag;
                    bool m_tagHasBeenSet;

                    /**
                     * 属性值的类型，1 int，2 string
                     */
                    uint64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 属性的值
                     */
                    std::string m_value;
                    bool m_valueHasBeenSet;

                    /**
                     * 属性描述名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTCLOUD_V20180614_MODEL_DEVICETAG_H_
