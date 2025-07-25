/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#ifndef TENCENTCLOUD_AS_V20180419_MODEL_DESCRIBESCHEDULEDACTIONSREQUEST_H_
#define TENCENTCLOUD_AS_V20180419_MODEL_DESCRIBESCHEDULEDACTIONSREQUEST_H_

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
                * DescribeScheduledActions请求参数结构体
                */
                class DescribeScheduledActionsRequest : public AbstractModel
                {
                public:
                    DescribeScheduledActionsRequest();
                    ~DescribeScheduledActionsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取按照一个或者多个定时任务ID查询。可通过登录 [控制台](https://console.cloud.tencent.com/autoscaling/group) 获取定时任务 ID。每次请求的实例的上限为100。参数不支持同时指定ScheduledActionIds和Filters。
                     * @return ScheduledActionIds 按照一个或者多个定时任务ID查询。可通过登录 [控制台](https://console.cloud.tencent.com/autoscaling/group) 获取定时任务 ID。每次请求的实例的上限为100。参数不支持同时指定ScheduledActionIds和Filters。
                     * 
                     */
                    std::vector<std::string> GetScheduledActionIds() const;

                    /**
                     * 设置按照一个或者多个定时任务ID查询。可通过登录 [控制台](https://console.cloud.tencent.com/autoscaling/group) 获取定时任务 ID。每次请求的实例的上限为100。参数不支持同时指定ScheduledActionIds和Filters。
                     * @param _scheduledActionIds 按照一个或者多个定时任务ID查询。可通过登录 [控制台](https://console.cloud.tencent.com/autoscaling/group) 获取定时任务 ID。每次请求的实例的上限为100。参数不支持同时指定ScheduledActionIds和Filters。
                     * 
                     */
                    void SetScheduledActionIds(const std::vector<std::string>& _scheduledActionIds);

                    /**
                     * 判断参数 ScheduledActionIds 是否已赋值
                     * @return ScheduledActionIds 是否已赋值
                     * 
                     */
                    bool ScheduledActionIdsHasBeenSet() const;

                    /**
                     * 获取过滤条件。可通过登录 [控制台](https://console.cloud.tencent.com/autoscaling/group) 获取定时任务 ID，定时任务名称，伸缩组 ID。
<li> scheduled-action-id - String - 是否必填：否 -（过滤条件）按照定时任务ID过滤。</li>
<li> scheduled-action-name - String - 是否必填：否 - （过滤条件） 按照定时任务名称过滤。</li>
<li> auto-scaling-group-id - String - 是否必填：否 - （过滤条件） 按照伸缩组ID过滤。</li>
                     * @return Filters 过滤条件。可通过登录 [控制台](https://console.cloud.tencent.com/autoscaling/group) 获取定时任务 ID，定时任务名称，伸缩组 ID。
<li> scheduled-action-id - String - 是否必填：否 -（过滤条件）按照定时任务ID过滤。</li>
<li> scheduled-action-name - String - 是否必填：否 - （过滤条件） 按照定时任务名称过滤。</li>
<li> auto-scaling-group-id - String - 是否必填：否 - （过滤条件） 按照伸缩组ID过滤。</li>
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置过滤条件。可通过登录 [控制台](https://console.cloud.tencent.com/autoscaling/group) 获取定时任务 ID，定时任务名称，伸缩组 ID。
<li> scheduled-action-id - String - 是否必填：否 -（过滤条件）按照定时任务ID过滤。</li>
<li> scheduled-action-name - String - 是否必填：否 - （过滤条件） 按照定时任务名称过滤。</li>
<li> auto-scaling-group-id - String - 是否必填：否 - （过滤条件） 按照伸缩组ID过滤。</li>
                     * @param _filters 过滤条件。可通过登录 [控制台](https://console.cloud.tencent.com/autoscaling/group) 获取定时任务 ID，定时任务名称，伸缩组 ID。
<li> scheduled-action-id - String - 是否必填：否 -（过滤条件）按照定时任务ID过滤。</li>
<li> scheduled-action-name - String - 是否必填：否 - （过滤条件） 按照定时任务名称过滤。</li>
<li> auto-scaling-group-id - String - 是否必填：否 - （过滤条件） 按照伸缩组ID过滤。</li>
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
                     * 获取偏移量，默认为0。关于Offset的更进一步介绍请参考 API [简介](https://cloud.tencent.com/document/api/213/15688)中的相关小节。
                     * @return Offset 偏移量，默认为0。关于Offset的更进一步介绍请参考 API [简介](https://cloud.tencent.com/document/api/213/15688)中的相关小节。
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置偏移量，默认为0。关于Offset的更进一步介绍请参考 API [简介](https://cloud.tencent.com/document/api/213/15688)中的相关小节。
                     * @param _offset 偏移量，默认为0。关于Offset的更进一步介绍请参考 API [简介](https://cloud.tencent.com/document/api/213/15688)中的相关小节。
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
                     * 获取返回数量，默认为20，最大值为100。关于Limit的更进一步介绍请参考 API [简介](https://cloud.tencent.com/document/api/213/15688)中的相关小节。
                     * @return Limit 返回数量，默认为20，最大值为100。关于Limit的更进一步介绍请参考 API [简介](https://cloud.tencent.com/document/api/213/15688)中的相关小节。
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置返回数量，默认为20，最大值为100。关于Limit的更进一步介绍请参考 API [简介](https://cloud.tencent.com/document/api/213/15688)中的相关小节。
                     * @param _limit 返回数量，默认为20，最大值为100。关于Limit的更进一步介绍请参考 API [简介](https://cloud.tencent.com/document/api/213/15688)中的相关小节。
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
                     * 按照一个或者多个定时任务ID查询。可通过登录 [控制台](https://console.cloud.tencent.com/autoscaling/group) 获取定时任务 ID。每次请求的实例的上限为100。参数不支持同时指定ScheduledActionIds和Filters。
                     */
                    std::vector<std::string> m_scheduledActionIds;
                    bool m_scheduledActionIdsHasBeenSet;

                    /**
                     * 过滤条件。可通过登录 [控制台](https://console.cloud.tencent.com/autoscaling/group) 获取定时任务 ID，定时任务名称，伸缩组 ID。
<li> scheduled-action-id - String - 是否必填：否 -（过滤条件）按照定时任务ID过滤。</li>
<li> scheduled-action-name - String - 是否必填：否 - （过滤条件） 按照定时任务名称过滤。</li>
<li> auto-scaling-group-id - String - 是否必填：否 - （过滤条件） 按照伸缩组ID过滤。</li>
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * 偏移量，默认为0。关于Offset的更进一步介绍请参考 API [简介](https://cloud.tencent.com/document/api/213/15688)中的相关小节。
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 返回数量，默认为20，最大值为100。关于Limit的更进一步介绍请参考 API [简介](https://cloud.tencent.com/document/api/213/15688)中的相关小节。
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AS_V20180419_MODEL_DESCRIBESCHEDULEDACTIONSREQUEST_H_
