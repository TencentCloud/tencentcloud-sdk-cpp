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

#ifndef TENCENTCLOUD_CHC_V20230418_MODEL_CREATEMOVINGWORKORDERREQUEST_H_
#define TENCENTCLOUD_CHC_V20230418_MODEL_CREATEMOVINGWORKORDERREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/chc/v20230418/model/DeviceRackOn.h>


namespace TencentCloud
{
    namespace Chc
    {
        namespace V20230418
        {
            namespace Model
            {
                /**
                * CreateMovingWorkOrder请求参数结构体
                */
                class CreateMovingWorkOrderRequest : public AbstractModel
                {
                public:
                    CreateMovingWorkOrderRequest();
                    ~CreateMovingWorkOrderRequest() = default;
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
                     * 获取设备搬迁信息列表
                     * @return DeviceMovingList 设备搬迁信息列表
                     * 
                     */
                    std::vector<DeviceRackOn> GetDeviceMovingList() const;

                    /**
                     * 设置设备搬迁信息列表
                     * @param _deviceMovingList 设备搬迁信息列表
                     * 
                     */
                    void SetDeviceMovingList(const std::vector<DeviceRackOn>& _deviceMovingList);

                    /**
                     * 判断参数 DeviceMovingList 是否已赋值
                     * @return DeviceMovingList 是否已赋值
                     * 
                     */
                    bool DeviceMovingListHasBeenSet() const;

                    /**
                     * 获取备注
                     * @return Remark 备注
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置备注
                     * @param _remark 备注
                     * 
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     * 
                     */
                    bool RemarkHasBeenSet() const;

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
                     * 上架后是否开电
                     */
                    bool m_withPowerOn;
                    bool m_withPowerOnHasBeenSet;

                    /**
                     * 设备搬迁信息列表
                     */
                    std::vector<DeviceRackOn> m_deviceMovingList;
                    bool m_deviceMovingListHasBeenSet;

                    /**
                     * 备注
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CHC_V20230418_MODEL_CREATEMOVINGWORKORDERREQUEST_H_
