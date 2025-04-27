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

#ifndef TENCENTCLOUD_TAT_V20201028_MODEL_DESCRIBEINVOKERSREQUEST_H_
#define TENCENTCLOUD_TAT_V20201028_MODEL_DESCRIBEINVOKERSREQUEST_H_

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
                * DescribeInvokers请求参数结构体
                */
                class DescribeInvokersRequest : public AbstractModel
                {
                public:
                    DescribeInvokersRequest();
                    ~DescribeInvokersRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取执行器 ID 列表。

每次请求的上限为 100。

参数不支持同时指定 `InvokerIds ` 和 `Filters ` 。

                     * @return InvokerIds 执行器 ID 列表。

每次请求的上限为 100。

参数不支持同时指定 `InvokerIds ` 和 `Filters ` 。

                     * 
                     */
                    std::vector<std::string> GetInvokerIds() const;

                    /**
                     * 设置执行器 ID 列表。

每次请求的上限为 100。

参数不支持同时指定 `InvokerIds ` 和 `Filters ` 。

                     * @param _invokerIds 执行器 ID 列表。

每次请求的上限为 100。

参数不支持同时指定 `InvokerIds ` 和 `Filters ` 。

                     * 
                     */
                    void SetInvokerIds(const std::vector<std::string>& _invokerIds);

                    /**
                     * 判断参数 InvokerIds 是否已赋值
                     * @return InvokerIds 是否已赋值
                     * 
                     */
                    bool InvokerIdsHasBeenSet() const;

                    /**
                     * 获取过滤条件：

- invoker-id - String - 是否必填：否 - （过滤条件）按执行器ID过滤。
- command-id - String - 是否必填：否 - （过滤条件）按命令ID过滤。可通过 [DescribeCommands(查询命令详情)](https://cloud.tencent.com/document/api/1340/52681) 接口获取。
- invoker-type - String - 是否必填：否 - （过滤条件）按执行器类型过滤。目前仅支持 SCHEDULE 一种。

每次请求的 `Filters` 的上限为 10，`Filter.Values` 的上限为 5。参数不支持同时指定 `InvokerIds` 和 `Filters` 。
                     * @return Filters 过滤条件：

- invoker-id - String - 是否必填：否 - （过滤条件）按执行器ID过滤。
- command-id - String - 是否必填：否 - （过滤条件）按命令ID过滤。可通过 [DescribeCommands(查询命令详情)](https://cloud.tencent.com/document/api/1340/52681) 接口获取。
- invoker-type - String - 是否必填：否 - （过滤条件）按执行器类型过滤。目前仅支持 SCHEDULE 一种。

每次请求的 `Filters` 的上限为 10，`Filter.Values` 的上限为 5。参数不支持同时指定 `InvokerIds` 和 `Filters` 。
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置过滤条件：

- invoker-id - String - 是否必填：否 - （过滤条件）按执行器ID过滤。
- command-id - String - 是否必填：否 - （过滤条件）按命令ID过滤。可通过 [DescribeCommands(查询命令详情)](https://cloud.tencent.com/document/api/1340/52681) 接口获取。
- invoker-type - String - 是否必填：否 - （过滤条件）按执行器类型过滤。目前仅支持 SCHEDULE 一种。

每次请求的 `Filters` 的上限为 10，`Filter.Values` 的上限为 5。参数不支持同时指定 `InvokerIds` 和 `Filters` 。
                     * @param _filters 过滤条件：

- invoker-id - String - 是否必填：否 - （过滤条件）按执行器ID过滤。
- command-id - String - 是否必填：否 - （过滤条件）按命令ID过滤。可通过 [DescribeCommands(查询命令详情)](https://cloud.tencent.com/document/api/1340/52681) 接口获取。
- invoker-type - String - 是否必填：否 - （过滤条件）按执行器类型过滤。目前仅支持 SCHEDULE 一种。

每次请求的 `Filters` 的上限为 10，`Filter.Values` 的上限为 5。参数不支持同时指定 `InvokerIds` 和 `Filters` 。
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
                     * 获取返回数量，默认为20，最大值为100。
                     * @return Limit 返回数量，默认为20，最大值为100。
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置返回数量，默认为20，最大值为100。
                     * @param _limit 返回数量，默认为20，最大值为100。
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
                     * 获取偏移量，默认为0。
                     * @return Offset 偏移量，默认为0。
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置偏移量，默认为0。
                     * @param _offset 偏移量，默认为0。
                     * 
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                private:

                    /**
                     * 执行器 ID 列表。

每次请求的上限为 100。

参数不支持同时指定 `InvokerIds ` 和 `Filters ` 。

                     */
                    std::vector<std::string> m_invokerIds;
                    bool m_invokerIdsHasBeenSet;

                    /**
                     * 过滤条件：

- invoker-id - String - 是否必填：否 - （过滤条件）按执行器ID过滤。
- command-id - String - 是否必填：否 - （过滤条件）按命令ID过滤。可通过 [DescribeCommands(查询命令详情)](https://cloud.tencent.com/document/api/1340/52681) 接口获取。
- invoker-type - String - 是否必填：否 - （过滤条件）按执行器类型过滤。目前仅支持 SCHEDULE 一种。

每次请求的 `Filters` 的上限为 10，`Filter.Values` 的上限为 5。参数不支持同时指定 `InvokerIds` 和 `Filters` 。
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

#endif // !TENCENTCLOUD_TAT_V20201028_MODEL_DESCRIBEINVOKERSREQUEST_H_
