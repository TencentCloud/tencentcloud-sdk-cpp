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

#ifndef TENCENTCLOUD_IOA_V20220601_MODEL_MODIFYVIRTUALDEVICEGROUPSREQUEST_H_
#define TENCENTCLOUD_IOA_V20220601_MODEL_MODIFYVIRTUALDEVICEGROUPSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ioa/v20220601/model/ModifyVirtualDeviceGroupsReqItem.h>


namespace TencentCloud
{
    namespace Ioa
    {
        namespace V20220601
        {
            namespace Model
            {
                /**
                * ModifyVirtualDeviceGroups请求参数结构体
                */
                class ModifyVirtualDeviceGroupsRequest : public AbstractModel
                {
                public:
                    ModifyVirtualDeviceGroupsRequest();
                    ~ModifyVirtualDeviceGroupsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取管理域实例ID，用于CAM管理域权限分配。若企业未进行管理域的划分，可直接传入根域"1"，此时表示针对当前企业的全部设备和账号进行接口CRUD，具体CRUD的影响范围限制于相应接口的入参。
                     * @return DomainInstanceId 管理域实例ID，用于CAM管理域权限分配。若企业未进行管理域的划分，可直接传入根域"1"，此时表示针对当前企业的全部设备和账号进行接口CRUD，具体CRUD的影响范围限制于相应接口的入参。
                     * 
                     */
                    std::string GetDomainInstanceId() const;

                    /**
                     * 设置管理域实例ID，用于CAM管理域权限分配。若企业未进行管理域的划分，可直接传入根域"1"，此时表示针对当前企业的全部设备和账号进行接口CRUD，具体CRUD的影响范围限制于相应接口的入参。
                     * @param _domainInstanceId 管理域实例ID，用于CAM管理域权限分配。若企业未进行管理域的划分，可直接传入根域"1"，此时表示针对当前企业的全部设备和账号进行接口CRUD，具体CRUD的影响范围限制于相应接口的入参。
                     * 
                     */
                    void SetDomainInstanceId(const std::string& _domainInstanceId);

                    /**
                     * 判断参数 DomainInstanceId 是否已赋值
                     * @return DomainInstanceId 是否已赋值
                     * 
                     */
                    bool DomainInstanceIdHasBeenSet() const;

                    /**
                     * 获取添加到的终端自定义分组id。和DeviceVirtualGroupIds互斥，必填其一，优先使用本参数
                     * @return DeviceVirtualGroupId 添加到的终端自定义分组id。和DeviceVirtualGroupIds互斥，必填其一，优先使用本参数
                     * 
                     */
                    int64_t GetDeviceVirtualGroupId() const;

                    /**
                     * 设置添加到的终端自定义分组id。和DeviceVirtualGroupIds互斥，必填其一，优先使用本参数
                     * @param _deviceVirtualGroupId 添加到的终端自定义分组id。和DeviceVirtualGroupIds互斥，必填其一，优先使用本参数
                     * 
                     */
                    void SetDeviceVirtualGroupId(const int64_t& _deviceVirtualGroupId);

                    /**
                     * 判断参数 DeviceVirtualGroupId 是否已赋值
                     * @return DeviceVirtualGroupId 是否已赋值
                     * 
                     */
                    bool DeviceVirtualGroupIdHasBeenSet() const;

                    /**
                     * 获取必填，操作的设备列表数据
                     * @return DeviceList 必填，操作的设备列表数据
                     * 
                     */
                    std::vector<ModifyVirtualDeviceGroupsReqItem> GetDeviceList() const;

                    /**
                     * 设置必填，操作的设备列表数据
                     * @param _deviceList 必填，操作的设备列表数据
                     * 
                     */
                    void SetDeviceList(const std::vector<ModifyVirtualDeviceGroupsReqItem>& _deviceList);

                    /**
                     * 判断参数 DeviceList 是否已赋值
                     * @return DeviceList 是否已赋值
                     * 
                     */
                    bool DeviceListHasBeenSet() const;

                    /**
                     * 获取要添加的终端自定义分组id列表
                     * @return DeviceVirtualGroupIds 要添加的终端自定义分组id列表
                     * 
                     */
                    std::vector<int64_t> GetDeviceVirtualGroupIds() const;

                    /**
                     * 设置要添加的终端自定义分组id列表
                     * @param _deviceVirtualGroupIds 要添加的终端自定义分组id列表
                     * 
                     */
                    void SetDeviceVirtualGroupIds(const std::vector<int64_t>& _deviceVirtualGroupIds);

                    /**
                     * 判断参数 DeviceVirtualGroupIds 是否已赋值
                     * @return DeviceVirtualGroupIds 是否已赋值
                     * 
                     */
                    bool DeviceVirtualGroupIdsHasBeenSet() const;

                    /**
                     * 获取必填，系统类型（0: win，1：linux，2: mac，3: win_srv，4：android，5：ios   默认值0）
                     * @return OsType 必填，系统类型（0: win，1：linux，2: mac，3: win_srv，4：android，5：ios   默认值0）
                     * 
                     */
                    int64_t GetOsType() const;

                    /**
                     * 设置必填，系统类型（0: win，1：linux，2: mac，3: win_srv，4：android，5：ios   默认值0）
                     * @param _osType 必填，系统类型（0: win，1：linux，2: mac，3: win_srv，4：android，5：ios   默认值0）
                     * 
                     */
                    void SetOsType(const int64_t& _osType);

                    /**
                     * 判断参数 OsType 是否已赋值
                     * @return OsType 是否已赋值
                     * 
                     */
                    bool OsTypeHasBeenSet() const;

                private:

                    /**
                     * 管理域实例ID，用于CAM管理域权限分配。若企业未进行管理域的划分，可直接传入根域"1"，此时表示针对当前企业的全部设备和账号进行接口CRUD，具体CRUD的影响范围限制于相应接口的入参。
                     */
                    std::string m_domainInstanceId;
                    bool m_domainInstanceIdHasBeenSet;

                    /**
                     * 添加到的终端自定义分组id。和DeviceVirtualGroupIds互斥，必填其一，优先使用本参数
                     */
                    int64_t m_deviceVirtualGroupId;
                    bool m_deviceVirtualGroupIdHasBeenSet;

                    /**
                     * 必填，操作的设备列表数据
                     */
                    std::vector<ModifyVirtualDeviceGroupsReqItem> m_deviceList;
                    bool m_deviceListHasBeenSet;

                    /**
                     * 要添加的终端自定义分组id列表
                     */
                    std::vector<int64_t> m_deviceVirtualGroupIds;
                    bool m_deviceVirtualGroupIdsHasBeenSet;

                    /**
                     * 必填，系统类型（0: win，1：linux，2: mac，3: win_srv，4：android，5：ios   默认值0）
                     */
                    int64_t m_osType;
                    bool m_osTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOA_V20220601_MODEL_MODIFYVIRTUALDEVICEGROUPSREQUEST_H_
