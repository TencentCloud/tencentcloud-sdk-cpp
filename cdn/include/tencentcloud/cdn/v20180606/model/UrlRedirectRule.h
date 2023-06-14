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

#ifndef TENCENTCLOUD_CDN_V20180606_MODEL_URLREDIRECTRULE_H_
#define TENCENTCLOUD_CDN_V20180606_MODEL_URLREDIRECTRULE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdn
    {
        namespace V20180606
        {
            namespace Model
            {
                /**
                * Url重定向规则配置
                */
                class UrlRedirectRule : public AbstractModel
                {
                public:
                    UrlRedirectRule();
                    ~UrlRedirectRule() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取重定向状态码，301 | 302
                     * @return RedirectStatusCode 重定向状态码，301 | 302
                     * 
                     */
                    int64_t GetRedirectStatusCode() const;

                    /**
                     * 设置重定向状态码，301 | 302
                     * @param _redirectStatusCode 重定向状态码，301 | 302
                     * 
                     */
                    void SetRedirectStatusCode(const int64_t& _redirectStatusCode);

                    /**
                     * 判断参数 RedirectStatusCode 是否已赋值
                     * @return RedirectStatusCode 是否已赋值
                     * 
                     */
                    bool RedirectStatusCodeHasBeenSet() const;

                    /**
                     * 获取待匹配的Url，仅支持Url路径，不支持参数。默认完全匹配，支持通配符 *，最多支持5个通配符，最大长度1024字符。
                     * @return Pattern 待匹配的Url，仅支持Url路径，不支持参数。默认完全匹配，支持通配符 *，最多支持5个通配符，最大长度1024字符。
                     * 
                     */
                    std::string GetPattern() const;

                    /**
                     * 设置待匹配的Url，仅支持Url路径，不支持参数。默认完全匹配，支持通配符 *，最多支持5个通配符，最大长度1024字符。
                     * @param _pattern 待匹配的Url，仅支持Url路径，不支持参数。默认完全匹配，支持通配符 *，最多支持5个通配符，最大长度1024字符。
                     * 
                     */
                    void SetPattern(const std::string& _pattern);

                    /**
                     * 判断参数 Pattern 是否已赋值
                     * @return Pattern 是否已赋值
                     * 
                     */
                    bool PatternHasBeenSet() const;

                    /**
                     * 获取目标URL，必须以“/”开头，不包含参数部分。最大长度1024字符。可使用$1, $2, $3, $4, $5分别捕获匹配路径中的通配符号，最多支持10个捕获值。
                     * @return RedirectUrl 目标URL，必须以“/”开头，不包含参数部分。最大长度1024字符。可使用$1, $2, $3, $4, $5分别捕获匹配路径中的通配符号，最多支持10个捕获值。
                     * 
                     */
                    std::string GetRedirectUrl() const;

                    /**
                     * 设置目标URL，必须以“/”开头，不包含参数部分。最大长度1024字符。可使用$1, $2, $3, $4, $5分别捕获匹配路径中的通配符号，最多支持10个捕获值。
                     * @param _redirectUrl 目标URL，必须以“/”开头，不包含参数部分。最大长度1024字符。可使用$1, $2, $3, $4, $5分别捕获匹配路径中的通配符号，最多支持10个捕获值。
                     * 
                     */
                    void SetRedirectUrl(const std::string& _redirectUrl);

                    /**
                     * 判断参数 RedirectUrl 是否已赋值
                     * @return RedirectUrl 是否已赋值
                     * 
                     */
                    bool RedirectUrlHasBeenSet() const;

                    /**
                     * 获取目标host，必须以http://或https://开头，并填写标准格式域名，如果不填写，默认为http:// + 当前域名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RedirectHost 目标host，必须以http://或https://开头，并填写标准格式域名，如果不填写，默认为http:// + 当前域名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRedirectHost() const;

                    /**
                     * 设置目标host，必须以http://或https://开头，并填写标准格式域名，如果不填写，默认为http:// + 当前域名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _redirectHost 目标host，必须以http://或https://开头，并填写标准格式域名，如果不填写，默认为http:// + 当前域名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRedirectHost(const std::string& _redirectHost);

                    /**
                     * 判断参数 RedirectHost 是否已赋值
                     * @return RedirectHost 是否已赋值
                     * 
                     */
                    bool RedirectHostHasBeenSet() const;

                    /**
                     * 获取指定是全路径配置还是任意匹配
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FullMatch 指定是全路径配置还是任意匹配
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetFullMatch() const;

                    /**
                     * 设置指定是全路径配置还是任意匹配
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _fullMatch 指定是全路径配置还是任意匹配
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFullMatch(const bool& _fullMatch);

                    /**
                     * 判断参数 FullMatch 是否已赋值
                     * @return FullMatch 是否已赋值
                     * 
                     */
                    bool FullMatchHasBeenSet() const;

                private:

                    /**
                     * 重定向状态码，301 | 302
                     */
                    int64_t m_redirectStatusCode;
                    bool m_redirectStatusCodeHasBeenSet;

                    /**
                     * 待匹配的Url，仅支持Url路径，不支持参数。默认完全匹配，支持通配符 *，最多支持5个通配符，最大长度1024字符。
                     */
                    std::string m_pattern;
                    bool m_patternHasBeenSet;

                    /**
                     * 目标URL，必须以“/”开头，不包含参数部分。最大长度1024字符。可使用$1, $2, $3, $4, $5分别捕获匹配路径中的通配符号，最多支持10个捕获值。
                     */
                    std::string m_redirectUrl;
                    bool m_redirectUrlHasBeenSet;

                    /**
                     * 目标host，必须以http://或https://开头，并填写标准格式域名，如果不填写，默认为http:// + 当前域名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_redirectHost;
                    bool m_redirectHostHasBeenSet;

                    /**
                     * 指定是全路径配置还是任意匹配
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_fullMatch;
                    bool m_fullMatchHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDN_V20180606_MODEL_URLREDIRECTRULE_H_
