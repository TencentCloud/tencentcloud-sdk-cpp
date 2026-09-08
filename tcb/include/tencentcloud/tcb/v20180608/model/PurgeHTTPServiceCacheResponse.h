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

#ifndef TENCENTCLOUD_TCB_V20180608_MODEL_PURGEHTTPSERVICECACHERESPONSE_H_
#define TENCENTCLOUD_TCB_V20180608_MODEL_PURGEHTTPSERVICECACHERESPONSE_H_

#include <string>
#include <vector>
#include <map>
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
                * PurgeHTTPServiceCache返回参数结构体
                */
                class PurgeHTTPServiceCacheResponse : public AbstractModel
                {
                public:
                    PurgeHTTPServiceCacheResponse();
                    ~PurgeHTTPServiceCacheResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>需要刷新的缓存类型：TCBCDN 或 EO</p><p>枚举值：</p><ul><li>EO： EO缓存</li><li>CDN： CDN缓存</li></ul>
                     * @return CacheType <p>需要刷新的缓存类型：TCBCDN 或 EO</p><p>枚举值：</p><ul><li>EO： EO缓存</li><li>CDN： CDN缓存</li></ul>
                     * 
                     */
                    std::string GetCacheType() const;

                    /**
                     * 判断参数 CacheType 是否已赋值
                     * @return CacheType 是否已赋值
                     * 
                     */
                    bool CacheTypeHasBeenSet() const;

                    /**
                     * 获取<p>刷新任务ID</p>
                     * @return TaskId <p>刷新任务ID</p>
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                private:

                    /**
                     * <p>需要刷新的缓存类型：TCBCDN 或 EO</p><p>枚举值：</p><ul><li>EO： EO缓存</li><li>CDN： CDN缓存</li></ul>
                     */
                    std::string m_cacheType;
                    bool m_cacheTypeHasBeenSet;

                    /**
                     * <p>刷新任务ID</p>
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCB_V20180608_MODEL_PURGEHTTPSERVICECACHERESPONSE_H_
