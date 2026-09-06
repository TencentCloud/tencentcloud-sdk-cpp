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

#ifndef TENCENTCLOUD_DBDC_V20201029_MODEL_DESCRIBEDBCUSTOMDISASTERRECOVERGROUPSREQUEST_H_
#define TENCENTCLOUD_DBDC_V20201029_MODEL_DESCRIBEDBCUSTOMDISASTERRECOVERGROUPSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dbdc/v20201029/model/Filter.h>
#include <tencentcloud/dbdc/v20201029/model/Tag.h>


namespace TencentCloud
{
    namespace Dbdc
    {
        namespace V20201029
        {
            namespace Model
            {
                /**
                * DescribeDBCustomDisasterRecoverGroups请求参数结构体
                */
                class DescribeDBCustomDisasterRecoverGroupsRequest : public AbstractModel
                {
                public:
                    DescribeDBCustomDisasterRecoverGroupsRequest();
                    ~DescribeDBCustomDisasterRecoverGroupsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>置放群组ID</p><p>入参限制：单次数量上限是10</p>
                     * @return DisasterRecoverGroupIds <p>置放群组ID</p><p>入参限制：单次数量上限是10</p>
                     * 
                     */
                    std::vector<std::string> GetDisasterRecoverGroupIds() const;

                    /**
                     * 设置<p>置放群组ID</p><p>入参限制：单次数量上限是10</p>
                     * @param _disasterRecoverGroupIds <p>置放群组ID</p><p>入参限制：单次数量上限是10</p>
                     * 
                     */
                    void SetDisasterRecoverGroupIds(const std::vector<std::string>& _disasterRecoverGroupIds);

                    /**
                     * 判断参数 DisasterRecoverGroupIds 是否已赋值
                     * @return DisasterRecoverGroupIds 是否已赋值
                     * 
                     */
                    bool DisasterRecoverGroupIdsHasBeenSet() const;

                    /**
                     * 获取<p>查询筛选条件。支持的筛选条件包括：</p><ul><li>tag-key：按标签键进行过滤。</li><li>tag-value：按标签值进行过滤。</li></ul><p>入参限制：数量上限为5</p>
                     * @return Filters <p>查询筛选条件。支持的筛选条件包括：</p><ul><li>tag-key：按标签键进行过滤。</li><li>tag-value：按标签值进行过滤。</li></ul><p>入参限制：数量上限为5</p>
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置<p>查询筛选条件。支持的筛选条件包括：</p><ul><li>tag-key：按标签键进行过滤。</li><li>tag-value：按标签值进行过滤。</li></ul><p>入参限制：数量上限为5</p>
                     * @param _filters <p>查询筛选条件。支持的筛选条件包括：</p><ul><li>tag-key：按标签键进行过滤。</li><li>tag-value：按标签值进行过滤。</li></ul><p>入参限制：数量上限为5</p>
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
                     * 获取<p>根据标签键和标签值筛选 DB Custom 置放群组</p><p>入参限制：数量上限为5</p>
                     * @return Tags <p>根据标签键和标签值筛选 DB Custom 置放群组</p><p>入参限制：数量上限为5</p>
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置<p>根据标签键和标签值筛选 DB Custom 置放群组</p><p>入参限制：数量上限为5</p>
                     * @param _tags <p>根据标签键和标签值筛选 DB Custom 置放群组</p><p>入参限制：数量上限为5</p>
                     * 
                     */
                    void SetTags(const std::vector<Tag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取<p>分页偏移量</p>
                     * @return Offset <p>分页偏移量</p>
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置<p>分页偏移量</p>
                     * @param _offset <p>分页偏移量</p>
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
                     * 获取<p>返回数量</p><p>取值范围：[1, 100]</p><p>默认值：20</p>
                     * @return Limit <p>返回数量</p><p>取值范围：[1, 100]</p><p>默认值：20</p>
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置<p>返回数量</p><p>取值范围：[1, 100]</p><p>默认值：20</p>
                     * @param _limit <p>返回数量</p><p>取值范围：[1, 100]</p><p>默认值：20</p>
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
                     * <p>置放群组ID</p><p>入参限制：单次数量上限是10</p>
                     */
                    std::vector<std::string> m_disasterRecoverGroupIds;
                    bool m_disasterRecoverGroupIdsHasBeenSet;

                    /**
                     * <p>查询筛选条件。支持的筛选条件包括：</p><ul><li>tag-key：按标签键进行过滤。</li><li>tag-value：按标签值进行过滤。</li></ul><p>入参限制：数量上限为5</p>
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * <p>根据标签键和标签值筛选 DB Custom 置放群组</p><p>入参限制：数量上限为5</p>
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * <p>分页偏移量</p>
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * <p>返回数量</p><p>取值范围：[1, 100]</p><p>默认值：20</p>
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DBDC_V20201029_MODEL_DESCRIBEDBCUSTOMDISASTERRECOVERGROUPSREQUEST_H_
