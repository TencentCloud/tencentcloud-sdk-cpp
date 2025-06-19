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

#ifndef TENCENTCLOUD_GS_V20191118_MODEL_DESCRIBEANDROIDAPPSREQUEST_H_
#define TENCENTCLOUD_GS_V20191118_MODEL_DESCRIBEANDROIDAPPSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/gs/v20191118/model/Filter.h>


namespace TencentCloud
{
    namespace Gs
    {
        namespace V20191118
        {
            namespace Model
            {
                /**
                * DescribeAndroidApps请求参数结构体
                */
                class DescribeAndroidAppsRequest : public AbstractModel
                {
                public:
                    DescribeAndroidAppsRequest();
                    ~DescribeAndroidAppsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取分页偏移
                     * @return Offset 分页偏移
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置分页偏移
                     * @param _offset 分页偏移
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
                     * 获取每页数量
                     * @return Limit 每页数量
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置每页数量
                     * @param _limit 每页数量
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
                     * 获取应用ID数组
                     * @return AndroidAppIds 应用ID数组
                     * 
                     */
                    std::vector<std::string> GetAndroidAppIds() const;

                    /**
                     * 设置应用ID数组
                     * @param _androidAppIds 应用ID数组
                     * 
                     */
                    void SetAndroidAppIds(const std::vector<std::string>& _androidAppIds);

                    /**
                     * 判断参数 AndroidAppIds 是否已赋值
                     * @return AndroidAppIds 是否已赋值
                     * 
                     */
                    bool AndroidAppIdsHasBeenSet() const;

                    /**
                     * 获取过滤条件，支持过滤的字段有：UserId、State、UpdateState、Name、AppMode 。其中 Name 为模糊匹配，其他参数为精确匹配。
                     * @return Filters 过滤条件，支持过滤的字段有：UserId、State、UpdateState、Name、AppMode 。其中 Name 为模糊匹配，其他参数为精确匹配。
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置过滤条件，支持过滤的字段有：UserId、State、UpdateState、Name、AppMode 。其中 Name 为模糊匹配，其他参数为精确匹配。
                     * @param _filters 过滤条件，支持过滤的字段有：UserId、State、UpdateState、Name、AppMode 。其中 Name 为模糊匹配，其他参数为精确匹配。
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
                     * 分页偏移
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 每页数量
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 应用ID数组
                     */
                    std::vector<std::string> m_androidAppIds;
                    bool m_androidAppIdsHasBeenSet;

                    /**
                     * 过滤条件，支持过滤的字段有：UserId、State、UpdateState、Name、AppMode 。其中 Name 为模糊匹配，其他参数为精确匹配。
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GS_V20191118_MODEL_DESCRIBEANDROIDAPPSREQUEST_H_
