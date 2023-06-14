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

#ifndef TENCENTCLOUD_CDN_V20180606_MODEL_SIMPLECACHE_H_
#define TENCENTCLOUD_CDN_V20180606_MODEL_SIMPLECACHE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdn/v20180606/model/SimpleCacheRule.h>
#include <tencentcloud/cdn/v20180606/model/Revalidate.h>


namespace TencentCloud
{
    namespace Cdn
    {
        namespace V20180606
        {
            namespace Model
            {
                /**
                * 缓存配置基础版本
默认情况下所有文件缓存过期时间为 30 天
默认情况下静态加速类型的域名 .php;.jsp;.asp;.aspx 不缓存
注意：该版本不支持设置源站未返回 max-age 情况下的缓存过期规则设置
                */
                class SimpleCache : public AbstractModel
                {
                public:
                    SimpleCache();
                    ~SimpleCache() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取缓存过期时间规则
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CacheRules 缓存过期时间规则
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<SimpleCacheRule> GetCacheRules() const;

                    /**
                     * 设置缓存过期时间规则
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _cacheRules 缓存过期时间规则
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCacheRules(const std::vector<SimpleCacheRule>& _cacheRules);

                    /**
                     * 判断参数 CacheRules 是否已赋值
                     * @return CacheRules 是否已赋值
                     * 
                     */
                    bool CacheRulesHasBeenSet() const;

                    /**
                     * 获取遵循源站 Cache-Control: max-age 配置
on：开启
off：关闭
开启后，未能匹配 CacheRules 规则的资源将根据源站返回的 max-age 值进行节点缓存；匹配了 CacheRules 规则的资源将按照 CacheRules 中设置的缓存过期时间在节点进行缓存
与 CompareMaxAge 冲突，不能同时开启
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FollowOrigin 遵循源站 Cache-Control: max-age 配置
on：开启
off：关闭
开启后，未能匹配 CacheRules 规则的资源将根据源站返回的 max-age 值进行节点缓存；匹配了 CacheRules 规则的资源将按照 CacheRules 中设置的缓存过期时间在节点进行缓存
与 CompareMaxAge 冲突，不能同时开启
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetFollowOrigin() const;

                    /**
                     * 设置遵循源站 Cache-Control: max-age 配置
on：开启
off：关闭
开启后，未能匹配 CacheRules 规则的资源将根据源站返回的 max-age 值进行节点缓存；匹配了 CacheRules 规则的资源将按照 CacheRules 中设置的缓存过期时间在节点进行缓存
与 CompareMaxAge 冲突，不能同时开启
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _followOrigin 遵循源站 Cache-Control: max-age 配置
on：开启
off：关闭
开启后，未能匹配 CacheRules 规则的资源将根据源站返回的 max-age 值进行节点缓存；匹配了 CacheRules 规则的资源将按照 CacheRules 中设置的缓存过期时间在节点进行缓存
与 CompareMaxAge 冲突，不能同时开启
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFollowOrigin(const std::string& _followOrigin);

                    /**
                     * 判断参数 FollowOrigin 是否已赋值
                     * @return FollowOrigin 是否已赋值
                     * 
                     */
                    bool FollowOriginHasBeenSet() const;

                    /**
                     * 获取强制缓存
on：开启
off：关闭
默认为关闭状态，开启后，源站返回的 no-store、no-cache 资源，也将按照 CacheRules 规则进行缓存
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IgnoreCacheControl 强制缓存
on：开启
off：关闭
默认为关闭状态，开启后，源站返回的 no-store、no-cache 资源，也将按照 CacheRules 规则进行缓存
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetIgnoreCacheControl() const;

                    /**
                     * 设置强制缓存
on：开启
off：关闭
默认为关闭状态，开启后，源站返回的 no-store、no-cache 资源，也将按照 CacheRules 规则进行缓存
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _ignoreCacheControl 强制缓存
on：开启
off：关闭
默认为关闭状态，开启后，源站返回的 no-store、no-cache 资源，也将按照 CacheRules 规则进行缓存
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIgnoreCacheControl(const std::string& _ignoreCacheControl);

                    /**
                     * 判断参数 IgnoreCacheControl 是否已赋值
                     * @return IgnoreCacheControl 是否已赋值
                     * 
                     */
                    bool IgnoreCacheControlHasBeenSet() const;

                    /**
                     * 获取忽略源站的Set-Cookie头部
on：开启
off：关闭
默认为关闭状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IgnoreSetCookie 忽略源站的Set-Cookie头部
on：开启
off：关闭
默认为关闭状态
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetIgnoreSetCookie() const;

                    /**
                     * 设置忽略源站的Set-Cookie头部
on：开启
off：关闭
默认为关闭状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _ignoreSetCookie 忽略源站的Set-Cookie头部
on：开启
off：关闭
默认为关闭状态
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIgnoreSetCookie(const std::string& _ignoreSetCookie);

                    /**
                     * 判断参数 IgnoreSetCookie 是否已赋值
                     * @return IgnoreSetCookie 是否已赋值
                     * 
                     */
                    bool IgnoreSetCookieHasBeenSet() const;

                    /**
                     * 获取高级缓存过期配置，开启时会对比源站返回的 max-age 值与 CacheRules 中设置的缓存过期时间，取最小值在节点进行缓存
on：开启
off：关闭
默认为关闭状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CompareMaxAge 高级缓存过期配置，开启时会对比源站返回的 max-age 值与 CacheRules 中设置的缓存过期时间，取最小值在节点进行缓存
on：开启
off：关闭
默认为关闭状态
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCompareMaxAge() const;

                    /**
                     * 设置高级缓存过期配置，开启时会对比源站返回的 max-age 值与 CacheRules 中设置的缓存过期时间，取最小值在节点进行缓存
on：开启
off：关闭
默认为关闭状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _compareMaxAge 高级缓存过期配置，开启时会对比源站返回的 max-age 值与 CacheRules 中设置的缓存过期时间，取最小值在节点进行缓存
on：开启
off：关闭
默认为关闭状态
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCompareMaxAge(const std::string& _compareMaxAge);

                    /**
                     * 判断参数 CompareMaxAge 是否已赋值
                     * @return CompareMaxAge 是否已赋值
                     * 
                     */
                    bool CompareMaxAgeHasBeenSet() const;

                    /**
                     * 获取总是回源站校验
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Revalidate 总是回源站校验
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    Revalidate GetRevalidate() const;

                    /**
                     * 设置总是回源站校验
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _revalidate 总是回源站校验
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRevalidate(const Revalidate& _revalidate);

                    /**
                     * 判断参数 Revalidate 是否已赋值
                     * @return Revalidate 是否已赋值
                     * 
                     */
                    bool RevalidateHasBeenSet() const;

                private:

                    /**
                     * 缓存过期时间规则
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<SimpleCacheRule> m_cacheRules;
                    bool m_cacheRulesHasBeenSet;

                    /**
                     * 遵循源站 Cache-Control: max-age 配置
on：开启
off：关闭
开启后，未能匹配 CacheRules 规则的资源将根据源站返回的 max-age 值进行节点缓存；匹配了 CacheRules 规则的资源将按照 CacheRules 中设置的缓存过期时间在节点进行缓存
与 CompareMaxAge 冲突，不能同时开启
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_followOrigin;
                    bool m_followOriginHasBeenSet;

                    /**
                     * 强制缓存
on：开启
off：关闭
默认为关闭状态，开启后，源站返回的 no-store、no-cache 资源，也将按照 CacheRules 规则进行缓存
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_ignoreCacheControl;
                    bool m_ignoreCacheControlHasBeenSet;

                    /**
                     * 忽略源站的Set-Cookie头部
on：开启
off：关闭
默认为关闭状态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_ignoreSetCookie;
                    bool m_ignoreSetCookieHasBeenSet;

                    /**
                     * 高级缓存过期配置，开启时会对比源站返回的 max-age 值与 CacheRules 中设置的缓存过期时间，取最小值在节点进行缓存
on：开启
off：关闭
默认为关闭状态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_compareMaxAge;
                    bool m_compareMaxAgeHasBeenSet;

                    /**
                     * 总是回源站校验
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    Revalidate m_revalidate;
                    bool m_revalidateHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDN_V20180606_MODEL_SIMPLECACHE_H_
