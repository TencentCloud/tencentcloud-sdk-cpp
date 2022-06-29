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

#ifndef TENCENTCLOUD_TEO_V20220106_MODEL_CACHECONFIG_H_
#define TENCENTCLOUD_TEO_V20220106_MODEL_CACHECONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220106/model/CacheConfigCache.h>
#include <tencentcloud/teo/v20220106/model/CacheConfigNoCache.h>
#include <tencentcloud/teo/v20220106/model/CacheConfigFollowOrigin.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220106
        {
            namespace Model
            {
                /**
                * 缓存规则配置。
                */
                class CacheConfig : public AbstractModel
                {
                public:
                    CacheConfig();
                    ~CacheConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取缓存配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Cache 缓存配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    CacheConfigCache GetCache() const;

                    /**
                     * 设置缓存配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Cache 缓存配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetCache(const CacheConfigCache& _cache);

                    /**
                     * 判断参数 Cache 是否已赋值
                     * @return Cache 是否已赋值
                     */
                    bool CacheHasBeenSet() const;

                    /**
                     * 获取不缓存配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NoCache 不缓存配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    CacheConfigNoCache GetNoCache() const;

                    /**
                     * 设置不缓存配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @param NoCache 不缓存配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetNoCache(const CacheConfigNoCache& _noCache);

                    /**
                     * 判断参数 NoCache 是否已赋值
                     * @return NoCache 是否已赋值
                     */
                    bool NoCacheHasBeenSet() const;

                    /**
                     * 获取遵循源站配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FollowOrigin 遵循源站配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    CacheConfigFollowOrigin GetFollowOrigin() const;

                    /**
                     * 设置遵循源站配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @param FollowOrigin 遵循源站配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetFollowOrigin(const CacheConfigFollowOrigin& _followOrigin);

                    /**
                     * 判断参数 FollowOrigin 是否已赋值
                     * @return FollowOrigin 是否已赋值
                     */
                    bool FollowOriginHasBeenSet() const;

                private:

                    /**
                     * 缓存配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    CacheConfigCache m_cache;
                    bool m_cacheHasBeenSet;

                    /**
                     * 不缓存配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    CacheConfigNoCache m_noCache;
                    bool m_noCacheHasBeenSet;

                    /**
                     * 遵循源站配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    CacheConfigFollowOrigin m_followOrigin;
                    bool m_followOriginHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220106_MODEL_CACHECONFIG_H_
