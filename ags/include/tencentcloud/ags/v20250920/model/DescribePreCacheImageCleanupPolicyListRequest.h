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

#ifndef TENCENTCLOUD_AGS_V20250920_MODEL_DESCRIBEPRECACHEIMAGECLEANUPPOLICYLISTREQUEST_H_
#define TENCENTCLOUD_AGS_V20250920_MODEL_DESCRIBEPRECACHEIMAGECLEANUPPOLICYLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ags/v20250920/model/Filter.h>


namespace TencentCloud
{
    namespace Ags
    {
        namespace V20250920
        {
            namespace Model
            {
                /**
                * DescribePreCacheImageCleanupPolicyList请求参数结构体
                */
                class DescribePreCacheImageCleanupPolicyListRequest : public AbstractModel
                {
                public:
                    DescribePreCacheImageCleanupPolicyListRequest();
                    ~DescribePreCacheImageCleanupPolicyListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>策略 ID 列表</p><p>入参限制：最多 100 个，每个 1～64 字符；指定时 Offset、Limit、Filters 不生效，不存在或已删除的 ID 被忽略</p>
                     * @return CleanupPolicyIds <p>策略 ID 列表</p><p>入参限制：最多 100 个，每个 1～64 字符；指定时 Offset、Limit、Filters 不生效，不存在或已删除的 ID 被忽略</p>
                     * 
                     */
                    std::vector<std::string> GetCleanupPolicyIds() const;

                    /**
                     * 设置<p>策略 ID 列表</p><p>入参限制：最多 100 个，每个 1～64 字符；指定时 Offset、Limit、Filters 不生效，不存在或已删除的 ID 被忽略</p>
                     * @param _cleanupPolicyIds <p>策略 ID 列表</p><p>入参限制：最多 100 个，每个 1～64 字符；指定时 Offset、Limit、Filters 不生效，不存在或已删除的 ID 被忽略</p>
                     * 
                     */
                    void SetCleanupPolicyIds(const std::vector<std::string>& _cleanupPolicyIds);

                    /**
                     * 判断参数 CleanupPolicyIds 是否已赋值
                     * @return CleanupPolicyIds 是否已赋值
                     * 
                     */
                    bool CleanupPolicyIdsHasBeenSet() const;

                    /**
                     * 获取<p>过滤器</p><p>入参限制：Filter={Name:String,Values:String[]}；最多 10 个 Filter，每个 Filter 的 Name 和 Values 必填，Values 最多 10 个、每个最多 255 字符</p>
                     * @return Filters <p>过滤器</p><p>入参限制：Filter={Name:String,Values:String[]}；最多 10 个 Filter，每个 Filter 的 Name 和 Values 必填，Values 最多 10 个、每个最多 255 字符</p>
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置<p>过滤器</p><p>入参限制：Filter={Name:String,Values:String[]}；最多 10 个 Filter，每个 Filter 的 Name 和 Values 必填，Values 最多 10 个、每个最多 255 字符</p>
                     * @param _filters <p>过滤器</p><p>入参限制：Filter={Name:String,Values:String[]}；最多 10 个 Filter，每个 Filter 的 Name 和 Values 必填，Values 最多 10 个、每个最多 255 字符</p>
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
                     * 获取<p>偏移值</p><p>默认值：0</p>
                     * @return Offset <p>偏移值</p><p>默认值：0</p>
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置<p>偏移值</p><p>默认值：0</p>
                     * @param _offset <p>偏移值</p><p>默认值：0</p>
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
                     * 获取<p>返回数量限制</p><p>取值范围：[1, 100]</p><p>默认值：20</p>
                     * @return Limit <p>返回数量限制</p><p>取值范围：[1, 100]</p><p>默认值：20</p>
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置<p>返回数量限制</p><p>取值范围：[1, 100]</p><p>默认值：20</p>
                     * @param _limit <p>返回数量限制</p><p>取值范围：[1, 100]</p><p>默认值：20</p>
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
                     * <p>策略 ID 列表</p><p>入参限制：最多 100 个，每个 1～64 字符；指定时 Offset、Limit、Filters 不生效，不存在或已删除的 ID 被忽略</p>
                     */
                    std::vector<std::string> m_cleanupPolicyIds;
                    bool m_cleanupPolicyIdsHasBeenSet;

                    /**
                     * <p>过滤器</p><p>入参限制：Filter={Name:String,Values:String[]}；最多 10 个 Filter，每个 Filter 的 Name 和 Values 必填，Values 最多 10 个、每个最多 255 字符</p>
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * <p>偏移值</p><p>默认值：0</p>
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * <p>返回数量限制</p><p>取值范围：[1, 100]</p><p>默认值：20</p>
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AGS_V20250920_MODEL_DESCRIBEPRECACHEIMAGECLEANUPPOLICYLISTREQUEST_H_
