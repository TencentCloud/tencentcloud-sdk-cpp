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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_AGENTPLUGINPARAMETER_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_AGENTPLUGINPARAMETER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/adp/v20260520/model/AgentInput.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * Agent 插件参数配置
                */
                class AgentPluginParameter : public AbstractModel
                {
                public:
                    AgentPluginParameter();
                    ~AgentPluginParameter() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>参数名称</p>
                     * @return Name <p>参数名称</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>参数名称</p>
                     * @param _name <p>参数名称</p>
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取<p>是否必填</p>
                     * @return IsRequired <p>是否必填</p>
                     * 
                     */
                    bool GetIsRequired() const;

                    /**
                     * 设置<p>是否必填</p>
                     * @param _isRequired <p>是否必填</p>
                     * 
                     */
                    void SetIsRequired(const bool& _isRequired);

                    /**
                     * 判断参数 IsRequired 是否已赋值
                     * @return IsRequired 是否已赋值
                     * 
                     */
                    bool IsRequiredHasBeenSet() const;

                    /**
                     * 获取<p>输入的值</p>
                     * @return Input <p>输入的值</p>
                     * 
                     */
                    AgentInput GetInput() const;

                    /**
                     * 设置<p>输入的值</p>
                     * @param _input <p>输入的值</p>
                     * 
                     */
                    void SetInput(const AgentInput& _input);

                    /**
                     * 判断参数 Input 是否已赋值
                     * @return Input 是否已赋值
                     * 
                     */
                    bool InputHasBeenSet() const;

                private:

                    /**
                     * <p>参数名称</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>是否必填</p>
                     */
                    bool m_isRequired;
                    bool m_isRequiredHasBeenSet;

                    /**
                     * <p>输入的值</p>
                     */
                    AgentInput m_input;
                    bool m_inputHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_AGENTPLUGINPARAMETER_H_
