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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_AGENTEXTERNALTOOLCONFIG_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_AGENTEXTERNALTOOLCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/adp/v20260520/model/RequestParam.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * 调用方执行的 Function Tool 配置
                */
                class AgentExternalToolConfig : public AbstractModel
                {
                public:
                    AgentExternalToolConfig();
                    ~AgentExternalToolConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>工具类型</p><p>入参限制：目前仅支持 &quot;function&quot;</p>
                     * @return Type <p>工具类型</p><p>入参限制：目前仅支持 &quot;function&quot;</p>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置<p>工具类型</p><p>入参限制：目前仅支持 &quot;function&quot;</p>
                     * @param _type <p>工具类型</p><p>入参限制：目前仅支持 &quot;function&quot;</p>
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取<p>工具名称</p>
                     * @return Name <p>工具名称</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>工具名称</p>
                     * @param _name <p>工具名称</p>
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
                     * 获取<p>工具描述</p>
                     * @return Description <p>工具描述</p>
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>工具描述</p>
                     * @param _description <p>工具描述</p>
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
                     * 获取<p>工具入参定义</p>
                     * @return Parameters <p>工具入参定义</p>
                     * 
                     */
                    std::vector<RequestParam> GetParameters() const;

                    /**
                     * 设置<p>工具入参定义</p>
                     * @param _parameters <p>工具入参定义</p>
                     * 
                     */
                    void SetParameters(const std::vector<RequestParam>& _parameters);

                    /**
                     * 判断参数 Parameters 是否已赋值
                     * @return Parameters 是否已赋值
                     * 
                     */
                    bool ParametersHasBeenSet() const;

                private:

                    /**
                     * <p>工具类型</p><p>入参限制：目前仅支持 &quot;function&quot;</p>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * <p>工具名称</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>工具描述</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>工具入参定义</p>
                     */
                    std::vector<RequestParam> m_parameters;
                    bool m_parametersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_AGENTEXTERNALTOOLCONFIG_H_
