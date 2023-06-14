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

#ifndef TENCENTCLOUD_TSF_V20180326_MODEL_ENV_H_
#define TENCENTCLOUD_TSF_V20180326_MODEL_ENV_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tsf/v20180326/model/ValueFrom.h>


namespace TencentCloud
{
    namespace Tsf
    {
        namespace V20180326
        {
            namespace Model
            {
                /**
                * 环境变量
                */
                class Env : public AbstractModel
                {
                public:
                    Env();
                    ~Env() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取环境变量名称
                     * @return Name 环境变量名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置环境变量名称
                     * @param _name 环境变量名称
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
                     * 获取环境变量值
                     * @return Value 环境变量值
                     * 
                     */
                    std::string GetValue() const;

                    /**
                     * 设置环境变量值
                     * @param _value 环境变量值
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
                     * 获取k8s ValueFrom
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ValueFrom k8s ValueFrom
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    ValueFrom GetValueFrom() const;

                    /**
                     * 设置k8s ValueFrom
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _valueFrom k8s ValueFrom
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetValueFrom(const ValueFrom& _valueFrom);

                    /**
                     * 判断参数 ValueFrom 是否已赋值
                     * @return ValueFrom 是否已赋值
                     * 
                     */
                    bool ValueFromHasBeenSet() const;

                private:

                    /**
                     * 环境变量名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 环境变量值
                     */
                    std::string m_value;
                    bool m_valueHasBeenSet;

                    /**
                     * k8s ValueFrom
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ValueFrom m_valueFrom;
                    bool m_valueFromHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSF_V20180326_MODEL_ENV_H_
