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

#ifndef TENCENTCLOUD_CHC_V20230418_MODEL_CREATERACKONWORKORDERREQUEST_H_
#define TENCENTCLOUD_CHC_V20230418_MODEL_CREATERACKONWORKORDERREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/chc/v20230418/model/DeviceRackOn.h>
#include <tencentcloud/chc/v20230418/model/SelfOperation.h>


namespace TencentCloud
{
    namespace Chc
    {
        namespace V20230418
        {
            namespace Model
            {
                /**
                * CreateRackOnWorkOrder请求参数结构体
                */
                class CreateRackOnWorkOrderRequest : public AbstractModel
                {
                public:
                    CreateRackOnWorkOrderRequest();
                    ~CreateRackOnWorkOrderRequest() = default;
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
                     * 获取上架人员 1.自行解决 2.由腾讯IDC负责
                     * @return StuffOption 上架人员 1.自行解决 2.由腾讯IDC负责
                     * 
                     */
                    std::string GetStuffOption() const;

                    /**
                     * 设置上架人员 1.自行解决 2.由腾讯IDC负责
                     * @param _stuffOption 上架人员 1.自行解决 2.由腾讯IDC负责
                     * 
                     */
                    void SetStuffOption(const std::string& _stuffOption);

                    /**
                     * 判断参数 StuffOption 是否已赋值
                     * @return StuffOption 是否已赋值
                     * 
                     */
                    bool StuffOptionHasBeenSet() const;

                    /**
                     * 获取上架后是否开电
                     * @return WithPowerOn 上架后是否开电
                     * 
                     */
                    bool GetWithPowerOn() const;

                    /**
                     * 设置上架后是否开电
                     * @param _withPowerOn 上架后是否开电
                     * 
                     */
                    void SetWithPowerOn(const bool& _withPowerOn);

                    /**
                     * 判断参数 WithPowerOn 是否已赋值
                     * @return WithPowerOn 是否已赋值
                     * 
                     */
                    bool WithPowerOnHasBeenSet() const;

                    /**
                     * 获取服务器收货列表
                     * @return DeviceRackOnList 服务器收货列表
                     * 
                     */
                    std::vector<DeviceRackOn> GetDeviceRackOnList() const;

                    /**
                     * 设置服务器收货列表
                     * @param _deviceRackOnList 服务器收货列表
                     * 
                     */
                    void SetDeviceRackOnList(const std::vector<DeviceRackOn>& _deviceRackOnList);

                    /**
                     * 判断参数 DeviceRackOnList 是否已赋值
                     * @return DeviceRackOnList 是否已赋值
                     * 
                     */
                    bool DeviceRackOnListHasBeenSet() const;

                    /**
                     * 获取自行解决必填
                     * @return SelfOperationInfo 自行解决必填
                     * 
                     */
                    SelfOperation GetSelfOperationInfo() const;

                    /**
                     * 设置自行解决必填
                     * @param _selfOperationInfo 自行解决必填
                     * 
                     */
                    void SetSelfOperationInfo(const SelfOperation& _selfOperationInfo);

                    /**
                     * 判断参数 SelfOperationInfo 是否已赋值
                     * @return SelfOperationInfo 是否已赋值
                     * 
                     */
                    bool SelfOperationInfoHasBeenSet() const;

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
                     * 上架人员 1.自行解决 2.由腾讯IDC负责
                     */
                    std::string m_stuffOption;
                    bool m_stuffOptionHasBeenSet;

                    /**
                     * 上架后是否开电
                     */
                    bool m_withPowerOn;
                    bool m_withPowerOnHasBeenSet;

                    /**
                     * 服务器收货列表
                     */
                    std::vector<DeviceRackOn> m_deviceRackOnList;
                    bool m_deviceRackOnListHasBeenSet;

                    /**
                     * 自行解决必填
                     */
                    SelfOperation m_selfOperationInfo;
                    bool m_selfOperationInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CHC_V20230418_MODEL_CREATERACKONWORKORDERREQUEST_H_
