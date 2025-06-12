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
                     * 获取托管实例 id。

每次请求的上限为 100。

参数不支持同时指定 `InstanceIds` 和 `Filters` 。

                     * @return InstanceIds 托管实例 id。

每次请求的上限为 100。

参数不支持同时指定 `InstanceIds` 和 `Filters` 。

                     * 
                     */
                    std::vector<std::string> GetInstanceIds() const;

                    /**
                     * 设置托管实例 id。

每次请求的上限为 100。

参数不支持同时指定 `InstanceIds` 和 `Filters` 。

                     * @param _instanceIds 托管实例 id。

每次请求的上限为 100。

参数不支持同时指定 `InstanceIds` 和 `Filters` 。

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
                     * 获取过滤器列表。每次请求的 `Filters` 的上限为 10，`Filter.Values` 的上限为 5。参数不支持同时指定 `InstanceIds` 和 `Filters` 。


- instance-name

按照【托管实例名称】进行过滤。
类型：String
必选：否

- instance-id

按照【托管实例ID】进行过滤。
类型：String
必选：否

- register-status

按照【托管实例状态】进行过滤，取值：Online | Offline。
类型：String
必选：否

- local-ip

按照【托管实例网卡IP】进行过滤。
类型：String
必选：否

- register-code-id

按照【托管实例注册码ID】进行过滤。可通过 [DescribeRegisterCodes(查询注册码)](https://cloud.tencent.com/document/api/1340/96925) 接口获取。
类型：String
必选：否

- sys-name

按照【操作系统类型】进行过滤，取值：Linux | Windows。
类型：String
必选：否

- tag-key

按照【标签键】进行过滤。
类型：String
必选：否

- tag-value

按照【标签值】进行过滤。
类型：String
必选：否

- tag:tag-key

按照【标签键值对】进行过滤。 tag-key使用具体的标签键进行替换。
类型：String
必选：否

例如 Filter 为 {"Name": "tag:key1", "Values": ["v1", "v2"] } ，即查询所有标签为 key1:v1 或 key1:v2 的资源。


                     * @return Filters 过滤器列表。每次请求的 `Filters` 的上限为 10，`Filter.Values` 的上限为 5。参数不支持同时指定 `InstanceIds` 和 `Filters` 。


- instance-name

按照【托管实例名称】进行过滤。
类型：String
必选：否

- instance-id

按照【托管实例ID】进行过滤。
类型：String
必选：否

- register-status

按照【托管实例状态】进行过滤，取值：Online | Offline。
类型：String
必选：否

- local-ip

按照【托管实例网卡IP】进行过滤。
类型：String
必选：否

- register-code-id

按照【托管实例注册码ID】进行过滤。可通过 [DescribeRegisterCodes(查询注册码)](https://cloud.tencent.com/document/api/1340/96925) 接口获取。
类型：String
必选：否

- sys-name

按照【操作系统类型】进行过滤，取值：Linux | Windows。
类型：String
必选：否

- tag-key

按照【标签键】进行过滤。
类型：String
必选：否

- tag-value

按照【标签值】进行过滤。
类型：String
必选：否

- tag:tag-key

按照【标签键值对】进行过滤。 tag-key使用具体的标签键进行替换。
类型：String
必选：否

例如 Filter 为 {"Name": "tag:key1", "Values": ["v1", "v2"] } ，即查询所有标签为 key1:v1 或 key1:v2 的资源。


                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置过滤器列表。每次请求的 `Filters` 的上限为 10，`Filter.Values` 的上限为 5。参数不支持同时指定 `InstanceIds` 和 `Filters` 。


- instance-name

按照【托管实例名称】进行过滤。
类型：String
必选：否

- instance-id

按照【托管实例ID】进行过滤。
类型：String
必选：否

- register-status

按照【托管实例状态】进行过滤，取值：Online | Offline。
类型：String
必选：否

- local-ip

按照【托管实例网卡IP】进行过滤。
类型：String
必选：否

- register-code-id

按照【托管实例注册码ID】进行过滤。可通过 [DescribeRegisterCodes(查询注册码)](https://cloud.tencent.com/document/api/1340/96925) 接口获取。
类型：String
必选：否

- sys-name

按照【操作系统类型】进行过滤，取值：Linux | Windows。
类型：String
必选：否

- tag-key

按照【标签键】进行过滤。
类型：String
必选：否

- tag-value

按照【标签值】进行过滤。
类型：String
必选：否

- tag:tag-key

按照【标签键值对】进行过滤。 tag-key使用具体的标签键进行替换。
类型：String
必选：否

例如 Filter 为 {"Name": "tag:key1", "Values": ["v1", "v2"] } ，即查询所有标签为 key1:v1 或 key1:v2 的资源。


                     * @param _filters 过滤器列表。每次请求的 `Filters` 的上限为 10，`Filter.Values` 的上限为 5。参数不支持同时指定 `InstanceIds` 和 `Filters` 。


- instance-name

按照【托管实例名称】进行过滤。
类型：String
必选：否

- instance-id

按照【托管实例ID】进行过滤。
类型：String
必选：否

- register-status

按照【托管实例状态】进行过滤，取值：Online | Offline。
类型：String
必选：否

- local-ip

按照【托管实例网卡IP】进行过滤。
类型：String
必选：否

- register-code-id

按照【托管实例注册码ID】进行过滤。可通过 [DescribeRegisterCodes(查询注册码)](https://cloud.tencent.com/document/api/1340/96925) 接口获取。
类型：String
必选：否

- sys-name

按照【操作系统类型】进行过滤，取值：Linux | Windows。
类型：String
必选：否

- tag-key

按照【标签键】进行过滤。
类型：String
必选：否

- tag-value

按照【标签值】进行过滤。
类型：String
必选：否

- tag:tag-key

按照【标签键值对】进行过滤。 tag-key使用具体的标签键进行替换。
类型：String
必选：否

例如 Filter 为 {"Name": "tag:key1", "Values": ["v1", "v2"] } ，即查询所有标签为 key1:v1 或 key1:v2 的资源。


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
                     * 托管实例 id。

每次请求的上限为 100。

参数不支持同时指定 `InstanceIds` 和 `Filters` 。

                     */
                    std::vector<std::string> m_instanceIds;
                    bool m_instanceIdsHasBeenSet;

                    /**
                     * 过滤器列表。每次请求的 `Filters` 的上限为 10，`Filter.Values` 的上限为 5。参数不支持同时指定 `InstanceIds` 和 `Filters` 。


- instance-name

按照【托管实例名称】进行过滤。
类型：String
必选：否

- instance-id

按照【托管实例ID】进行过滤。
类型：String
必选：否

- register-status

按照【托管实例状态】进行过滤，取值：Online | Offline。
类型：String
必选：否

- local-ip

按照【托管实例网卡IP】进行过滤。
类型：String
必选：否

- register-code-id

按照【托管实例注册码ID】进行过滤。可通过 [DescribeRegisterCodes(查询注册码)](https://cloud.tencent.com/document/api/1340/96925) 接口获取。
类型：String
必选：否

- sys-name

按照【操作系统类型】进行过滤，取值：Linux | Windows。
类型：String
必选：否

- tag-key

按照【标签键】进行过滤。
类型：String
必选：否

- tag-value

按照【标签值】进行过滤。
类型：String
必选：否

- tag:tag-key

按照【标签键值对】进行过滤。 tag-key使用具体的标签键进行替换。
类型：String
必选：否

例如 Filter 为 {"Name": "tag:key1", "Values": ["v1", "v2"] } ，即查询所有标签为 key1:v1 或 key1:v2 的资源。


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
