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

#ifndef TENCENTCLOUD_MONGODB_V20190725_MODEL_INSTANCEINTEGERPARAM_H_
#define TENCENTCLOUD_MONGODB_V20190725_MODEL_INSTANCEINTEGERPARAM_H_

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
                * 实例可修改参数 Integer 类型集合。
                */
                class InstanceIntegerParam : public AbstractModel
                {
                public:
                    InstanceIntegerParam();
                    ~InstanceIntegerParam() = default;
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
                     * 获取参数最大值。
                     * @return Max 参数最大值。
                     * 
                     */
                    std::string GetMax() const;

                    /**
                     * 设置参数最大值。
                     * @param _max 参数最大值。
                     * 
                     */
                    void SetMax(const std::string& _max);

                    /**
                     * 判断参数 Max 是否已赋值
                     * @return Max 是否已赋值
                     * 
                     */
                    bool MaxHasBeenSet() const;

                    /**
                     * 获取最小值。
                     * @return Min 最小值。
                     * 
                     */
                    std::string GetMin() const;

                    /**
                     * 设置最小值。
                     * @param _min 最小值。
                     * 
                     */
                    void SetMin(const std::string& _min);

                    /**
                     * 判断参数 Min 是否已赋值
                     * @return Min 是否已赋值
                     * 
                     */
                    bool MinHasBeenSet() const;

                    /**
                     * 获取参数修改之后是否需要重启生效。
- 1:需要重启后生效。
- 0：无需重启，设置成功即可生效。
                     * @return NeedRestart 参数修改之后是否需要重启生效。
- 1:需要重启后生效。
- 0：无需重启，设置成功即可生效。
                     * 
                     */
                    std::string GetNeedRestart() const;

                    /**
                     * 设置参数修改之后是否需要重启生效。
- 1:需要重启后生效。
- 0：无需重启，设置成功即可生效。
                     * @param _needRestart 参数修改之后是否需要重启生效。
- 1:需要重启后生效。
- 0：无需重启，设置成功即可生效。
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
                     * 获取参数类型。
                     * @return ValueType 参数类型。
                     * 
                     */
                    std::string GetValueType() const;

                    /**
                     * 设置参数类型。
                     * @param _valueType 参数类型。
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
                     * 获取是否为运行中参数值。
- 1：运行中参数值。
- 0：非运行中参数值。
                     * @return Status 是否为运行中参数值。
- 1：运行中参数值。
- 0：非运行中参数值。
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置是否为运行中参数值。
- 1：运行中参数值。
- 0：非运行中参数值。
                     * @param _status 是否为运行中参数值。
- 1：运行中参数值。
- 0：非运行中参数值。
                     * 
                     */
                    void SetStatus(const uint64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取冗余字段，可忽略。
                     * @return Unit 冗余字段，可忽略。
                     * 
                     */
                    std::string GetUnit() const;

                    /**
                     * 设置冗余字段，可忽略。
                     * @param _unit 冗余字段，可忽略。
                     * 
                     */
                    void SetUnit(const std::string& _unit);

                    /**
                     * 判断参数 Unit 是否已赋值
                     * @return Unit 是否已赋值
                     * 
                     */
                    bool UnitHasBeenSet() const;

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
                     * 参数最大值。
                     */
                    std::string m_max;
                    bool m_maxHasBeenSet;

                    /**
                     * 最小值。
                     */
                    std::string m_min;
                    bool m_minHasBeenSet;

                    /**
                     * 参数修改之后是否需要重启生效。
- 1:需要重启后生效。
- 0：无需重启，设置成功即可生效。
                     */
                    std::string m_needRestart;
                    bool m_needRestartHasBeenSet;

                    /**
                     * 参数名称。
                     */
                    std::string m_paramName;
                    bool m_paramNameHasBeenSet;

                    /**
                     * 参数说明。
                     */
                    std::vector<std::string> m_tips;
                    bool m_tipsHasBeenSet;

                    /**
                     * 参数类型。
                     */
                    std::string m_valueType;
                    bool m_valueTypeHasBeenSet;

                    /**
                     * 是否为运行中参数值。
- 1：运行中参数值。
- 0：非运行中参数值。
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 冗余字段，可忽略。
                     */
                    std::string m_unit;
                    bool m_unitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONGODB_V20190725_MODEL_INSTANCEINTEGERPARAM_H_
