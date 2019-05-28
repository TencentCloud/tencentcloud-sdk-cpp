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

#ifndef TENCENTCLOUD_AS_V20180419_MODEL_DESCRIBEPAIINSTANCESREQUEST_H_
#define TENCENTCLOUD_AS_V20180419_MODEL_DESCRIBEPAIINSTANCESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/as/v20180419/model/Filter.h>


namespace TencentCloud
{
    namespace As
    {
        namespace V20180419
        {
            namespace Model
            {
                /**
                * DescribePaiInstances请求参数结构体
                */
                class DescribePaiInstancesRequest : public AbstractModel
                {
                public:
                    DescribePaiInstancesRequest();
                    ~DescribePaiInstancesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取依据PAI实例的实例ID进行查询。
                     * @return InstanceIds 依据PAI实例的实例ID进行查询。
                     */
                    std::vector<std::string> GetInstanceIds() const;

                    /**
                     * 设置依据PAI实例的实例ID进行查询。
                     * @param InstanceIds 依据PAI实例的实例ID进行查询。
                     */
                    void SetInstanceIds(const std::vector<std::string>& _instanceIds);

                    /**
                     * 判断参数 InstanceIds 是否已赋值
                     * @return InstanceIds 是否已赋值
                     */
                    bool InstanceIdsHasBeenSet() const;

                    /**
                     * 获取过滤条件。
                     * @return Filters 过滤条件。
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置过滤条件。
                     * @param Filters 过滤条件。
                     */
                    void SetFilters(const std::vector<Filter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     */
                    bool FiltersHasBeenSet() const;

                    /**
                     * 获取返回数量，默认为20，最大值为100。
                     * @return Limit 返回数量，默认为20，最大值为100。
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置返回数量，默认为20，最大值为100。
                     * @param Limit 返回数量，默认为20，最大值为100。
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取偏移量，默认为0。
                     * @return Offset 偏移量，默认为0。
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置偏移量，默认为0。
                     * @param Offset 偏移量，默认为0。
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     */
                    bool OffsetHasBeenSet() const;

                private:

                    /**
                     * 依据PAI实例的实例ID进行查询。
                     */
                    std::vector<std::string> m_instanceIds;
                    bool m_instanceIdsHasBeenSet;

                    /**
                     * 过滤条件。
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * 返回数量，默认为20，最大值为100。
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 偏移量，默认为0。
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AS_V20180419_MODEL_DESCRIBEPAIINSTANCESREQUEST_H_
