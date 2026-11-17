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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_APIKEYAUTHCONFIG_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_APIKEYAUTHCONFIG_H_

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
                * ApiKey鉴权配置
                */
                class ApiKeyAuthConfig : public AbstractModel
                {
                public:
                    ApiKeyAuthConfig();
                    ~ApiKeyAuthConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>密钥位置 HEADER/QUERY</p><p>枚举值:<br>| uint | 描述 |<br>| --- | --- |<br>| 0 | Header鉴权 |<br>| 1 | Query鉴权 |</p>
                     * @return KeyLocation <p>密钥位置 HEADER/QUERY</p><p>枚举值:<br>| uint | 描述 |<br>| --- | --- |<br>| 0 | Header鉴权 |<br>| 1 | Query鉴权 |</p>
                     * 
                     */
                    int64_t GetKeyLocation() const;

                    /**
                     * 设置<p>密钥位置 HEADER/QUERY</p><p>枚举值:<br>| uint | 描述 |<br>| --- | --- |<br>| 0 | Header鉴权 |<br>| 1 | Query鉴权 |</p>
                     * @param _keyLocation <p>密钥位置 HEADER/QUERY</p><p>枚举值:<br>| uint | 描述 |<br>| --- | --- |<br>| 0 | Header鉴权 |<br>| 1 | Query鉴权 |</p>
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
                     * 获取<p>密钥参数名</p>
                     * @return KeyParamName <p>密钥参数名</p>
                     * 
                     */
                    std::string GetKeyParamName() const;

                    /**
                     * 设置<p>密钥参数名</p>
                     * @param _keyParamName <p>密钥参数名</p>
                     * 
                     */
                    void SetKeyParamName(const std::string& _keyParamName);

                    /**
                     * 判断参数 KeyParamName 是否已赋值
                     * @return KeyParamName 是否已赋值
                     * 
                     */
                    bool KeyParamNameHasBeenSet() const;

                    /**
                     * 获取<p>密钥参数值</p>
                     * @return KeyParamValue <p>密钥参数值</p>
                     * 
                     */
                    std::string GetKeyParamValue() const;

                    /**
                     * 设置<p>密钥参数值</p>
                     * @param _keyParamValue <p>密钥参数值</p>
                     * 
                     */
                    void SetKeyParamValue(const std::string& _keyParamValue);

                    /**
                     * 判断参数 KeyParamValue 是否已赋值
                     * @return KeyParamValue 是否已赋值
                     * 
                     */
                    bool KeyParamValueHasBeenSet() const;

                    /**
                     * 获取<p>密钥值用途，未指定按允许工具调用处理</p><p>枚举值：</p><ul><li>1： 允许用于工具调用</li><li>2： 仅用于连接测试和获取工具列表</li></ul>
                     * @return KeyValueUsage <p>密钥值用途，未指定按允许工具调用处理</p><p>枚举值：</p><ul><li>1： 允许用于工具调用</li><li>2： 仅用于连接测试和获取工具列表</li></ul>
                     * 
                     */
                    int64_t GetKeyValueUsage() const;

                    /**
                     * 设置<p>密钥值用途，未指定按允许工具调用处理</p><p>枚举值：</p><ul><li>1： 允许用于工具调用</li><li>2： 仅用于连接测试和获取工具列表</li></ul>
                     * @param _keyValueUsage <p>密钥值用途，未指定按允许工具调用处理</p><p>枚举值：</p><ul><li>1： 允许用于工具调用</li><li>2： 仅用于连接测试和获取工具列表</li></ul>
                     * 
                     */
                    void SetKeyValueUsage(const int64_t& _keyValueUsage);

                    /**
                     * 判断参数 KeyValueUsage 是否已赋值
                     * @return KeyValueUsage 是否已赋值
                     * 
                     */
                    bool KeyValueUsageHasBeenSet() const;

                private:

                    /**
                     * <p>密钥位置 HEADER/QUERY</p><p>枚举值:<br>| uint | 描述 |<br>| --- | --- |<br>| 0 | Header鉴权 |<br>| 1 | Query鉴权 |</p>
                     */
                    int64_t m_keyLocation;
                    bool m_keyLocationHasBeenSet;

                    /**
                     * <p>密钥参数名</p>
                     */
                    std::string m_keyParamName;
                    bool m_keyParamNameHasBeenSet;

                    /**
                     * <p>密钥参数值</p>
                     */
                    std::string m_keyParamValue;
                    bool m_keyParamValueHasBeenSet;

                    /**
                     * <p>密钥值用途，未指定按允许工具调用处理</p><p>枚举值：</p><ul><li>1： 允许用于工具调用</li><li>2： 仅用于连接测试和获取工具列表</li></ul>
                     */
                    int64_t m_keyValueUsage;
                    bool m_keyValueUsageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_APIKEYAUTHCONFIG_H_
