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

#ifndef TENCENTCLOUD_CHC_V20230418_MODEL_CREATEPOWERONWORKORDERREQUEST_H_
#define TENCENTCLOUD_CHC_V20230418_MODEL_CREATEPOWERONWORKORDERREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Chc
    {
        namespace V20230418
        {
            namespace Model
            {
                /**
                * CreatePowerOnWorkOrder请求参数结构体
                */
                class CreatePowerOnWorkOrderRequest : public AbstractModel
                {
                public:
                    CreatePowerOnWorkOrderRequest();
                    ~CreatePowerOnWorkOrderRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取机房id
                     * @return IdcId 机房id
                     * 
                     */
                    uint64_t GetIdcId() const;

                    /**
                     * 设置机房id
                     * @param _idcId 机房id
                     * 
                     */
                    void SetIdcId(const uint64_t& _idcId);

                    /**
                     * 判断参数 IdcId 是否已赋值
                     * @return IdcId 是否已赋值
                     * 
                     */
                    bool IdcIdHasBeenSet() const;

                    /**
                     * 获取设备类型，server, netDevice
                     * @return DeviceType 设备类型，server, netDevice
                     * 
                     */
                    std::string GetDeviceType() const;

                    /**
                     * 设置设备类型，server, netDevice
                     * @param _deviceType 设备类型，server, netDevice
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
                     * 获取设备sn列表
                     * @return DeviceSnList 设备sn列表
                     * 
                     */
                    std::vector<std::string> GetDeviceSnList() const;

                    /**
                     * 设置设备sn列表
                     * @param _deviceSnList 设备sn列表
                     * 
                     */
                    void SetDeviceSnList(const std::vector<std::string>& _deviceSnList);

                    /**
                     * 判断参数 DeviceSnList 是否已赋值
                     * @return DeviceSnList 是否已赋值
                     * 
                     */
                    bool DeviceSnListHasBeenSet() const;

                private:

                    /**
                     * 机房id
                     */
                    uint64_t m_idcId;
                    bool m_idcIdHasBeenSet;

                    /**
                     * 设备类型，server, netDevice
                     */
                    std::string m_deviceType;
                    bool m_deviceTypeHasBeenSet;

                    /**
                     * 设备sn列表
                     */
                    std::vector<std::string> m_deviceSnList;
                    bool m_deviceSnListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CHC_V20230418_MODEL_CREATEPOWERONWORKORDERREQUEST_H_
