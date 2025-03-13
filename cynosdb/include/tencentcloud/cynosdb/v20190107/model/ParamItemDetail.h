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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_PARAMITEMDETAIL_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_PARAMITEMDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * 实例参数信息
                */
                class ParamItemDetail : public AbstractModel
                {
                public:
                    ParamItemDetail();
                    ~ParamItemDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取当前值
                     * @return CurrentValue 当前值
                     * 
                     */
                    std::string GetCurrentValue() const;

                    /**
                     * 设置当前值
                     * @param _currentValue 当前值
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
                     * 获取默认值
                     * @return Default 默认值
                     * 
                     */
                    std::string GetDefault() const;

                    /**
                     * 设置默认值
                     * @param _default 默认值
                     * 
                     */
                    void SetDefault(const std::string& _default);

                    /**
                     * 判断参数 Default 是否已赋值
                     * @return Default 是否已赋值
                     * 
                     */
                    bool DefaultHasBeenSet() const;

                    /**
                     * 获取参数的可选枚举值。如果为非枚举值，则为空
                     * @return EnumValue 参数的可选枚举值。如果为非枚举值，则为空
                     * 
                     */
                    std::vector<std::string> GetEnumValue() const;

                    /**
                     * 设置参数的可选枚举值。如果为非枚举值，则为空
                     * @param _enumValue 参数的可选枚举值。如果为非枚举值，则为空
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
                     * 获取1：全局参数，0：非全局参数
                     * @return IsGlobal 1：全局参数，0：非全局参数
                     * 
                     */
                    int64_t GetIsGlobal() const;

                    /**
                     * 设置1：全局参数，0：非全局参数
                     * @param _isGlobal 1：全局参数，0：非全局参数
                     * 
                     */
                    void SetIsGlobal(const int64_t& _isGlobal);

                    /**
                     * 判断参数 IsGlobal 是否已赋值
                     * @return IsGlobal 是否已赋值
                     * 
                     */
                    bool IsGlobalHasBeenSet() const;

                    /**
                     * 获取最大值
                     * @return Max 最大值
                     * 
                     */
                    std::string GetMax() const;

                    /**
                     * 设置最大值
                     * @param _max 最大值
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
                     * 获取最小值
                     * @return Min 最小值
                     * 
                     */
                    std::string GetMin() const;

                    /**
                     * 设置最小值
                     * @param _min 最小值
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
                     * 获取修改参数后，是否需要重启数据库以使参数生效。0-不需要重启，1-需要重启。
                     * @return NeedReboot 修改参数后，是否需要重启数据库以使参数生效。0-不需要重启，1-需要重启。
                     * 
                     */
                    int64_t GetNeedReboot() const;

                    /**
                     * 设置修改参数后，是否需要重启数据库以使参数生效。0-不需要重启，1-需要重启。
                     * @param _needReboot 修改参数后，是否需要重启数据库以使参数生效。0-不需要重启，1-需要重启。
                     * 
                     */
                    void SetNeedReboot(const int64_t& _needReboot);

                    /**
                     * 判断参数 NeedReboot 是否已赋值
                     * @return NeedReboot 是否已赋值
                     * 
                     */
                    bool NeedRebootHasBeenSet() const;

                    /**
                     * 获取参数名称
                     * @return ParamName 参数名称
                     * 
                     */
                    std::string GetParamName() const;

                    /**
                     * 设置参数名称
                     * @param _paramName 参数名称
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
                     * 获取参数类型：integer，enum，float，string，func
                     * @return ParamType 参数类型：integer，enum，float，string，func
                     * 
                     */
                    std::string GetParamType() const;

                    /**
                     * 设置参数类型：integer，enum，float，string，func
                     * @param _paramType 参数类型：integer，enum，float，string，func
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
                     * 获取参数描述
                     * @return Description 参数描述
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置参数描述
                     * @param _description 参数描述
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取类型是否为公式
                     * @return IsFunc 类型是否为公式
                     * 
                     */
                    bool GetIsFunc() const;

                    /**
                     * 设置类型是否为公式
                     * @param _isFunc 类型是否为公式
                     * 
                     */
                    void SetIsFunc(const bool& _isFunc);

                    /**
                     * 判断参数 IsFunc 是否已赋值
                     * @return IsFunc 是否已赋值
                     * 
                     */
                    bool IsFuncHasBeenSet() const;

                    /**
                     * 获取参数配置公式
                     * @return Func 参数配置公式
                     * 
                     */
                    std::string GetFunc() const;

                    /**
                     * 设置参数配置公式
                     * @param _func 参数配置公式
                     * 
                     */
                    void SetFunc(const std::string& _func);

                    /**
                     * 判断参数 Func 是否已赋值
                     * @return Func 是否已赋值
                     * 
                     */
                    bool FuncHasBeenSet() const;

                    /**
                     * 获取支持公式的参数的默认公式样式
                     * @return FuncPattern 支持公式的参数的默认公式样式
                     * 
                     */
                    std::string GetFuncPattern() const;

                    /**
                     * 设置支持公式的参数的默认公式样式
                     * @param _funcPattern 支持公式的参数的默认公式样式
                     * 
                     */
                    void SetFuncPattern(const std::string& _funcPattern);

                    /**
                     * 判断参数 FuncPattern 是否已赋值
                     * @return FuncPattern 是否已赋值
                     * 
                     */
                    bool FuncPatternHasBeenSet() const;

                private:

                    /**
                     * 当前值
                     */
                    std::string m_currentValue;
                    bool m_currentValueHasBeenSet;

                    /**
                     * 默认值
                     */
                    std::string m_default;
                    bool m_defaultHasBeenSet;

                    /**
                     * 参数的可选枚举值。如果为非枚举值，则为空
                     */
                    std::vector<std::string> m_enumValue;
                    bool m_enumValueHasBeenSet;

                    /**
                     * 1：全局参数，0：非全局参数
                     */
                    int64_t m_isGlobal;
                    bool m_isGlobalHasBeenSet;

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
                     * 修改参数后，是否需要重启数据库以使参数生效。0-不需要重启，1-需要重启。
                     */
                    int64_t m_needReboot;
                    bool m_needRebootHasBeenSet;

                    /**
                     * 参数名称
                     */
                    std::string m_paramName;
                    bool m_paramNameHasBeenSet;

                    /**
                     * 参数类型：integer，enum，float，string，func
                     */
                    std::string m_paramType;
                    bool m_paramTypeHasBeenSet;

                    /**
                     * 参数描述
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 类型是否为公式
                     */
                    bool m_isFunc;
                    bool m_isFuncHasBeenSet;

                    /**
                     * 参数配置公式
                     */
                    std::string m_func;
                    bool m_funcHasBeenSet;

                    /**
                     * 支持公式的参数的默认公式样式
                     */
                    std::string m_funcPattern;
                    bool m_funcPatternHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_PARAMITEMDETAIL_H_
