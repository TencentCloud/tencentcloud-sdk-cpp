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

#ifndef TENCENTCLOUD_POSTGRES_V20170312_MODEL_DESCRIBEPARAMSEVENTRESPONSE_H_
#define TENCENTCLOUD_POSTGRES_V20170312_MODEL_DESCRIBEPARAMSEVENTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/postgres/v20170312/model/EventItem.h>


namespace TencentCloud
{
    namespace Postgres
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * DescribeParamsEvent返回参数结构体
                */
                class DescribeParamsEventResponse : public AbstractModel
                {
                public:
                    DescribeParamsEventResponse();
                    ~DescribeParamsEventResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取参数修改事件总数，以参数为统计粒度
                     * @return TotalCount 参数修改事件总数，以参数为统计粒度
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取实例参数修改事件详情
                     * @return EventItems 实例参数修改事件详情
                     * 
                     */
                    std::vector<EventItem> GetEventItems() const;

                    /**
                     * 判断参数 EventItems 是否已赋值
                     * @return EventItems 是否已赋值
                     * 
                     */
                    bool EventItemsHasBeenSet() const;

                private:

                    /**
                     * 参数修改事件总数，以参数为统计粒度
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 实例参数修改事件详情
                     */
                    std::vector<EventItem> m_eventItems;
                    bool m_eventItemsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_POSTGRES_V20170312_MODEL_DESCRIBEPARAMSEVENTRESPONSE_H_
