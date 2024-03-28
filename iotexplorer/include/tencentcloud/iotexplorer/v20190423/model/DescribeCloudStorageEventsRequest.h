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

#ifndef TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_DESCRIBECLOUDSTORAGEEVENTSREQUEST_H_
#define TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_DESCRIBECLOUDSTORAGEEVENTSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iotexplorer
    {
        namespace V20190423
        {
            namespace Model
            {
                /**
                * DescribeCloudStorageEvents请求参数结构体
                */
                class DescribeCloudStorageEventsRequest : public AbstractModel
                {
                public:
                    DescribeCloudStorageEventsRequest();
                    ~DescribeCloudStorageEventsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取产品ID
                     * @return ProductId 产品ID
                     * 
                     */
                    std::string GetProductId() const;

                    /**
                     * 设置产品ID
                     * @param _productId 产品ID
                     * 
                     */
                    void SetProductId(const std::string& _productId);

                    /**
                     * 判断参数 ProductId 是否已赋值
                     * @return ProductId 是否已赋值
                     * 
                     */
                    bool ProductIdHasBeenSet() const;

                    /**
                     * 获取设备名称
                     * @return DeviceName 设备名称
                     * 
                     */
                    std::string GetDeviceName() const;

                    /**
                     * 设置设备名称
                     * @param _deviceName 设备名称
                     * 
                     */
                    void SetDeviceName(const std::string& _deviceName);

                    /**
                     * 判断参数 DeviceName 是否已赋值
                     * @return DeviceName 是否已赋值
                     * 
                     */
                    bool DeviceNameHasBeenSet() const;

                    /**
                     * 获取起始时间（Unix 时间戳，秒级）, 为0 表示 当前时间 - 24h
                     * @return StartTime 起始时间（Unix 时间戳，秒级）, 为0 表示 当前时间 - 24h
                     * 
                     */
                    uint64_t GetStartTime() const;

                    /**
                     * 设置起始时间（Unix 时间戳，秒级）, 为0 表示 当前时间 - 24h
                     * @param _startTime 起始时间（Unix 时间戳，秒级）, 为0 表示 当前时间 - 24h
                     * 
                     */
                    void SetStartTime(const uint64_t& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取结束时间（Unix 时间戳，秒级）, 为0 表示当前时间
                     * @return EndTime 结束时间（Unix 时间戳，秒级）, 为0 表示当前时间
                     * 
                     */
                    uint64_t GetEndTime() const;

                    /**
                     * 设置结束时间（Unix 时间戳，秒级）, 为0 表示当前时间
                     * @param _endTime 结束时间（Unix 时间戳，秒级）, 为0 表示当前时间
                     * 
                     */
                    void SetEndTime(const uint64_t& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取请求上下文, 用作查询游标
                     * @return Context 请求上下文, 用作查询游标
                     * 
                     */
                    std::string GetContext() const;

                    /**
                     * 设置请求上下文, 用作查询游标
                     * @param _context 请求上下文, 用作查询游标
                     * 
                     */
                    void SetContext(const std::string& _context);

                    /**
                     * 判断参数 Context 是否已赋值
                     * @return Context 是否已赋值
                     * 
                     */
                    bool ContextHasBeenSet() const;

                    /**
                     * 获取查询数据项目的最大数量, 默认为10。假设传Size=10，返回的实际事件数量为N，则 5 <= N <= 10。
                     * @return Size 查询数据项目的最大数量, 默认为10。假设传Size=10，返回的实际事件数量为N，则 5 <= N <= 10。
                     * 
                     */
                    uint64_t GetSize() const;

                    /**
                     * 设置查询数据项目的最大数量, 默认为10。假设传Size=10，返回的实际事件数量为N，则 5 <= N <= 10。
                     * @param _size 查询数据项目的最大数量, 默认为10。假设传Size=10，返回的实际事件数量为N，则 5 <= N <= 10。
                     * 
                     */
                    void SetSize(const uint64_t& _size);

                    /**
                     * 判断参数 Size 是否已赋值
                     * @return Size 是否已赋值
                     * 
                     */
                    bool SizeHasBeenSet() const;

                    /**
                     * 获取事件标识符，可以用来指定查询特定的事件，如果不指定，则查询所有事件。
                     * @return EventId 事件标识符，可以用来指定查询特定的事件，如果不指定，则查询所有事件。
                     * 
                     */
                    std::string GetEventId() const;

                    /**
                     * 设置事件标识符，可以用来指定查询特定的事件，如果不指定，则查询所有事件。
                     * @param _eventId 事件标识符，可以用来指定查询特定的事件，如果不指定，则查询所有事件。
                     * 
                     */
                    void SetEventId(const std::string& _eventId);

                    /**
                     * 判断参数 EventId 是否已赋值
                     * @return EventId 是否已赋值
                     * 
                     */
                    bool EventIdHasBeenSet() const;

                    /**
                     * 获取用户ID
                     * @return UserId 用户ID
                     * 
                     */
                    std::string GetUserId() const;

                    /**
                     * 设置用户ID
                     * @param _userId 用户ID
                     * 
                     */
                    void SetUserId(const std::string& _userId);

                    /**
                     * 判断参数 UserId 是否已赋值
                     * @return UserId 是否已赋值
                     * 
                     */
                    bool UserIdHasBeenSet() const;

                    /**
                     * 获取通道ID 非NVR设备则不填 NVR设备则必填 默认为无
                     * @return ChannelId 通道ID 非NVR设备则不填 NVR设备则必填 默认为无
                     * 
                     */
                    uint64_t GetChannelId() const;

                    /**
                     * 设置通道ID 非NVR设备则不填 NVR设备则必填 默认为无
                     * @param _channelId 通道ID 非NVR设备则不填 NVR设备则必填 默认为无
                     * 
                     */
                    void SetChannelId(const uint64_t& _channelId);

                    /**
                     * 判断参数 ChannelId 是否已赋值
                     * @return ChannelId 是否已赋值
                     * 
                     */
                    bool ChannelIdHasBeenSet() const;

                private:

                    /**
                     * 产品ID
                     */
                    std::string m_productId;
                    bool m_productIdHasBeenSet;

                    /**
                     * 设备名称
                     */
                    std::string m_deviceName;
                    bool m_deviceNameHasBeenSet;

                    /**
                     * 起始时间（Unix 时间戳，秒级）, 为0 表示 当前时间 - 24h
                     */
                    uint64_t m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 结束时间（Unix 时间戳，秒级）, 为0 表示当前时间
                     */
                    uint64_t m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 请求上下文, 用作查询游标
                     */
                    std::string m_context;
                    bool m_contextHasBeenSet;

                    /**
                     * 查询数据项目的最大数量, 默认为10。假设传Size=10，返回的实际事件数量为N，则 5 <= N <= 10。
                     */
                    uint64_t m_size;
                    bool m_sizeHasBeenSet;

                    /**
                     * 事件标识符，可以用来指定查询特定的事件，如果不指定，则查询所有事件。
                     */
                    std::string m_eventId;
                    bool m_eventIdHasBeenSet;

                    /**
                     * 用户ID
                     */
                    std::string m_userId;
                    bool m_userIdHasBeenSet;

                    /**
                     * 通道ID 非NVR设备则不填 NVR设备则必填 默认为无
                     */
                    uint64_t m_channelId;
                    bool m_channelIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_DESCRIBECLOUDSTORAGEEVENTSREQUEST_H_
