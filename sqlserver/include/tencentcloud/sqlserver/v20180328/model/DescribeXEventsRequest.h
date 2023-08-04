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

#ifndef TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DESCRIBEXEVENTSREQUEST_H_
#define TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DESCRIBEXEVENTSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Sqlserver
    {
        namespace V20180328
        {
            namespace Model
            {
                /**
                * DescribeXEvents请求参数结构体
                */
                class DescribeXEventsRequest : public AbstractModel
                {
                public:
                    DescribeXEventsRequest();
                    ~DescribeXEventsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例ID
                     * @return InstanceId 实例ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例ID
                     * @param _instanceId 实例ID
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
                     * 获取事件类型，slow-慢SQL事件，blocked-阻塞事件，deadlock-死锁事件
                     * @return EventType 事件类型，slow-慢SQL事件，blocked-阻塞事件，deadlock-死锁事件
                     * 
                     */
                    std::string GetEventType() const;

                    /**
                     * 设置事件类型，slow-慢SQL事件，blocked-阻塞事件，deadlock-死锁事件
                     * @param _eventType 事件类型，slow-慢SQL事件，blocked-阻塞事件，deadlock-死锁事件
                     * 
                     */
                    void SetEventType(const std::string& _eventType);

                    /**
                     * 判断参数 EventType 是否已赋值
                     * @return EventType 是否已赋值
                     * 
                     */
                    bool EventTypeHasBeenSet() const;

                    /**
                     * 获取扩展文件生成开始时间(yyyy-MM-dd HH:mm:ss)
                     * @return StartTime 扩展文件生成开始时间(yyyy-MM-dd HH:mm:ss)
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置扩展文件生成开始时间(yyyy-MM-dd HH:mm:ss)
                     * @param _startTime 扩展文件生成开始时间(yyyy-MM-dd HH:mm:ss)
                     * 
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取扩展文件生成结束时间(yyyy-MM-dd HH:mm:ss)
                     * @return EndTime 扩展文件生成结束时间(yyyy-MM-dd HH:mm:ss)
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置扩展文件生成结束时间(yyyy-MM-dd HH:mm:ss)
                     * @param _endTime 扩展文件生成结束时间(yyyy-MM-dd HH:mm:ss)
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取分页返回，页编号，默认值为第0页
                     * @return Offset 分页返回，页编号，默认值为第0页
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置分页返回，页编号，默认值为第0页
                     * @param _offset 分页返回，页编号，默认值为第0页
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
                     * 获取分页返回，每页返回的数目，取值为1~100，默认值为20
                     * @return Limit 分页返回，每页返回的数目，取值为1~100，默认值为20
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置分页返回，每页返回的数目，取值为1~100，默认值为20
                     * @param _limit 分页返回，每页返回的数目，取值为1~100，默认值为20
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
                     * 实例ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 事件类型，slow-慢SQL事件，blocked-阻塞事件，deadlock-死锁事件
                     */
                    std::string m_eventType;
                    bool m_eventTypeHasBeenSet;

                    /**
                     * 扩展文件生成开始时间(yyyy-MM-dd HH:mm:ss)
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 扩展文件生成结束时间(yyyy-MM-dd HH:mm:ss)
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 分页返回，页编号，默认值为第0页
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 分页返回，每页返回的数目，取值为1~100，默认值为20
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DESCRIBEXEVENTSREQUEST_H_
