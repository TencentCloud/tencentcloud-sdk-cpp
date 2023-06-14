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

#ifndef TENCENTCLOUD_CDN_V20180606_MODEL_CACHEKEY_H_
#define TENCENTCLOUD_CDN_V20180606_MODEL_CACHEKEY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdn/v20180606/model/QueryStringKey.h>
#include <tencentcloud/cdn/v20180606/model/CookieKey.h>
#include <tencentcloud/cdn/v20180606/model/HeaderKey.h>
#include <tencentcloud/cdn/v20180606/model/CacheTagKey.h>
#include <tencentcloud/cdn/v20180606/model/SchemeKey.h>
#include <tencentcloud/cdn/v20180606/model/KeyRule.h>


namespace TencentCloud
{
    namespace Cdn
    {
        namespace V20180606
        {
            namespace Model
            {
                /**
                * 缓存键配置（忽略参数配置）
                */
                class CacheKey : public AbstractModel
                {
                public:
                    CacheKey();
                    ~CacheKey() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取是否开启全路径缓存
on：开启全路径缓存（即关闭参数忽略）
off：关闭全路径缓存（即开启参数忽略）
                     * @return FullUrlCache 是否开启全路径缓存
on：开启全路径缓存（即关闭参数忽略）
off：关闭全路径缓存（即开启参数忽略）
                     * 
                     */
                    std::string GetFullUrlCache() const;

                    /**
                     * 设置是否开启全路径缓存
on：开启全路径缓存（即关闭参数忽略）
off：关闭全路径缓存（即开启参数忽略）
                     * @param _fullUrlCache 是否开启全路径缓存
on：开启全路径缓存（即关闭参数忽略）
off：关闭全路径缓存（即开启参数忽略）
                     * 
                     */
                    void SetFullUrlCache(const std::string& _fullUrlCache);

                    /**
                     * 判断参数 FullUrlCache 是否已赋值
                     * @return FullUrlCache 是否已赋值
                     * 
                     */
                    bool FullUrlCacheHasBeenSet() const;

                    /**
                     * 获取是否忽略大小写缓存
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IgnoreCase 是否忽略大小写缓存
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetIgnoreCase() const;

                    /**
                     * 设置是否忽略大小写缓存
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _ignoreCase 是否忽略大小写缓存
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取CacheKey中包含请求参数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return QueryString CacheKey中包含请求参数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    QueryStringKey GetQueryString() const;

                    /**
                     * 设置CacheKey中包含请求参数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _queryString CacheKey中包含请求参数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetQueryString(const QueryStringKey& _queryString);

                    /**
                     * 判断参数 QueryString 是否已赋值
                     * @return QueryString 是否已赋值
                     * 
                     */
                    bool QueryStringHasBeenSet() const;

                    /**
                     * 获取CacheKey中包含Cookie
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Cookie CacheKey中包含Cookie
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    CookieKey GetCookie() const;

                    /**
                     * 设置CacheKey中包含Cookie
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _cookie CacheKey中包含Cookie
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCookie(const CookieKey& _cookie);

                    /**
                     * 判断参数 Cookie 是否已赋值
                     * @return Cookie 是否已赋值
                     * 
                     */
                    bool CookieHasBeenSet() const;

                    /**
                     * 获取CacheKey中包含请求头部
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Header CacheKey中包含请求头部
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    HeaderKey GetHeader() const;

                    /**
                     * 设置CacheKey中包含请求头部
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _header CacheKey中包含请求头部
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetHeader(const HeaderKey& _header);

                    /**
                     * 判断参数 Header 是否已赋值
                     * @return Header 是否已赋值
                     * 
                     */
                    bool HeaderHasBeenSet() const;

                    /**
                     * 获取CacheKey中包含自定义字符串
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CacheTag CacheKey中包含自定义字符串
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    CacheTagKey GetCacheTag() const;

                    /**
                     * 设置CacheKey中包含自定义字符串
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _cacheTag CacheKey中包含自定义字符串
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCacheTag(const CacheTagKey& _cacheTag);

                    /**
                     * 判断参数 CacheTag 是否已赋值
                     * @return CacheTag 是否已赋值
                     * 
                     */
                    bool CacheTagHasBeenSet() const;

                    /**
                     * 获取CacheKey中包含请求协议
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Scheme CacheKey中包含请求协议
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    SchemeKey GetScheme() const;

                    /**
                     * 设置CacheKey中包含请求协议
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _scheme CacheKey中包含请求协议
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetScheme(const SchemeKey& _scheme);

                    /**
                     * 判断参数 Scheme 是否已赋值
                     * @return Scheme 是否已赋值
                     * 
                     */
                    bool SchemeHasBeenSet() const;

                    /**
                     * 获取分路径缓存键配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @return KeyRules 分路径缓存键配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<KeyRule> GetKeyRules() const;

                    /**
                     * 设置分路径缓存键配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _keyRules 分路径缓存键配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetKeyRules(const std::vector<KeyRule>& _keyRules);

                    /**
                     * 判断参数 KeyRules 是否已赋值
                     * @return KeyRules 是否已赋值
                     * 
                     */
                    bool KeyRulesHasBeenSet() const;

                private:

                    /**
                     * 是否开启全路径缓存
on：开启全路径缓存（即关闭参数忽略）
off：关闭全路径缓存（即开启参数忽略）
                     */
                    std::string m_fullUrlCache;
                    bool m_fullUrlCacheHasBeenSet;

                    /**
                     * 是否忽略大小写缓存
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_ignoreCase;
                    bool m_ignoreCaseHasBeenSet;

                    /**
                     * CacheKey中包含请求参数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    QueryStringKey m_queryString;
                    bool m_queryStringHasBeenSet;

                    /**
                     * CacheKey中包含Cookie
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    CookieKey m_cookie;
                    bool m_cookieHasBeenSet;

                    /**
                     * CacheKey中包含请求头部
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    HeaderKey m_header;
                    bool m_headerHasBeenSet;

                    /**
                     * CacheKey中包含自定义字符串
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    CacheTagKey m_cacheTag;
                    bool m_cacheTagHasBeenSet;

                    /**
                     * CacheKey中包含请求协议
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    SchemeKey m_scheme;
                    bool m_schemeHasBeenSet;

                    /**
                     * 分路径缓存键配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<KeyRule> m_keyRules;
                    bool m_keyRulesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDN_V20180606_MODEL_CACHEKEY_H_
