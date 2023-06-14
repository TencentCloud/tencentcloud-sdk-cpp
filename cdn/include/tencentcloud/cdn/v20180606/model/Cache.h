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

#ifndef TENCENTCLOUD_CDN_V20180606_MODEL_CACHE_H_
#define TENCENTCLOUD_CDN_V20180606_MODEL_CACHE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdn/v20180606/model/SimpleCache.h>
#include <tencentcloud/cdn/v20180606/model/AdvancedCache.h>
#include <tencentcloud/cdn/v20180606/model/RuleCache.h>


namespace TencentCloud
{
    namespace Cdn
    {
        namespace V20180606
        {
            namespace Model
            {
                /**
                * 节点缓存过期时间配置，分为以下两种：
+ 基础版缓存过期规则配置
+ 高级版缓存过期规则配置
                */
                class Cache : public AbstractModel
                {
                public:
                    Cache();
                    ~Cache() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取基础缓存过期时间配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SimpleCache 基础缓存过期时间配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    SimpleCache GetSimpleCache() const;

                    /**
                     * 设置基础缓存过期时间配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _simpleCache 基础缓存过期时间配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSimpleCache(const SimpleCache& _simpleCache);

                    /**
                     * 判断参数 SimpleCache 是否已赋值
                     * @return SimpleCache 是否已赋值
                     * 
                     */
                    bool SimpleCacheHasBeenSet() const;

                    /**
                     * 获取高级缓存过期时间配置（已弃用）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AdvancedCache 高级缓存过期时间配置（已弃用）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    AdvancedCache GetAdvancedCache() const;

                    /**
                     * 设置高级缓存过期时间配置（已弃用）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _advancedCache 高级缓存过期时间配置（已弃用）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAdvancedCache(const AdvancedCache& _advancedCache);

                    /**
                     * 判断参数 AdvancedCache 是否已赋值
                     * @return AdvancedCache 是否已赋值
                     * 
                     */
                    bool AdvancedCacheHasBeenSet() const;

                    /**
                     * 获取高级路径缓存配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RuleCache 高级路径缓存配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<RuleCache> GetRuleCache() const;

                    /**
                     * 设置高级路径缓存配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _ruleCache 高级路径缓存配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRuleCache(const std::vector<RuleCache>& _ruleCache);

                    /**
                     * 判断参数 RuleCache 是否已赋值
                     * @return RuleCache 是否已赋值
                     * 
                     */
                    bool RuleCacheHasBeenSet() const;

                private:

                    /**
                     * 基础缓存过期时间配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    SimpleCache m_simpleCache;
                    bool m_simpleCacheHasBeenSet;

                    /**
                     * 高级缓存过期时间配置（已弃用）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    AdvancedCache m_advancedCache;
                    bool m_advancedCacheHasBeenSet;

                    /**
                     * 高级路径缓存配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<RuleCache> m_ruleCache;
                    bool m_ruleCacheHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDN_V20180606_MODEL_CACHE_H_
