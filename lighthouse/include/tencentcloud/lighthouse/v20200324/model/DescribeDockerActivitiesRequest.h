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

#ifndef TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_DESCRIBEDOCKERACTIVITIESREQUEST_H_
#define TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_DESCRIBEDOCKERACTIVITIESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Lighthouse
    {
        namespace V20200324
        {
            namespace Model
            {
                /**
                * DescribeDockerActivities请求参数结构体
                */
                class DescribeDockerActivitiesRequest : public AbstractModel
                {
                public:
                    DescribeDockerActivitiesRequest();
                    ~DescribeDockerActivitiesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例ID。可通过[DescribeInstances](https://cloud.tencent.com/document/product/1207/47573)接口返回值中的InstanceId获取。
                     * @return InstanceId 实例ID。可通过[DescribeInstances](https://cloud.tencent.com/document/product/1207/47573)接口返回值中的InstanceId获取。
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例ID。可通过[DescribeInstances](https://cloud.tencent.com/document/product/1207/47573)接口返回值中的InstanceId获取。
                     * @param _instanceId 实例ID。可通过[DescribeInstances](https://cloud.tencent.com/document/product/1207/47573)接口返回值中的InstanceId获取。
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取Docker活动ID列表。可通过[DescribeDockerActivities](https://cloud.tencent.com/document/product/1207/95476)接口返回值中的ActivityId获取。
                     * @return ActivityIds Docker活动ID列表。可通过[DescribeDockerActivities](https://cloud.tencent.com/document/product/1207/95476)接口返回值中的ActivityId获取。
                     * 
                     */
                    std::vector<std::string> GetActivityIds() const;

                    /**
                     * 设置Docker活动ID列表。可通过[DescribeDockerActivities](https://cloud.tencent.com/document/product/1207/95476)接口返回值中的ActivityId获取。
                     * @param _activityIds Docker活动ID列表。可通过[DescribeDockerActivities](https://cloud.tencent.com/document/product/1207/95476)接口返回值中的ActivityId获取。
                     * 
                     */
                    void SetActivityIds(const std::vector<std::string>& _activityIds);

                    /**
                     * 判断参数 ActivityIds 是否已赋值
                     * @return ActivityIds 是否已赋值
                     * 
                     */
                    bool ActivityIdsHasBeenSet() const;

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

                    /**
                     * 获取活动创建时间的起始值，时间戳秒数。
                     * @return CreatedTimeBegin 活动创建时间的起始值，时间戳秒数。
                     * 
                     */
                    int64_t GetCreatedTimeBegin() const;

                    /**
                     * 设置活动创建时间的起始值，时间戳秒数。
                     * @param _createdTimeBegin 活动创建时间的起始值，时间戳秒数。
                     * 
                     */
                    void SetCreatedTimeBegin(const int64_t& _createdTimeBegin);

                    /**
                     * 判断参数 CreatedTimeBegin 是否已赋值
                     * @return CreatedTimeBegin 是否已赋值
                     * 
                     */
                    bool CreatedTimeBeginHasBeenSet() const;

                    /**
                     * 获取活动创建时间的结束值，时间戳秒数。
                     * @return CreatedTimeEnd 活动创建时间的结束值，时间戳秒数。
                     * 
                     */
                    int64_t GetCreatedTimeEnd() const;

                    /**
                     * 设置活动创建时间的结束值，时间戳秒数。
                     * @param _createdTimeEnd 活动创建时间的结束值，时间戳秒数。
                     * 
                     */
                    void SetCreatedTimeEnd(const int64_t& _createdTimeEnd);

                    /**
                     * 判断参数 CreatedTimeEnd 是否已赋值
                     * @return CreatedTimeEnd 是否已赋值
                     * 
                     */
                    bool CreatedTimeEndHasBeenSet() const;

                private:

                    /**
                     * 实例ID。可通过[DescribeInstances](https://cloud.tencent.com/document/product/1207/47573)接口返回值中的InstanceId获取。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Docker活动ID列表。可通过[DescribeDockerActivities](https://cloud.tencent.com/document/product/1207/95476)接口返回值中的ActivityId获取。
                     */
                    std::vector<std::string> m_activityIds;
                    bool m_activityIdsHasBeenSet;

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

                    /**
                     * 活动创建时间的起始值，时间戳秒数。
                     */
                    int64_t m_createdTimeBegin;
                    bool m_createdTimeBeginHasBeenSet;

                    /**
                     * 活动创建时间的结束值，时间戳秒数。
                     */
                    int64_t m_createdTimeEnd;
                    bool m_createdTimeEndHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_DESCRIBEDOCKERACTIVITIESREQUEST_H_
