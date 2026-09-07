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
                     * 获取<p>页码，从1开始</p>
                     * @return PageNumber <p>页码，从1开始</p>
                     * 
                     */
                    uint64_t GetPageNumber() const;

                    /**
                     * 设置<p>页码，从1开始</p>
                     * @param _pageNumber <p>页码，从1开始</p>
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
                     * 获取<p>每页个数</p>
                     * @return PageSize <p>每页个数</p>
                     * 
                     */
                    uint64_t GetPageSize() const;

                    /**
                     * 设置<p>每页个数</p>
                     * @param _pageSize <p>每页个数</p>
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
                     * 获取<p>流量包的唯一资源ID</p>
                     * @return ResourceId <p>流量包的唯一资源ID</p>
                     * 
                     */
                    std::string GetResourceId() const;

                    /**
                     * 设置<p>流量包的唯一资源ID</p>
                     * @param _resourceId <p>流量包的唯一资源ID</p>
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
                     * 获取<p>流量包绑定的设备ID</p>
                     * @return DeviceId <p>流量包绑定的设备ID</p>
                     * 
                     */
                    std::string GetDeviceId() const;

                    /**
                     * 设置<p>流量包绑定的设备ID</p>
                     * @param _deviceId <p>流量包绑定的设备ID</p>
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
                     * 获取<p>流量包状态，0：未生效，1：有效期内，2：已过期</p>
                     * @return Status <p>流量包状态，0：未生效，1：有效期内，2：已过期</p>
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置<p>流量包状态，0：未生效，1：有效期内，2：已过期</p>
                     * @param _status <p>流量包状态，0：未生效，1：有效期内，2：已过期</p>
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取<p>生效时间在此时间之后</p>
                     * @return ActiveTimeStart <p>生效时间在此时间之后</p>
                     * 
                     */
                    std::string GetActiveTimeStart() const;

                    /**
                     * 设置<p>生效时间在此时间之后</p>
                     * @param _activeTimeStart <p>生效时间在此时间之后</p>
                     * 
                     */
                    void SetActiveTimeStart(const std::string& _activeTimeStart);

                    /**
                     * 判断参数 ActiveTimeStart 是否已赋值
                     * @return ActiveTimeStart 是否已赋值
                     * 
                     */
                    bool ActiveTimeStartHasBeenSet() const;

                    /**
                     * 获取<p>生效时间在此时间之前</p>
                     * @return ActiveTimeEnd <p>生效时间在此时间之前</p>
                     * 
                     */
                    std::string GetActiveTimeEnd() const;

                    /**
                     * 设置<p>生效时间在此时间之前</p>
                     * @param _activeTimeEnd <p>生效时间在此时间之前</p>
                     * 
                     */
                    void SetActiveTimeEnd(const std::string& _activeTimeEnd);

                    /**
                     * 判断参数 ActiveTimeEnd 是否已赋值
                     * @return ActiveTimeEnd 是否已赋值
                     * 
                     */
                    bool ActiveTimeEndHasBeenSet() const;

                private:

                    /**
                     * <p>页码，从1开始</p>
                     */
                    uint64_t m_pageNumber;
                    bool m_pageNumberHasBeenSet;

                    /**
                     * <p>每页个数</p>
                     */
                    uint64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * <p>流量包的唯一资源ID</p>
                     */
                    std::string m_resourceId;
                    bool m_resourceIdHasBeenSet;

                    /**
                     * <p>流量包绑定的设备ID</p>
                     */
                    std::string m_deviceId;
                    bool m_deviceIdHasBeenSet;

                    /**
                     * <p>流量包状态，0：未生效，1：有效期内，2：已过期</p>
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>生效时间在此时间之后</p>
                     */
                    std::string m_activeTimeStart;
                    bool m_activeTimeStartHasBeenSet;

                    /**
                     * <p>生效时间在此时间之前</p>
                     */
                    std::string m_activeTimeEnd;
                    bool m_activeTimeEndHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MNA_V20210119_MODEL_GETFLOWPACKAGESREQUEST_H_
