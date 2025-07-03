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

#ifndef TENCENTCLOUD_IGTM_V20231024_MODEL_DESCRIBEADDRESSPOOLLISTREQUEST_H_
#define TENCENTCLOUD_IGTM_V20231024_MODEL_DESCRIBEADDRESSPOOLLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/igtm/v20231024/model/ResourceFilter.h>


namespace TencentCloud
{
    namespace Igtm
    {
        namespace V20231024
        {
            namespace Model
            {
                /**
                * DescribeAddressPoolList请求参数结构体
                */
                class DescribeAddressPoolListRequest : public AbstractModel
                {
                public:
                    DescribeAddressPoolListRequest();
                    ~DescribeAddressPoolListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取告警过滤条件：PoolName：地址池名称；MonitorId：监控器id
                     * @return Filters 告警过滤条件：PoolName：地址池名称；MonitorId：监控器id
                     * 
                     */
                    std::vector<ResourceFilter> GetFilters() const;

                    /**
                     * 设置告警过滤条件：PoolName：地址池名称；MonitorId：监控器id
                     * @param _filters 告警过滤条件：PoolName：地址池名称；MonitorId：监控器id
                     * 
                     */
                    void SetFilters(const std::vector<ResourceFilter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                    /**
                     * 获取页数
                     * @return Offset 页数
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置页数
                     * @param _offset 页数
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
                     * 获取每页数
                     * @return Limit 每页数
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置每页数
                     * @param _limit 每页数
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
                     * 告警过滤条件：PoolName：地址池名称；MonitorId：监控器id
                     */
                    std::vector<ResourceFilter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * 页数
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 每页数
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IGTM_V20231024_MODEL_DESCRIBEADDRESSPOOLLISTREQUEST_H_
