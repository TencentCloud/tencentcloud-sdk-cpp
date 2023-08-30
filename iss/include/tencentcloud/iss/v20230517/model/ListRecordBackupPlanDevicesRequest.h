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

#ifndef TENCENTCLOUD_ISS_V20230517_MODEL_LISTRECORDBACKUPPLANDEVICESREQUEST_H_
#define TENCENTCLOUD_ISS_V20230517_MODEL_LISTRECORDBACKUPPLANDEVICESREQUEST_H_

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
                * ListRecordBackupPlanDevices请求参数结构体
                */
                class ListRecordBackupPlanDevicesRequest : public AbstractModel
                {
                public:
                    ListRecordBackupPlanDevicesRequest();
                    ~ListRecordBackupPlanDevicesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取录像计划ID（从查询录像上云计划列表接口ListRecordBackupPlans中获取）
                     * @return PlanId 录像计划ID（从查询录像上云计划列表接口ListRecordBackupPlans中获取）
                     * 
                     */
                    std::string GetPlanId() const;

                    /**
                     * 设置录像计划ID（从查询录像上云计划列表接口ListRecordBackupPlans中获取）
                     * @param _planId 录像计划ID（从查询录像上云计划列表接口ListRecordBackupPlans中获取）
                     * 
                     */
                    void SetPlanId(const std::string& _planId);

                    /**
                     * 判断参数 PlanId 是否已赋值
                     * @return PlanId 是否已赋值
                     * 
                     */
                    bool PlanIdHasBeenSet() const;

                    /**
                     * 获取按照设备名称查询（为空时，不参考该参数）
                     * @return DeviceName 按照设备名称查询（为空时，不参考该参数）
                     * 
                     */
                    std::string GetDeviceName() const;

                    /**
                     * 设置按照设备名称查询（为空时，不参考该参数）
                     * @param _deviceName 按照设备名称查询（为空时，不参考该参数）
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
                     * 获取按照通道名称查询（为空时，不参考该参数）
                     * @return ChannelName 按照通道名称查询（为空时，不参考该参数）
                     * 
                     */
                    std::string GetChannelName() const;

                    /**
                     * 设置按照通道名称查询（为空时，不参考该参数）
                     * @param _channelName 按照通道名称查询（为空时，不参考该参数）
                     * 
                     */
                    void SetChannelName(const std::string& _channelName);

                    /**
                     * 判断参数 ChannelName 是否已赋值
                     * @return ChannelName 是否已赋值
                     * 
                     */
                    bool ChannelNameHasBeenSet() const;

                    /**
                     * 获取按照组织名称查询（为空时，不参考该参数）
                     * @return OrganizationName 按照组织名称查询（为空时，不参考该参数）
                     * 
                     */
                    std::string GetOrganizationName() const;

                    /**
                     * 设置按照组织名称查询（为空时，不参考该参数）
                     * @param _organizationName 按照组织名称查询（为空时，不参考该参数）
                     * 
                     */
                    void SetOrganizationName(const std::string& _organizationName);

                    /**
                     * 判断参数 OrganizationName 是否已赋值
                     * @return OrganizationName 是否已赋值
                     * 
                     */
                    bool OrganizationNameHasBeenSet() const;

                    /**
                     * 获取每页最大数量
                     * @return PageSize 每页最大数量
                     * 
                     */
                    int64_t GetPageSize() const;

                    /**
                     * 设置每页最大数量
                     * @param _pageSize 每页最大数量
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
                     * 获取分页页数
                     * @return PageNumber 分页页数
                     * 
                     */
                    int64_t GetPageNumber() const;

                    /**
                     * 设置分页页数
                     * @param _pageNumber 分页页数
                     * 
                     */
                    void SetPageNumber(const int64_t& _pageNumber);

                    /**
                     * 判断参数 PageNumber 是否已赋值
                     * @return PageNumber 是否已赋值
                     * 
                     */
                    bool PageNumberHasBeenSet() const;

                private:

                    /**
                     * 录像计划ID（从查询录像上云计划列表接口ListRecordBackupPlans中获取）
                     */
                    std::string m_planId;
                    bool m_planIdHasBeenSet;

                    /**
                     * 按照设备名称查询（为空时，不参考该参数）
                     */
                    std::string m_deviceName;
                    bool m_deviceNameHasBeenSet;

                    /**
                     * 按照通道名称查询（为空时，不参考该参数）
                     */
                    std::string m_channelName;
                    bool m_channelNameHasBeenSet;

                    /**
                     * 按照组织名称查询（为空时，不参考该参数）
                     */
                    std::string m_organizationName;
                    bool m_organizationNameHasBeenSet;

                    /**
                     * 每页最大数量
                     */
                    int64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * 分页页数
                     */
                    int64_t m_pageNumber;
                    bool m_pageNumberHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ISS_V20230517_MODEL_LISTRECORDBACKUPPLANDEVICESREQUEST_H_
