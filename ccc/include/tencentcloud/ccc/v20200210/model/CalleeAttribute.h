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

#ifndef TENCENTCLOUD_CCC_V20200210_MODEL_CALLEEATTRIBUTE_H_
#define TENCENTCLOUD_CCC_V20200210_MODEL_CALLEEATTRIBUTE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ccc/v20200210/model/Variable.h>


namespace TencentCloud
{
    namespace Ccc
    {
        namespace V20200210
        {
            namespace Model
            {
                /**
                * 被叫属性
                */
                class CalleeAttribute : public AbstractModel
                {
                public:
                    CalleeAttribute();
                    ~CalleeAttribute() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取被叫号码
                     * @return Callee 被叫号码
                     * 
                     */
                    std::string GetCallee() const;

                    /**
                     * 设置被叫号码
                     * @param _callee 被叫号码
                     * 
                     */
                    void SetCallee(const std::string& _callee);

                    /**
                     * 判断参数 Callee 是否已赋值
                     * @return Callee 是否已赋值
                     * 
                     */
                    bool CalleeHasBeenSet() const;

                    /**
                     * 获取随路数据
                     * @return UUI 随路数据
                     * 
                     */
                    std::string GetUUI() const;

                    /**
                     * 设置随路数据
                     * @param _uUI 随路数据
                     * 
                     */
                    void SetUUI(const std::string& _uUI);

                    /**
                     * 判断参数 UUI 是否已赋值
                     * @return UUI 是否已赋值
                     * 
                     */
                    bool UUIHasBeenSet() const;

                    /**
                     * 获取参数
                     * @return Variables 参数
                     * 
                     */
                    std::vector<Variable> GetVariables() const;

                    /**
                     * 设置参数
                     * @param _variables 参数
                     * 
                     */
                    void SetVariables(const std::vector<Variable>& _variables);

                    /**
                     * 判断参数 Variables 是否已赋值
                     * @return Variables 是否已赋值
                     * 
                     */
                    bool VariablesHasBeenSet() const;

                private:

                    /**
                     * 被叫号码
                     */
                    std::string m_callee;
                    bool m_calleeHasBeenSet;

                    /**
                     * 随路数据
                     */
                    std::string m_uUI;
                    bool m_uUIHasBeenSet;

                    /**
                     * 参数
                     */
                    std::vector<Variable> m_variables;
                    bool m_variablesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CCC_V20200210_MODEL_CALLEEATTRIBUTE_H_
