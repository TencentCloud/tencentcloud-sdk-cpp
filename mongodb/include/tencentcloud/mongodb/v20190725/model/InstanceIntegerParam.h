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
                * 实例可修改参数integer类型集合。
                */
                class InstanceIntegerParam : public AbstractModel
                {
                public:
                    InstanceIntegerParam();
                    ~InstanceIntegerParam() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取当前值
                     * @return CurrentValue 当前值
                     */
                    std::string GetCurrentValue() const;

                    /**
                     * 设置当前值
                     * @param CurrentValue 当前值
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
                     * 获取最大值
                     * @return Max 最大值
                     */
                    std::string GetMax() const;

                    /**
                     * 设置最大值
                     * @param Max 最大值
                     */
                    void SetMax(const std::string& _max);

                    /**
                     * 判断参数 Max 是否已赋值
                     * @return Max 是否已赋值
                     */
                    bool MaxHasBeenSet() const;

                    /**
                     * 获取最小值
                     * @return Min 最小值
                     */
                    std::string GetMin() const;

                    /**
                     * 设置最小值
                     * @param Min 最小值
                     */
                    void SetMin(const std::string& _min);

                    /**
                     * 判断参数 Min 是否已赋值
                     * @return Min 是否已赋值
                     */
                    bool MinHasBeenSet() const;

                    /**
                     * 获取是否徐亚哦重启后生效 1:需要重启；0:无需重启
                     * @return NeedRestart 是否徐亚哦重启后生效 1:需要重启；0:无需重启
                     */
                    std::string GetNeedRestart() const;

                    /**
                     * 设置是否徐亚哦重启后生效 1:需要重启；0:无需重启
                     * @param NeedRestart 是否徐亚哦重启后生效 1:需要重启；0:无需重启
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
                     * 获取参数说明
                     * @return Tips 参数说明
                     */
                    std::vector<std::string> GetTips() const;

                    /**
                     * 设置参数说明
                     * @param Tips 参数说明
                     */
                    void SetTips(const std::vector<std::string>& _tips);

                    /**
                     * 判断参数 Tips 是否已赋值
                     * @return Tips 是否已赋值
                     */
                    bool TipsHasBeenSet() const;

                    /**
                     * 获取参数类型
                     * @return ValueType 参数类型
                     */
                    std::string GetValueType() const;

                    /**
                     * 设置参数类型
                     * @param ValueType 参数类型
                     */
                    void SetValueType(const std::string& _valueType);

                    /**
                     * 判断参数 ValueType 是否已赋值
                     * @return ValueType 是否已赋值
                     */
                    bool ValueTypeHasBeenSet() const;

                    /**
                     * 获取是否正常获取到，1：未正常获取；0：正常获取，仅对前端有实际意义；
                     * @return Status 是否正常获取到，1：未正常获取；0：正常获取，仅对前端有实际意义；
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置是否正常获取到，1：未正常获取；0：正常获取，仅对前端有实际意义；
                     * @param Status 是否正常获取到，1：未正常获取；0：正常获取，仅对前端有实际意义；
                     */
                    void SetStatus(const uint64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取暂时未用到，前端使用redis侧代码，为了兼容，保留该参数
                     * @return Unit 暂时未用到，前端使用redis侧代码，为了兼容，保留该参数
                     */
                    std::string GetUnit() const;

                    /**
                     * 设置暂时未用到，前端使用redis侧代码，为了兼容，保留该参数
                     * @param Unit 暂时未用到，前端使用redis侧代码，为了兼容，保留该参数
                     */
                    void SetUnit(const std::string& _unit);

                    /**
                     * 判断参数 Unit 是否已赋值
                     * @return Unit 是否已赋值
                     */
                    bool UnitHasBeenSet() const;

                private:

                    /**
                     * 当前值
                     */
                    std::string m_currentValue;
                    bool m_currentValueHasBeenSet;

                    /**
                     * 默认值
                     */
                    std::string m_defaultValue;
                    bool m_defaultValueHasBeenSet;

                    /**
                     * 最大值
                     */
                    std::string m_max;
                    bool m_maxHasBeenSet;

                    /**
                     * 最小值
                     */
                    std::string m_min;
                    bool m_minHasBeenSet;

                    /**
                     * 是否徐亚哦重启后生效 1:需要重启；0:无需重启
                     */
                    std::string m_needRestart;
                    bool m_needRestartHasBeenSet;

                    /**
                     * 参数名称
                     */
                    std::string m_paramName;
                    bool m_paramNameHasBeenSet;

                    /**
                     * 参数说明
                     */
                    std::vector<std::string> m_tips;
                    bool m_tipsHasBeenSet;

                    /**
                     * 参数类型
                     */
                    std::string m_valueType;
                    bool m_valueTypeHasBeenSet;

                    /**
                     * 是否正常获取到，1：未正常获取；0：正常获取，仅对前端有实际意义；
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 暂时未用到，前端使用redis侧代码，为了兼容，保留该参数
                     */
                    std::string m_unit;
                    bool m_unitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONGODB_V20190725_MODEL_INSTANCEINTEGERPARAM_H_
