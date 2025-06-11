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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_TASKTYPEEXTDSVO_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_TASKTYPEEXTDSVO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20210820/model/CandidateDsDTo.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * 属性类型扩展
                */
                class TaskTypeExtDsVO : public AbstractModel
                {
                public:
                    TaskTypeExtDsVO();
                    ~TaskTypeExtDsVO() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取类型ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TypeId 类型ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetTypeId() const;

                    /**
                     * 设置类型ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _typeId 类型ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTypeId(const int64_t& _typeId);

                    /**
                     * 判断参数 TypeId 是否已赋值
                     * @return TypeId 是否已赋值
                     * 
                     */
                    bool TypeIdHasBeenSet() const;

                    /**
                     * 获取属性名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PropName 属性名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPropName() const;

                    /**
                     * 设置属性名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _propName 属性名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPropName(const std::string& _propName);

                    /**
                     * 判断参数 PropName 是否已赋值
                     * @return PropName 是否已赋值
                     * 
                     */
                    bool PropNameHasBeenSet() const;

                    /**
                     * 获取属性标签(ui展示用)
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PropLabel 属性标签(ui展示用)
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPropLabel() const;

                    /**
                     * 设置属性标签(ui展示用)
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _propLabel 属性标签(ui展示用)
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPropLabel(const std::string& _propLabel);

                    /**
                     * 判断参数 PropLabel 是否已赋值
                     * @return PropLabel 是否已赋值
                     * 
                     */
                    bool PropLabelHasBeenSet() const;

                    /**
                     * 获取缺省标志
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DefaultFlag 缺省标志
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetDefaultFlag() const;

                    /**
                     * 设置缺省标志
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _defaultFlag 缺省标志
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDefaultFlag(const int64_t& _defaultFlag);

                    /**
                     * 判断参数 DefaultFlag 是否已赋值
                     * @return DefaultFlag 是否已赋值
                     * 
                     */
                    bool DefaultFlagHasBeenSet() const;

                    /**
                     * 获取可视标志
注意：此字段可能返回 null，表示取不到有效值。
                     * @return VisibleFlag 可视标志
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetVisibleFlag() const;

                    /**
                     * 设置可视标志
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _visibleFlag 可视标志
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetVisibleFlag(const int64_t& _visibleFlag);

                    /**
                     * 判断参数 VisibleFlag 是否已赋值
                     * @return VisibleFlag 是否已赋值
                     * 
                     */
                    bool VisibleFlagHasBeenSet() const;

                    /**
                     * 获取属性描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PropDesc 属性描述
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPropDesc() const;

                    /**
                     * 设置属性描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _propDesc 属性描述
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPropDesc(const std::string& _propDesc);

                    /**
                     * 判断参数 PropDesc 是否已赋值
                     * @return PropDesc 是否已赋值
                     * 
                     */
                    bool PropDescHasBeenSet() const;

                    /**
                     * 获取排列id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RankId 排列id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetRankId() const;

                    /**
                     * 设置排列id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _rankId 排列id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRankId(const int64_t& _rankId);

                    /**
                     * 判断参数 RankId 是否已赋值
                     * @return RankId 是否已赋值
                     * 
                     */
                    bool RankIdHasBeenSet() const;

                    /**
                     * 获取控件类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InputType 控件类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetInputType() const;

                    /**
                     * 设置控件类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _inputType 控件类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetInputType(const std::string& _inputType);

                    /**
                     * 判断参数 InputType 是否已赋值
                     * @return InputType 是否已赋值
                     * 
                     */
                    bool InputTypeHasBeenSet() const;

                    /**
                     * 获取值类型(integer，string)
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ValueType 值类型(integer，string)
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetValueType() const;

                    /**
                     * 设置值类型(integer，string)
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _valueType 值类型(integer，string)
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetValueType(const std::string& _valueType);

                    /**
                     * 判断参数 ValueType 是否已赋值
                     * @return ValueType 是否已赋值
                     * 
                     */
                    bool ValueTypeHasBeenSet() const;

                    /**
                     * 获取缺省值
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DefaultValue 缺省值
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDefaultValue() const;

                    /**
                     * 设置缺省值
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _defaultValue 缺省值
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDefaultValue(const std::string& _defaultValue);

                    /**
                     * 判断参数 DefaultValue 是否已赋值
                     * @return DefaultValue 是否已赋值
                     * 
                     */
                    bool DefaultValueHasBeenSet() const;

                    /**
                     * 获取候选值列表(，分隔)
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CandidateValues 候选值列表(，分隔)
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCandidateValues() const;

                    /**
                     * 设置候选值列表(，分隔)
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _candidateValues 候选值列表(，分隔)
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCandidateValues(const std::string& _candidateValues);

                    /**
                     * 判断参数 CandidateValues 是否已赋值
                     * @return CandidateValues 是否已赋值
                     * 
                     */
                    bool CandidateValuesHasBeenSet() const;

                    /**
                     * 获取是否必填
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IsMandatory 是否必填
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetIsMandatory() const;

                    /**
                     * 设置是否必填
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _isMandatory 是否必填
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIsMandatory(const int64_t& _isMandatory);

                    /**
                     * 判断参数 IsMandatory 是否已赋值
                     * @return IsMandatory 是否已赋值
                     * 
                     */
                    bool IsMandatoryHasBeenSet() const;

                    /**
                     * 获取最大值
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MaxValue 最大值
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetMaxValue() const;

                    /**
                     * 设置最大值
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _maxValue 最大值
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMaxValue(const int64_t& _maxValue);

                    /**
                     * 判断参数 MaxValue 是否已赋值
                     * @return MaxValue 是否已赋值
                     * 
                     */
                    bool MaxValueHasBeenSet() const;

                    /**
                     * 获取最小值
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MinValue 最小值
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetMinValue() const;

                    /**
                     * 设置最小值
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _minValue 最小值
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMinValue(const int64_t& _minValue);

                    /**
                     * 判断参数 MinValue 是否已赋值
                     * @return MinValue 是否已赋值
                     * 
                     */
                    bool MinValueHasBeenSet() const;

                    /**
                     * 获取配置等级(1-普通，2-高级，3-管理员)
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ConfLevel 配置等级(1-普通，2-高级，3-管理员)
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetConfLevel() const;

                    /**
                     * 设置配置等级(1-普通，2-高级，3-管理员)
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _confLevel 配置等级(1-普通，2-高级，3-管理员)
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetConfLevel(const int64_t& _confLevel);

                    /**
                     * 判断参数 ConfLevel 是否已赋值
                     * @return ConfLevel 是否已赋值
                     * 
                     */
                    bool ConfLevelHasBeenSet() const;

                    /**
                     * 获取候选文本列表(，分隔)
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CandidateTexts 候选文本列表(，分隔)
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCandidateTexts() const;

                    /**
                     * 设置候选文本列表(，分隔)
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _candidateTexts 候选文本列表(，分隔)
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCandidateTexts(const std::string& _candidateTexts);

                    /**
                     * 判断参数 CandidateTexts 是否已赋值
                     * @return CandidateTexts 是否已赋值
                     * 
                     */
                    bool CandidateTextsHasBeenSet() const;

                    /**
                     * 获取复制时是否需要修改
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CopyKey 复制时是否需要修改
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetCopyKey() const;

                    /**
                     * 设置复制时是否需要修改
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _copyKey 复制时是否需要修改
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCopyKey(const int64_t& _copyKey);

                    /**
                     * 判断参数 CopyKey 是否已赋值
                     * @return CopyKey 是否已赋值
                     * 
                     */
                    bool CopyKeyHasBeenSet() const;

                    /**
                     * 获取字段正则表达式校验
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Regex 字段正则表达式校验
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRegex() const;

                    /**
                     * 设置字段正则表达式校验
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _regex 字段正则表达式校验
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRegex(const std::string& _regex);

                    /**
                     * 判断参数 Regex 是否已赋值
                     * @return Regex 是否已赋值
                     * 
                     */
                    bool RegexHasBeenSet() const;

                    /**
                     * 获取字段正则表达式校验证提示tip
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Tip 字段正则表达式校验证提示tip
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTip() const;

                    /**
                     * 设置字段正则表达式校验证提示tip
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tip 字段正则表达式校验证提示tip
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTip(const std::string& _tip);

                    /**
                     * 判断参数 Tip 是否已赋值
                     * @return Tip 是否已赋值
                     * 
                     */
                    bool TipHasBeenSet() const;

                    /**
                     * 获取可选值
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Candidates 可选值
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<CandidateDsDTo> GetCandidates() const;

                    /**
                     * 设置可选值
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _candidates 可选值
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCandidates(const std::vector<CandidateDsDTo>& _candidates);

                    /**
                     * 判断参数 Candidates 是否已赋值
                     * @return Candidates 是否已赋值
                     * 
                     */
                    bool CandidatesHasBeenSet() const;

                private:

                    /**
                     * 类型ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_typeId;
                    bool m_typeIdHasBeenSet;

                    /**
                     * 属性名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_propName;
                    bool m_propNameHasBeenSet;

                    /**
                     * 属性标签(ui展示用)
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_propLabel;
                    bool m_propLabelHasBeenSet;

                    /**
                     * 缺省标志
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_defaultFlag;
                    bool m_defaultFlagHasBeenSet;

                    /**
                     * 可视标志
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_visibleFlag;
                    bool m_visibleFlagHasBeenSet;

                    /**
                     * 属性描述
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_propDesc;
                    bool m_propDescHasBeenSet;

                    /**
                     * 排列id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_rankId;
                    bool m_rankIdHasBeenSet;

                    /**
                     * 控件类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_inputType;
                    bool m_inputTypeHasBeenSet;

                    /**
                     * 值类型(integer，string)
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_valueType;
                    bool m_valueTypeHasBeenSet;

                    /**
                     * 缺省值
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_defaultValue;
                    bool m_defaultValueHasBeenSet;

                    /**
                     * 候选值列表(，分隔)
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_candidateValues;
                    bool m_candidateValuesHasBeenSet;

                    /**
                     * 是否必填
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_isMandatory;
                    bool m_isMandatoryHasBeenSet;

                    /**
                     * 最大值
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_maxValue;
                    bool m_maxValueHasBeenSet;

                    /**
                     * 最小值
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_minValue;
                    bool m_minValueHasBeenSet;

                    /**
                     * 配置等级(1-普通，2-高级，3-管理员)
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_confLevel;
                    bool m_confLevelHasBeenSet;

                    /**
                     * 候选文本列表(，分隔)
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_candidateTexts;
                    bool m_candidateTextsHasBeenSet;

                    /**
                     * 复制时是否需要修改
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_copyKey;
                    bool m_copyKeyHasBeenSet;

                    /**
                     * 字段正则表达式校验
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_regex;
                    bool m_regexHasBeenSet;

                    /**
                     * 字段正则表达式校验证提示tip
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_tip;
                    bool m_tipHasBeenSet;

                    /**
                     * 可选值
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<CandidateDsDTo> m_candidates;
                    bool m_candidatesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_TASKTYPEEXTDSVO_H_
