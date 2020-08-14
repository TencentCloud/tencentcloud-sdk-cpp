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
                     */
                    int64_t GetRedirectStatusCode() const;

                    /**
                     * 设置重定向状态码，301 | 302
                     * @param RedirectStatusCode 重定向状态码，301 | 302
                     */
                    void SetRedirectStatusCode(const int64_t& _redirectStatusCode);

                    /**
                     * 判断参数 RedirectStatusCode 是否已赋值
                     * @return RedirectStatusCode 是否已赋值
                     */
                    bool RedirectStatusCodeHasBeenSet() const;

                    /**
                     * 获取待匹配的Url模式，支持完全路径匹配和正则匹配，最大长度1024字符。
                     * @return Pattern 待匹配的Url模式，支持完全路径匹配和正则匹配，最大长度1024字符。
                     */
                    std::string GetPattern() const;

                    /**
                     * 设置待匹配的Url模式，支持完全路径匹配和正则匹配，最大长度1024字符。
                     * @param Pattern 待匹配的Url模式，支持完全路径匹配和正则匹配，最大长度1024字符。
                     */
                    void SetPattern(const std::string& _pattern);

                    /**
                     * 判断参数 Pattern 是否已赋值
                     * @return Pattern 是否已赋值
                     */
                    bool PatternHasBeenSet() const;

                    /**
                     * 获取目标URL，必须以“/”开头，最大长度1024字符。
                     * @return RedirectUrl 目标URL，必须以“/”开头，最大长度1024字符。
                     */
                    std::string GetRedirectUrl() const;

                    /**
                     * 设置目标URL，必须以“/”开头，最大长度1024字符。
                     * @param RedirectUrl 目标URL，必须以“/”开头，最大长度1024字符。
                     */
                    void SetRedirectUrl(const std::string& _redirectUrl);

                    /**
                     * 判断参数 RedirectUrl 是否已赋值
                     * @return RedirectUrl 是否已赋值
                     */
                    bool RedirectUrlHasBeenSet() const;

                private:

                    /**
                     * 重定向状态码，301 | 302
                     */
                    int64_t m_redirectStatusCode;
                    bool m_redirectStatusCodeHasBeenSet;

                    /**
                     * 待匹配的Url模式，支持完全路径匹配和正则匹配，最大长度1024字符。
                     */
                    std::string m_pattern;
                    bool m_patternHasBeenSet;

                    /**
                     * 目标URL，必须以“/”开头，最大长度1024字符。
                     */
                    std::string m_redirectUrl;
                    bool m_redirectUrlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDN_V20180606_MODEL_URLREDIRECTRULE_H_
