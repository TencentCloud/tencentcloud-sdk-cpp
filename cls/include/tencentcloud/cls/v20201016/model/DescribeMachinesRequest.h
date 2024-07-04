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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_DESCRIBEMACHINESREQUEST_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_DESCRIBEMACHINESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cls/v20201016/model/Filter.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * DescribeMachines请求参数结构体
                */
                class DescribeMachinesRequest : public AbstractModel
                {
                public:
                    DescribeMachinesRequest();
                    ~DescribeMachinesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取查询的机器组ID
                     * @return GroupId 查询的机器组ID
                     * 
                     */
                    std::string GetGroupId() const;

                    /**
                     * 设置查询的机器组ID
                     * @param _groupId 查询的机器组ID
                     * 
                     */
                    void SetGroupId(const std::string& _groupId);

                    /**
                     * 判断参数 GroupId 是否已赋值
                     * @return GroupId 是否已赋值
                     * 
                     */
                    bool GroupIdHasBeenSet() const;

                    /**
                     * 获取ip
- 按照【ip】进行过滤。
- 类型：String
- 必选：否

instance
- 按照【instance】进行过滤。
- 类型：String
- 必选：否

version
- 按照【LogListener版本】进行过滤。
- 类型：String
- 必选：否

status
- 按照【状态】进行过滤。
- 类型：String
- 必选：否
- 可选值：0：离线，1：正常

offlineTime
- 按照【机器离线时间】进行过滤。
- 类型：String
- 必选：否
- - 可选值：0：无离线时间，12：12小时内，24：一天内，48：两天内，99：两天前

每次请求的Filters的上限为10，Filter.Values的上限为100。
                     * @return Filters ip
- 按照【ip】进行过滤。
- 类型：String
- 必选：否

instance
- 按照【instance】进行过滤。
- 类型：String
- 必选：否

version
- 按照【LogListener版本】进行过滤。
- 类型：String
- 必选：否

status
- 按照【状态】进行过滤。
- 类型：String
- 必选：否
- 可选值：0：离线，1：正常

offlineTime
- 按照【机器离线时间】进行过滤。
- 类型：String
- 必选：否
- - 可选值：0：无离线时间，12：12小时内，24：一天内，48：两天内，99：两天前

每次请求的Filters的上限为10，Filter.Values的上限为100。
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置ip
- 按照【ip】进行过滤。
- 类型：String
- 必选：否

instance
- 按照【instance】进行过滤。
- 类型：String
- 必选：否

version
- 按照【LogListener版本】进行过滤。
- 类型：String
- 必选：否

status
- 按照【状态】进行过滤。
- 类型：String
- 必选：否
- 可选值：0：离线，1：正常

offlineTime
- 按照【机器离线时间】进行过滤。
- 类型：String
- 必选：否
- - 可选值：0：无离线时间，12：12小时内，24：一天内，48：两天内，99：两天前

每次请求的Filters的上限为10，Filter.Values的上限为100。
                     * @param _filters ip
- 按照【ip】进行过滤。
- 类型：String
- 必选：否

instance
- 按照【instance】进行过滤。
- 类型：String
- 必选：否

version
- 按照【LogListener版本】进行过滤。
- 类型：String
- 必选：否

status
- 按照【状态】进行过滤。
- 类型：String
- 必选：否
- 可选值：0：离线，1：正常

offlineTime
- 按照【机器离线时间】进行过滤。
- 类型：String
- 必选：否
- - 可选值：0：无离线时间，12：12小时内，24：一天内，48：两天内，99：两天前

每次请求的Filters的上限为10，Filter.Values的上限为100。
                     * 
                     */
                    void SetFilters(const std::vector<Filter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                    /**
                     * 获取分页的偏移量。
                     * @return Offset 分页的偏移量。
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置分页的偏移量。
                     * @param _offset 分页的偏移量。
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
                     * 获取分页单页限制数目。最大支持100
                     * @return Limit 分页单页限制数目。最大支持100
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置分页单页限制数目。最大支持100
                     * @param _limit 分页单页限制数目。最大支持100
                     * 
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                private:

                    /**
                     * 查询的机器组ID
                     */
                    std::string m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * ip
- 按照【ip】进行过滤。
- 类型：String
- 必选：否

instance
- 按照【instance】进行过滤。
- 类型：String
- 必选：否

version
- 按照【LogListener版本】进行过滤。
- 类型：String
- 必选：否

status
- 按照【状态】进行过滤。
- 类型：String
- 必选：否
- 可选值：0：离线，1：正常

offlineTime
- 按照【机器离线时间】进行过滤。
- 类型：String
- 必选：否
- - 可选值：0：无离线时间，12：12小时内，24：一天内，48：两天内，99：两天前

每次请求的Filters的上限为10，Filter.Values的上限为100。
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * 分页的偏移量。
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 分页单页限制数目。最大支持100
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_DESCRIBEMACHINESREQUEST_H_
