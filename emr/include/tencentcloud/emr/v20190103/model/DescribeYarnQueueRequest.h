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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_DESCRIBEYARNQUEUEREQUEST_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_DESCRIBEYARNQUEUEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * DescribeYarnQueue请求参数结构体
                */
                class DescribeYarnQueueRequest : public AbstractModel
                {
                public:
                    DescribeYarnQueueRequest();
                    ~DescribeYarnQueueRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取集群Id
                     * @return InstanceId 集群Id
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置集群Id
                     * @param _instanceId 集群Id
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
                     * 获取调度器，可选值：

1. capacity
2. fair
                     * @return Scheduler 调度器，可选值：

1. capacity
2. fair
                     * 
                     */
                    std::string GetScheduler() const;

                    /**
                     * 设置调度器，可选值：

1. capacity
2. fair
                     * @param _scheduler 调度器，可选值：

1. capacity
2. fair
                     * 
                     */
                    void SetScheduler(const std::string& _scheduler);

                    /**
                     * 判断参数 Scheduler 是否已赋值
                     * @return Scheduler 是否已赋值
                     * 
                     */
                    bool SchedulerHasBeenSet() const;

                private:

                    /**
                     * 集群Id
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 调度器，可选值：

1. capacity
2. fair
                     */
                    std::string m_scheduler;
                    bool m_schedulerHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_DESCRIBEYARNQUEUEREQUEST_H_
