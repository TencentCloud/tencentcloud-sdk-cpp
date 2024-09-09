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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_DESCRIBERESOURCESCHEDULEDIFFDETAILREQUEST_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_DESCRIBERESOURCESCHEDULEDIFFDETAILREQUEST_H_

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
                * DescribeResourceScheduleDiffDetail请求参数结构体
                */
                class DescribeResourceScheduleDiffDetailRequest : public AbstractModel
                {
                public:
                    DescribeResourceScheduleDiffDetailRequest();
                    ~DescribeResourceScheduleDiffDetailRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取emr集群的英文id
                     * @return InstanceId emr集群的英文id
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置emr集群的英文id
                     * @param _instanceId emr集群的英文id
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
                     * 获取查询的变更明细对应的调度器，可选值为fair、capacity。如果不传或者传空会使用最新的调度器
                     * @return Scheduler 查询的变更明细对应的调度器，可选值为fair、capacity。如果不传或者传空会使用最新的调度器
                     * 
                     */
                    std::string GetScheduler() const;

                    /**
                     * 设置查询的变更明细对应的调度器，可选值为fair、capacity。如果不传或者传空会使用最新的调度器
                     * @param _scheduler 查询的变更明细对应的调度器，可选值为fair、capacity。如果不传或者传空会使用最新的调度器
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
                     * emr集群的英文id
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 查询的变更明细对应的调度器，可选值为fair、capacity。如果不传或者传空会使用最新的调度器
                     */
                    std::string m_scheduler;
                    bool m_schedulerHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_DESCRIBERESOURCESCHEDULEDIFFDETAILREQUEST_H_
