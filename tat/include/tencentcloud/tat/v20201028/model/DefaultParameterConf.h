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

#ifndef TENCENTCLOUD_TAT_V20201028_MODEL_DEFAULTPARAMETERCONF_H_
#define TENCENTCLOUD_TAT_V20201028_MODEL_DEFAULTPARAMETERCONF_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tat
    {
        namespace V20201028
        {
            namespace Model
            {
                /**
                * 自定义参数。
                */
                class DefaultParameterConf : public AbstractModel
                {
                public:
                    DefaultParameterConf();
                    ~DefaultParameterConf() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取参数名。
                     * @return ParameterName 参数名。
                     * 
                     */
                    std::string GetParameterName() const;

                    /**
                     * 设置参数名。
                     * @param _parameterName 参数名。
                     * 
                     */
                    void SetParameterName(const std::string& _parameterName);

                    /**
                     * 判断参数 ParameterName 是否已赋值
                     * @return ParameterName 是否已赋值
                     * 
                     */
                    bool ParameterNameHasBeenSet() const;

                    /**
                     * 获取参数默认值。
                     * @return ParameterValue 参数默认值。
                     * 
                     */
                    std::string GetParameterValue() const;

                    /**
                     * 设置参数默认值。
                     * @param _parameterValue 参数默认值。
                     * 
                     */
                    void SetParameterValue(const std::string& _parameterValue);

                    /**
                     * 判断参数 ParameterValue 是否已赋值
                     * @return ParameterValue 是否已赋值
                     * 
                     */
                    bool ParameterValueHasBeenSet() const;

                    /**
                     * 获取参数描述。
                     * @return ParameterDescription 参数描述。
                     * 
                     */
                    std::string GetParameterDescription() const;

                    /**
                     * 设置参数描述。
                     * @param _parameterDescription 参数描述。
                     * 
                     */
                    void SetParameterDescription(const std::string& _parameterDescription);

                    /**
                     * 判断参数 ParameterDescription 是否已赋值
                     * @return ParameterDescription 是否已赋值
                     * 
                     */
                    bool ParameterDescriptionHasBeenSet() const;

                private:

                    /**
                     * 参数名。
                     */
                    std::string m_parameterName;
                    bool m_parameterNameHasBeenSet;

                    /**
                     * 参数默认值。
                     */
                    std::string m_parameterValue;
                    bool m_parameterValueHasBeenSet;

                    /**
                     * 参数描述。
                     */
                    std::string m_parameterDescription;
                    bool m_parameterDescriptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TAT_V20201028_MODEL_DEFAULTPARAMETERCONF_H_
