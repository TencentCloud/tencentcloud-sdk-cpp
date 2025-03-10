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

#ifndef TENCENTCLOUD_TAT_V20201028_MODEL_DESCRIBEINVOCATIONTASKSREQUEST_H_
#define TENCENTCLOUD_TAT_V20201028_MODEL_DESCRIBEINVOCATIONTASKSREQUEST_H_

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
                * DescribeInvocationTasks请求参数结构体
                */
                class DescribeInvocationTasksRequest : public AbstractModel
                {
                public:
                    DescribeInvocationTasksRequest();
                    ~DescribeInvocationTasksRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取执行任务ID列表，每次请求的上限为100。参数不支持同时指定 `InvocationTaskIds` 和 `Filters`。
                     * @return InvocationTaskIds 执行任务ID列表，每次请求的上限为100。参数不支持同时指定 `InvocationTaskIds` 和 `Filters`。
                     * 
                     */
                    std::vector<std::string> GetInvocationTaskIds() const;

                    /**
                     * 设置执行任务ID列表，每次请求的上限为100。参数不支持同时指定 `InvocationTaskIds` 和 `Filters`。
                     * @param _invocationTaskIds 执行任务ID列表，每次请求的上限为100。参数不支持同时指定 `InvocationTaskIds` 和 `Filters`。
                     * 
                     */
                    void SetInvocationTaskIds(const std::vector<std::string>& _invocationTaskIds);

                    /**
                     * 判断参数 InvocationTaskIds 是否已赋值
                     * @return InvocationTaskIds 是否已赋值
                     * 
                     */
                    bool InvocationTaskIdsHasBeenSet() const;

                    /**
                     * 获取过滤条件。<br>

- invocation-task-id - String - 是否必填：否 -（过滤条件）按照执行任务ID过滤。
- invocation-id - String - 是否必填：否 -（过滤条件）按照执行活动ID过滤。可通过 [DescribeInvocations(查询执行活动)](https://cloud.tencent.com/document/api/1340/52679) 接口获取。
- instance-id - String - 是否必填：否 -（过滤条件）按照实例ID过滤。可通过对应云产品的查询实例接口获取实例 ID。目前支持实例类型： CVM、Lighthouse、TAT 托管实例
- command-id - String - 是否必填：否 -（过滤条件）按照命令ID过滤。可通过 [DescribeCommands(查询命令详情)](https://cloud.tencent.com/document/api/1340/52681) 接口获取。

每次请求的 `Filters` 的上限为10， `Filter.Values` 的上限为5。参数不支持同时指定 `InvocationTaskIds` 和 `Filters` 。
                     * @return Filters 过滤条件。<br>

- invocation-task-id - String - 是否必填：否 -（过滤条件）按照执行任务ID过滤。
- invocation-id - String - 是否必填：否 -（过滤条件）按照执行活动ID过滤。可通过 [DescribeInvocations(查询执行活动)](https://cloud.tencent.com/document/api/1340/52679) 接口获取。
- instance-id - String - 是否必填：否 -（过滤条件）按照实例ID过滤。可通过对应云产品的查询实例接口获取实例 ID。目前支持实例类型： CVM、Lighthouse、TAT 托管实例
- command-id - String - 是否必填：否 -（过滤条件）按照命令ID过滤。可通过 [DescribeCommands(查询命令详情)](https://cloud.tencent.com/document/api/1340/52681) 接口获取。

每次请求的 `Filters` 的上限为10， `Filter.Values` 的上限为5。参数不支持同时指定 `InvocationTaskIds` 和 `Filters` 。
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置过滤条件。<br>

- invocation-task-id - String - 是否必填：否 -（过滤条件）按照执行任务ID过滤。
- invocation-id - String - 是否必填：否 -（过滤条件）按照执行活动ID过滤。可通过 [DescribeInvocations(查询执行活动)](https://cloud.tencent.com/document/api/1340/52679) 接口获取。
- instance-id - String - 是否必填：否 -（过滤条件）按照实例ID过滤。可通过对应云产品的查询实例接口获取实例 ID。目前支持实例类型： CVM、Lighthouse、TAT 托管实例
- command-id - String - 是否必填：否 -（过滤条件）按照命令ID过滤。可通过 [DescribeCommands(查询命令详情)](https://cloud.tencent.com/document/api/1340/52681) 接口获取。

每次请求的 `Filters` 的上限为10， `Filter.Values` 的上限为5。参数不支持同时指定 `InvocationTaskIds` 和 `Filters` 。
                     * @param _filters 过滤条件。<br>

- invocation-task-id - String - 是否必填：否 -（过滤条件）按照执行任务ID过滤。
- invocation-id - String - 是否必填：否 -（过滤条件）按照执行活动ID过滤。可通过 [DescribeInvocations(查询执行活动)](https://cloud.tencent.com/document/api/1340/52679) 接口获取。
- instance-id - String - 是否必填：否 -（过滤条件）按照实例ID过滤。可通过对应云产品的查询实例接口获取实例 ID。目前支持实例类型： CVM、Lighthouse、TAT 托管实例
- command-id - String - 是否必填：否 -（过滤条件）按照命令ID过滤。可通过 [DescribeCommands(查询命令详情)](https://cloud.tencent.com/document/api/1340/52681) 接口获取。

每次请求的 `Filters` 的上限为10， `Filter.Values` 的上限为5。参数不支持同时指定 `InvocationTaskIds` 和 `Filters` 。
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
                     * 获取返回数量，默认为20，最大值为100。关于 `Limit` 的更进一步介绍请参考 API [简介](https://cloud.tencent.com/document/api/213/15688)中的相关小节。
                     * @return Limit 返回数量，默认为20，最大值为100。关于 `Limit` 的更进一步介绍请参考 API [简介](https://cloud.tencent.com/document/api/213/15688)中的相关小节。
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置返回数量，默认为20，最大值为100。关于 `Limit` 的更进一步介绍请参考 API [简介](https://cloud.tencent.com/document/api/213/15688)中的相关小节。
                     * @param _limit 返回数量，默认为20，最大值为100。关于 `Limit` 的更进一步介绍请参考 API [简介](https://cloud.tencent.com/document/api/213/15688)中的相关小节。
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
                     * 获取偏移量，默认为0。关于 `Offset` 的更进一步介绍请参考 API [简介](https://cloud.tencent.com/document/api/213/15688)中的相关小节。
                     * @return Offset 偏移量，默认为0。关于 `Offset` 的更进一步介绍请参考 API [简介](https://cloud.tencent.com/document/api/213/15688)中的相关小节。
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置偏移量，默认为0。关于 `Offset` 的更进一步介绍请参考 API [简介](https://cloud.tencent.com/document/api/213/15688)中的相关小节。
                     * @param _offset 偏移量，默认为0。关于 `Offset` 的更进一步介绍请参考 API [简介](https://cloud.tencent.com/document/api/213/15688)中的相关小节。
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
                     * 获取是否隐藏命令输出结果，取值范围：

- true：隐藏输出
- false：不隐藏
 
默认为 true。
                     * @return HideOutput 是否隐藏命令输出结果，取值范围：

- true：隐藏输出
- false：不隐藏
 
默认为 true。
                     * 
                     */
                    bool GetHideOutput() const;

                    /**
                     * 设置是否隐藏命令输出结果，取值范围：

- true：隐藏输出
- false：不隐藏
 
默认为 true。
                     * @param _hideOutput 是否隐藏命令输出结果，取值范围：

- true：隐藏输出
- false：不隐藏
 
默认为 true。
                     * 
                     */
                    void SetHideOutput(const bool& _hideOutput);

                    /**
                     * 判断参数 HideOutput 是否已赋值
                     * @return HideOutput 是否已赋值
                     * 
                     */
                    bool HideOutputHasBeenSet() const;

                private:

                    /**
                     * 执行任务ID列表，每次请求的上限为100。参数不支持同时指定 `InvocationTaskIds` 和 `Filters`。
                     */
                    std::vector<std::string> m_invocationTaskIds;
                    bool m_invocationTaskIdsHasBeenSet;

                    /**
                     * 过滤条件。<br>

- invocation-task-id - String - 是否必填：否 -（过滤条件）按照执行任务ID过滤。
- invocation-id - String - 是否必填：否 -（过滤条件）按照执行活动ID过滤。可通过 [DescribeInvocations(查询执行活动)](https://cloud.tencent.com/document/api/1340/52679) 接口获取。
- instance-id - String - 是否必填：否 -（过滤条件）按照实例ID过滤。可通过对应云产品的查询实例接口获取实例 ID。目前支持实例类型： CVM、Lighthouse、TAT 托管实例
- command-id - String - 是否必填：否 -（过滤条件）按照命令ID过滤。可通过 [DescribeCommands(查询命令详情)](https://cloud.tencent.com/document/api/1340/52681) 接口获取。

每次请求的 `Filters` 的上限为10， `Filter.Values` 的上限为5。参数不支持同时指定 `InvocationTaskIds` 和 `Filters` 。
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * 返回数量，默认为20，最大值为100。关于 `Limit` 的更进一步介绍请参考 API [简介](https://cloud.tencent.com/document/api/213/15688)中的相关小节。
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 偏移量，默认为0。关于 `Offset` 的更进一步介绍请参考 API [简介](https://cloud.tencent.com/document/api/213/15688)中的相关小节。
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 是否隐藏命令输出结果，取值范围：

- true：隐藏输出
- false：不隐藏
 
默认为 true。
                     */
                    bool m_hideOutput;
                    bool m_hideOutputHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TAT_V20201028_MODEL_DESCRIBEINVOCATIONTASKSREQUEST_H_
