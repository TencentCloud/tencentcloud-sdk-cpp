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

#ifndef TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_MCPSERVERENV_H_
#define TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_MCPSERVERENV_H_

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
                * MCP Server环境变量
                */
                class McpServerEnv : public AbstractModel
                {
                public:
                    McpServerEnv();
                    ~McpServerEnv() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取MCP Server的环境变量键。最大长度：128
                     * @return Key MCP Server的环境变量键。最大长度：128
                     * 
                     */
                    std::string GetKey() const;

                    /**
                     * 设置MCP Server的环境变量键。最大长度：128
                     * @param _key MCP Server的环境变量键。最大长度：128
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
                     * 获取MCP Server的环境变量值。最大长度：1024。该字段可能存储密钥，出参时将固定返回“**********”，避免明文泄露。
                     * @return Value MCP Server的环境变量值。最大长度：1024。该字段可能存储密钥，出参时将固定返回“**********”，避免明文泄露。
                     * 
                     */
                    std::string GetValue() const;

                    /**
                     * 设置MCP Server的环境变量值。最大长度：1024。该字段可能存储密钥，出参时将固定返回“**********”，避免明文泄露。
                     * @param _value MCP Server的环境变量值。最大长度：1024。该字段可能存储密钥，出参时将固定返回“**********”，避免明文泄露。
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
                     * MCP Server的环境变量键。最大长度：128
                     */
                    std::string m_key;
                    bool m_keyHasBeenSet;

                    /**
                     * MCP Server的环境变量值。最大长度：1024。该字段可能存储密钥，出参时将固定返回“**********”，避免明文泄露。
                     */
                    std::string m_value;
                    bool m_valueHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_MCPSERVERENV_H_
