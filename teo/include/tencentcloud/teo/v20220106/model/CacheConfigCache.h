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

#ifndef TENCENTCLOUD_TEO_V20220106_MODEL_CACHECONFIGCACHE_H_
#define TENCENTCLOUD_TEO_V20220106_MODEL_CACHECONFIGCACHE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220106
        {
            namespace Model
            {
                /**
                * 缓存时间设置
                */
                class CacheConfigCache : public AbstractModel
                {
                public:
                    CacheConfigCache();
                    ~CacheConfigCache() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取缓存配置开关
on：开启
off：关闭
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Switch 缓存配置开关
on：开启
off：关闭
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetSwitch() const;

                    /**
                     * 设置缓存配置开关
on：开启
off：关闭
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Switch 缓存配置开关
on：开启
off：关闭
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetSwitch(const std::string& _switch);

                    /**
                     * 判断参数 Switch 是否已赋值
                     * @return Switch 是否已赋值
                     */
                    bool SwitchHasBeenSet() const;

                    /**
                     * 获取缓存过期时间设置
单位为秒，最大可设置为 365 天
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CacheTime 缓存过期时间设置
单位为秒，最大可设置为 365 天
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetCacheTime() const;

                    /**
                     * 设置缓存过期时间设置
单位为秒，最大可设置为 365 天
注意：此字段可能返回 null，表示取不到有效值。
                     * @param CacheTime 缓存过期时间设置
单位为秒，最大可设置为 365 天
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetCacheTime(const int64_t& _cacheTime);

                    /**
                     * 判断参数 CacheTime 是否已赋值
                     * @return CacheTime 是否已赋值
                     */
                    bool CacheTimeHasBeenSet() const;

                    /**
                     * 获取是否开启强制缓存
开启：on
关闭：off
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IgnoreCacheControl 是否开启强制缓存
开启：on
关闭：off
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetIgnoreCacheControl() const;

                    /**
                     * 设置是否开启强制缓存
开启：on
关闭：off
注意：此字段可能返回 null，表示取不到有效值。
                     * @param IgnoreCacheControl 是否开启强制缓存
开启：on
关闭：off
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetIgnoreCacheControl(const std::string& _ignoreCacheControl);

                    /**
                     * 判断参数 IgnoreCacheControl 是否已赋值
                     * @return IgnoreCacheControl 是否已赋值
                     */
                    bool IgnoreCacheControlHasBeenSet() const;

                private:

                    /**
                     * 缓存配置开关
on：开启
off：关闭
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_switch;
                    bool m_switchHasBeenSet;

                    /**
                     * 缓存过期时间设置
单位为秒，最大可设置为 365 天
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_cacheTime;
                    bool m_cacheTimeHasBeenSet;

                    /**
                     * 是否开启强制缓存
开启：on
关闭：off
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_ignoreCacheControl;
                    bool m_ignoreCacheControlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220106_MODEL_CACHECONFIGCACHE_H_
