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

#ifndef TENCENTCLOUD_MNA_V20210119_MODEL_GETFLOWPACKAGESREQUEST_H_
#define TENCENTCLOUD_MNA_V20210119_MODEL_GETFLOWPACKAGESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mna
    {
        namespace V20210119
        {
            namespace Model
            {
                /**
                * GetFlowPackages请求参数结构体
                */
                class GetFlowPackagesRequest : public AbstractModel
                {
                public:
                    GetFlowPackagesRequest();
                    ~GetFlowPackagesRequest() = default;
                    std::string ToJsonString() const;


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
                     * 获取流量包的唯一资源ID
                     * @return ResourceId 流量包的唯一资源ID
                     * 
                     */
                    std::string GetResourceId() const;

                    /**
                     * 设置流量包的唯一资源ID
                     * @param _resourceId 流量包的唯一资源ID
                     * 
                     */
                    void SetResourceId(const std::string& _resourceId);

                    /**
                     * 判断参数 ResourceId 是否已赋值
                     * @return ResourceId 是否已赋值
                     * 
                     */
                    bool ResourceIdHasBeenSet() const;

                    /**
                     * 获取流量包绑定的设备ID
                     * @return DeviceId 流量包绑定的设备ID
                     * 
                     */
                    std::string GetDeviceId() const;

                    /**
                     * 设置流量包绑定的设备ID
                     * @param _deviceId 流量包绑定的设备ID
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
                     * 获取流量包状态，0：未生效，1：有效期内，2：已过期

                     * @return Status 流量包状态，0：未生效，1：有效期内，2：已过期

                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置流量包状态，0：未生效，1：有效期内，2：已过期

                     * @param _status 流量包状态，0：未生效，1：有效期内，2：已过期

                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                private:

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
                     * 流量包的唯一资源ID
                     */
                    std::string m_resourceId;
                    bool m_resourceIdHasBeenSet;

                    /**
                     * 流量包绑定的设备ID
                     */
                    std::string m_deviceId;
                    bool m_deviceIdHasBeenSet;

                    /**
                     * 流量包状态，0：未生效，1：有效期内，2：已过期

                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MNA_V20210119_MODEL_GETFLOWPACKAGESREQUEST_H_
