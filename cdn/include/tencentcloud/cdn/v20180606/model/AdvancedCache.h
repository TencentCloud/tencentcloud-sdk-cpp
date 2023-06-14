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

#ifndef TENCENTCLOUD_CDN_V20180606_MODEL_ADVANCEDCACHE_H_
#define TENCENTCLOUD_CDN_V20180606_MODEL_ADVANCEDCACHE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdn/v20180606/model/AdvanceCacheRule.h>


namespace TencentCloud
{
    namespace Cdn
    {
        namespace V20180606
        {
            namespace Model
            {
                /**
                * 缓存过期配置高级版，注意：此字段已经弃用，请使用RuleCache
                */
                class AdvancedCache : public AbstractModel
                {
                public:
                    AdvancedCache();
                    ~AdvancedCache() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取缓存过期规则
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CacheRules 缓存过期规则
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<AdvanceCacheRule> GetCacheRules() const;

                    /**
                     * 设置缓存过期规则
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _cacheRules 缓存过期规则
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCacheRules(const std::vector<AdvanceCacheRule>& _cacheRules);

                    /**
                     * 判断参数 CacheRules 是否已赋值
                     * @return CacheRules 是否已赋值
                     * 
                     */
                    bool CacheRulesHasBeenSet() const;

                    /**
                     * 获取强制缓存配置
on：开启
off：关闭
开启时，源站返回 no-cache、no-store 头部时，仍按照缓存过期规则进行节点缓存
默认为关闭状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IgnoreCacheControl 强制缓存配置
on：开启
off：关闭
开启时，源站返回 no-cache、no-store 头部时，仍按照缓存过期规则进行节点缓存
默认为关闭状态
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetIgnoreCacheControl() const;

                    /**
                     * 设置强制缓存配置
on：开启
off：关闭
开启时，源站返回 no-cache、no-store 头部时，仍按照缓存过期规则进行节点缓存
默认为关闭状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _ignoreCacheControl 强制缓存配置
on：开启
off：关闭
开启时，源站返回 no-cache、no-store 头部时，仍按照缓存过期规则进行节点缓存
默认为关闭状态
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
                     * 获取当源站返回Set-Cookie头部时，节点是否缓存该头部及body
on：开启，不缓存该头部及body
off：关闭，遵循用户自定义的节点缓存规则
默认为关闭状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IgnoreSetCookie 当源站返回Set-Cookie头部时，节点是否缓存该头部及body
on：开启，不缓存该头部及body
off：关闭，遵循用户自定义的节点缓存规则
默认为关闭状态
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetIgnoreSetCookie() const;

                    /**
                     * 设置当源站返回Set-Cookie头部时，节点是否缓存该头部及body
on：开启，不缓存该头部及body
off：关闭，遵循用户自定义的节点缓存规则
默认为关闭状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _ignoreSetCookie 当源站返回Set-Cookie头部时，节点是否缓存该头部及body
on：开启，不缓存该头部及body
off：关闭，遵循用户自定义的节点缓存规则
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

                private:

                    /**
                     * 缓存过期规则
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<AdvanceCacheRule> m_cacheRules;
                    bool m_cacheRulesHasBeenSet;

                    /**
                     * 强制缓存配置
on：开启
off：关闭
开启时，源站返回 no-cache、no-store 头部时，仍按照缓存过期规则进行节点缓存
默认为关闭状态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_ignoreCacheControl;
                    bool m_ignoreCacheControlHasBeenSet;

                    /**
                     * 当源站返回Set-Cookie头部时，节点是否缓存该头部及body
on：开启，不缓存该头部及body
off：关闭，遵循用户自定义的节点缓存规则
默认为关闭状态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_ignoreSetCookie;
                    bool m_ignoreSetCookieHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDN_V20180606_MODEL_ADVANCEDCACHE_H_
