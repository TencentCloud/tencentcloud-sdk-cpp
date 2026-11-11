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

#ifndef TENCENTCLOUD_REDIS_V20180412_MODEL_MODULE_H_
#define TENCENTCLOUD_REDIS_V20180412_MODEL_MODULE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * Redis 支持的扩展模块信息。
                */
                class Module : public AbstractModel
                {
                public:
                    Module();
                    ~Module() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Redis 支持的扩展模块，包括 Bloom、JSON、Search 和 TimeSeries，可以为 Redis 提供额外的功能支持。</p><ul><li>Bloom：指 RedisBloom 模块，可以高效地判断一个元素是否存在于集合中。</li><li>JSON：指 RedisJSON 模块，允许 Redis 原生支持 JSON 数据格式，方便存储和操作 JSON 对象。</li><li>Search：指 RediSearch 模块，提供全文搜索功能，可以对存储在 Redis 中的数据进行高效的搜索操作。</li><li>TimeSeries：指 RedisTimeSeries 模块，专门用于处理时间序列数据，适合存储和查询时间相关的数据。</li><li>ValkeyBloom：指Valkey引擎的RedisBloom 模块，可以高效地判断一个元素是否存在于集合中。</li><li>ValkeyJSON：指Valkey引擎的RedisJSON 模块，允许 Redis 原生支持 JSON 数据格式，方便存储和操作 JSON 对象。</li><li>ValkeySearch：指Valkey引擎的RediSearch 模块，提供全文搜索功能，可以对存储在 Redis 中的数据进行高效的搜索操作。</li></ul>
                     * @return Name <p>Redis 支持的扩展模块，包括 Bloom、JSON、Search 和 TimeSeries，可以为 Redis 提供额外的功能支持。</p><ul><li>Bloom：指 RedisBloom 模块，可以高效地判断一个元素是否存在于集合中。</li><li>JSON：指 RedisJSON 模块，允许 Redis 原生支持 JSON 数据格式，方便存储和操作 JSON 对象。</li><li>Search：指 RediSearch 模块，提供全文搜索功能，可以对存储在 Redis 中的数据进行高效的搜索操作。</li><li>TimeSeries：指 RedisTimeSeries 模块，专门用于处理时间序列数据，适合存储和查询时间相关的数据。</li><li>ValkeyBloom：指Valkey引擎的RedisBloom 模块，可以高效地判断一个元素是否存在于集合中。</li><li>ValkeyJSON：指Valkey引擎的RedisJSON 模块，允许 Redis 原生支持 JSON 数据格式，方便存储和操作 JSON 对象。</li><li>ValkeySearch：指Valkey引擎的RediSearch 模块，提供全文搜索功能，可以对存储在 Redis 中的数据进行高效的搜索操作。</li></ul>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>Redis 支持的扩展模块，包括 Bloom、JSON、Search 和 TimeSeries，可以为 Redis 提供额外的功能支持。</p><ul><li>Bloom：指 RedisBloom 模块，可以高效地判断一个元素是否存在于集合中。</li><li>JSON：指 RedisJSON 模块，允许 Redis 原生支持 JSON 数据格式，方便存储和操作 JSON 对象。</li><li>Search：指 RediSearch 模块，提供全文搜索功能，可以对存储在 Redis 中的数据进行高效的搜索操作。</li><li>TimeSeries：指 RedisTimeSeries 模块，专门用于处理时间序列数据，适合存储和查询时间相关的数据。</li><li>ValkeyBloom：指Valkey引擎的RedisBloom 模块，可以高效地判断一个元素是否存在于集合中。</li><li>ValkeyJSON：指Valkey引擎的RedisJSON 模块，允许 Redis 原生支持 JSON 数据格式，方便存储和操作 JSON 对象。</li><li>ValkeySearch：指Valkey引擎的RediSearch 模块，提供全文搜索功能，可以对存储在 Redis 中的数据进行高效的搜索操作。</li></ul>
                     * @param _name <p>Redis 支持的扩展模块，包括 Bloom、JSON、Search 和 TimeSeries，可以为 Redis 提供额外的功能支持。</p><ul><li>Bloom：指 RedisBloom 模块，可以高效地判断一个元素是否存在于集合中。</li><li>JSON：指 RedisJSON 模块，允许 Redis 原生支持 JSON 数据格式，方便存储和操作 JSON 对象。</li><li>Search：指 RediSearch 模块，提供全文搜索功能，可以对存储在 Redis 中的数据进行高效的搜索操作。</li><li>TimeSeries：指 RedisTimeSeries 模块，专门用于处理时间序列数据，适合存储和查询时间相关的数据。</li><li>ValkeyBloom：指Valkey引擎的RedisBloom 模块，可以高效地判断一个元素是否存在于集合中。</li><li>ValkeyJSON：指Valkey引擎的RedisJSON 模块，允许 Redis 原生支持 JSON 数据格式，方便存储和操作 JSON 对象。</li><li>ValkeySearch：指Valkey引擎的RediSearch 模块，提供全文搜索功能，可以对存储在 Redis 中的数据进行高效的搜索操作。</li></ul>
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
                     * 获取<p>扩展模块的启用状态。</p><ul><li>ON：启用。</li><li>OFF：关闭。</li></ul>
                     * @return Status <p>扩展模块的启用状态。</p><ul><li>ON：启用。</li><li>OFF：关闭。</li></ul>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>扩展模块的启用状态。</p><ul><li>ON：启用。</li><li>OFF：关闭。</li></ul>
                     * @param _status <p>扩展模块的启用状态。</p><ul><li>ON：启用。</li><li>OFF：关闭。</li></ul>
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取<p>实例是否支持参数 Name 对应的扩展模块。</p><ul><li>true：支持。</li><li>false：不支持。</li></ul>
                     * @return IsSupport <p>实例是否支持参数 Name 对应的扩展模块。</p><ul><li>true：支持。</li><li>false：不支持。</li></ul>
                     * 
                     */
                    bool GetIsSupport() const;

                    /**
                     * 设置<p>实例是否支持参数 Name 对应的扩展模块。</p><ul><li>true：支持。</li><li>false：不支持。</li></ul>
                     * @param _isSupport <p>实例是否支持参数 Name 对应的扩展模块。</p><ul><li>true：支持。</li><li>false：不支持。</li></ul>
                     * 
                     */
                    void SetIsSupport(const bool& _isSupport);

                    /**
                     * 判断参数 IsSupport 是否已赋值
                     * @return IsSupport 是否已赋值
                     * 
                     */
                    bool IsSupportHasBeenSet() const;

                private:

                    /**
                     * <p>Redis 支持的扩展模块，包括 Bloom、JSON、Search 和 TimeSeries，可以为 Redis 提供额外的功能支持。</p><ul><li>Bloom：指 RedisBloom 模块，可以高效地判断一个元素是否存在于集合中。</li><li>JSON：指 RedisJSON 模块，允许 Redis 原生支持 JSON 数据格式，方便存储和操作 JSON 对象。</li><li>Search：指 RediSearch 模块，提供全文搜索功能，可以对存储在 Redis 中的数据进行高效的搜索操作。</li><li>TimeSeries：指 RedisTimeSeries 模块，专门用于处理时间序列数据，适合存储和查询时间相关的数据。</li><li>ValkeyBloom：指Valkey引擎的RedisBloom 模块，可以高效地判断一个元素是否存在于集合中。</li><li>ValkeyJSON：指Valkey引擎的RedisJSON 模块，允许 Redis 原生支持 JSON 数据格式，方便存储和操作 JSON 对象。</li><li>ValkeySearch：指Valkey引擎的RediSearch 模块，提供全文搜索功能，可以对存储在 Redis 中的数据进行高效的搜索操作。</li></ul>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>扩展模块的启用状态。</p><ul><li>ON：启用。</li><li>OFF：关闭。</li></ul>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>实例是否支持参数 Name 对应的扩展模块。</p><ul><li>true：支持。</li><li>false：不支持。</li></ul>
                     */
                    bool m_isSupport;
                    bool m_isSupportHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_REDIS_V20180412_MODEL_MODULE_H_
