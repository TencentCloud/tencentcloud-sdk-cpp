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

#ifndef TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_MCPSERVERTEMPLATEENV_H_
#define TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_MCPSERVERTEMPLATEENV_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Lighthouse
    {
        namespace V20200324
        {
            namespace Model
            {
                /**
                * MCP Server模板环境变量
                */
                class McpServerTemplateEnv : public AbstractModel
                {
                public:
                    McpServerTemplateEnv();
                    ~McpServerTemplateEnv() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取MCP Server模板的环境变量键
                     * @return Key MCP Server模板的环境变量键
                     * 
                     */
                    std::string GetKey() const;

                    /**
                     * 设置MCP Server模板的环境变量键
                     * @param _key MCP Server模板的环境变量键
                     * 
                     */
                    void SetKey(const std::string& _key);

                    /**
                     * 判断参数 Key 是否已赋值
                     * @return Key 是否已赋值
                     * 
                     */
                    bool KeyHasBeenSet() const;

                    /**
                     * 获取MCP Server模板的环境变量值
                     * @return Value MCP Server模板的环境变量值
                     * 
                     */
                    std::string GetValue() const;

                    /**
                     * 设置MCP Server模板的环境变量值
                     * @param _value MCP Server模板的环境变量值
                     * 
                     */
                    void SetValue(const std::string& _value);

                    /**
                     * 判断参数 Value 是否已赋值
                     * @return Value 是否已赋值
                     * 
                     */
                    bool ValueHasBeenSet() const;

                private:

                    /**
                     * MCP Server模板的环境变量键
                     */
                    std::string m_key;
                    bool m_keyHasBeenSet;

                    /**
                     * MCP Server模板的环境变量值
                     */
                    std::string m_value;
                    bool m_valueHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_MCPSERVERTEMPLATEENV_H_
