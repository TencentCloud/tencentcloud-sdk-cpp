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

#ifndef TENCENTCLOUD_CIS_V20180408_MODEL_DESCRIBECONTAINERINSTANCESREQUEST_H_
#define TENCENTCLOUD_CIS_V20180408_MODEL_DESCRIBECONTAINERINSTANCESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cis/v20180408/model/Filter.h>


namespace TencentCloud
{
    namespace Cis
    {
        namespace V20180408
        {
            namespace Model
            {
                /**
                * DescribeContainerInstances请求参数结构体
                */
                class DescribeContainerInstancesRequest : public AbstractModel
                {
                public:
                    DescribeContainerInstancesRequest();
                    ~DescribeContainerInstancesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取偏移量，默认为0
                     * @return Offset 偏移量，默认为0
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置偏移量，默认为0
                     * @param _offset 偏移量，默认为0
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
                     * 获取返回数量，默认为10
                     * @return Limit 返回数量，默认为10
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置返回数量，默认为10
                     * @param _limit 返回数量，默认为10
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
                     * 获取过滤条件。
- Zone - String - 是否必填：否 -（过滤条件）按照可用区过滤。
- VpcId - String - 是否必填：否 -（过滤条件）按照VpcId过滤。
- InstanceName - String - 是否必填：否 -（过滤条件）按照容器实例名称做模糊查询。
                     * @return Filters 过滤条件。
- Zone - String - 是否必填：否 -（过滤条件）按照可用区过滤。
- VpcId - String - 是否必填：否 -（过滤条件）按照VpcId过滤。
- InstanceName - String - 是否必填：否 -（过滤条件）按照容器实例名称做模糊查询。
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置过滤条件。
- Zone - String - 是否必填：否 -（过滤条件）按照可用区过滤。
- VpcId - String - 是否必填：否 -（过滤条件）按照VpcId过滤。
- InstanceName - String - 是否必填：否 -（过滤条件）按照容器实例名称做模糊查询。
                     * @param _filters 过滤条件。
- Zone - String - 是否必填：否 -（过滤条件）按照可用区过滤。
- VpcId - String - 是否必填：否 -（过滤条件）按照VpcId过滤。
- InstanceName - String - 是否必填：否 -（过滤条件）按照容器实例名称做模糊查询。
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
                     * 偏移量，默认为0
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 返回数量，默认为10
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 过滤条件。
- Zone - String - 是否必填：否 -（过滤条件）按照可用区过滤。
- VpcId - String - 是否必填：否 -（过滤条件）按照VpcId过滤。
- InstanceName - String - 是否必填：否 -（过滤条件）按照容器实例名称做模糊查询。
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CIS_V20180408_MODEL_DESCRIBECONTAINERINSTANCESREQUEST_H_
