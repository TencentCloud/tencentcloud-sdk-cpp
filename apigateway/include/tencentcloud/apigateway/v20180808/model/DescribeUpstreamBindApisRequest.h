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

#ifndef TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_DESCRIBEUPSTREAMBINDAPISREQUEST_H_
#define TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_DESCRIBEUPSTREAMBINDAPISREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/apigateway/v20180808/model/Filter.h>


namespace TencentCloud
{
    namespace Apigateway
    {
        namespace V20180808
        {
            namespace Model
            {
                /**
                * DescribeUpstreamBindApis请求参数结构体
                */
                class DescribeUpstreamBindApisRequest : public AbstractModel
                {
                public:
                    DescribeUpstreamBindApisRequest();
                    ~DescribeUpstreamBindApisRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取分页大小
                     * @return Limit 分页大小
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置分页大小
                     * @param Limit 分页大小
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取分页起始位置
                     * @return Offset 分页起始位置
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置分页起始位置
                     * @param Offset 分页起始位置
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取后端通道ID
                     * @return UpstreamId 后端通道ID
                     */
                    std::string GetUpstreamId() const;

                    /**
                     * 设置后端通道ID
                     * @param UpstreamId 后端通道ID
                     */
                    void SetUpstreamId(const std::string& _upstreamId);

                    /**
                     * 判断参数 UpstreamId 是否已赋值
                     * @return UpstreamId 是否已赋值
                     */
                    bool UpstreamIdHasBeenSet() const;

                    /**
                     * 获取ServiceId和ApiId过滤查询
                     * @return Filters ServiceId和ApiId过滤查询
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置ServiceId和ApiId过滤查询
                     * @param Filters ServiceId和ApiId过滤查询
                     */
                    void SetFilters(const std::vector<Filter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     */
                    bool FiltersHasBeenSet() const;

                private:

                    /**
                     * 分页大小
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 分页起始位置
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 后端通道ID
                     */
                    std::string m_upstreamId;
                    bool m_upstreamIdHasBeenSet;

                    /**
                     * ServiceId和ApiId过滤查询
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_DESCRIBEUPSTREAMBINDAPISREQUEST_H_
