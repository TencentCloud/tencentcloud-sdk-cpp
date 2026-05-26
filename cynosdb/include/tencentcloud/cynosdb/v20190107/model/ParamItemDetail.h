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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_PARAMITEMDETAIL_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_PARAMITEMDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cynosdb/v20190107/model/ModifiableInfo.h>


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
                     * 获取<p>当前值</p>
                     * @return CurrentValue <p>当前值</p>
                     * 
                     */
                    std::string GetCurrentValue() const;

                    /**
                     * 设置<p>当前值</p>
                     * @param _currentValue <p>当前值</p>
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
                     * 获取<p>默认值</p>
                     * @return Default <p>默认值</p>
                     * 
                     */
                    std::string GetDefault() const;

                    /**
                     * 设置<p>默认值</p>
                     * @param _default <p>默认值</p>
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
                     * 获取<p>参数的可选枚举值。如果为非枚举值，则为空</p>
                     * @return EnumValue <p>参数的可选枚举值。如果为非枚举值，则为空</p>
                     * 
                     */
                    std::vector<std::string> GetEnumValue() const;

                    /**
                     * 设置<p>参数的可选枚举值。如果为非枚举值，则为空</p>
                     * @param _enumValue <p>参数的可选枚举值。如果为非枚举值，则为空</p>
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
                     * 获取<p>1：全局参数，0：非全局参数</p>
                     * @return IsGlobal <p>1：全局参数，0：非全局参数</p>
                     * 
                     */
                    int64_t GetIsGlobal() const;

                    /**
                     * 设置<p>1：全局参数，0：非全局参数</p>
                     * @param _isGlobal <p>1：全局参数，0：非全局参数</p>
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
                     * 获取<p>最大值</p>
                     * @return Max <p>最大值</p>
                     * 
                     */
                    std::string GetMax() const;

                    /**
                     * 设置<p>最大值</p>
                     * @param _max <p>最大值</p>
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
                     * 获取<p>最小值</p>
                     * @return Min <p>最小值</p>
                     * 
                     */
                    std::string GetMin() const;

                    /**
                     * 设置<p>最小值</p>
                     * @param _min <p>最小值</p>
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
                     * 获取<p>修改参数后，是否需要重启数据库以使参数生效。0-不需要重启，1-需要重启。</p>
                     * @return NeedReboot <p>修改参数后，是否需要重启数据库以使参数生效。0-不需要重启，1-需要重启。</p>
                     * 
                     */
                    int64_t GetNeedReboot() const;

                    /**
                     * 设置<p>修改参数后，是否需要重启数据库以使参数生效。0-不需要重启，1-需要重启。</p>
                     * @param _needReboot <p>修改参数后，是否需要重启数据库以使参数生效。0-不需要重启，1-需要重启。</p>
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
                     * 获取<p>参数名称</p>
                     * @return ParamName <p>参数名称</p>
                     * 
                     */
                    std::string GetParamName() const;

                    /**
                     * 设置<p>参数名称</p>
                     * @param _paramName <p>参数名称</p>
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
                     * 获取<p>参数类型：integer，enum，float，string，func</p>
                     * @return ParamType <p>参数类型：integer，enum，float，string，func</p>
                     * 
                     */
                    std::string GetParamType() const;

                    /**
                     * 设置<p>参数类型：integer，enum，float，string，func</p>
                     * @param _paramType <p>参数类型：integer，enum，float，string，func</p>
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
                     * 获取<p>参数是否可修改</p>
                     * @return ModifiableInfo <p>参数是否可修改</p>
                     * 
                     */
                    ModifiableInfo GetModifiableInfo() const;

                    /**
                     * 设置<p>参数是否可修改</p>
                     * @param _modifiableInfo <p>参数是否可修改</p>
                     * 
                     */
                    void SetModifiableInfo(const ModifiableInfo& _modifiableInfo);

                    /**
                     * 判断参数 ModifiableInfo 是否已赋值
                     * @return ModifiableInfo 是否已赋值
                     * 
                     */
                    bool ModifiableInfoHasBeenSet() const;

                    /**
                     * 获取<p>参数描述</p>
                     * @return Description <p>参数描述</p>
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>参数描述</p>
                     * @param _description <p>参数描述</p>
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
                     * 获取<p>类型是否为公式</p>
                     * @return IsFunc <p>类型是否为公式</p>
                     * 
                     */
                    bool GetIsFunc() const;

                    /**
                     * 设置<p>类型是否为公式</p>
                     * @param _isFunc <p>类型是否为公式</p>
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
                     * 获取<p>参数配置公式</p>
                     * @return Func <p>参数配置公式</p>
                     * 
                     */
                    std::string GetFunc() const;

                    /**
                     * 设置<p>参数配置公式</p>
                     * @param _func <p>参数配置公式</p>
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
                     * 获取<p>支持公式的参数的默认公式样式</p>
                     * @return FuncPattern <p>支持公式的参数的默认公式样式</p>
                     * 
                     */
                    std::string GetFuncPattern() const;

                    /**
                     * 设置<p>支持公式的参数的默认公式样式</p>
                     * @param _funcPattern <p>支持公式的参数的默认公式样式</p>
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
                     * <p>当前值</p>
                     */
                    std::string m_currentValue;
                    bool m_currentValueHasBeenSet;

                    /**
                     * <p>默认值</p>
                     */
                    std::string m_default;
                    bool m_defaultHasBeenSet;

                    /**
                     * <p>参数的可选枚举值。如果为非枚举值，则为空</p>
                     */
                    std::vector<std::string> m_enumValue;
                    bool m_enumValueHasBeenSet;

                    /**
                     * <p>1：全局参数，0：非全局参数</p>
                     */
                    int64_t m_isGlobal;
                    bool m_isGlobalHasBeenSet;

                    /**
                     * <p>最大值</p>
                     */
                    std::string m_max;
                    bool m_maxHasBeenSet;

                    /**
                     * <p>最小值</p>
                     */
                    std::string m_min;
                    bool m_minHasBeenSet;

                    /**
                     * <p>修改参数后，是否需要重启数据库以使参数生效。0-不需要重启，1-需要重启。</p>
                     */
                    int64_t m_needReboot;
                    bool m_needRebootHasBeenSet;

                    /**
                     * <p>参数名称</p>
                     */
                    std::string m_paramName;
                    bool m_paramNameHasBeenSet;

                    /**
                     * <p>参数类型：integer，enum，float，string，func</p>
                     */
                    std::string m_paramType;
                    bool m_paramTypeHasBeenSet;

                    /**
                     * <p>参数是否可修改</p>
                     */
                    ModifiableInfo m_modifiableInfo;
                    bool m_modifiableInfoHasBeenSet;

                    /**
                     * <p>参数描述</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>类型是否为公式</p>
                     */
                    bool m_isFunc;
                    bool m_isFuncHasBeenSet;

                    /**
                     * <p>参数配置公式</p>
                     */
                    std::string m_func;
                    bool m_funcHasBeenSet;

                    /**
                     * <p>支持公式的参数的默认公式样式</p>
                     */
                    std::string m_funcPattern;
                    bool m_funcPatternHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_PARAMITEMDETAIL_H_
