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

#ifndef TENCENTCLOUD_KEEWIDB_V20220308_MODEL_INSTANCEINTEGERPARAM_H_
#define TENCENTCLOUD_KEEWIDB_V20220308_MODEL_INSTANCEINTEGERPARAM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Keewidb
    {
        namespace V20220308
        {
            namespace Model
            {
                /**
                * 实例整型参数描述
                */
                class InstanceIntegerParam : public AbstractModel
                {
                public:
                    InstanceIntegerParam();
                    ~InstanceIntegerParam() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取参数名
                     * @return ParamName 参数名
                     * 
                     */
                    std::string GetParamName() const;

                    /**
                     * 设置参数名
                     * @param _paramName 参数名
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
                     * 获取参数类型：integer
                     * @return ValueType 参数类型：integer
                     * 
                     */
                    std::string GetValueType() const;

                    /**
                     * 设置参数类型：integer
                     * @param _valueType 参数类型：integer
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
                     * 获取修改后是否需要重启：true，false
                     * @return NeedRestart 修改后是否需要重启：true，false
                     * 
                     */
                    std::string GetNeedRestart() const;

                    /**
                     * 设置修改后是否需要重启：true，false
                     * @param _needRestart 修改后是否需要重启：true，false
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
                     * 获取参数默认值
                     * @return DefaultValue 参数默认值
                     * 
                     */
                    std::string GetDefaultValue() const;

                    /**
                     * 设置参数默认值
                     * @param _defaultValue 参数默认值
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
                     * 获取当前运行参数值
                     * @return CurrentValue 当前运行参数值
                     * 
                     */
                    std::string GetCurrentValue() const;

                    /**
                     * 设置当前运行参数值
                     * @param _currentValue 当前运行参数值
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
                     * 获取参数说明
                     * @return Tips 参数说明
                     * 
                     */
                    std::string GetTips() const;

                    /**
                     * 设置参数说明
                     * @param _tips 参数说明
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
                     * 获取参数最小值
                     * @return Min 参数最小值
                     * 
                     */
                    std::string GetMin() const;

                    /**
                     * 设置参数最小值
                     * @param _min 参数最小值
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
                     * 获取参数最大值
                     * @return Max 参数最大值
                     * 
                     */
                    std::string GetMax() const;

                    /**
                     * 设置参数最大值
                     * @param _max 参数最大值
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
                     * 获取参数状态, 1: 修改中， 2：修改完成
                     * @return Status 参数状态, 1: 修改中， 2：修改完成
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置参数状态, 1: 修改中， 2：修改完成
                     * @param _status 参数状态, 1: 修改中， 2：修改完成
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取参数单位
                     * @return Unit 参数单位
                     * 
                     */
                    std::string GetUnit() const;

                    /**
                     * 设置参数单位
                     * @param _unit 参数单位
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
                     * 参数名
                     */
                    std::string m_paramName;
                    bool m_paramNameHasBeenSet;

                    /**
                     * 参数类型：integer
                     */
                    std::string m_valueType;
                    bool m_valueTypeHasBeenSet;

                    /**
                     * 修改后是否需要重启：true，false
                     */
                    std::string m_needRestart;
                    bool m_needRestartHasBeenSet;

                    /**
                     * 参数默认值
                     */
                    std::string m_defaultValue;
                    bool m_defaultValueHasBeenSet;

                    /**
                     * 当前运行参数值
                     */
                    std::string m_currentValue;
                    bool m_currentValueHasBeenSet;

                    /**
                     * 参数说明
                     */
                    std::string m_tips;
                    bool m_tipsHasBeenSet;

                    /**
                     * 参数最小值
                     */
                    std::string m_min;
                    bool m_minHasBeenSet;

                    /**
                     * 参数最大值
                     */
                    std::string m_max;
                    bool m_maxHasBeenSet;

                    /**
                     * 参数状态, 1: 修改中， 2：修改完成
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 参数单位
                     */
                    std::string m_unit;
                    bool m_unitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_KEEWIDB_V20220308_MODEL_INSTANCEINTEGERPARAM_H_
