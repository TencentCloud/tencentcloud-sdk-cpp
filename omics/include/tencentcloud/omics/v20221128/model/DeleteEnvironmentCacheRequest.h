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

#ifndef TENCENTCLOUD_OMICS_V20221128_MODEL_DELETEENVIRONMENTCACHEREQUEST_H_
#define TENCENTCLOUD_OMICS_V20221128_MODEL_DELETEENVIRONMENTCACHEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Omics
    {
        namespace V20221128
        {
            namespace Model
            {
                /**
                * DeleteEnvironmentCache请求参数结构体
                */
                class DeleteEnvironmentCacheRequest : public AbstractModel
                {
                public:
                    DeleteEnvironmentCacheRequest();
                    ~DeleteEnvironmentCacheRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>环境ID。</p>
                     * @return EnvironmentId <p>环境ID。</p>
                     * 
                     */
                    std::string GetEnvironmentId() const;

                    /**
                     * 设置<p>环境ID。</p>
                     * @param _environmentId <p>环境ID。</p>
                     * 
                     */
                    void SetEnvironmentId(const std::string& _environmentId);

                    /**
                     * 判断参数 EnvironmentId 是否已赋值
                     * @return EnvironmentId 是否已赋值
                     * 
                     */
                    bool EnvironmentIdHasBeenSet() const;

                    /**
                     * 获取<p>缓存类型</p><p>枚举值：</p><ul><li>RUNTIME： 清理默认缓存卷的运行缓存目录</li><li>INPUT： 清理默认缓存卷的输入缓存目录</li><li>ALL： 清空环境下全部有效缓存卷</li><li>PATH： 指定缓存卷下指定路径，需要在Path中填入实际绝对路径</li></ul>
                     * @return CacheType <p>缓存类型</p><p>枚举值：</p><ul><li>RUNTIME： 清理默认缓存卷的运行缓存目录</li><li>INPUT： 清理默认缓存卷的输入缓存目录</li><li>ALL： 清空环境下全部有效缓存卷</li><li>PATH： 指定缓存卷下指定路径，需要在Path中填入实际绝对路径</li></ul>
                     * 
                     */
                    std::string GetCacheType() const;

                    /**
                     * 设置<p>缓存类型</p><p>枚举值：</p><ul><li>RUNTIME： 清理默认缓存卷的运行缓存目录</li><li>INPUT： 清理默认缓存卷的输入缓存目录</li><li>ALL： 清空环境下全部有效缓存卷</li><li>PATH： 指定缓存卷下指定路径，需要在Path中填入实际绝对路径</li></ul>
                     * @param _cacheType <p>缓存类型</p><p>枚举值：</p><ul><li>RUNTIME： 清理默认缓存卷的运行缓存目录</li><li>INPUT： 清理默认缓存卷的输入缓存目录</li><li>ALL： 清空环境下全部有效缓存卷</li><li>PATH： 指定缓存卷下指定路径，需要在Path中填入实际绝对路径</li></ul>
                     * 
                     */
                    void SetCacheType(const std::string& _cacheType);

                    /**
                     * 判断参数 CacheType 是否已赋值
                     * @return CacheType 是否已赋值
                     * 
                     */
                    bool CacheTypeHasBeenSet() const;

                    /**
                     * 获取<p>指定路径删除</p><p>入参限制：以盘符开头的绝对路径地址</p>
                     * @return Path <p>指定路径删除</p><p>入参限制：以盘符开头的绝对路径地址</p>
                     * 
                     */
                    std::string GetPath() const;

                    /**
                     * 设置<p>指定路径删除</p><p>入参限制：以盘符开头的绝对路径地址</p>
                     * @param _path <p>指定路径删除</p><p>入参限制：以盘符开头的绝对路径地址</p>
                     * 
                     */
                    void SetPath(const std::string& _path);

                    /**
                     * 判断参数 Path 是否已赋值
                     * @return Path 是否已赋值
                     * 
                     */
                    bool PathHasBeenSet() const;

                private:

                    /**
                     * <p>环境ID。</p>
                     */
                    std::string m_environmentId;
                    bool m_environmentIdHasBeenSet;

                    /**
                     * <p>缓存类型</p><p>枚举值：</p><ul><li>RUNTIME： 清理默认缓存卷的运行缓存目录</li><li>INPUT： 清理默认缓存卷的输入缓存目录</li><li>ALL： 清空环境下全部有效缓存卷</li><li>PATH： 指定缓存卷下指定路径，需要在Path中填入实际绝对路径</li></ul>
                     */
                    std::string m_cacheType;
                    bool m_cacheTypeHasBeenSet;

                    /**
                     * <p>指定路径删除</p><p>入参限制：以盘符开头的绝对路径地址</p>
                     */
                    std::string m_path;
                    bool m_pathHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OMICS_V20221128_MODEL_DELETEENVIRONMENTCACHEREQUEST_H_
