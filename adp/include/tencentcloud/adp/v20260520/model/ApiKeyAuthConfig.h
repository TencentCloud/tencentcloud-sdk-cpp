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
                     * 获取密钥位置 HEADER/QUERY

枚举值:
| uint | 描述 |
| --- | --- |
| 0 | Header鉴权 |
| 1 | Query鉴权 |
                     * @return KeyLocation 密钥位置 HEADER/QUERY

枚举值:
| uint | 描述 |
| --- | --- |
| 0 | Header鉴权 |
| 1 | Query鉴权 |
                     * 
                     */
                    int64_t GetKeyLocation() const;

                    /**
                     * 设置密钥位置 HEADER/QUERY

枚举值:
| uint | 描述 |
| --- | --- |
| 0 | Header鉴权 |
| 1 | Query鉴权 |
                     * @param _keyLocation 密钥位置 HEADER/QUERY

枚举值:
| uint | 描述 |
| --- | --- |
| 0 | Header鉴权 |
| 1 | Query鉴权 |
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
                     * 获取密钥参数名
                     * @return KeyParamName 密钥参数名
                     * 
                     */
                    std::string GetKeyParamName() const;

                    /**
                     * 设置密钥参数名
                     * @param _keyParamName 密钥参数名
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
                     * 获取密钥参数值
                     * @return KeyParamValue 密钥参数值
                     * 
                     */
                    std::string GetKeyParamValue() const;

                    /**
                     * 设置密钥参数值
                     * @param _keyParamValue 密钥参数值
                     * 
                     */
                    void SetKeyParamValue(const std::string& _keyParamValue);

                    /**
                     * 判断参数 KeyParamValue 是否已赋值
                     * @return KeyParamValue 是否已赋值
                     * 
                     */
                    bool KeyParamValueHasBeenSet() const;

                private:

                    /**
                     * 密钥位置 HEADER/QUERY

枚举值:
| uint | 描述 |
| --- | --- |
| 0 | Header鉴权 |
| 1 | Query鉴权 |
                     */
                    int64_t m_keyLocation;
                    bool m_keyLocationHasBeenSet;

                    /**
                     * 密钥参数名
                     */
                    std::string m_keyParamName;
                    bool m_keyParamNameHasBeenSet;

                    /**
                     * 密钥参数值
                     */
                    std::string m_keyParamValue;
                    bool m_keyParamValueHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_APIKEYAUTHCONFIG_H_
