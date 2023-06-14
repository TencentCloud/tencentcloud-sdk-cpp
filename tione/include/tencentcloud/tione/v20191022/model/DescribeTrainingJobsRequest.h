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

#ifndef TENCENTCLOUD_TIONE_V20191022_MODEL_DESCRIBETRAININGJOBSREQUEST_H_
#define TENCENTCLOUD_TIONE_V20191022_MODEL_DESCRIBETRAININGJOBSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tione/v20191022/model/Filter.h>


namespace TencentCloud
{
    namespace Tione
    {
        namespace V20191022
        {
            namespace Model
            {
                /**
                * DescribeTrainingJobs请求参数结构体
                */
                class DescribeTrainingJobsRequest : public AbstractModel
                {
                public:
                    DescribeTrainingJobsRequest();
                    ~DescribeTrainingJobsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取偏移量
                     * @return Offset 偏移量
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置偏移量
                     * @param _offset 偏移量
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
                     * 获取限制数目
                     * @return Limit 限制数目
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置限制数目
                     * @param _limit 限制数目
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
                     * 获取创建时间晚于
                     * @return CreationTimeAfter 创建时间晚于
                     * 
                     */
                    std::string GetCreationTimeAfter() const;

                    /**
                     * 设置创建时间晚于
                     * @param _creationTimeAfter 创建时间晚于
                     * 
                     */
                    void SetCreationTimeAfter(const std::string& _creationTimeAfter);

                    /**
                     * 判断参数 CreationTimeAfter 是否已赋值
                     * @return CreationTimeAfter 是否已赋值
                     * 
                     */
                    bool CreationTimeAfterHasBeenSet() const;

                    /**
                     * 获取创建时间早于
                     * @return CreationTimeBefore 创建时间早于
                     * 
                     */
                    std::string GetCreationTimeBefore() const;

                    /**
                     * 设置创建时间早于
                     * @param _creationTimeBefore 创建时间早于
                     * 
                     */
                    void SetCreationTimeBefore(const std::string& _creationTimeBefore);

                    /**
                     * 判断参数 CreationTimeBefore 是否已赋值
                     * @return CreationTimeBefore 是否已赋值
                     * 
                     */
                    bool CreationTimeBeforeHasBeenSet() const;

                    /**
                     * 获取根据名称过滤
                     * @return NameContains 根据名称过滤
                     * 
                     */
                    std::string GetNameContains() const;

                    /**
                     * 设置根据名称过滤
                     * @param _nameContains 根据名称过滤
                     * 
                     */
                    void SetNameContains(const std::string& _nameContains);

                    /**
                     * 判断参数 NameContains 是否已赋值
                     * @return NameContains 是否已赋值
                     * 
                     */
                    bool NameContainsHasBeenSet() const;

                    /**
                     * 获取根据状态过滤
                     * @return StatusEquals 根据状态过滤
                     * 
                     */
                    std::string GetStatusEquals() const;

                    /**
                     * 设置根据状态过滤
                     * @param _statusEquals 根据状态过滤
                     * 
                     */
                    void SetStatusEquals(const std::string& _statusEquals);

                    /**
                     * 判断参数 StatusEquals 是否已赋值
                     * @return StatusEquals 是否已赋值
                     * 
                     */
                    bool StatusEqualsHasBeenSet() const;

                    /**
                     * 获取过滤条件。
instance-name - String - 是否必填：否 -（过滤条件）按照名称过滤。
search-by-name - String - 是否必填：否 -（过滤条件）按照名称检索，模糊匹配。
                     * @return Filters 过滤条件。
instance-name - String - 是否必填：否 -（过滤条件）按照名称过滤。
search-by-name - String - 是否必填：否 -（过滤条件）按照名称检索，模糊匹配。
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置过滤条件。
instance-name - String - 是否必填：否 -（过滤条件）按照名称过滤。
search-by-name - String - 是否必填：否 -（过滤条件）按照名称检索，模糊匹配。
                     * @param _filters 过滤条件。
instance-name - String - 是否必填：否 -（过滤条件）按照名称过滤。
search-by-name - String - 是否必填：否 -（过滤条件）按照名称检索，模糊匹配。
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
                     * 偏移量
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 限制数目
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 创建时间晚于
                     */
                    std::string m_creationTimeAfter;
                    bool m_creationTimeAfterHasBeenSet;

                    /**
                     * 创建时间早于
                     */
                    std::string m_creationTimeBefore;
                    bool m_creationTimeBeforeHasBeenSet;

                    /**
                     * 根据名称过滤
                     */
                    std::string m_nameContains;
                    bool m_nameContainsHasBeenSet;

                    /**
                     * 根据状态过滤
                     */
                    std::string m_statusEquals;
                    bool m_statusEqualsHasBeenSet;

                    /**
                     * 过滤条件。
instance-name - String - 是否必填：否 -（过滤条件）按照名称过滤。
search-by-name - String - 是否必填：否 -（过滤条件）按照名称检索，模糊匹配。
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIONE_V20191022_MODEL_DESCRIBETRAININGJOBSREQUEST_H_
