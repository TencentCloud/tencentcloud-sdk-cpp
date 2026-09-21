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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBEZONECUSTOMVARIABLESRESPONSE_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBEZONECUSTOMVARIABLESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/CustomVariable.h>
#include <tencentcloud/teo/v20220901/model/CustomVariableOperation.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * DescribeZoneCustomVariables返回参数结构体
                */
                class DescribeZoneCustomVariablesResponse : public AbstractModel
                {
                public:
                    DescribeZoneCustomVariablesResponse();
                    ~DescribeZoneCustomVariablesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>站点级自定义变量列表。</p>
                     * @return CustomVariables <p>站点级自定义变量列表。</p>
                     * 
                     */
                    std::vector<CustomVariable> GetCustomVariables() const;

                    /**
                     * 判断参数 CustomVariables 是否已赋值
                     * @return CustomVariables 是否已赋值
                     * 
                     */
                    bool CustomVariablesHasBeenSet() const;

                    /**
                     * 获取<p>站点级自定义变量运算规则。</p>
                     * @return CustomVariableOperations <p>站点级自定义变量运算规则。</p>
                     * 
                     */
                    std::vector<CustomVariableOperation> GetCustomVariableOperations() const;

                    /**
                     * 判断参数 CustomVariableOperations 是否已赋值
                     * @return CustomVariableOperations 是否已赋值
                     * 
                     */
                    bool CustomVariableOperationsHasBeenSet() const;

                private:

                    /**
                     * <p>站点级自定义变量列表。</p>
                     */
                    std::vector<CustomVariable> m_customVariables;
                    bool m_customVariablesHasBeenSet;

                    /**
                     * <p>站点级自定义变量运算规则。</p>
                     */
                    std::vector<CustomVariableOperation> m_customVariableOperations;
                    bool m_customVariableOperationsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBEZONECUSTOMVARIABLESRESPONSE_H_
