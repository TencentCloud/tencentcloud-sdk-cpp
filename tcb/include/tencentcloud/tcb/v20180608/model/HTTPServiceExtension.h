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

#ifndef TENCENTCLOUD_TCB_V20180608_MODEL_HTTPSERVICEEXTENSION_H_
#define TENCENTCLOUD_TCB_V20180608_MODEL_HTTPSERVICEEXTENSION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcb/v20180608/model/HTTPServiceHeadersHandler.h>
#include <tencentcloud/tcb/v20180608/model/HTTPServiceCacheSet.h>


namespace TencentCloud
{
    namespace Tcb
    {
        namespace V20180608
        {
            namespace Model
            {
                /**
                * HTTPService 路由扩展字段
                */
                class HTTPServiceExtension : public AbstractModel
                {
                public:
                    HTTPServiceExtension();
                    ~HTTPServiceExtension() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>添加请求头列表</p>
                     * @return HeadersHandler <p>添加请求头列表</p>
                     * 
                     */
                    HTTPServiceHeadersHandler GetHeadersHandler() const;

                    /**
                     * 设置<p>添加请求头列表</p>
                     * @param _headersHandler <p>添加请求头列表</p>
                     * 
                     */
                    void SetHeadersHandler(const HTTPServiceHeadersHandler& _headersHandler);

                    /**
                     * 判断参数 HeadersHandler 是否已赋值
                     * @return HeadersHandler 是否已赋值
                     * 
                     */
                    bool HeadersHandlerHasBeenSet() const;

                    /**
                     * 获取<p>HTTPService 缓存配置，包含Cache 节点缓存 / MaxAge 浏览器缓存 / CacheKey 自定义缓存键</p>
                     * @return Cache <p>HTTPService 缓存配置，包含Cache 节点缓存 / MaxAge 浏览器缓存 / CacheKey 自定义缓存键</p>
                     * 
                     */
                    HTTPServiceCacheSet GetCache() const;

                    /**
                     * 设置<p>HTTPService 缓存配置，包含Cache 节点缓存 / MaxAge 浏览器缓存 / CacheKey 自定义缓存键</p>
                     * @param _cache <p>HTTPService 缓存配置，包含Cache 节点缓存 / MaxAge 浏览器缓存 / CacheKey 自定义缓存键</p>
                     * 
                     */
                    void SetCache(const HTTPServiceCacheSet& _cache);

                    /**
                     * 判断参数 Cache 是否已赋值
                     * @return Cache 是否已赋值
                     * 
                     */
                    bool CacheHasBeenSet() const;

                private:

                    /**
                     * <p>添加请求头列表</p>
                     */
                    HTTPServiceHeadersHandler m_headersHandler;
                    bool m_headersHandlerHasBeenSet;

                    /**
                     * <p>HTTPService 缓存配置，包含Cache 节点缓存 / MaxAge 浏览器缓存 / CacheKey 自定义缓存键</p>
                     */
                    HTTPServiceCacheSet m_cache;
                    bool m_cacheHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCB_V20180608_MODEL_HTTPSERVICEEXTENSION_H_
