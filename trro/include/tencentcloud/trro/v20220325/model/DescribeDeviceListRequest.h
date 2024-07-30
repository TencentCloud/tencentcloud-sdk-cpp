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

#ifndef TENCENTCLOUD_TRRO_V20220325_MODEL_DESCRIBEDEVICELISTREQUEST_H_
#define TENCENTCLOUD_TRRO_V20220325_MODEL_DESCRIBEDEVICELISTREQUEST_H_

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
                * DescribeDeviceList请求参数结构体
                */
                class DescribeDeviceListRequest : public AbstractModel
                {
                public:
                    DescribeDeviceListRequest();
                    ~DescribeDeviceListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取设备所属项目ID
                     * @return ProjectId 设备所属项目ID
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置设备所属项目ID
                     * @param _projectId 设备所属项目ID
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
                     * 获取设备类型筛选，不填默认为全部设备类型
                     * @return DeviceType 设备类型筛选，不填默认为全部设备类型
                     * 
                     */
                    std::string GetDeviceType() const;

                    /**
                     * 设置设备类型筛选，不填默认为全部设备类型
                     * @param _deviceType 设备类型筛选，不填默认为全部设备类型
                     * 
                     */
                    void SetDeviceType(const std::string& _deviceType);

                    /**
                     * 判断参数 DeviceType 是否已赋值
                     * @return DeviceType 是否已赋值
                     * 
                     */
                    bool DeviceTypeHasBeenSet() const;

                    /**
                     * 获取对设备ID或Name按关键字进行模糊匹配，不填则不进行模糊匹配
                     * @return SearchWords 对设备ID或Name按关键字进行模糊匹配，不填则不进行模糊匹配
                     * 
                     */
                    std::string GetSearchWords() const;

                    /**
                     * 设置对设备ID或Name按关键字进行模糊匹配，不填则不进行模糊匹配
                     * @param _searchWords 对设备ID或Name按关键字进行模糊匹配，不填则不进行模糊匹配
                     * 
                     */
                    void SetSearchWords(const std::string& _searchWords);

                    /**
                     * 判断参数 SearchWords 是否已赋值
                     * @return SearchWords 是否已赋值
                     * 
                     */
                    bool SearchWordsHasBeenSet() const;

                    /**
                     * 获取每页返回的最大设备数，不填默认为10
                     * @return PageSize 每页返回的最大设备数，不填默认为10
                     * 
                     */
                    int64_t GetPageSize() const;

                    /**
                     * 设置每页返回的最大设备数，不填默认为10
                     * @param _pageSize 每页返回的最大设备数，不填默认为10
                     * 
                     */
                    void SetPageSize(const int64_t& _pageSize);

                    /**
                     * 判断参数 PageSize 是否已赋值
                     * @return PageSize 是否已赋值
                     * 
                     */
                    bool PageSizeHasBeenSet() const;

                    /**
                     * 获取当前页码，不填默认为1（首页）
                     * @return PageNumber 当前页码，不填默认为1（首页）
                     * 
                     */
                    int64_t GetPageNumber() const;

                    /**
                     * 设置当前页码，不填默认为1（首页）
                     * @param _pageNumber 当前页码，不填默认为1（首页）
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
                     * 获取设备状态筛选，不填默认为不过滤。取值：["ready","connected","online"]，online代表ready或connected
                     * @return DeviceStatus 设备状态筛选，不填默认为不过滤。取值：["ready","connected","online"]，online代表ready或connected
                     * 
                     */
                    std::string GetDeviceStatus() const;

                    /**
                     * 设置设备状态筛选，不填默认为不过滤。取值：["ready","connected","online"]，online代表ready或connected
                     * @param _deviceStatus 设备状态筛选，不填默认为不过滤。取值：["ready","connected","online"]，online代表ready或connected
                     * 
                     */
                    void SetDeviceStatus(const std::string& _deviceStatus);

                    /**
                     * 判断参数 DeviceStatus 是否已赋值
                     * @return DeviceStatus 是否已赋值
                     * 
                     */
                    bool DeviceStatusHasBeenSet() const;

                private:

                    /**
                     * 设备所属项目ID
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 设备类型筛选，不填默认为全部设备类型
                     */
                    std::string m_deviceType;
                    bool m_deviceTypeHasBeenSet;

                    /**
                     * 对设备ID或Name按关键字进行模糊匹配，不填则不进行模糊匹配
                     */
                    std::string m_searchWords;
                    bool m_searchWordsHasBeenSet;

                    /**
                     * 每页返回的最大设备数，不填默认为10
                     */
                    int64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * 当前页码，不填默认为1（首页）
                     */
                    int64_t m_pageNumber;
                    bool m_pageNumberHasBeenSet;

                    /**
                     * 设备状态筛选，不填默认为不过滤。取值：["ready","connected","online"]，online代表ready或connected
                     */
                    std::string m_deviceStatus;
                    bool m_deviceStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRRO_V20220325_MODEL_DESCRIBEDEVICELISTREQUEST_H_
