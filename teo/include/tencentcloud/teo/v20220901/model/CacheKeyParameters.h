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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_CACHEKEYPARAMETERS_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_CACHEKEYPARAMETERS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/CacheKeyQueryString.h>
#include <tencentcloud/teo/v20220901/model/CacheKeyHeader.h>
#include <tencentcloud/teo/v20220901/model/CacheKeyCookie.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * 自定义 Cache Key 配置参数。该配置参数的 FullURLCache 和 QueryString 采用组合表达，具体示例可以参考：
- 查询字符串全部保留。开启忽略大小写。
```
{
  "CacheKey": {
    "FullURLCache": "on",
    "QueryString": {
      "Switch": "off"
    },
    "IgnoreCase": "on"
  }
}
```
- 查询字符串全部忽略。开启忽略大小写。
```
{
  "CacheKey": {
    "FullURLCache": "off",
    "QueryString": {
      "Switch": "off"
    },
    "IgnoreCase": "on"
  }
}
```
- 查询字符串保留指定参数。关闭忽略大小写。
```
{
  "CacheKey": {
    "FullURLCache": "off",
    "QueryString": {
        "Switch": "on",
        "Action": "includeCustom",
        "Values": ["name1","name2","name3"]
    },
    "IgnoreCase": "off"
  }
}
```
- 查询字符串忽略指定参数。关闭忽略大小写。
```
{
  "CacheKey": {
    "FullURLCache": "off",
    "QueryString": {
        "Switch": "on",
        "Action": "excludeCustom",
        "Values": ["name1","name2","name3"]
    },
    "IgnoreCase": "off"
  }
}
```
                */
                class CacheKeyParameters : public AbstractModel
                {
                public:
                    CacheKeyParameters();
                    ~CacheKeyParameters() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取查询字符串全部保留开关，取值有：
<li>on：开启；</li>
<li>off：关闭。</li>注意：FullURLCache、IgnoreCase、Header、Scheme、Cookie 至少设置一个配置。此字段和 QueryString.Switch 必须同时设置，但不能同为 on。
                     * @return FullURLCache 查询字符串全部保留开关，取值有：
<li>on：开启；</li>
<li>off：关闭。</li>注意：FullURLCache、IgnoreCase、Header、Scheme、Cookie 至少设置一个配置。此字段和 QueryString.Switch 必须同时设置，但不能同为 on。
                     * 
                     */
                    std::string GetFullURLCache() const;

                    /**
                     * 设置查询字符串全部保留开关，取值有：
<li>on：开启；</li>
<li>off：关闭。</li>注意：FullURLCache、IgnoreCase、Header、Scheme、Cookie 至少设置一个配置。此字段和 QueryString.Switch 必须同时设置，但不能同为 on。
                     * @param _fullURLCache 查询字符串全部保留开关，取值有：
<li>on：开启；</li>
<li>off：关闭。</li>注意：FullURLCache、IgnoreCase、Header、Scheme、Cookie 至少设置一个配置。此字段和 QueryString.Switch 必须同时设置，但不能同为 on。
                     * 
                     */
                    void SetFullURLCache(const std::string& _fullURLCache);

                    /**
                     * 判断参数 FullURLCache 是否已赋值
                     * @return FullURLCache 是否已赋值
                     * 
                     */
                    bool FullURLCacheHasBeenSet() const;

                    /**
                     * 获取查询字符串保留配置参数。此字段和 FullURLCache 必须同时设置，但不能同为 on。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return QueryString 查询字符串保留配置参数。此字段和 FullURLCache 必须同时设置，但不能同为 on。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    CacheKeyQueryString GetQueryString() const;

                    /**
                     * 设置查询字符串保留配置参数。此字段和 FullURLCache 必须同时设置，但不能同为 on。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _queryString 查询字符串保留配置参数。此字段和 FullURLCache 必须同时设置，但不能同为 on。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetQueryString(const CacheKeyQueryString& _queryString);

                    /**
                     * 判断参数 QueryString 是否已赋值
                     * @return QueryString 是否已赋值
                     * 
                     */
                    bool QueryStringHasBeenSet() const;

                    /**
                     * 获取忽略大小写开关，取值有：
<li>on：开启；</li>
<li>off：关闭。</li>注意：FullURLCache、IgnoreCase、Header、Scheme、Cookie 至少设置一个配置。
                     * @return IgnoreCase 忽略大小写开关，取值有：
<li>on：开启；</li>
<li>off：关闭。</li>注意：FullURLCache、IgnoreCase、Header、Scheme、Cookie 至少设置一个配置。
                     * 
                     */
                    std::string GetIgnoreCase() const;

                    /**
                     * 设置忽略大小写开关，取值有：
<li>on：开启；</li>
<li>off：关闭。</li>注意：FullURLCache、IgnoreCase、Header、Scheme、Cookie 至少设置一个配置。
                     * @param _ignoreCase 忽略大小写开关，取值有：
<li>on：开启；</li>
<li>off：关闭。</li>注意：FullURLCache、IgnoreCase、Header、Scheme、Cookie 至少设置一个配置。
                     * 
                     */
                    void SetIgnoreCase(const std::string& _ignoreCase);

                    /**
                     * 判断参数 IgnoreCase 是否已赋值
                     * @return IgnoreCase 是否已赋值
                     * 
                     */
                    bool IgnoreCaseHasBeenSet() const;

                    /**
                     * 获取HTTP 请求头配置参数。FullURLCache、IgnoreCase、Header、Scheme、Cookie 至少设置一个配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Header HTTP 请求头配置参数。FullURLCache、IgnoreCase、Header、Scheme、Cookie 至少设置一个配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    CacheKeyHeader GetHeader() const;

                    /**
                     * 设置HTTP 请求头配置参数。FullURLCache、IgnoreCase、Header、Scheme、Cookie 至少设置一个配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _header HTTP 请求头配置参数。FullURLCache、IgnoreCase、Header、Scheme、Cookie 至少设置一个配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetHeader(const CacheKeyHeader& _header);

                    /**
                     * 判断参数 Header 是否已赋值
                     * @return Header 是否已赋值
                     * 
                     */
                    bool HeaderHasBeenSet() const;

                    /**
                     * 获取请求协议开关，取值有：
<li>on：开启；</li>
<li>off：关闭。</li>注意：FullURLCache、IgnoreCase、Header、Scheme、Cookie 至少设置一个配置。
                     * @return Scheme 请求协议开关，取值有：
<li>on：开启；</li>
<li>off：关闭。</li>注意：FullURLCache、IgnoreCase、Header、Scheme、Cookie 至少设置一个配置。
                     * 
                     */
                    std::string GetScheme() const;

                    /**
                     * 设置请求协议开关，取值有：
<li>on：开启；</li>
<li>off：关闭。</li>注意：FullURLCache、IgnoreCase、Header、Scheme、Cookie 至少设置一个配置。
                     * @param _scheme 请求协议开关，取值有：
<li>on：开启；</li>
<li>off：关闭。</li>注意：FullURLCache、IgnoreCase、Header、Scheme、Cookie 至少设置一个配置。
                     * 
                     */
                    void SetScheme(const std::string& _scheme);

                    /**
                     * 判断参数 Scheme 是否已赋值
                     * @return Scheme 是否已赋值
                     * 
                     */
                    bool SchemeHasBeenSet() const;

                    /**
                     * 获取Cookie 配置参数。FullURLCache、IgnoreCase、Header、Scheme、Cookie 至少设置一个配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Cookie Cookie 配置参数。FullURLCache、IgnoreCase、Header、Scheme、Cookie 至少设置一个配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    CacheKeyCookie GetCookie() const;

                    /**
                     * 设置Cookie 配置参数。FullURLCache、IgnoreCase、Header、Scheme、Cookie 至少设置一个配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _cookie Cookie 配置参数。FullURLCache、IgnoreCase、Header、Scheme、Cookie 至少设置一个配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCookie(const CacheKeyCookie& _cookie);

                    /**
                     * 判断参数 Cookie 是否已赋值
                     * @return Cookie 是否已赋值
                     * 
                     */
                    bool CookieHasBeenSet() const;

                private:

                    /**
                     * 查询字符串全部保留开关，取值有：
<li>on：开启；</li>
<li>off：关闭。</li>注意：FullURLCache、IgnoreCase、Header、Scheme、Cookie 至少设置一个配置。此字段和 QueryString.Switch 必须同时设置，但不能同为 on。
                     */
                    std::string m_fullURLCache;
                    bool m_fullURLCacheHasBeenSet;

                    /**
                     * 查询字符串保留配置参数。此字段和 FullURLCache 必须同时设置，但不能同为 on。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    CacheKeyQueryString m_queryString;
                    bool m_queryStringHasBeenSet;

                    /**
                     * 忽略大小写开关，取值有：
<li>on：开启；</li>
<li>off：关闭。</li>注意：FullURLCache、IgnoreCase、Header、Scheme、Cookie 至少设置一个配置。
                     */
                    std::string m_ignoreCase;
                    bool m_ignoreCaseHasBeenSet;

                    /**
                     * HTTP 请求头配置参数。FullURLCache、IgnoreCase、Header、Scheme、Cookie 至少设置一个配置。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    CacheKeyHeader m_header;
                    bool m_headerHasBeenSet;

                    /**
                     * 请求协议开关，取值有：
<li>on：开启；</li>
<li>off：关闭。</li>注意：FullURLCache、IgnoreCase、Header、Scheme、Cookie 至少设置一个配置。
                     */
                    std::string m_scheme;
                    bool m_schemeHasBeenSet;

                    /**
                     * Cookie 配置参数。FullURLCache、IgnoreCase、Header、Scheme、Cookie 至少设置一个配置。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    CacheKeyCookie m_cookie;
                    bool m_cookieHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_CACHEKEYPARAMETERS_H_
