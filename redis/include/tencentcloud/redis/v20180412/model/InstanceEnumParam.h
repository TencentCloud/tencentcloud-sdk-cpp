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

#ifndef TENCENTCLOUD_REDIS_V20180412_MODEL_INSTANCEENUMPARAM_H_
#define TENCENTCLOUD_REDIS_V20180412_MODEL_INSTANCEENUMPARAM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Redis
    {
        namespace V20180412
        {
            namespace Model
            {
                /**
                * 实例枚举类型参数描述
                */
                class InstanceEnumParam : public AbstractModel
                {
                public:
                    InstanceEnumParam();
                    ~InstanceEnumParam() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


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
                     * 获取参数类型，例如：Enum。
                     * @return ValueType 参数类型，例如：Enum。
                     * 
                     */
                    std::string GetValueType() const;

                    /**
                     * 设置参数类型，例如：Enum。
                     * @param _valueType 参数类型，例如：Enum。
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
                     * 获取参数值修改后是否需要重启。
- true：需要。
- false：不需要。
                     * @return NeedRestart 参数值修改后是否需要重启。
- true：需要。
- false：不需要。
                     * 
                     */
                    std::string GetNeedRestart() const;

                    /**
                     * 设置参数值修改后是否需要重启。
- true：需要。
- false：不需要。
                     * @param _needRestart 参数值修改后是否需要重启。
- true：需要。
- false：不需要。
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
                     * 获取参数当前运行值。
                     * @return CurrentValue 参数当前运行值。
                     * 
                     */
                    std::string GetCurrentValue() const;

                    /**
                     * 设置参数当前运行值。
                     * @param _currentValue 参数当前运行值。
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
                     * 获取参数说明。
                     * @return Tips 参数说明。
                     * 
                     */
                    std::string GetTips() const;

                    /**
                     * 设置参数说明。
                     * @param _tips 参数说明。
                     * 
                     */
                    void SetTips(const std::string& _tips);

                    /**
                     * 判断参数 Tips 是否已赋值
                     * @return Tips 是否已赋值
                     * 
                     */
                    bool TipsHasBeenSet() const;

                    /**
                     * 获取参数可取的值。
                     * @return EnumValue 参数可取的值。
                     * 
                     */
                    std::vector<std::string> GetEnumValue() const;

                    /**
                     * 设置参数可取的值。
                     * @param _enumValue 参数可取的值。
                     * 
                     */
                    void SetEnumValue(const std::vector<std::string>& _enumValue);

                    /**
                     * 判断参数 EnumValue 是否已赋值
                     * @return EnumValue 是否已赋值
                     * 
                     */
                    bool EnumValueHasBeenSet() const;

                    /**
                     * 获取参数修改状态。
- 1: 修改中。
- 2：修改完成。
                     * @return Status 参数修改状态。
- 1: 修改中。
- 2：修改完成。
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置参数修改状态。
- 1: 修改中。
- 2：修改完成。
                     * @param _status 参数修改状态。
- 1: 修改中。
- 2：修改完成。
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * 参数名称。
                     */
                    std::string m_paramName;
                    bool m_paramNameHasBeenSet;

                    /**
                     * 参数类型，例如：Enum。
                     */
                    std::string m_valueType;
                    bool m_valueTypeHasBeenSet;

                    /**
                     * 参数值修改后是否需要重启。
- true：需要。
- false：不需要。
                     */
                    std::string m_needRestart;
                    bool m_needRestartHasBeenSet;

                    /**
                     * 参数默认值。
                     */
                    std::string m_defaultValue;
                    bool m_defaultValueHasBeenSet;

                    /**
                     * 参数当前运行值。
                     */
                    std::string m_currentValue;
                    bool m_currentValueHasBeenSet;

                    /**
                     * 参数说明。
                     */
                    std::string m_tips;
                    bool m_tipsHasBeenSet;

                    /**
                     * 参数可取的值。
                     */
                    std::vector<std::string> m_enumValue;
                    bool m_enumValueHasBeenSet;

                    /**
                     * 参数修改状态。
- 1: 修改中。
- 2：修改完成。
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_REDIS_V20180412_MODEL_INSTANCEENUMPARAM_H_
