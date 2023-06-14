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

#ifndef TENCENTCLOUD_TRRO_V20220325_MODEL_DESCRIBERECENTSESSIONLISTREQUEST_H_
#define TENCENTCLOUD_TRRO_V20220325_MODEL_DESCRIBERECENTSESSIONLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Trro
    {
        namespace V20220325
        {
            namespace Model
            {
                /**
                * DescribeRecentSessionList请求参数结构体
                */
                class DescribeRecentSessionListRequest : public AbstractModel
                {
                public:
                    DescribeRecentSessionListRequest();
                    ~DescribeRecentSessionListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取项目ID
                     * @return ProjectId 项目ID
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置项目ID
                     * @param _projectId 项目ID
                     * 
                     */
                    void SetProjectId(const std::string& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取页码，从1开始
                     * @return PageNumber 页码，从1开始
                     * 
                     */
                    uint64_t GetPageNumber() const;

                    /**
                     * 设置页码，从1开始
                     * @param _pageNumber 页码，从1开始
                     * 
                     */
                    void SetPageNumber(const uint64_t& _pageNumber);

                    /**
                     * 判断参数 PageNumber 是否已赋值
                     * @return PageNumber 是否已赋值
                     * 
                     */
                    bool PageNumberHasBeenSet() const;

                    /**
                     * 获取每页个数
                     * @return PageSize 每页个数
                     * 
                     */
                    uint64_t GetPageSize() const;

                    /**
                     * 设置每页个数
                     * @param _pageSize 每页个数
                     * 
                     */
                    void SetPageSize(const uint64_t& _pageSize);

                    /**
                     * 判断参数 PageSize 是否已赋值
                     * @return PageSize 是否已赋值
                     * 
                     */
                    bool PageSizeHasBeenSet() const;

                    /**
                     * 获取设备ID，支持过滤远端设备或现场设备
                     * @return DeviceId 设备ID，支持过滤远端设备或现场设备
                     * 
                     */
                    std::string GetDeviceId() const;

                    /**
                     * 设置设备ID，支持过滤远端设备或现场设备
                     * @param _deviceId 设备ID，支持过滤远端设备或现场设备
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
                     * 获取时间范围的起始时间。时间范围最大为最近两小时，若不传或超出范围，则起始时间按两小时前计算
                     * @return StartTime 时间范围的起始时间。时间范围最大为最近两小时，若不传或超出范围，则起始时间按两小时前计算
                     * 
                     */
                    uint64_t GetStartTime() const;

                    /**
                     * 设置时间范围的起始时间。时间范围最大为最近两小时，若不传或超出范围，则起始时间按两小时前计算
                     * @param _startTime 时间范围的起始时间。时间范围最大为最近两小时，若不传或超出范围，则起始时间按两小时前计算
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
                     * 获取时间范围的结束时间。时间范围最大为最近两小时，若不传或超出范围，则结束时间按当前时间计算
                     * @return EndTime 时间范围的结束时间。时间范围最大为最近两小时，若不传或超出范围，则结束时间按当前时间计算
                     * 
                     */
                    uint64_t GetEndTime() const;

                    /**
                     * 设置时间范围的结束时间。时间范围最大为最近两小时，若不传或超出范围，则结束时间按当前时间计算
                     * @param _endTime 时间范围的结束时间。时间范围最大为最近两小时，若不传或超出范围，则结束时间按当前时间计算
                     * 
                     */
                    void SetEndTime(const uint64_t& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                private:

                    /**
                     * 项目ID
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 页码，从1开始
                     */
                    uint64_t m_pageNumber;
                    bool m_pageNumberHasBeenSet;

                    /**
                     * 每页个数
                     */
                    uint64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * 设备ID，支持过滤远端设备或现场设备
                     */
                    std::string m_deviceId;
                    bool m_deviceIdHasBeenSet;

                    /**
                     * 时间范围的起始时间。时间范围最大为最近两小时，若不传或超出范围，则起始时间按两小时前计算
                     */
                    uint64_t m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 时间范围的结束时间。时间范围最大为最近两小时，若不传或超出范围，则结束时间按当前时间计算
                     */
                    uint64_t m_endTime;
                    bool m_endTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRRO_V20220325_MODEL_DESCRIBERECENTSESSIONLISTREQUEST_H_
