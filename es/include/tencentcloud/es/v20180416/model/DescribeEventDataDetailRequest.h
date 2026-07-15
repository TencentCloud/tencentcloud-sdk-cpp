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

#ifndef TENCENTCLOUD_ES_V20180416_MODEL_DESCRIBEEVENTDATADETAILREQUEST_H_
#define TENCENTCLOUD_ES_V20180416_MODEL_DESCRIBEEVENTDATADETAILREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Es
    {
        namespace V20180416
        {
            namespace Model
            {
                /**
                * DescribeEventDataDetail请求参数结构体
                */
                class DescribeEventDataDetailRequest : public AbstractModel
                {
                public:
                    DescribeEventDataDetailRequest();
                    ~DescribeEventDataDetailRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取ES集群Id
                     * @return InstanceId ES集群Id
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置ES集群Id
                     * @param _instanceId ES集群Id
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
                     * 获取事件类型,1：硬件异常；2：用户变更；3：智能运维
                     * @return EventType 事件类型,1：硬件异常；2：用户变更；3：智能运维
                     * 
                     */
                    int64_t GetEventType() const;

                    /**
                     * 设置事件类型,1：硬件异常；2：用户变更；3：智能运维
                     * @param _eventType 事件类型,1：硬件异常；2：用户变更；3：智能运维
                     * 
                     */
                    void SetEventType(const int64_t& _eventType);

                    /**
                     * 判断参数 EventType 是否已赋值
                     * @return EventType 是否已赋值
                     * 
                     */
                    bool EventTypeHasBeenSet() const;

                    /**
                     * 获取异常事件任务id
                     * @return EventTaskId 异常事件任务id
                     * 
                     */
                    int64_t GetEventTaskId() const;

                    /**
                     * 设置异常事件任务id
                     * @param _eventTaskId 异常事件任务id
                     * 
                     */
                    void SetEventTaskId(const int64_t& _eventTaskId);

                    /**
                     * 判断参数 EventTaskId 是否已赋值
                     * @return EventTaskId 是否已赋值
                     * 
                     */
                    bool EventTaskIdHasBeenSet() const;

                private:

                    /**
                     * ES集群Id
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 事件类型,1：硬件异常；2：用户变更；3：智能运维
                     */
                    int64_t m_eventType;
                    bool m_eventTypeHasBeenSet;

                    /**
                     * 异常事件任务id
                     */
                    int64_t m_eventTaskId;
                    bool m_eventTaskIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ES_V20180416_MODEL_DESCRIBEEVENTDATADETAILREQUEST_H_
