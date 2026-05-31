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

#ifndef TENCENTCLOUD_TOKENHUB_V20260322_MODEL_DESCRIBETOKENPLANAPIKEYLISTREQUEST_H_
#define TENCENTCLOUD_TOKENHUB_V20260322_MODEL_DESCRIBETOKENPLANAPIKEYLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tokenhub/v20260322/model/RequestFilter.h>
#include <tencentcloud/tokenhub/v20260322/model/RequestSort.h>


namespace TencentCloud
{
    namespace Tokenhub
    {
        namespace V20260322
        {
            namespace Model
            {
                /**
                * DescribeTokenPlanApiKeyList请求参数结构体
                */
                class DescribeTokenPlanApiKeyListRequest : public AbstractModel
                {
                public:
                    DescribeTokenPlanApiKeyListRequest();
                    ~DescribeTokenPlanApiKeyListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取套餐 ID。可通过DescribeTokenPlanList接口获取。
                     * @return TeamId 套餐 ID。可通过DescribeTokenPlanList接口获取。
                     * 
                     */
                    std::string GetTeamId() const;

                    /**
                     * 设置套餐 ID。可通过DescribeTokenPlanList接口获取。
                     * @param _teamId 套餐 ID。可通过DescribeTokenPlanList接口获取。
                     * 
                     */
                    void SetTeamId(const std::string& _teamId);

                    /**
                     * 判断参数 TeamId 是否已赋值
                     * @return TeamId 是否已赋值
                     * 
                     */
                    bool TeamIdHasBeenSet() const;

                    /**
                     * 获取分页查询偏移量，默认为 0。
                     * @return Offset 分页查询偏移量，默认为 0。
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置分页查询偏移量，默认为 0。
                     * @param _offset 分页查询偏移量，默认为 0。
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
                     * 获取分页查询返回数量，默认为 20，最大值为 100。
                     * @return Limit 分页查询返回数量，默认为 20，最大值为 100。
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置分页查询返回数量，默认为 20，最大值为 100。
                     * @param _limit 分页查询返回数量，默认为 20，最大值为 100。
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取分页查询过滤条件列表。支持的过滤字段：ApiKeyId （API Key ID）、Name （API Key 名称）、Status （API Key是否可用）、StopReason （API Key停用原因）、UseStatus （API Key用户侧开关）。
                     * @return Filters 分页查询过滤条件列表。支持的过滤字段：ApiKeyId （API Key ID）、Name （API Key 名称）、Status （API Key是否可用）、StopReason （API Key停用原因）、UseStatus （API Key用户侧开关）。
                     * 
                     */
                    std::vector<RequestFilter> GetFilters() const;

                    /**
                     * 设置分页查询过滤条件列表。支持的过滤字段：ApiKeyId （API Key ID）、Name （API Key 名称）、Status （API Key是否可用）、StopReason （API Key停用原因）、UseStatus （API Key用户侧开关）。
                     * @param _filters 分页查询过滤条件列表。支持的过滤字段：ApiKeyId （API Key ID）、Name （API Key 名称）、Status （API Key是否可用）、StopReason （API Key停用原因）、UseStatus （API Key用户侧开关）。
                     * 
                     */
                    void SetFilters(const std::vector<RequestFilter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                    /**
                     * 获取分页查询排序条件列表。支持的排序字段：CreatedAt（创建时间）、UpdatedAt（更新时间）。默认按 CreatedAt 降序。
                     * @return Sorts 分页查询排序条件列表。支持的排序字段：CreatedAt（创建时间）、UpdatedAt（更新时间）。默认按 CreatedAt 降序。
                     * 
                     */
                    std::vector<RequestSort> GetSorts() const;

                    /**
                     * 设置分页查询排序条件列表。支持的排序字段：CreatedAt（创建时间）、UpdatedAt（更新时间）。默认按 CreatedAt 降序。
                     * @param _sorts 分页查询排序条件列表。支持的排序字段：CreatedAt（创建时间）、UpdatedAt（更新时间）。默认按 CreatedAt 降序。
                     * 
                     */
                    void SetSorts(const std::vector<RequestSort>& _sorts);

                    /**
                     * 判断参数 Sorts 是否已赋值
                     * @return Sorts 是否已赋值
                     * 
                     */
                    bool SortsHasBeenSet() const;

                private:

                    /**
                     * 套餐 ID。可通过DescribeTokenPlanList接口获取。
                     */
                    std::string m_teamId;
                    bool m_teamIdHasBeenSet;

                    /**
                     * 分页查询偏移量，默认为 0。
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 分页查询返回数量，默认为 20，最大值为 100。
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 分页查询过滤条件列表。支持的过滤字段：ApiKeyId （API Key ID）、Name （API Key 名称）、Status （API Key是否可用）、StopReason （API Key停用原因）、UseStatus （API Key用户侧开关）。
                     */
                    std::vector<RequestFilter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * 分页查询排序条件列表。支持的排序字段：CreatedAt（创建时间）、UpdatedAt（更新时间）。默认按 CreatedAt 降序。
                     */
                    std::vector<RequestSort> m_sorts;
                    bool m_sortsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TOKENHUB_V20260322_MODEL_DESCRIBETOKENPLANAPIKEYLISTREQUEST_H_
