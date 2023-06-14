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

#ifndef TENCENTCLOUD_MONGODB_V20190725_MODEL_INSTANCETEXTPARAM_H_
#define TENCENTCLOUD_MONGODB_V20190725_MODEL_INSTANCETEXTPARAM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mongodb
    {
        namespace V20190725
        {
            namespace Model
            {
                /**
                * 实例可修改参数为 Text 类型的参数集合。
                */
                class InstanceTextParam : public AbstractModel
                {
                public:
                    InstanceTextParam();
                    ~InstanceTextParam() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取参数当前值。
                     * @return CurrentValue 参数当前值。
                     * 
                     */
                    std::string GetCurrentValue() const;

                    /**
                     * 设置参数当前值。
                     * @param _currentValue 参数当前值。
                     * 
                     */
                    void SetCurrentValue(const std::string& _currentValue);

                    /**
                     * 判断参数 CurrentValue 是否已赋值
                     * @return CurrentValue 是否已赋值
                     * 
                     */
                    bool CurrentValueHasBeenSet() const;

                    /**
                     * 获取参数默认值。
                     * @return DefaultValue 参数默认值。
                     * 
                     */
                    std::string GetDefaultValue() const;

                    /**
                     * 设置参数默认值。
                     * @param _defaultValue 参数默认值。
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
                     * 获取修改参数值之后是否需要重启。
                     * @return NeedRestart 修改参数值之后是否需要重启。
                     * 
                     */
                    std::string GetNeedRestart() const;

                    /**
                     * 设置修改参数值之后是否需要重启。
                     * @param _needRestart 修改参数值之后是否需要重启。
                     * 
                     */
                    void SetNeedRestart(const std::string& _needRestart);

                    /**
                     * 判断参数 NeedRestart 是否已赋值
                     * @return NeedRestart 是否已赋值
                     * 
                     */
                    bool NeedRestartHasBeenSet() const;

                    /**
                     * 获取参数名称。
                     * @return ParamName 参数名称。
                     * 
                     */
                    std::string GetParamName() const;

                    /**
                     * 设置参数名称。
                     * @param _paramName 参数名称。
                     * 
                     */
                    void SetParamName(const std::string& _paramName);

                    /**
                     * 判断参数 ParamName 是否已赋值
                     * @return ParamName 是否已赋值
                     * 
                     */
                    bool ParamNameHasBeenSet() const;

                    /**
                     * 获取Text 类型参数对应的值。
                     * @return TextValue Text 类型参数对应的值。
                     * 
                     */
                    std::string GetTextValue() const;

                    /**
                     * 设置Text 类型参数对应的值。
                     * @param _textValue Text 类型参数对应的值。
                     * 
                     */
                    void SetTextValue(const std::string& _textValue);

                    /**
                     * 判断参数 TextValue 是否已赋值
                     * @return TextValue 是否已赋值
                     * 
                     */
                    bool TextValueHasBeenSet() const;

                    /**
                     * 获取参数说明。
                     * @return Tips 参数说明。
                     * 
                     */
                    std::vector<std::string> GetTips() const;

                    /**
                     * 设置参数说明。
                     * @param _tips 参数说明。
                     * 
                     */
                    void SetTips(const std::vector<std::string>& _tips);

                    /**
                     * 判断参数 Tips 是否已赋值
                     * @return Tips 是否已赋值
                     * 
                     */
                    bool TipsHasBeenSet() const;

                    /**
                     * 获取参数值类型说明。
                     * @return ValueType 参数值类型说明。
                     * 
                     */
                    std::string GetValueType() const;

                    /**
                     * 设置参数值类型说明。
                     * @param _valueType 参数值类型说明。
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
                     * 获取是否为运行中的参数值。
- 1：运行中参数值。
- 0：非运行中参数值。
                     * @return Status 是否为运行中的参数值。
- 1：运行中参数值。
- 0：非运行中参数值。
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置是否为运行中的参数值。
- 1：运行中参数值。
- 0：非运行中参数值。
                     * @param _status 是否为运行中的参数值。
- 1：运行中参数值。
- 0：非运行中参数值。
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * 参数当前值。
                     */
                    std::string m_currentValue;
                    bool m_currentValueHasBeenSet;

                    /**
                     * 参数默认值。
                     */
                    std::string m_defaultValue;
                    bool m_defaultValueHasBeenSet;

                    /**
                     * 修改参数值之后是否需要重启。
                     */
                    std::string m_needRestart;
                    bool m_needRestartHasBeenSet;

                    /**
                     * 参数名称。
                     */
                    std::string m_paramName;
                    bool m_paramNameHasBeenSet;

                    /**
                     * Text 类型参数对应的值。
                     */
                    std::string m_textValue;
                    bool m_textValueHasBeenSet;

                    /**
                     * 参数说明。
                     */
                    std::vector<std::string> m_tips;
                    bool m_tipsHasBeenSet;

                    /**
                     * 参数值类型说明。
                     */
                    std::string m_valueType;
                    bool m_valueTypeHasBeenSet;

                    /**
                     * 是否为运行中的参数值。
- 1：运行中参数值。
- 0：非运行中参数值。
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONGODB_V20190725_MODEL_INSTANCETEXTPARAM_H_
