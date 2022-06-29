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

#ifndef TENCENTCLOUD_MONGODB_V20190725_MODEL_INSTANCEENUMPARAM_H_
#define TENCENTCLOUD_MONGODB_V20190725_MODEL_INSTANCEENUMPARAM_H_

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
                * 实例可修改参数枚举类型集合。
                */
                class InstanceEnumParam : public AbstractModel
                {
                public:
                    InstanceEnumParam();
                    ~InstanceEnumParam() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取参数当前值
                     * @return CurrentValue 参数当前值
                     */
                    std::string GetCurrentValue() const;

                    /**
                     * 设置参数当前值
                     * @param CurrentValue 参数当前值
                     */
                    void SetCurrentValue(const std::string& _currentValue);

                    /**
                     * 判断参数 CurrentValue 是否已赋值
                     * @return CurrentValue 是否已赋值
                     */
                    bool CurrentValueHasBeenSet() const;

                    /**
                     * 获取默认值
                     * @return DefaultValue 默认值
                     */
                    std::string GetDefaultValue() const;

                    /**
                     * 设置默认值
                     * @param DefaultValue 默认值
                     */
                    void SetDefaultValue(const std::string& _defaultValue);

                    /**
                     * 判断参数 DefaultValue 是否已赋值
                     * @return DefaultValue 是否已赋值
                     */
                    bool DefaultValueHasBeenSet() const;

                    /**
                     * 获取枚举值，所有支持的值
                     * @return EnumValue 枚举值，所有支持的值
                     */
                    std::vector<std::string> GetEnumValue() const;

                    /**
                     * 设置枚举值，所有支持的值
                     * @param EnumValue 枚举值，所有支持的值
                     */
                    void SetEnumValue(const std::vector<std::string>& _enumValue);

                    /**
                     * 判断参数 EnumValue 是否已赋值
                     * @return EnumValue 是否已赋值
                     */
                    bool EnumValueHasBeenSet() const;

                    /**
                     * 获取是否需要重启生效 1:需要重启后生效；0：无需重启，设置成功即可生效；
                     * @return NeedRestart 是否需要重启生效 1:需要重启后生效；0：无需重启，设置成功即可生效；
                     */
                    std::string GetNeedRestart() const;

                    /**
                     * 设置是否需要重启生效 1:需要重启后生效；0：无需重启，设置成功即可生效；
                     * @param NeedRestart 是否需要重启生效 1:需要重启后生效；0：无需重启，设置成功即可生效；
                     */
                    void SetNeedRestart(const std::string& _needRestart);

                    /**
                     * 判断参数 NeedRestart 是否已赋值
                     * @return NeedRestart 是否已赋值
                     */
                    bool NeedRestartHasBeenSet() const;

                    /**
                     * 获取参数名称
                     * @return ParamName 参数名称
                     */
                    std::string GetParamName() const;

                    /**
                     * 设置参数名称
                     * @param ParamName 参数名称
                     */
                    void SetParamName(const std::string& _paramName);

                    /**
                     * 判断参数 ParamName 是否已赋值
                     * @return ParamName 是否已赋值
                     */
                    bool ParamNameHasBeenSet() const;

                    /**
                     * 获取中英文说明
                     * @return Tips 中英文说明
                     */
                    std::vector<std::string> GetTips() const;

                    /**
                     * 设置中英文说明
                     * @param Tips 中英文说明
                     */
                    void SetTips(const std::vector<std::string>& _tips);

                    /**
                     * 判断参数 Tips 是否已赋值
                     * @return Tips 是否已赋值
                     */
                    bool TipsHasBeenSet() const;

                    /**
                     * 获取参数值类型说明
                     * @return ValueType 参数值类型说明
                     */
                    std::string GetValueType() const;

                    /**
                     * 设置参数值类型说明
                     * @param ValueType 参数值类型说明
                     */
                    void SetValueType(const std::string& _valueType);

                    /**
                     * 判断参数 ValueType 是否已赋值
                     * @return ValueType 是否已赋值
                     */
                    bool ValueTypeHasBeenSet() const;

                    /**
                     * 获取是否为运行中参数值 1:运行中参数值；0：非运行中参数值；
                     * @return Status 是否为运行中参数值 1:运行中参数值；0：非运行中参数值；
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置是否为运行中参数值 1:运行中参数值；0：非运行中参数值；
                     * @param Status 是否为运行中参数值 1:运行中参数值；0：非运行中参数值；
                     */
                    void SetStatus(const uint64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * 参数当前值
                     */
                    std::string m_currentValue;
                    bool m_currentValueHasBeenSet;

                    /**
                     * 默认值
                     */
                    std::string m_defaultValue;
                    bool m_defaultValueHasBeenSet;

                    /**
                     * 枚举值，所有支持的值
                     */
                    std::vector<std::string> m_enumValue;
                    bool m_enumValueHasBeenSet;

                    /**
                     * 是否需要重启生效 1:需要重启后生效；0：无需重启，设置成功即可生效；
                     */
                    std::string m_needRestart;
                    bool m_needRestartHasBeenSet;

                    /**
                     * 参数名称
                     */
                    std::string m_paramName;
                    bool m_paramNameHasBeenSet;

                    /**
                     * 中英文说明
                     */
                    std::vector<std::string> m_tips;
                    bool m_tipsHasBeenSet;

                    /**
                     * 参数值类型说明
                     */
                    std::string m_valueType;
                    bool m_valueTypeHasBeenSet;

                    /**
                     * 是否为运行中参数值 1:运行中参数值；0：非运行中参数值；
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONGODB_V20190725_MODEL_INSTANCEENUMPARAM_H_
