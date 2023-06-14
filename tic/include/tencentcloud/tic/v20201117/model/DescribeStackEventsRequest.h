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

#ifndef TENCENTCLOUD_TIC_V20201117_MODEL_DESCRIBESTACKEVENTSREQUEST_H_
#define TENCENTCLOUD_TIC_V20201117_MODEL_DESCRIBESTACKEVENTSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tic/v20201117/model/Filter.h>


namespace TencentCloud
{
    namespace Tic
    {
        namespace V20201117
        {
            namespace Model
            {
                /**
                * DescribeStackEvents请求参数结构体
                */
                class DescribeStackEventsRequest : public AbstractModel
                {
                public:
                    DescribeStackEventsRequest();
                    ~DescribeStackEventsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取按照⼀个或者多个事件ID查询
                     * @return EventIds 按照⼀个或者多个事件ID查询
                     * 
                     */
                    std::vector<std::string> GetEventIds() const;

                    /**
                     * 设置按照⼀个或者多个事件ID查询
                     * @param _eventIds 按照⼀个或者多个事件ID查询
                     * 
                     */
                    void SetEventIds(const std::vector<std::string>& _eventIds);

                    /**
                     * 判断参数 EventIds 是否已赋值
                     * @return EventIds 是否已赋值
                     * 
                     */
                    bool EventIdsHasBeenSet() const;

                    /**
                     * 获取<li>**VersionId**</li>
按照【**版本ID**】过滤，VersionId形如 `ver-kg8hn58h`
类型：string

<li>**StackId**</li>
按照【**资源栈ID**】过滤，StackId形如 `stk-hz5vn3te`
类型：string

<li>**Type**</li>
按照【**事件类型**】过滤，Type 形如 plan, apply, destroy
类型：string

<li>**Status**</li>
按照【**事件状态**】过滤，Status形如 queueing, running, success, failed
类型：string
                     * @return Filters <li>**VersionId**</li>
按照【**版本ID**】过滤，VersionId形如 `ver-kg8hn58h`
类型：string

<li>**StackId**</li>
按照【**资源栈ID**】过滤，StackId形如 `stk-hz5vn3te`
类型：string

<li>**Type**</li>
按照【**事件类型**】过滤，Type 形如 plan, apply, destroy
类型：string

<li>**Status**</li>
按照【**事件状态**】过滤，Status形如 queueing, running, success, failed
类型：string
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置<li>**VersionId**</li>
按照【**版本ID**】过滤，VersionId形如 `ver-kg8hn58h`
类型：string

<li>**StackId**</li>
按照【**资源栈ID**】过滤，StackId形如 `stk-hz5vn3te`
类型：string

<li>**Type**</li>
按照【**事件类型**】过滤，Type 形如 plan, apply, destroy
类型：string

<li>**Status**</li>
按照【**事件状态**】过滤，Status形如 queueing, running, success, failed
类型：string
                     * @param _filters <li>**VersionId**</li>
按照【**版本ID**】过滤，VersionId形如 `ver-kg8hn58h`
类型：string

<li>**StackId**</li>
按照【**资源栈ID**】过滤，StackId形如 `stk-hz5vn3te`
类型：string

<li>**Type**</li>
按照【**事件类型**】过滤，Type 形如 plan, apply, destroy
类型：string

<li>**Status**</li>
按照【**事件状态**】过滤，Status形如 queueing, running, success, failed
类型：string
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
                     * 获取偏移量，默认为0。关于Offset的更进一步介绍请参考 API [简介](https://cloud.tencent.com/document/api/213/15688)中的相关小节
                     * @return Offset 偏移量，默认为0。关于Offset的更进一步介绍请参考 API [简介](https://cloud.tencent.com/document/api/213/15688)中的相关小节
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置偏移量，默认为0。关于Offset的更进一步介绍请参考 API [简介](https://cloud.tencent.com/document/api/213/15688)中的相关小节
                     * @param _offset 偏移量，默认为0。关于Offset的更进一步介绍请参考 API [简介](https://cloud.tencent.com/document/api/213/15688)中的相关小节
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
                     * 获取返回数量，默认为20，最大值为100。关于Limit的更进一步介绍请参考 API [简介](https://cloud.tencent.com/document/api/213/15688)中的相关小节
                     * @return Limit 返回数量，默认为20，最大值为100。关于Limit的更进一步介绍请参考 API [简介](https://cloud.tencent.com/document/api/213/15688)中的相关小节
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置返回数量，默认为20，最大值为100。关于Limit的更进一步介绍请参考 API [简介](https://cloud.tencent.com/document/api/213/15688)中的相关小节
                     * @param _limit 返回数量，默认为20，最大值为100。关于Limit的更进一步介绍请参考 API [简介](https://cloud.tencent.com/document/api/213/15688)中的相关小节
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
                     * 按照⼀个或者多个事件ID查询
                     */
                    std::vector<std::string> m_eventIds;
                    bool m_eventIdsHasBeenSet;

                    /**
                     * <li>**VersionId**</li>
按照【**版本ID**】过滤，VersionId形如 `ver-kg8hn58h`
类型：string

<li>**StackId**</li>
按照【**资源栈ID**】过滤，StackId形如 `stk-hz5vn3te`
类型：string

<li>**Type**</li>
按照【**事件类型**】过滤，Type 形如 plan, apply, destroy
类型：string

<li>**Status**</li>
按照【**事件状态**】过滤，Status形如 queueing, running, success, failed
类型：string
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * 偏移量，默认为0。关于Offset的更进一步介绍请参考 API [简介](https://cloud.tencent.com/document/api/213/15688)中的相关小节
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 返回数量，默认为20，最大值为100。关于Limit的更进一步介绍请参考 API [简介](https://cloud.tencent.com/document/api/213/15688)中的相关小节
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIC_V20201117_MODEL_DESCRIBESTACKEVENTSREQUEST_H_
