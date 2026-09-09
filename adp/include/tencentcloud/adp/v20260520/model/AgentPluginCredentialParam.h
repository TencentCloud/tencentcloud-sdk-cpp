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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_AGENTPLUGINCREDENTIALPARAM_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_AGENTPLUGINCREDENTIALPARAM_H_

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
                * Agent 插件凭据参数配置（变量模式）
                */
                class AgentPluginCredentialParam : public AbstractModel
                {
                public:
                    AgentPluginCredentialParam();
                    ~AgentPluginCredentialParam() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>参数位置</p><p>枚举值：</p><ul><li>0： Header 鉴权</li><li>1： Query 鉴权</li></ul>
                     * @return KeyLocation <p>参数位置</p><p>枚举值：</p><ul><li>0： Header 鉴权</li><li>1： Query 鉴权</li></ul>
                     * 
                     */
                    int64_t GetKeyLocation() const;

                    /**
                     * 设置<p>参数位置</p><p>枚举值：</p><ul><li>0： Header 鉴权</li><li>1： Query 鉴权</li></ul>
                     * @param _keyLocation <p>参数位置</p><p>枚举值：</p><ul><li>0： Header 鉴权</li><li>1： Query 鉴权</li></ul>
                     * 
                     */
                    void SetKeyLocation(const int64_t& _keyLocation);

                    /**
                     * 判断参数 KeyLocation 是否已赋值
                     * @return KeyLocation 是否已赋值
                     * 
                     */
                    bool KeyLocationHasBeenSet() const;

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
                     * 获取<p>参数取值来源</p>
                     * @return Input <p>参数取值来源</p>
                     * 
                     */
                    AgentInput GetInput() const;

                    /**
                     * 设置<p>参数取值来源</p>
                     * @param _input <p>参数取值来源</p>
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
                     * <p>参数位置</p><p>枚举值：</p><ul><li>0： Header 鉴权</li><li>1： Query 鉴权</li></ul>
                     */
                    int64_t m_keyLocation;
                    bool m_keyLocationHasBeenSet;

                    /**
                     * <p>参数名称</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>参数取值来源</p>
                     */
                    AgentInput m_input;
                    bool m_inputHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_AGENTPLUGINCREDENTIALPARAM_H_
