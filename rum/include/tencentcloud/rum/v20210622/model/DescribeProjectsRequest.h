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

#ifndef TENCENTCLOUD_RUM_V20210622_MODEL_DESCRIBEPROJECTSREQUEST_H_
#define TENCENTCLOUD_RUM_V20210622_MODEL_DESCRIBEPROJECTSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/rum/v20210622/model/Filter.h>


namespace TencentCloud
{
    namespace Rum
    {
        namespace V20210622
        {
            namespace Model
            {
                /**
                * DescribeProjects请求参数结构体
                */
                class DescribeProjectsRequest : public AbstractModel
                {
                public:
                    DescribeProjectsRequest();
                    ~DescribeProjectsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取分页每页数目，整型
                     * @return Limit 分页每页数目，整型
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置分页每页数目，整型
                     * @param _limit 分页每页数目，整型
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
                     * 获取分页页码，整型
                     * @return Offset 分页页码，整型
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置分页页码，整型
                     * @param _offset 分页页码，整型
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
                     * 获取过滤参数；demo模式传{"Name": "IsDemo", "Values":["1"]}
                     * @return Filters 过滤参数；demo模式传{"Name": "IsDemo", "Values":["1"]}
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置过滤参数；demo模式传{"Name": "IsDemo", "Values":["1"]}
                     * @param _filters 过滤参数；demo模式传{"Name": "IsDemo", "Values":["1"]}
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
                     * 获取该参数已废弃，demo模式请在Filters内注明
                     * @return IsDemo 该参数已废弃，demo模式请在Filters内注明
                     * @deprecated
                     */
                    int64_t GetIsDemo() const;

                    /**
                     * 设置该参数已废弃，demo模式请在Filters内注明
                     * @param _isDemo 该参数已废弃，demo模式请在Filters内注明
                     * @deprecated
                     */
                    void SetIsDemo(const int64_t& _isDemo);

                    /**
                     * 判断参数 IsDemo 是否已赋值
                     * @return IsDemo 是否已赋值
                     * @deprecated
                     */
                    bool IsDemoHasBeenSet() const;

                private:

                    /**
                     * 分页每页数目，整型
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 分页页码，整型
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 过滤参数；demo模式传{"Name": "IsDemo", "Values":["1"]}
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * 该参数已废弃，demo模式请在Filters内注明
                     */
                    int64_t m_isDemo;
                    bool m_isDemoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_RUM_V20210622_MODEL_DESCRIBEPROJECTSREQUEST_H_
