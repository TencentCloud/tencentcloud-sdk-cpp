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

#ifndef TENCENTCLOUD_REDIS_V20180412_MODEL_MODIFYMODULEREQUEST_H_
#define TENCENTCLOUD_REDIS_V20180412_MODEL_MODIFYMODULEREQUEST_H_

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
                * ModifyModule请求参数结构体
                */
                class ModifyModuleRequest : public AbstractModel
                {
                public:
                    ModifyModuleRequest();
                    ~ModifyModuleRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取指定实例 ID。例如：crs-xjhsdj****。请登录[Redis控制台](https://console.cloud.tencent.com/redis)在实例列表复制实例 ID。
                     * @return InstanceId 指定实例 ID。例如：crs-xjhsdj****。请登录[Redis控制台](https://console.cloud.tencent.com/redis)在实例列表复制实例 ID。
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置指定实例 ID。例如：crs-xjhsdj****。请登录[Redis控制台](https://console.cloud.tencent.com/redis)在实例列表复制实例 ID。
                     * @param _instanceId 指定实例 ID。例如：crs-xjhsdj****。请登录[Redis控制台](https://console.cloud.tencent.com/redis)在实例列表复制实例 ID。
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
                     * 获取指定待修改的扩展模块。Redis 支持修改如下扩展模块的状态。
- Bloom：指 RedisBloom 模块，可以高效地判断一个元素是否存在于集合中。
- JSON：指 RedisJSON 模块，允许 Redis 原生支持 JSON 数据格式，方便存储和操作 JSON 对象。
- Search：指 RediSearch 模块，提供全文搜索功能，可以对存储在 Redis 中的数据进行高效的搜索操作。
- TimeSeries：指 RedisTimeSeries 模块，专门用于处理时间序列数据，适合存储和查询时间相关的数据。
                     * @return Name 指定待修改的扩展模块。Redis 支持修改如下扩展模块的状态。
- Bloom：指 RedisBloom 模块，可以高效地判断一个元素是否存在于集合中。
- JSON：指 RedisJSON 模块，允许 Redis 原生支持 JSON 数据格式，方便存储和操作 JSON 对象。
- Search：指 RediSearch 模块，提供全文搜索功能，可以对存储在 Redis 中的数据进行高效的搜索操作。
- TimeSeries：指 RedisTimeSeries 模块，专门用于处理时间序列数据，适合存储和查询时间相关的数据。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置指定待修改的扩展模块。Redis 支持修改如下扩展模块的状态。
- Bloom：指 RedisBloom 模块，可以高效地判断一个元素是否存在于集合中。
- JSON：指 RedisJSON 模块，允许 Redis 原生支持 JSON 数据格式，方便存储和操作 JSON 对象。
- Search：指 RediSearch 模块，提供全文搜索功能，可以对存储在 Redis 中的数据进行高效的搜索操作。
- TimeSeries：指 RedisTimeSeries 模块，专门用于处理时间序列数据，适合存储和查询时间相关的数据。
                     * @param _name 指定待修改的扩展模块。Redis 支持修改如下扩展模块的状态。
- Bloom：指 RedisBloom 模块，可以高效地判断一个元素是否存在于集合中。
- JSON：指 RedisJSON 模块，允许 Redis 原生支持 JSON 数据格式，方便存储和操作 JSON 对象。
- Search：指 RediSearch 模块，提供全文搜索功能，可以对存储在 Redis 中的数据进行高效的搜索操作。
- TimeSeries：指 RedisTimeSeries 模块，专门用于处理时间序列数据，适合存储和查询时间相关的数据。
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
                     * 获取设置扩展模块的启用状态。仅支持设置为 ON，启用扩展模块。
                     * @return Status 设置扩展模块的启用状态。仅支持设置为 ON，启用扩展模块。
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置设置扩展模块的启用状态。仅支持设置为 ON，启用扩展模块。
                     * @param _status 设置扩展模块的启用状态。仅支持设置为 ON，启用扩展模块。
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
                     * 指定实例 ID。例如：crs-xjhsdj****。请登录[Redis控制台](https://console.cloud.tencent.com/redis)在实例列表复制实例 ID。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 指定待修改的扩展模块。Redis 支持修改如下扩展模块的状态。
- Bloom：指 RedisBloom 模块，可以高效地判断一个元素是否存在于集合中。
- JSON：指 RedisJSON 模块，允许 Redis 原生支持 JSON 数据格式，方便存储和操作 JSON 对象。
- Search：指 RediSearch 模块，提供全文搜索功能，可以对存储在 Redis 中的数据进行高效的搜索操作。
- TimeSeries：指 RedisTimeSeries 模块，专门用于处理时间序列数据，适合存储和查询时间相关的数据。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 设置扩展模块的启用状态。仅支持设置为 ON，启用扩展模块。
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_REDIS_V20180412_MODEL_MODIFYMODULEREQUEST_H_
