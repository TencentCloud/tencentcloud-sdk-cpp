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

#ifndef TENCENTCLOUD_REDIS_V20180412_MODEL_MODIFYVALKEYMODULEREQUEST_H_
#define TENCENTCLOUD_REDIS_V20180412_MODEL_MODIFYVALKEYMODULEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Redis
    {
        namespace V20180412
        {
            namespace Model
            {
                /**
                * ModifyValkeyModule请求参数结构体
                */
                class ModifyValkeyModuleRequest : public AbstractModel
                {
                public:
                    ModifyValkeyModuleRequest();
                    ~ModifyValkeyModuleRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>指定实例 ID。例如：crs-xjhsdj****。请登录<a href="https://console.cloud.tencent.com/redis">Redis控制台</a>在实例列表复制实例 ID。</p>
                     * @return InstanceId <p>指定实例 ID。例如：crs-xjhsdj****。请登录<a href="https://console.cloud.tencent.com/redis">Redis控制台</a>在实例列表复制实例 ID。</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>指定实例 ID。例如：crs-xjhsdj****。请登录<a href="https://console.cloud.tencent.com/redis">Redis控制台</a>在实例列表复制实例 ID。</p>
                     * @param _instanceId <p>指定实例 ID。例如：crs-xjhsdj****。请登录<a href="https://console.cloud.tencent.com/redis">Redis控制台</a>在实例列表复制实例 ID。</p>
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取<p>指定待修改的扩展模块。</p><p>枚举值：</p><ul><li>ValkeyBloom： 指 Bloom 模块，可以高效地判断一个元素是否存在于集合中</li><li>ValkeyJSON： 指 JSON 模块，允许 Redis 原生支持 JSON 数据格式，方便存储和操作 JSON 对象。</li><li>ValkeySearch： 指 Search 模块，提供全文搜索功能，可以对存储在 Redis 中的数据进行高效的搜索操作。</li></ul>
                     * @return Name <p>指定待修改的扩展模块。</p><p>枚举值：</p><ul><li>ValkeyBloom： 指 Bloom 模块，可以高效地判断一个元素是否存在于集合中</li><li>ValkeyJSON： 指 JSON 模块，允许 Redis 原生支持 JSON 数据格式，方便存储和操作 JSON 对象。</li><li>ValkeySearch： 指 Search 模块，提供全文搜索功能，可以对存储在 Redis 中的数据进行高效的搜索操作。</li></ul>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>指定待修改的扩展模块。</p><p>枚举值：</p><ul><li>ValkeyBloom： 指 Bloom 模块，可以高效地判断一个元素是否存在于集合中</li><li>ValkeyJSON： 指 JSON 模块，允许 Redis 原生支持 JSON 数据格式，方便存储和操作 JSON 对象。</li><li>ValkeySearch： 指 Search 模块，提供全文搜索功能，可以对存储在 Redis 中的数据进行高效的搜索操作。</li></ul>
                     * @param _name <p>指定待修改的扩展模块。</p><p>枚举值：</p><ul><li>ValkeyBloom： 指 Bloom 模块，可以高效地判断一个元素是否存在于集合中</li><li>ValkeyJSON： 指 JSON 模块，允许 Redis 原生支持 JSON 数据格式，方便存储和操作 JSON 对象。</li><li>ValkeySearch： 指 Search 模块，提供全文搜索功能，可以对存储在 Redis 中的数据进行高效的搜索操作。</li></ul>
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取<p>设置扩展模块的启用状态。仅支持设置为 ON，启用扩展模块。</p>
                     * @return Status <p>设置扩展模块的启用状态。仅支持设置为 ON，启用扩展模块。</p>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>设置扩展模块的启用状态。仅支持设置为 ON，启用扩展模块。</p>
                     * @param _status <p>设置扩展模块的启用状态。仅支持设置为 ON，启用扩展模块。</p>
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * <p>指定实例 ID。例如：crs-xjhsdj****。请登录<a href="https://console.cloud.tencent.com/redis">Redis控制台</a>在实例列表复制实例 ID。</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>指定待修改的扩展模块。</p><p>枚举值：</p><ul><li>ValkeyBloom： 指 Bloom 模块，可以高效地判断一个元素是否存在于集合中</li><li>ValkeyJSON： 指 JSON 模块，允许 Redis 原生支持 JSON 数据格式，方便存储和操作 JSON 对象。</li><li>ValkeySearch： 指 Search 模块，提供全文搜索功能，可以对存储在 Redis 中的数据进行高效的搜索操作。</li></ul>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>设置扩展模块的启用状态。仅支持设置为 ON，启用扩展模块。</p>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_REDIS_V20180412_MODEL_MODIFYVALKEYMODULEREQUEST_H_
