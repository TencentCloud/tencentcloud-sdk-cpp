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

#ifndef TENCENTCLOUD_THPC_V20230321_MODEL_DESCRIBEQUEUESRESPONSE_H_
#define TENCENTCLOUD_THPC_V20230321_MODEL_DESCRIBEQUEUESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/thpc/v20230321/model/QueueOverview.h>


namespace TencentCloud
{
    namespace Thpc
    {
        namespace V20230321
        {
            namespace Model
            {
                /**
                * DescribeQueues返回参数结构体
                */
                class DescribeQueuesResponse : public AbstractModel
                {
                public:
                    DescribeQueuesResponse();
                    ~DescribeQueuesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取队列概览信息列表。
                     * @return QueueSet 队列概览信息列表。
                     * 
                     */
                    std::vector<QueueOverview> GetQueueSet() const;

                    /**
                     * 判断参数 QueueSet 是否已赋值
                     * @return QueueSet 是否已赋值
                     * 
                     */
                    bool QueueSetHasBeenSet() const;

                    /**
                     * 获取符合条件的队列数量。
                     * @return TotalCount 符合条件的队列数量。
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                private:

                    /**
                     * 队列概览信息列表。
                     */
                    std::vector<QueueOverview> m_queueSet;
                    bool m_queueSetHasBeenSet;

                    /**
                     * 符合条件的队列数量。
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_THPC_V20230321_MODEL_DESCRIBEQUEUESRESPONSE_H_
