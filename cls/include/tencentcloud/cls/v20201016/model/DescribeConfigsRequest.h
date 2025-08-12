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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_DESCRIBECONFIGSREQUEST_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_DESCRIBECONFIGSREQUEST_H_

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
                * DescribeConfigs请求参数结构体
                */
                class DescribeConfigsRequest : public AbstractModel
                {
                public:
                    DescribeConfigsRequest();
                    ~DescribeConfigsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取configName
- 按照【采集配置名称】进行模糊匹配过滤。
- 类型：String
- 必选：否
- 示例：test-config

configId
- 按照【采集配置ID】进行过滤。
- 类型：String
- 必选：否
- 示例：3581a3be-aa41-423b-995a-54ec84da6264

topicId
- 按照【日志主题】进行过滤。
- 类型：String
- 必选：否
- 示例：3b83f9d6-3a4d-47f9-9b7f-285c868b2f9a
- 通过[获取日志主题列表](https://cloud.tencent.com/document/product/614/56454)获取日志主题Id。

每次请求的Filters的上限为10，Filter.Values的上限为5。
                     * @return Filters configName
- 按照【采集配置名称】进行模糊匹配过滤。
- 类型：String
- 必选：否
- 示例：test-config

configId
- 按照【采集配置ID】进行过滤。
- 类型：String
- 必选：否
- 示例：3581a3be-aa41-423b-995a-54ec84da6264

topicId
- 按照【日志主题】进行过滤。
- 类型：String
- 必选：否
- 示例：3b83f9d6-3a4d-47f9-9b7f-285c868b2f9a
- 通过[获取日志主题列表](https://cloud.tencent.com/document/product/614/56454)获取日志主题Id。

每次请求的Filters的上限为10，Filter.Values的上限为5。
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置configName
- 按照【采集配置名称】进行模糊匹配过滤。
- 类型：String
- 必选：否
- 示例：test-config

configId
- 按照【采集配置ID】进行过滤。
- 类型：String
- 必选：否
- 示例：3581a3be-aa41-423b-995a-54ec84da6264

topicId
- 按照【日志主题】进行过滤。
- 类型：String
- 必选：否
- 示例：3b83f9d6-3a4d-47f9-9b7f-285c868b2f9a
- 通过[获取日志主题列表](https://cloud.tencent.com/document/product/614/56454)获取日志主题Id。

每次请求的Filters的上限为10，Filter.Values的上限为5。
                     * @param _filters configName
- 按照【采集配置名称】进行模糊匹配过滤。
- 类型：String
- 必选：否
- 示例：test-config

configId
- 按照【采集配置ID】进行过滤。
- 类型：String
- 必选：否
- 示例：3581a3be-aa41-423b-995a-54ec84da6264

topicId
- 按照【日志主题】进行过滤。
- 类型：String
- 必选：否
- 示例：3b83f9d6-3a4d-47f9-9b7f-285c868b2f9a
- 通过[获取日志主题列表](https://cloud.tencent.com/document/product/614/56454)获取日志主题Id。

每次请求的Filters的上限为10，Filter.Values的上限为5。
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
                     * 获取分页的偏移量，默认值为0
                     * @return Offset 分页的偏移量，默认值为0
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置分页的偏移量，默认值为0
                     * @param _offset 分页的偏移量，默认值为0
                     * 
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取分页单页的限制数目，默认值为20，最大值100
                     * @return Limit 分页单页的限制数目，默认值为20，最大值100
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置分页单页的限制数目，默认值为20，最大值100
                     * @param _limit 分页单页的限制数目，默认值为20，最大值100
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                private:

                    /**
                     * configName
- 按照【采集配置名称】进行模糊匹配过滤。
- 类型：String
- 必选：否
- 示例：test-config

configId
- 按照【采集配置ID】进行过滤。
- 类型：String
- 必选：否
- 示例：3581a3be-aa41-423b-995a-54ec84da6264

topicId
- 按照【日志主题】进行过滤。
- 类型：String
- 必选：否
- 示例：3b83f9d6-3a4d-47f9-9b7f-285c868b2f9a
- 通过[获取日志主题列表](https://cloud.tencent.com/document/product/614/56454)获取日志主题Id。

每次请求的Filters的上限为10，Filter.Values的上限为5。
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * 分页的偏移量，默认值为0
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 分页单页的限制数目，默认值为20，最大值100
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_DESCRIBECONFIGSREQUEST_H_
