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

#ifndef TENCENTCLOUD_ISS_V20230517_MODEL_LISTDEVICESNAPSHOTSREQUEST_H_
#define TENCENTCLOUD_ISS_V20230517_MODEL_LISTDEVICESNAPSHOTSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iss
    {
        namespace V20230517
        {
            namespace Model
            {
                /**
                * ListDeviceSnapshots请求参数结构体
                */
                class ListDeviceSnapshotsRequest : public AbstractModel
                {
                public:
                    ListDeviceSnapshotsRequest();
                    ~ListDeviceSnapshotsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取通道ID
                     * @return ChannelId 通道ID
                     * 
                     */
                    std::string GetChannelId() const;

                    /**
                     * 设置通道ID
                     * @param _channelId 通道ID
                     * 
                     */
                    void SetChannelId(const std::string& _channelId);

                    /**
                     * 判断参数 ChannelId 是否已赋值
                     * @return ChannelId 是否已赋值
                     * 
                     */
                    bool ChannelIdHasBeenSet() const;

                    /**
                     * 获取设备ID（该字段暂不生效）
                     * @return DeviceId 设备ID（该字段暂不生效）
                     * 
                     */
                    std::string GetDeviceId() const;

                    /**
                     * 设置设备ID（该字段暂不生效）
                     * @param _deviceId 设备ID（该字段暂不生效）
                     * 
                     */
                    void SetDeviceId(const std::string& _deviceId);

                    /**
                     * 判断参数 DeviceId 是否已赋值
                     * @return DeviceId 是否已赋值
                     * 
                     */
                    bool DeviceIdHasBeenSet() const;

                    /**
                     * 获取查询开始时间，默认查询当天
                     * @return Start 查询开始时间，默认查询当天
                     * 
                     */
                    int64_t GetStart() const;

                    /**
                     * 设置查询开始时间，默认查询当天
                     * @param _start 查询开始时间，默认查询当天
                     * 
                     */
                    void SetStart(const int64_t& _start);

                    /**
                     * 判断参数 Start 是否已赋值
                     * @return Start 是否已赋值
                     * 
                     */
                    bool StartHasBeenSet() const;

                    /**
                     * 获取查询结束时间，默认查询当天
                     * @return End 查询结束时间，默认查询当天
                     * 
                     */
                    int64_t GetEnd() const;

                    /**
                     * 设置查询结束时间，默认查询当天
                     * @param _end 查询结束时间，默认查询当天
                     * 
                     */
                    void SetEnd(const int64_t& _end);

                    /**
                     * 判断参数 End 是否已赋值
                     * @return End 是否已赋值
                     * 
                     */
                    bool EndHasBeenSet() const;

                    /**
                     * 获取分页页码，默认1
                     * @return PageNumber 分页页码，默认1
                     * 
                     */
                    int64_t GetPageNumber() const;

                    /**
                     * 设置分页页码，默认1
                     * @param _pageNumber 分页页码，默认1
                     * 
                     */
                    void SetPageNumber(const int64_t& _pageNumber);

                    /**
                     * 判断参数 PageNumber 是否已赋值
                     * @return PageNumber 是否已赋值
                     * 
                     */
                    bool PageNumberHasBeenSet() const;

                    /**
                     * 获取分页大小，默认200，最大2000
                     * @return PageSize 分页大小，默认200，最大2000
                     * 
                     */
                    int64_t GetPageSize() const;

                    /**
                     * 设置分页大小，默认200，最大2000
                     * @param _pageSize 分页大小，默认200，最大2000
                     * 
                     */
                    void SetPageSize(const int64_t& _pageSize);

                    /**
                     * 判断参数 PageSize 是否已赋值
                     * @return PageSize 是否已赋值
                     * 
                     */
                    bool PageSizeHasBeenSet() const;

                private:

                    /**
                     * 通道ID
                     */
                    std::string m_channelId;
                    bool m_channelIdHasBeenSet;

                    /**
                     * 设备ID（该字段暂不生效）
                     */
                    std::string m_deviceId;
                    bool m_deviceIdHasBeenSet;

                    /**
                     * 查询开始时间，默认查询当天
                     */
                    int64_t m_start;
                    bool m_startHasBeenSet;

                    /**
                     * 查询结束时间，默认查询当天
                     */
                    int64_t m_end;
                    bool m_endHasBeenSet;

                    /**
                     * 分页页码，默认1
                     */
                    int64_t m_pageNumber;
                    bool m_pageNumberHasBeenSet;

                    /**
                     * 分页大小，默认200，最大2000
                     */
                    int64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ISS_V20230517_MODEL_LISTDEVICESNAPSHOTSREQUEST_H_
