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

#ifndef TENCENTCLOUD_REDIS_V20180412_MODEL_DESCRIBEINSTANCEEVENTSRESPONSE_H_
#define TENCENTCLOUD_REDIS_V20180412_MODEL_DESCRIBEINSTANCEEVENTSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/redis/v20180412/model/RedisInstanceEvent.h>


namespace TencentCloud
{
    namespace Redis
    {
        namespace V20180412
        {
            namespace Model
            {
                /**
                * DescribeInstanceEvents返回参数结构体
                */
                class DescribeInstanceEventsResponse : public AbstractModel
                {
                public:
                    DescribeInstanceEventsResponse();
                    ~DescribeInstanceEventsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取总条数
                     * @return TotalCount 总条数
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
                     * 获取实例事件信息
                     * @return RedisInstanceEvents 实例事件信息
                     * 
                     */
                    std::vector<RedisInstanceEvent> GetRedisInstanceEvents() const;

                    /**
                     * 判断参数 RedisInstanceEvents 是否已赋值
                     * @return RedisInstanceEvents 是否已赋值
                     * 
                     */
                    bool RedisInstanceEventsHasBeenSet() const;

                private:

                    /**
                     * 总条数
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 实例事件信息
                     */
                    std::vector<RedisInstanceEvent> m_redisInstanceEvents;
                    bool m_redisInstanceEventsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_REDIS_V20180412_MODEL_DESCRIBEINSTANCEEVENTSRESPONSE_H_
