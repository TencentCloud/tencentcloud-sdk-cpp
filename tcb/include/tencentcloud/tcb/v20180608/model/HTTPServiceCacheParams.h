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

#ifndef TENCENTCLOUD_TCB_V20180608_MODEL_HTTPSERVICECACHEPARAMS_H_
#define TENCENTCLOUD_TCB_V20180608_MODEL_HTTPSERVICECACHEPARAMS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcb
    {
        namespace V20180608
        {
            namespace Model
            {
                /**
                * HTTPService 缓存参数（节点缓存 + 浏览器缓存共用行为模式）。
FollowOrigin / NoCache / (CacheTime||MaxAgeTime) 三者互斥，必须开启其一：
- FollowOrigin=true：节点与浏览器缓存均遵循源站；
- NoCache=true：节点与浏览器缓存均不缓存（Cache-Control: no-cache）；
- CacheTime>0 或 MaxAgeTime>0：至少设置其一，分别控制节点、浏览器缓存秒数，可独立设置。
                */
                class HTTPServiceCacheParams : public AbstractModel
                {
                public:
                    HTTPServiceCacheParams();
                    ~HTTPServiceCacheParams() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>遵循源站</p>
                     * @return FollowOrigin <p>遵循源站</p>
                     * 
                     */
                    bool GetFollowOrigin() const;

                    /**
                     * 设置<p>遵循源站</p>
                     * @param _followOrigin <p>遵循源站</p>
                     * 
                     */
                    void SetFollowOrigin(const bool& _followOrigin);

                    /**
                     * 判断参数 FollowOrigin 是否已赋值
                     * @return FollowOrigin 是否已赋值
                     * 
                     */
                    bool FollowOriginHasBeenSet() const;

                    /**
                     * 获取<p>不缓存</p>
                     * @return NoCache <p>不缓存</p>
                     * 
                     */
                    bool GetNoCache() const;

                    /**
                     * 设置<p>不缓存</p>
                     * @param _noCache <p>不缓存</p>
                     * 
                     */
                    void SetNoCache(const bool& _noCache);

                    /**
                     * 判断参数 NoCache 是否已赋值
                     * @return NoCache 是否已赋值
                     * 
                     */
                    bool NoCacheHasBeenSet() const;

                    /**
                     * 获取<p>自定义缓存时间（秒）</p><p>取值范围：[0, 31536000]</p><p>单位：秒</p>
                     * @return CacheTime <p>自定义缓存时间（秒）</p><p>取值范围：[0, 31536000]</p><p>单位：秒</p>
                     * 
                     */
                    uint64_t GetCacheTime() const;

                    /**
                     * 设置<p>自定义缓存时间（秒）</p><p>取值范围：[0, 31536000]</p><p>单位：秒</p>
                     * @param _cacheTime <p>自定义缓存时间（秒）</p><p>取值范围：[0, 31536000]</p><p>单位：秒</p>
                     * 
                     */
                    void SetCacheTime(const uint64_t& _cacheTime);

                    /**
                     * 判断参数 CacheTime 是否已赋值
                     * @return CacheTime 是否已赋值
                     * 
                     */
                    bool CacheTimeHasBeenSet() const;

                    /**
                     * 获取<p>浏览器缓存秒数（对应 max-age）</p><p>取值范围：[0, 31536000]</p><p>单位：秒</p>
                     * @return MaxAgeTime <p>浏览器缓存秒数（对应 max-age）</p><p>取值范围：[0, 31536000]</p><p>单位：秒</p>
                     * 
                     */
                    uint64_t GetMaxAgeTime() const;

                    /**
                     * 设置<p>浏览器缓存秒数（对应 max-age）</p><p>取值范围：[0, 31536000]</p><p>单位：秒</p>
                     * @param _maxAgeTime <p>浏览器缓存秒数（对应 max-age）</p><p>取值范围：[0, 31536000]</p><p>单位：秒</p>
                     * 
                     */
                    void SetMaxAgeTime(const uint64_t& _maxAgeTime);

                    /**
                     * 判断参数 MaxAgeTime 是否已赋值
                     * @return MaxAgeTime 是否已赋值
                     * 
                     */
                    bool MaxAgeTimeHasBeenSet() const;

                private:

                    /**
                     * <p>遵循源站</p>
                     */
                    bool m_followOrigin;
                    bool m_followOriginHasBeenSet;

                    /**
                     * <p>不缓存</p>
                     */
                    bool m_noCache;
                    bool m_noCacheHasBeenSet;

                    /**
                     * <p>自定义缓存时间（秒）</p><p>取值范围：[0, 31536000]</p><p>单位：秒</p>
                     */
                    uint64_t m_cacheTime;
                    bool m_cacheTimeHasBeenSet;

                    /**
                     * <p>浏览器缓存秒数（对应 max-age）</p><p>取值范围：[0, 31536000]</p><p>单位：秒</p>
                     */
                    uint64_t m_maxAgeTime;
                    bool m_maxAgeTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCB_V20180608_MODEL_HTTPSERVICECACHEPARAMS_H_
