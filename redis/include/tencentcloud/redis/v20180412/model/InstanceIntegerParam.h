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

#ifndef TENCENTCLOUD_REDIS_V20180412_MODEL_INSTANCEINTEGERPARAM_H_
#define TENCENTCLOUD_REDIS_V20180412_MODEL_INSTANCEINTEGERPARAM_H_

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
                     * 获取<p>参数名</p>
                     * @return ParamName <p>参数名</p>
                     * 
                     */
                    std::string GetParamName() const;

                    /**
                     * 设置<p>参数名</p>
                     * @param _paramName <p>参数名</p>
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
                     * 获取<p>参数类型：integer</p>
                     * @return ValueType <p>参数类型：integer</p>
                     * 
                     */
                    std::string GetValueType() const;

                    /**
                     * 设置<p>参数类型：integer</p>
                     * @param _valueType <p>参数类型：integer</p>
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
                     * 获取<p>修改后是否需要重启：true，false</p>
                     * @return NeedRestart <p>修改后是否需要重启：true，false</p>
                     * 
                     */
                    std::string GetNeedRestart() const;

                    /**
                     * 设置<p>修改后是否需要重启：true，false</p>
                     * @param _needRestart <p>修改后是否需要重启：true，false</p>
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
                     * 获取<p>参数默认值</p>
                     * @return DefaultValue <p>参数默认值</p>
                     * 
                     */
                    std::string GetDefaultValue() const;

                    /**
                     * 设置<p>参数默认值</p>
                     * @param _defaultValue <p>参数默认值</p>
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
                     * 获取<p>当前运行参数值</p>
                     * @return CurrentValue <p>当前运行参数值</p>
                     * 
                     */
                    std::string GetCurrentValue() const;

                    /**
                     * 设置<p>当前运行参数值</p>
                     * @param _currentValue <p>当前运行参数值</p>
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
                     * 获取<p>参数说明</p>
                     * @return Tips <p>参数说明</p>
                     * 
                     */
                    std::string GetTips() const;

                    /**
                     * 设置<p>参数说明</p>
                     * @param _tips <p>参数说明</p>
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
                     * 获取<p>参数最小值</p>
                     * @return Min <p>参数最小值</p>
                     * 
                     */
                    std::string GetMin() const;

                    /**
                     * 设置<p>参数最小值</p>
                     * @param _min <p>参数最小值</p>
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
                     * 获取<p>参数最大值</p>
                     * @return Max <p>参数最大值</p>
                     * 
                     */
                    std::string GetMax() const;

                    /**
                     * 设置<p>参数最大值</p>
                     * @param _max <p>参数最大值</p>
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
                     * 获取<p>参数状态, 1: 修改中， 2：修改完成</p>
                     * @return Status <p>参数状态, 1: 修改中， 2：修改完成</p>
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置<p>参数状态, 1: 修改中， 2：修改完成</p>
                     * @param _status <p>参数状态, 1: 修改中， 2：修改完成</p>
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
                     * 获取<p>参数单位</p>
                     * @return Unit <p>参数单位</p>
                     * 
                     */
                    std::string GetUnit() const;

                    /**
                     * 设置<p>参数单位</p>
                     * @param _unit <p>参数单位</p>
                     * 
                     */
                    void SetUnit(const std::string& _unit);

                    /**
                     * 判断参数 Unit 是否已赋值
                     * @return Unit 是否已赋值
                     * 
                     */
                    bool UnitHasBeenSet() const;

                    /**
                     * 获取<p>参数类型</p><p>枚举值：</p><ul><li>redis： cache节点支持的参数</li><li>redis-interface： 代理proxy支持的参数</li><li>tendis：  tendis支持的参数</li></ul>
                     * @return ParamType <p>参数类型</p><p>枚举值：</p><ul><li>redis： cache节点支持的参数</li><li>redis-interface： 代理proxy支持的参数</li><li>tendis：  tendis支持的参数</li></ul>
                     * 
                     */
                    std::string GetParamType() const;

                    /**
                     * 设置<p>参数类型</p><p>枚举值：</p><ul><li>redis： cache节点支持的参数</li><li>redis-interface： 代理proxy支持的参数</li><li>tendis：  tendis支持的参数</li></ul>
                     * @param _paramType <p>参数类型</p><p>枚举值：</p><ul><li>redis： cache节点支持的参数</li><li>redis-interface： 代理proxy支持的参数</li><li>tendis：  tendis支持的参数</li></ul>
                     * 
                     */
                    void SetParamType(const std::string& _paramType);

                    /**
                     * 判断参数 ParamType 是否已赋值
                     * @return ParamType 是否已赋值
                     * 
                     */
                    bool ParamTypeHasBeenSet() const;

                    /**
                     * 获取<p>当前实例是否支持该特性</p>
                     * @return FeatureSupported <p>当前实例是否支持该特性</p>
                     * 
                     */
                    bool GetFeatureSupported() const;

                    /**
                     * 设置<p>当前实例是否支持该特性</p>
                     * @param _featureSupported <p>当前实例是否支持该特性</p>
                     * 
                     */
                    void SetFeatureSupported(const bool& _featureSupported);

                    /**
                     * 判断参数 FeatureSupported 是否已赋值
                     * @return FeatureSupported 是否已赋值
                     * 
                     */
                    bool FeatureSupportedHasBeenSet() const;

                    /**
                     * 获取<p>新特性上线日期</p><p>参数格式：时间格式YYYY-MM-DD</p>
                     * @return NewFeatureOnlineTime <p>新特性上线日期</p><p>参数格式：时间格式YYYY-MM-DD</p>
                     * 
                     */
                    std::string GetNewFeatureOnlineTime() const;

                    /**
                     * 设置<p>新特性上线日期</p><p>参数格式：时间格式YYYY-MM-DD</p>
                     * @param _newFeatureOnlineTime <p>新特性上线日期</p><p>参数格式：时间格式YYYY-MM-DD</p>
                     * 
                     */
                    void SetNewFeatureOnlineTime(const std::string& _newFeatureOnlineTime);

                    /**
                     * 判断参数 NewFeatureOnlineTime 是否已赋值
                     * @return NewFeatureOnlineTime 是否已赋值
                     * 
                     */
                    bool NewFeatureOnlineTimeHasBeenSet() const;

                    /**
                     * 获取<p>正则校验规则</p>
                     * @return Pattern <p>正则校验规则</p>
                     * 
                     */
                    std::string GetPattern() const;

                    /**
                     * 设置<p>正则校验规则</p>
                     * @param _pattern <p>正则校验规则</p>
                     * 
                     */
                    void SetPattern(const std::string& _pattern);

                    /**
                     * 判断参数 Pattern 是否已赋值
                     * @return Pattern 是否已赋值
                     * 
                     */
                    bool PatternHasBeenSet() const;

                    /**
                     * 获取<p>输入格式描述</p>
                     * @return InputDescription <p>输入格式描述</p>
                     * 
                     */
                    std::string GetInputDescription() const;

                    /**
                     * 设置<p>输入格式描述</p>
                     * @param _inputDescription <p>输入格式描述</p>
                     * 
                     */
                    void SetInputDescription(const std::string& _inputDescription);

                    /**
                     * 判断参数 InputDescription 是否已赋值
                     * @return InputDescription 是否已赋值
                     * 
                     */
                    bool InputDescriptionHasBeenSet() const;

                private:

                    /**
                     * <p>参数名</p>
                     */
                    std::string m_paramName;
                    bool m_paramNameHasBeenSet;

                    /**
                     * <p>参数类型：integer</p>
                     */
                    std::string m_valueType;
                    bool m_valueTypeHasBeenSet;

                    /**
                     * <p>修改后是否需要重启：true，false</p>
                     */
                    std::string m_needRestart;
                    bool m_needRestartHasBeenSet;

                    /**
                     * <p>参数默认值</p>
                     */
                    std::string m_defaultValue;
                    bool m_defaultValueHasBeenSet;

                    /**
                     * <p>当前运行参数值</p>
                     */
                    std::string m_currentValue;
                    bool m_currentValueHasBeenSet;

                    /**
                     * <p>参数说明</p>
                     */
                    std::string m_tips;
                    bool m_tipsHasBeenSet;

                    /**
                     * <p>参数最小值</p>
                     */
                    std::string m_min;
                    bool m_minHasBeenSet;

                    /**
                     * <p>参数最大值</p>
                     */
                    std::string m_max;
                    bool m_maxHasBeenSet;

                    /**
                     * <p>参数状态, 1: 修改中， 2：修改完成</p>
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>参数单位</p>
                     */
                    std::string m_unit;
                    bool m_unitHasBeenSet;

                    /**
                     * <p>参数类型</p><p>枚举值：</p><ul><li>redis： cache节点支持的参数</li><li>redis-interface： 代理proxy支持的参数</li><li>tendis：  tendis支持的参数</li></ul>
                     */
                    std::string m_paramType;
                    bool m_paramTypeHasBeenSet;

                    /**
                     * <p>当前实例是否支持该特性</p>
                     */
                    bool m_featureSupported;
                    bool m_featureSupportedHasBeenSet;

                    /**
                     * <p>新特性上线日期</p><p>参数格式：时间格式YYYY-MM-DD</p>
                     */
                    std::string m_newFeatureOnlineTime;
                    bool m_newFeatureOnlineTimeHasBeenSet;

                    /**
                     * <p>正则校验规则</p>
                     */
                    std::string m_pattern;
                    bool m_patternHasBeenSet;

                    /**
                     * <p>输入格式描述</p>
                     */
                    std::string m_inputDescription;
                    bool m_inputDescriptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_REDIS_V20180412_MODEL_INSTANCEINTEGERPARAM_H_
