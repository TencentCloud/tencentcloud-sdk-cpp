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

#ifndef TENCENTCLOUD_POSTGRES_V20170312_MODEL_PARAMINFO_H_
#define TENCENTCLOUD_POSTGRES_V20170312_MODEL_PARAMINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Postgres
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * 参数详情
                */
                class ParamInfo : public AbstractModel
                {
                public:
                    ParamInfo();
                    ~ParamInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取参数ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ID 参数ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetID() const;

                    /**
                     * 设置参数ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ID 参数ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetID(const int64_t& _iD);

                    /**
                     * 判断参数 ID 是否已赋值
                     * @return ID 是否已赋值
                     */
                    bool IDHasBeenSet() const;

                    /**
                     * 获取参数名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Name 参数名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetName() const;

                    /**
                     * 设置参数名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Name 参数名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取参数值类型：integer（整型）、real（浮点型）、bool（布尔型）、enum（枚举类型）、mutil_enum（枚举类型、支持多选）。
当参数类型为integer（整型）、real（浮点型）时，参数的取值范围根据返回值的Max、Min确定； 
当参数类型为bool（布尔型）时，参数设置值取值范围是true | false； 
当参数类型为enum（枚举类型）、mutil_enum（多枚举类型）时，参数的取值范围由返回值中的EnumValue确定。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ParamValueType 参数值类型：integer（整型）、real（浮点型）、bool（布尔型）、enum（枚举类型）、mutil_enum（枚举类型、支持多选）。
当参数类型为integer（整型）、real（浮点型）时，参数的取值范围根据返回值的Max、Min确定； 
当参数类型为bool（布尔型）时，参数设置值取值范围是true | false； 
当参数类型为enum（枚举类型）、mutil_enum（多枚举类型）时，参数的取值范围由返回值中的EnumValue确定。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetParamValueType() const;

                    /**
                     * 设置参数值类型：integer（整型）、real（浮点型）、bool（布尔型）、enum（枚举类型）、mutil_enum（枚举类型、支持多选）。
当参数类型为integer（整型）、real（浮点型）时，参数的取值范围根据返回值的Max、Min确定； 
当参数类型为bool（布尔型）时，参数设置值取值范围是true | false； 
当参数类型为enum（枚举类型）、mutil_enum（多枚举类型）时，参数的取值范围由返回值中的EnumValue确定。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ParamValueType 参数值类型：integer（整型）、real（浮点型）、bool（布尔型）、enum（枚举类型）、mutil_enum（枚举类型、支持多选）。
当参数类型为integer（整型）、real（浮点型）时，参数的取值范围根据返回值的Max、Min确定； 
当参数类型为bool（布尔型）时，参数设置值取值范围是true | false； 
当参数类型为enum（枚举类型）、mutil_enum（多枚举类型）时，参数的取值范围由返回值中的EnumValue确定。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetParamValueType(const std::string& _paramValueType);

                    /**
                     * 判断参数 ParamValueType 是否已赋值
                     * @return ParamValueType 是否已赋值
                     */
                    bool ParamValueTypeHasBeenSet() const;

                    /**
                     * 获取参数值 单位。参数没有单位是，该字段返回空
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Unit 参数值 单位。参数没有单位是，该字段返回空
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetUnit() const;

                    /**
                     * 设置参数值 单位。参数没有单位是，该字段返回空
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Unit 参数值 单位。参数没有单位是，该字段返回空
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetUnit(const std::string& _unit);

                    /**
                     * 判断参数 Unit 是否已赋值
                     * @return Unit 是否已赋值
                     */
                    bool UnitHasBeenSet() const;

                    /**
                     * 获取参数默认值。以字符串形式返回
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DefaultValue 参数默认值。以字符串形式返回
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetDefaultValue() const;

                    /**
                     * 设置参数默认值。以字符串形式返回
注意：此字段可能返回 null，表示取不到有效值。
                     * @param DefaultValue 参数默认值。以字符串形式返回
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetDefaultValue(const std::string& _defaultValue);

                    /**
                     * 判断参数 DefaultValue 是否已赋值
                     * @return DefaultValue 是否已赋值
                     */
                    bool DefaultValueHasBeenSet() const;

                    /**
                     * 获取参数当前运行值。以字符串形式返回
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CurrentValue 参数当前运行值。以字符串形式返回
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetCurrentValue() const;

                    /**
                     * 设置参数当前运行值。以字符串形式返回
注意：此字段可能返回 null，表示取不到有效值。
                     * @param CurrentValue 参数当前运行值。以字符串形式返回
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetCurrentValue(const std::string& _currentValue);

                    /**
                     * 判断参数 CurrentValue 是否已赋值
                     * @return CurrentValue 是否已赋值
                     */
                    bool CurrentValueHasBeenSet() const;

                    /**
                     * 获取枚举类型参数，取值范围
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EnumValue 枚举类型参数，取值范围
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> GetEnumValue() const;

                    /**
                     * 设置枚举类型参数，取值范围
注意：此字段可能返回 null，表示取不到有效值。
                     * @param EnumValue 枚举类型参数，取值范围
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetEnumValue(const std::vector<std::string>& _enumValue);

                    /**
                     * 判断参数 EnumValue 是否已赋值
                     * @return EnumValue 是否已赋值
                     */
                    bool EnumValueHasBeenSet() const;

                    /**
                     * 获取数值类型（integer、real）参数，取值下界
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Max 数值类型（integer、real）参数，取值下界
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double GetMax() const;

                    /**
                     * 设置数值类型（integer、real）参数，取值下界
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Max 数值类型（integer、real）参数，取值下界
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetMax(const double& _max);

                    /**
                     * 判断参数 Max 是否已赋值
                     * @return Max 是否已赋值
                     */
                    bool MaxHasBeenSet() const;

                    /**
                     * 获取数值类型（integer、real）参数，取值上界
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Min 数值类型（integer、real）参数，取值上界
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double GetMin() const;

                    /**
                     * 设置数值类型（integer、real）参数，取值上界
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Min 数值类型（integer、real）参数，取值上界
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetMin(const double& _min);

                    /**
                     * 判断参数 Min 是否已赋值
                     * @return Min 是否已赋值
                     */
                    bool MinHasBeenSet() const;

                    /**
                     * 获取参数中文描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ParamDescriptionCH 参数中文描述
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetParamDescriptionCH() const;

                    /**
                     * 设置参数中文描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ParamDescriptionCH 参数中文描述
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetParamDescriptionCH(const std::string& _paramDescriptionCH);

                    /**
                     * 判断参数 ParamDescriptionCH 是否已赋值
                     * @return ParamDescriptionCH 是否已赋值
                     */
                    bool ParamDescriptionCHHasBeenSet() const;

                    /**
                     * 获取参数英文描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ParamDescriptionEN 参数英文描述
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetParamDescriptionEN() const;

                    /**
                     * 设置参数英文描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ParamDescriptionEN 参数英文描述
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetParamDescriptionEN(const std::string& _paramDescriptionEN);

                    /**
                     * 判断参数 ParamDescriptionEN 是否已赋值
                     * @return ParamDescriptionEN 是否已赋值
                     */
                    bool ParamDescriptionENHasBeenSet() const;

                    /**
                     * 获取参数修改，是否重启生效。（true为需要，false为不需要）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NeedReboot 参数修改，是否重启生效。（true为需要，false为不需要）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool GetNeedReboot() const;

                    /**
                     * 设置参数修改，是否重启生效。（true为需要，false为不需要）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param NeedReboot 参数修改，是否重启生效。（true为需要，false为不需要）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetNeedReboot(const bool& _needReboot);

                    /**
                     * 判断参数 NeedReboot 是否已赋值
                     * @return NeedReboot 是否已赋值
                     */
                    bool NeedRebootHasBeenSet() const;

                    /**
                     * 获取参数中文分类
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ClassificationCN 参数中文分类
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetClassificationCN() const;

                    /**
                     * 设置参数中文分类
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ClassificationCN 参数中文分类
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetClassificationCN(const std::string& _classificationCN);

                    /**
                     * 判断参数 ClassificationCN 是否已赋值
                     * @return ClassificationCN 是否已赋值
                     */
                    bool ClassificationCNHasBeenSet() const;

                    /**
                     * 获取参数英文分类
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ClassificationEN 参数英文分类
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetClassificationEN() const;

                    /**
                     * 设置参数英文分类
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ClassificationEN 参数英文分类
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetClassificationEN(const std::string& _classificationEN);

                    /**
                     * 判断参数 ClassificationEN 是否已赋值
                     * @return ClassificationEN 是否已赋值
                     */
                    bool ClassificationENHasBeenSet() const;

                    /**
                     * 获取是否和规格相关。（true为相关，false为不想关）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SpecRelated 是否和规格相关。（true为相关，false为不想关）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool GetSpecRelated() const;

                    /**
                     * 设置是否和规格相关。（true为相关，false为不想关）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param SpecRelated 是否和规格相关。（true为相关，false为不想关）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetSpecRelated(const bool& _specRelated);

                    /**
                     * 判断参数 SpecRelated 是否已赋值
                     * @return SpecRelated 是否已赋值
                     */
                    bool SpecRelatedHasBeenSet() const;

                    /**
                     * 获取是否为重点参数。（true为重点参数，修改是需要重点关注，可能会影响实例性能）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Advanced 是否为重点参数。（true为重点参数，修改是需要重点关注，可能会影响实例性能）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool GetAdvanced() const;

                    /**
                     * 设置是否为重点参数。（true为重点参数，修改是需要重点关注，可能会影响实例性能）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Advanced 是否为重点参数。（true为重点参数，修改是需要重点关注，可能会影响实例性能）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetAdvanced(const bool& _advanced);

                    /**
                     * 判断参数 Advanced 是否已赋值
                     * @return Advanced 是否已赋值
                     */
                    bool AdvancedHasBeenSet() const;

                    /**
                     * 获取参数最后一次修改时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LastModifyTime 参数最后一次修改时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetLastModifyTime() const;

                    /**
                     * 设置参数最后一次修改时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param LastModifyTime 参数最后一次修改时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetLastModifyTime(const std::string& _lastModifyTime);

                    /**
                     * 判断参数 LastModifyTime 是否已赋值
                     * @return LastModifyTime 是否已赋值
                     */
                    bool LastModifyTimeHasBeenSet() const;

                private:

                    /**
                     * 参数ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_iD;
                    bool m_iDHasBeenSet;

                    /**
                     * 参数名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 参数值类型：integer（整型）、real（浮点型）、bool（布尔型）、enum（枚举类型）、mutil_enum（枚举类型、支持多选）。
当参数类型为integer（整型）、real（浮点型）时，参数的取值范围根据返回值的Max、Min确定； 
当参数类型为bool（布尔型）时，参数设置值取值范围是true | false； 
当参数类型为enum（枚举类型）、mutil_enum（多枚举类型）时，参数的取值范围由返回值中的EnumValue确定。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_paramValueType;
                    bool m_paramValueTypeHasBeenSet;

                    /**
                     * 参数值 单位。参数没有单位是，该字段返回空
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_unit;
                    bool m_unitHasBeenSet;

                    /**
                     * 参数默认值。以字符串形式返回
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_defaultValue;
                    bool m_defaultValueHasBeenSet;

                    /**
                     * 参数当前运行值。以字符串形式返回
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_currentValue;
                    bool m_currentValueHasBeenSet;

                    /**
                     * 枚举类型参数，取值范围
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_enumValue;
                    bool m_enumValueHasBeenSet;

                    /**
                     * 数值类型（integer、real）参数，取值下界
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_max;
                    bool m_maxHasBeenSet;

                    /**
                     * 数值类型（integer、real）参数，取值上界
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_min;
                    bool m_minHasBeenSet;

                    /**
                     * 参数中文描述
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_paramDescriptionCH;
                    bool m_paramDescriptionCHHasBeenSet;

                    /**
                     * 参数英文描述
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_paramDescriptionEN;
                    bool m_paramDescriptionENHasBeenSet;

                    /**
                     * 参数修改，是否重启生效。（true为需要，false为不需要）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_needReboot;
                    bool m_needRebootHasBeenSet;

                    /**
                     * 参数中文分类
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_classificationCN;
                    bool m_classificationCNHasBeenSet;

                    /**
                     * 参数英文分类
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_classificationEN;
                    bool m_classificationENHasBeenSet;

                    /**
                     * 是否和规格相关。（true为相关，false为不想关）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_specRelated;
                    bool m_specRelatedHasBeenSet;

                    /**
                     * 是否为重点参数。（true为重点参数，修改是需要重点关注，可能会影响实例性能）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_advanced;
                    bool m_advancedHasBeenSet;

                    /**
                     * 参数最后一次修改时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_lastModifyTime;
                    bool m_lastModifyTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_POSTGRES_V20170312_MODEL_PARAMINFO_H_
