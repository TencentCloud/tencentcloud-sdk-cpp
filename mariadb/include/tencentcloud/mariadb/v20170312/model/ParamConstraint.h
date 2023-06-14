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

#ifndef TENCENTCLOUD_MARIADB_V20170312_MODEL_PARAMCONSTRAINT_H_
#define TENCENTCLOUD_MARIADB_V20170312_MODEL_PARAMCONSTRAINT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mariadb/v20170312/model/ConstraintRange.h>


namespace TencentCloud
{
    namespace Mariadb
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * 参数约束
                */
                class ParamConstraint : public AbstractModel
                {
                public:
                    ParamConstraint();
                    ~ParamConstraint() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取约束类型,如枚举enum，区间section
                     * @return Type 约束类型,如枚举enum，区间section
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置约束类型,如枚举enum，区间section
                     * @param _type 约束类型,如枚举enum，区间section
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取约束类型为enum时的可选值列表
                     * @return Enum 约束类型为enum时的可选值列表
                     * 
                     */
                    std::string GetEnum() const;

                    /**
                     * 设置约束类型为enum时的可选值列表
                     * @param _enum 约束类型为enum时的可选值列表
                     * 
                     */
                    void SetEnum(const std::string& _enum);

                    /**
                     * 判断参数 Enum 是否已赋值
                     * @return Enum 是否已赋值
                     * 
                     */
                    bool EnumHasBeenSet() const;

                    /**
                     * 获取约束类型为section时的范围
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Range 约束类型为section时的范围
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    ConstraintRange GetRange() const;

                    /**
                     * 设置约束类型为section时的范围
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _range 约束类型为section时的范围
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRange(const ConstraintRange& _range);

                    /**
                     * 判断参数 Range 是否已赋值
                     * @return Range 是否已赋值
                     * 
                     */
                    bool RangeHasBeenSet() const;

                    /**
                     * 获取约束类型为string时的可选值列表
                     * @return String 约束类型为string时的可选值列表
                     * 
                     */
                    std::string GetString() const;

                    /**
                     * 设置约束类型为string时的可选值列表
                     * @param _string 约束类型为string时的可选值列表
                     * 
                     */
                    void SetString(const std::string& _string);

                    /**
                     * 判断参数 String 是否已赋值
                     * @return String 是否已赋值
                     * 
                     */
                    bool StringHasBeenSet() const;

                private:

                    /**
                     * 约束类型,如枚举enum，区间section
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 约束类型为enum时的可选值列表
                     */
                    std::string m_enum;
                    bool m_enumHasBeenSet;

                    /**
                     * 约束类型为section时的范围
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ConstraintRange m_range;
                    bool m_rangeHasBeenSet;

                    /**
                     * 约束类型为string时的可选值列表
                     */
                    std::string m_string;
                    bool m_stringHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MARIADB_V20170312_MODEL_PARAMCONSTRAINT_H_
