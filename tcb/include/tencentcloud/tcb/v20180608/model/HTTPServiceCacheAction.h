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

#ifndef TENCENTCLOUD_TCB_V20180608_MODEL_HTTPSERVICECACHEACTION_H_
#define TENCENTCLOUD_TCB_V20180608_MODEL_HTTPSERVICECACHEACTION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcb/v20180608/model/HTTPServiceCacheParams.h>
#include <tencentcloud/tcb/v20180608/model/HTTPServiceCacheKeyParams.h>


namespace TencentCloud
{
    namespace Tcb
    {
        namespace V20180608
        {
            namespace Model
            {
                /**
                * HTTPService缓存动作（Type + 具体子字段的标签联合，Type 与被设置的子字段必须一一对应）
                */
                class HTTPServiceCacheAction : public AbstractModel
                {
                public:
                    HTTPServiceCacheAction();
                    ~HTTPServiceCacheAction() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>HTTPService 缓存动作类型</p><p>枚举值：</p><ul><li>Cache： 节点缓存 + 浏览器缓存统一动作（节点秒数 CacheTime、浏览器秒数 MaxAgeTime）</li><li>CacheKey： 仅开启EO边缘加速通道下发</li></ul>
                     * @return Type <p>HTTPService 缓存动作类型</p><p>枚举值：</p><ul><li>Cache： 节点缓存 + 浏览器缓存统一动作（节点秒数 CacheTime、浏览器秒数 MaxAgeTime）</li><li>CacheKey： 仅开启EO边缘加速通道下发</li></ul>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置<p>HTTPService 缓存动作类型</p><p>枚举值：</p><ul><li>Cache： 节点缓存 + 浏览器缓存统一动作（节点秒数 CacheTime、浏览器秒数 MaxAgeTime）</li><li>CacheKey： 仅开启EO边缘加速通道下发</li></ul>
                     * @param _type <p>HTTPService 缓存动作类型</p><p>枚举值：</p><ul><li>Cache： 节点缓存 + 浏览器缓存统一动作（节点秒数 CacheTime、浏览器秒数 MaxAgeTime）</li><li>CacheKey： 仅开启EO边缘加速通道下发</li></ul>
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取<p>节点缓存配置。Type=Cache 时必填</p>
                     * @return Cache <p>节点缓存配置。Type=Cache 时必填</p>
                     * 
                     */
                    HTTPServiceCacheParams GetCache() const;

                    /**
                     * 设置<p>节点缓存配置。Type=Cache 时必填</p>
                     * @param _cache <p>节点缓存配置。Type=Cache 时必填</p>
                     * 
                     */
                    void SetCache(const HTTPServiceCacheParams& _cache);

                    /**
                     * 判断参数 Cache 是否已赋值
                     * @return Cache 是否已赋值
                     * 
                     */
                    bool CacheHasBeenSet() const;

                    /**
                     * 获取<p>自定义缓存键。Type=CacheKey 时必填</p>
                     * @return CacheKey <p>自定义缓存键。Type=CacheKey 时必填</p>
                     * 
                     */
                    HTTPServiceCacheKeyParams GetCacheKey() const;

                    /**
                     * 设置<p>自定义缓存键。Type=CacheKey 时必填</p>
                     * @param _cacheKey <p>自定义缓存键。Type=CacheKey 时必填</p>
                     * 
                     */
                    void SetCacheKey(const HTTPServiceCacheKeyParams& _cacheKey);

                    /**
                     * 判断参数 CacheKey 是否已赋值
                     * @return CacheKey 是否已赋值
                     * 
                     */
                    bool CacheKeyHasBeenSet() const;

                private:

                    /**
                     * <p>HTTPService 缓存动作类型</p><p>枚举值：</p><ul><li>Cache： 节点缓存 + 浏览器缓存统一动作（节点秒数 CacheTime、浏览器秒数 MaxAgeTime）</li><li>CacheKey： 仅开启EO边缘加速通道下发</li></ul>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * <p>节点缓存配置。Type=Cache 时必填</p>
                     */
                    HTTPServiceCacheParams m_cache;
                    bool m_cacheHasBeenSet;

                    /**
                     * <p>自定义缓存键。Type=CacheKey 时必填</p>
                     */
                    HTTPServiceCacheKeyParams m_cacheKey;
                    bool m_cacheKeyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCB_V20180608_MODEL_HTTPSERVICECACHEACTION_H_
