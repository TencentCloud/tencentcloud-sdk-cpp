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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_CANDIDATEDSDTO_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_CANDIDATEDSDTO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * CandidateDsDTo
                */
                class CandidateDsDTo : public AbstractModel
                {
                public:
                    CandidateDsDTo();
                    ~CandidateDsDTo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取取值
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Value 取值
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetValue() const;

                    /**
                     * 设置取值
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _value 取值
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
                     * 获取取值描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ValueDesc 取值描述
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetValueDesc() const;

                    /**
                     * 设置取值描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _valueDesc 取值描述
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetValueDesc(const std::string& _valueDesc);

                    /**
                     * 判断参数 ValueDesc 是否已赋值
                     * @return ValueDesc 是否已赋值
                     * 
                     */
                    bool ValueDescHasBeenSet() const;

                private:

                    /**
                     * 取值
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_value;
                    bool m_valueHasBeenSet;

                    /**
                     * 取值描述
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_valueDesc;
                    bool m_valueDescHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_CANDIDATEDSDTO_H_
