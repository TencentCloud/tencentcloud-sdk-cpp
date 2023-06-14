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

#ifndef TENCENTCLOUD_CMQ_V20190304_MODEL_DESCRIBEQUEUEDETAILRESPONSE_H_
#define TENCENTCLOUD_CMQ_V20190304_MODEL_DESCRIBEQUEUEDETAILRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cmq/v20190304/model/QueueSet.h>


namespace TencentCloud
{
    namespace Cmq
    {
        namespace V20190304
        {
            namespace Model
            {
                /**
                * DescribeQueueDetail返回参数结构体
                */
                class DescribeQueueDetailResponse : public AbstractModel
                {
                public:
                    DescribeQueueDetailResponse();
                    ~DescribeQueueDetailResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取总队列数。
                     * @return TotalCount 总队列数。
                     * 
                     */
                    uint64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取队列详情列表。
                     * @return QueueSet 队列详情列表。
                     * 
                     */
                    std::vector<QueueSet> GetQueueSet() const;

                    /**
                     * 判断参数 QueueSet 是否已赋值
                     * @return QueueSet 是否已赋值
                     * 
                     */
                    bool QueueSetHasBeenSet() const;

                private:

                    /**
                     * 总队列数。
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 队列详情列表。
                     */
                    std::vector<QueueSet> m_queueSet;
                    bool m_queueSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CMQ_V20190304_MODEL_DESCRIBEQUEUEDETAILRESPONSE_H_
