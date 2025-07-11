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

#ifndef TENCENTCLOUD_CDN_V20180606_MODEL_HEURISTICCACHE_H_
#define TENCENTCLOUD_CDN_V20180606_MODEL_HEURISTICCACHE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdn/v20180606/model/CacheConfig.h>


namespace TencentCloud
{
    namespace Cdn
    {
        namespace V20180606
        {
            namespace Model
            {
                /**
                * 启发式缓存配置
                */
                class HeuristicCache : public AbstractModel
                {
                public:
                    HeuristicCache();
                    ~HeuristicCache() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取启发式缓存配置开关，取值有：
on：开启
off：关闭（默认）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Switch 启发式缓存配置开关，取值有：
on：开启
off：关闭（默认）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSwitch() const;

                    /**
                     * 设置启发式缓存配置开关，取值有：
on：开启
off：关闭（默认）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _switch 启发式缓存配置开关，取值有：
on：开启
off：关闭（默认）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSwitch(const std::string& _switch);

                    /**
                     * 判断参数 Switch 是否已赋值
                     * @return Switch 是否已赋值
                     * 
                     */
                    bool SwitchHasBeenSet() const;

                    /**
                     * 获取自定义启发式缓存时间配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CacheConfig 自定义启发式缓存时间配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    CacheConfig GetCacheConfig() const;

                    /**
                     * 设置自定义启发式缓存时间配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _cacheConfig 自定义启发式缓存时间配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCacheConfig(const CacheConfig& _cacheConfig);

                    /**
                     * 判断参数 CacheConfig 是否已赋值
                     * @return CacheConfig 是否已赋值
                     * 
                     */
                    bool CacheConfigHasBeenSet() const;

                private:

                    /**
                     * 启发式缓存配置开关，取值有：
on：开启
off：关闭（默认）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_switch;
                    bool m_switchHasBeenSet;

                    /**
                     * 自定义启发式缓存时间配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    CacheConfig m_cacheConfig;
                    bool m_cacheConfigHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDN_V20180606_MODEL_HEURISTICCACHE_H_
