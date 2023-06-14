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

#ifndef TENCENTCLOUD_GSE_V20191112_MODEL_DESCRIBEGAMESERVERSESSIONQUEUESREQUEST_H_
#define TENCENTCLOUD_GSE_V20191112_MODEL_DESCRIBEGAMESERVERSESSIONQUEUESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/gse/v20191112/model/Filter.h>


namespace TencentCloud
{
    namespace Gse
    {
        namespace V20191112
        {
            namespace Model
            {
                /**
                * DescribeGameServerSessionQueues请求参数结构体
                */
                class DescribeGameServerSessionQueuesRequest : public AbstractModel
                {
                public:
                    DescribeGameServerSessionQueuesRequest();
                    ~DescribeGameServerSessionQueuesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取游戏服务器会话队列名称数组，单个名字长度1~128
                     * @return Names 游戏服务器会话队列名称数组，单个名字长度1~128
                     * 
                     */
                    std::vector<std::string> GetNames() const;

                    /**
                     * 设置游戏服务器会话队列名称数组，单个名字长度1~128
                     * @param _names 游戏服务器会话队列名称数组，单个名字长度1~128
                     * 
                     */
                    void SetNames(const std::vector<std::string>& _names);

                    /**
                     * 判断参数 Names 是否已赋值
                     * @return Names 是否已赋值
                     * 
                     */
                    bool NamesHasBeenSet() const;

                    /**
                     * 获取结果返回最大数量，最小值0，最大值100
                     * @return Limit 结果返回最大数量，最小值0，最大值100
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置结果返回最大数量，最小值0，最大值100
                     * @param _limit 结果返回最大数量，最小值0，最大值100
                     * 
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取返回结果偏移，最小值0
                     * @return Offset 返回结果偏移，最小值0
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置返回结果偏移，最小值0
                     * @param _offset 返回结果偏移，最小值0
                     * 
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取资源过滤字段，可以按照资源名称、资源ID和标签进行过滤- 资源名称过滤    - Key: 固定字符串 "resource:name"    - Values: 资源名称数组（游戏服务器会话队列支持多个名称的过滤）- 标签过滤    - 通过标签键过滤        - Key: 固定字符串 "tag:key"        - Values 不传    - 通过标签键值过滤        - Key: 固定字符串 "tag:key-value"        - Values: 标签键值对数组，例如 ["key1:value1", "key1:value2", "key2:value2"]
                     * @return Filters 资源过滤字段，可以按照资源名称、资源ID和标签进行过滤- 资源名称过滤    - Key: 固定字符串 "resource:name"    - Values: 资源名称数组（游戏服务器会话队列支持多个名称的过滤）- 标签过滤    - 通过标签键过滤        - Key: 固定字符串 "tag:key"        - Values 不传    - 通过标签键值过滤        - Key: 固定字符串 "tag:key-value"        - Values: 标签键值对数组，例如 ["key1:value1", "key1:value2", "key2:value2"]
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置资源过滤字段，可以按照资源名称、资源ID和标签进行过滤- 资源名称过滤    - Key: 固定字符串 "resource:name"    - Values: 资源名称数组（游戏服务器会话队列支持多个名称的过滤）- 标签过滤    - 通过标签键过滤        - Key: 固定字符串 "tag:key"        - Values 不传    - 通过标签键值过滤        - Key: 固定字符串 "tag:key-value"        - Values: 标签键值对数组，例如 ["key1:value1", "key1:value2", "key2:value2"]
                     * @param _filters 资源过滤字段，可以按照资源名称、资源ID和标签进行过滤- 资源名称过滤    - Key: 固定字符串 "resource:name"    - Values: 资源名称数组（游戏服务器会话队列支持多个名称的过滤）- 标签过滤    - 通过标签键过滤        - Key: 固定字符串 "tag:key"        - Values 不传    - 通过标签键值过滤        - Key: 固定字符串 "tag:key-value"        - Values: 标签键值对数组，例如 ["key1:value1", "key1:value2", "key2:value2"]
                     * 
                     */
                    void SetFilters(const std::vector<Filter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                private:

                    /**
                     * 游戏服务器会话队列名称数组，单个名字长度1~128
                     */
                    std::vector<std::string> m_names;
                    bool m_namesHasBeenSet;

                    /**
                     * 结果返回最大数量，最小值0，最大值100
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 返回结果偏移，最小值0
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 资源过滤字段，可以按照资源名称、资源ID和标签进行过滤- 资源名称过滤    - Key: 固定字符串 "resource:name"    - Values: 资源名称数组（游戏服务器会话队列支持多个名称的过滤）- 标签过滤    - 通过标签键过滤        - Key: 固定字符串 "tag:key"        - Values 不传    - 通过标签键值过滤        - Key: 固定字符串 "tag:key-value"        - Values: 标签键值对数组，例如 ["key1:value1", "key1:value2", "key2:value2"]
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GSE_V20191112_MODEL_DESCRIBEGAMESERVERSESSIONQUEUESREQUEST_H_
