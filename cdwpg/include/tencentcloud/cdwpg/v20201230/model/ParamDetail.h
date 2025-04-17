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

#ifndef TENCENTCLOUD_CDWPG_V20201230_MODEL_PARAMDETAIL_H_
#define TENCENTCLOUD_CDWPG_V20201230_MODEL_PARAMDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdwpg/v20201230/model/ValueRange.h>


namespace TencentCloud
{
    namespace Cdwpg
    {
        namespace V20201230
        {
            namespace Model
            {
                /**
                * ParamDetail 详细
                */
                class ParamDetail : public AbstractModel
                {
                public:
                    ParamDetail();
                    ~ParamDetail() = default;
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
                     * 获取默认值
                     * @return DefaultValue 默认值
                     * 
                     */
                    std::string GetDefaultValue() const;

                    /**
                     * 设置默认值
                     * @param _defaultValue 默认值
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
                     * 获取是否需要重启
                     * @return NeedRestart 是否需要重启
                     * 
                     */
                    bool GetNeedRestart() const;

                    /**
                     * 设置是否需要重启
                     * @param _needRestart 是否需要重启
                     * 
                     */
                    void SetNeedRestart(const bool& _needRestart);

                    /**
                     * 判断参数 NeedRestart 是否已赋值
                     * @return NeedRestart 是否已赋值
                     * 
                     */
                    bool NeedRestartHasBeenSet() const;

                    /**
                     * 获取当前运行值
                     * @return RunningValue 当前运行值
                     * 
                     */
                    std::string GetRunningValue() const;

                    /**
                     * 设置当前运行值
                     * @param _runningValue 当前运行值
                     * 
                     */
                    void SetRunningValue(const std::string& _runningValue);

                    /**
                     * 判断参数 RunningValue 是否已赋值
                     * @return RunningValue 是否已赋值
                     * 
                     */
                    bool RunningValueHasBeenSet() const;

                    /**
                     * 获取取值范围
                     * @return ValueRange 取值范围
                     * 
                     */
                    ValueRange GetValueRange() const;

                    /**
                     * 设置取值范围
                     * @param _valueRange 取值范围
                     * 
                     */
                    void SetValueRange(const ValueRange& _valueRange);

                    /**
                     * 判断参数 ValueRange 是否已赋值
                     * @return ValueRange 是否已赋值
                     * 
                     */
                    bool ValueRangeHasBeenSet() const;

                    /**
                     * 获取单位
                     * @return Unit 单位
                     * 
                     */
                    std::string GetUnit() const;

                    /**
                     * 设置单位
                     * @param _unit 单位
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
                     * 获取英文简介
                     * @return ShortDesc 英文简介
                     * 
                     */
                    std::string GetShortDesc() const;

                    /**
                     * 设置英文简介
                     * @param _shortDesc 英文简介
                     * 
                     */
                    void SetShortDesc(const std::string& _shortDesc);

                    /**
                     * 判断参数 ShortDesc 是否已赋值
                     * @return ShortDesc 是否已赋值
                     * 
                     */
                    bool ShortDescHasBeenSet() const;

                    /**
                     * 获取参数名
                     * @return ParameterName 参数名
                     * 
                     */
                    std::string GetParameterName() const;

                    /**
                     * 设置参数名
                     * @param _parameterName 参数名
                     * 
                     */
                    void SetParameterName(const std::string& _parameterName);

                    /**
                     * 判断参数 ParameterName 是否已赋值
                     * @return ParameterName 是否已赋值
                     * 
                     */
                    bool ParameterNameHasBeenSet() const;

                private:

                    /**
                     * 参数名
                     */
                    std::string m_paramName;
                    bool m_paramNameHasBeenSet;

                    /**
                     * 默认值
                     */
                    std::string m_defaultValue;
                    bool m_defaultValueHasBeenSet;

                    /**
                     * 是否需要重启
                     */
                    bool m_needRestart;
                    bool m_needRestartHasBeenSet;

                    /**
                     * 当前运行值
                     */
                    std::string m_runningValue;
                    bool m_runningValueHasBeenSet;

                    /**
                     * 取值范围
                     */
                    ValueRange m_valueRange;
                    bool m_valueRangeHasBeenSet;

                    /**
                     * 单位
                     */
                    std::string m_unit;
                    bool m_unitHasBeenSet;

                    /**
                     * 英文简介
                     */
                    std::string m_shortDesc;
                    bool m_shortDescHasBeenSet;

                    /**
                     * 参数名
                     */
                    std::string m_parameterName;
                    bool m_parameterNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDWPG_V20201230_MODEL_PARAMDETAIL_H_
