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

#ifndef TENCENTCLOUD_LKE_V20231130_MODEL_AGENTPLUGINHEADER_H_
#define TENCENTCLOUD_LKE_V20231130_MODEL_AGENTPLUGINHEADER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/lke/v20231130/model/AgentInput.h>


namespace TencentCloud
{
    namespace Lke
    {
        namespace V20231130
        {
            namespace Model
            {
                /**
                * 应用配置MCP插件header信息
                */
                class AgentPluginHeader : public AbstractModel
                {
                public:
                    AgentPluginHeader();
                    ~AgentPluginHeader() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


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
                     * 获取参数值
                     * @return ParamValue 参数值
                     * 
                     */
                    std::string GetParamValue() const;

                    /**
                     * 设置参数值
                     * @param _paramValue 参数值
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
                     * 获取header参数配置是否隐藏不可见
                     * @return GlobalHidden header参数配置是否隐藏不可见
                     * 
                     */
                    bool GetGlobalHidden() const;

                    /**
                     * 设置header参数配置是否隐藏不可见
                     * @param _globalHidden header参数配置是否隐藏不可见
                     * 
                     */
                    void SetGlobalHidden(const bool& _globalHidden);

                    /**
                     * 判断参数 GlobalHidden 是否已赋值
                     * @return GlobalHidden 是否已赋值
                     * 
                     */
                    bool GlobalHiddenHasBeenSet() const;

                    /**
                     * 获取输入的值
                     * @return Input 输入的值
                     * 
                     */
                    AgentInput GetInput() const;

                    /**
                     * 设置输入的值
                     * @param _input 输入的值
                     * 
                     */
                    void SetInput(const AgentInput& _input);

                    /**
                     * 判断参数 Input 是否已赋值
                     * @return Input 是否已赋值
                     * 
                     */
                    bool InputHasBeenSet() const;

                    /**
                     * 获取参数是否可以为空
                     * @return IsRequired 参数是否可以为空
                     * 
                     */
                    bool GetIsRequired() const;

                    /**
                     * 设置参数是否可以为空
                     * @param _isRequired 参数是否可以为空
                     * 
                     */
                    void SetIsRequired(const bool& _isRequired);

                    /**
                     * 判断参数 IsRequired 是否已赋值
                     * @return IsRequired 是否已赋值
                     * 
                     */
                    bool IsRequiredHasBeenSet() const;

                private:

                    /**
                     * 参数名称
                     */
                    std::string m_paramName;
                    bool m_paramNameHasBeenSet;

                    /**
                     * 参数值
                     */
                    std::string m_paramValue;
                    bool m_paramValueHasBeenSet;

                    /**
                     * header参数配置是否隐藏不可见
                     */
                    bool m_globalHidden;
                    bool m_globalHiddenHasBeenSet;

                    /**
                     * 输入的值
                     */
                    AgentInput m_input;
                    bool m_inputHasBeenSet;

                    /**
                     * 参数是否可以为空
                     */
                    bool m_isRequired;
                    bool m_isRequiredHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_AGENTPLUGINHEADER_H_
