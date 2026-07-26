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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_APPTRIGGERPARAMBINDINGVALUE_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_APPTRIGGERPARAMBINDINGVALUE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * AppTriggerParamBindingValue
                */
                class AppTriggerParamBindingValue : public AbstractModel
                {
                public:
                    AppTriggerParamBindingValue();
                    ~AppTriggerParamBindingValue() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>参数值</p>
                     * @return ParamValue <p>参数值</p>
                     * 
                     */
                    std::string GetParamValue() const;

                    /**
                     * 设置<p>参数值</p>
                     * @param _paramValue <p>参数值</p>
                     * 
                     */
                    void SetParamValue(const std::string& _paramValue);

                    /**
                     * 判断参数 ParamValue 是否已赋值
                     * @return ParamValue 是否已赋值
                     * 
                     */
                    bool ParamValueHasBeenSet() const;

                    /**
                     * 获取<p>应用变量名</p>
                     * @return VariableName <p>应用变量名</p>
                     * 
                     */
                    std::string GetVariableName() const;

                    /**
                     * 设置<p>应用变量名</p>
                     * @param _variableName <p>应用变量名</p>
                     * 
                     */
                    void SetVariableName(const std::string& _variableName);

                    /**
                     * 判断参数 VariableName 是否已赋值
                     * @return VariableName 是否已赋值
                     * 
                     */
                    bool VariableNameHasBeenSet() const;

                private:

                    /**
                     * <p>参数值</p>
                     */
                    std::string m_paramValue;
                    bool m_paramValueHasBeenSet;

                    /**
                     * <p>应用变量名</p>
                     */
                    std::string m_variableName;
                    bool m_variableNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_APPTRIGGERPARAMBINDINGVALUE_H_
