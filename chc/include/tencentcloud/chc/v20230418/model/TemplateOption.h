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

#ifndef TENCENTCLOUD_CHC_V20230418_MODEL_TEMPLATEOPTION_H_
#define TENCENTCLOUD_CHC_V20230418_MODEL_TEMPLATEOPTION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/chc/v20230418/model/OptionValueItem.h>


namespace TencentCloud
{
    namespace Chc
    {
        namespace V20230418
        {
            namespace Model
            {
                /**
                * 型号模板的选项
                */
                class TemplateOption : public AbstractModel
                {
                public:
                    TemplateOption();
                    ~TemplateOption() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取选项名称
                     * @return OptionName 选项名称
                     * 
                     */
                    std::string GetOptionName() const;

                    /**
                     * 设置选项名称
                     * @param _optionName 选项名称
                     * 
                     */
                    void SetOptionName(const std::string& _optionName);

                    /**
                     * 判断参数 OptionName 是否已赋值
                     * @return OptionName 是否已赋值
                     * 
                     */
                    bool OptionNameHasBeenSet() const;

                    /**
                     * 获取腾讯的标准
                     * @return Standard 腾讯的标准
                     * 
                     */
                    std::string GetStandard() const;

                    /**
                     * 设置腾讯的标准
                     * @param _standard 腾讯的标准
                     * 
                     */
                    void SetStandard(const std::string& _standard);

                    /**
                     * 判断参数 Standard 是否已赋值
                     * @return Standard 是否已赋值
                     * 
                     */
                    bool StandardHasBeenSet() const;

                    /**
                     * 获取腾讯标准的展示字段
                     * @return StandardInfo 腾讯标准的展示字段
                     * 
                     */
                    std::string GetStandardInfo() const;

                    /**
                     * 设置腾讯标准的展示字段
                     * @param _standardInfo 腾讯标准的展示字段
                     * 
                     */
                    void SetStandardInfo(const std::string& _standardInfo);

                    /**
                     * 判断参数 StandardInfo 是否已赋值
                     * @return StandardInfo 是否已赋值
                     * 
                     */
                    bool StandardInfoHasBeenSet() const;

                    /**
                     * 获取选项的唯一标识
                     * @return OptionKey 选项的唯一标识
                     * 
                     */
                    std::string GetOptionKey() const;

                    /**
                     * 设置选项的唯一标识
                     * @param _optionKey 选项的唯一标识
                     * 
                     */
                    void SetOptionKey(const std::string& _optionKey);

                    /**
                     * 判断参数 OptionKey 是否已赋值
                     * @return OptionKey 是否已赋值
                     * 
                     */
                    bool OptionKeyHasBeenSet() const;

                    /**
                     * 获取输入的类型
                     * @return InputType 输入的类型
                     * 
                     */
                    std::string GetInputType() const;

                    /**
                     * 设置输入的类型
                     * @param _inputType 输入的类型
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
                     * 获取输入值的类型
                     * @return ValueType 输入值的类型
                     * 
                     */
                    std::string GetValueType() const;

                    /**
                     * 设置输入值的类型
                     * @param _valueType 输入值的类型
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
                     * 获取是否符合腾讯标准的比较方式，-- 为不做比较
                     * @return CompareType 是否符合腾讯标准的比较方式，-- 为不做比较
                     * 
                     */
                    std::string GetCompareType() const;

                    /**
                     * 设置是否符合腾讯标准的比较方式，-- 为不做比较
                     * @param _compareType 是否符合腾讯标准的比较方式，-- 为不做比较
                     * 
                     */
                    void SetCompareType(const std::string& _compareType);

                    /**
                     * 判断参数 CompareType 是否已赋值
                     * @return CompareType 是否已赋值
                     * 
                     */
                    bool CompareTypeHasBeenSet() const;

                    /**
                     * 获取下拉列表中填充的选项值
                     * @return OptionValueSet 下拉列表中填充的选项值
                     * 
                     */
                    std::vector<OptionValueItem> GetOptionValueSet() const;

                    /**
                     * 设置下拉列表中填充的选项值
                     * @param _optionValueSet 下拉列表中填充的选项值
                     * 
                     */
                    void SetOptionValueSet(const std::vector<OptionValueItem>& _optionValueSet);

                    /**
                     * 判断参数 OptionValueSet 是否已赋值
                     * @return OptionValueSet 是否已赋值
                     * 
                     */
                    bool OptionValueSetHasBeenSet() const;

                    /**
                     * 获取输入框中的占位的提示符
                     * @return InputHint 输入框中的占位的提示符
                     * 
                     */
                    std::string GetInputHint() const;

                    /**
                     * 设置输入框中的占位的提示符
                     * @param _inputHint 输入框中的占位的提示符
                     * 
                     */
                    void SetInputHint(const std::string& _inputHint);

                    /**
                     * 判断参数 InputHint 是否已赋值
                     * @return InputHint 是否已赋值
                     * 
                     */
                    bool InputHintHasBeenSet() const;

                    /**
                     * 获取输入框下方的提示文案
                     * @return InputInfo 输入框下方的提示文案
                     * 
                     */
                    std::string GetInputInfo() const;

                    /**
                     * 设置输入框下方的提示文案
                     * @param _inputInfo 输入框下方的提示文案
                     * 
                     */
                    void SetInputInfo(const std::string& _inputInfo);

                    /**
                     * 判断参数 InputInfo 是否已赋值
                     * @return InputInfo 是否已赋值
                     * 
                     */
                    bool InputInfoHasBeenSet() const;

                    /**
                     * 获取客户写入的值
                     * @return OptionValue 客户写入的值
                     * 
                     */
                    std::string GetOptionValue() const;

                    /**
                     * 设置客户写入的值
                     * @param _optionValue 客户写入的值
                     * 
                     */
                    void SetOptionValue(const std::string& _optionValue);

                    /**
                     * 判断参数 OptionValue 是否已赋值
                     * @return OptionValue 是否已赋值
                     * 
                     */
                    bool OptionValueHasBeenSet() const;

                private:

                    /**
                     * 选项名称
                     */
                    std::string m_optionName;
                    bool m_optionNameHasBeenSet;

                    /**
                     * 腾讯的标准
                     */
                    std::string m_standard;
                    bool m_standardHasBeenSet;

                    /**
                     * 腾讯标准的展示字段
                     */
                    std::string m_standardInfo;
                    bool m_standardInfoHasBeenSet;

                    /**
                     * 选项的唯一标识
                     */
                    std::string m_optionKey;
                    bool m_optionKeyHasBeenSet;

                    /**
                     * 输入的类型
                     */
                    std::string m_inputType;
                    bool m_inputTypeHasBeenSet;

                    /**
                     * 输入值的类型
                     */
                    std::string m_valueType;
                    bool m_valueTypeHasBeenSet;

                    /**
                     * 是否符合腾讯标准的比较方式，-- 为不做比较
                     */
                    std::string m_compareType;
                    bool m_compareTypeHasBeenSet;

                    /**
                     * 下拉列表中填充的选项值
                     */
                    std::vector<OptionValueItem> m_optionValueSet;
                    bool m_optionValueSetHasBeenSet;

                    /**
                     * 输入框中的占位的提示符
                     */
                    std::string m_inputHint;
                    bool m_inputHintHasBeenSet;

                    /**
                     * 输入框下方的提示文案
                     */
                    std::string m_inputInfo;
                    bool m_inputInfoHasBeenSet;

                    /**
                     * 客户写入的值
                     */
                    std::string m_optionValue;
                    bool m_optionValueHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CHC_V20230418_MODEL_TEMPLATEOPTION_H_
