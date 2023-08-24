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

#ifndef TENCENTCLOUD_TAT_V20201028_MODEL_DESCRIBEREGISTERINSTANCESREQUEST_H_
#define TENCENTCLOUD_TAT_V20201028_MODEL_DESCRIBEREGISTERINSTANCESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tat/v20201028/model/Filter.h>


namespace TencentCloud
{
    namespace Tat
    {
        namespace V20201028
        {
            namespace Model
            {
                /**
                * DescribeRegisterInstances请求参数结构体
                */
                class DescribeRegisterInstancesRequest : public AbstractModel
                {
                public:
                    DescribeRegisterInstancesRequest();
                    ~DescribeRegisterInstancesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例id。
                     * @return InstanceIds 实例id。
                     * 
                     */
                    std::vector<std::string> GetInstanceIds() const;

                    /**
                     * 设置实例id。
                     * @param _instanceIds 实例id。
                     * 
                     */
                    void SetInstanceIds(const std::vector<std::string>& _instanceIds);

                    /**
                     * 判断参数 InstanceIds 是否已赋值
                     * @return InstanceIds 是否已赋值
                     * 
                     */
                    bool InstanceIdsHasBeenSet() const;

                    /**
                     * 获取过滤器列表。

- instance-name

按照【实例名称】进行过滤。
类型：String
必选：否

- instance-id

按照【实例ID】进行过滤。
类型：String
必选：否

- register-code-id

按照【注册码ID】进行过滤。
类型：String
必选：否
                     * @return Filters 过滤器列表。

- instance-name

按照【实例名称】进行过滤。
类型：String
必选：否

- instance-id

按照【实例ID】进行过滤。
类型：String
必选：否

- register-code-id

按照【注册码ID】进行过滤。
类型：String
必选：否
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置过滤器列表。

- instance-name

按照【实例名称】进行过滤。
类型：String
必选：否

- instance-id

按照【实例ID】进行过滤。
类型：String
必选：否

- register-code-id

按照【注册码ID】进行过滤。
类型：String
必选：否
                     * @param _filters 过滤器列表。

- instance-name

按照【实例名称】进行过滤。
类型：String
必选：否

- instance-id

按照【实例ID】进行过滤。
类型：String
必选：否

- register-code-id

按照【注册码ID】进行过滤。
类型：String
必选：否
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
                     * 获取偏移量，默认为 0。
                     * @return Offset 偏移量，默认为 0。
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置偏移量，默认为 0。
                     * @param _offset 偏移量，默认为 0。
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
                     * 获取返回数量，默认为 20，最大值为 100。
                     * @return Limit 返回数量，默认为 20，最大值为 100。
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置返回数量，默认为 20，最大值为 100。
                     * @param _limit 返回数量，默认为 20，最大值为 100。
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
                     * 实例id。
                     */
                    std::vector<std::string> m_instanceIds;
                    bool m_instanceIdsHasBeenSet;

                    /**
                     * 过滤器列表。

- instance-name

按照【实例名称】进行过滤。
类型：String
必选：否

- instance-id

按照【实例ID】进行过滤。
类型：String
必选：否

- register-code-id

按照【注册码ID】进行过滤。
类型：String
必选：否
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * 偏移量，默认为 0。
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 返回数量，默认为 20，最大值为 100。
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TAT_V20201028_MODEL_DESCRIBEREGISTERINSTANCESREQUEST_H_
