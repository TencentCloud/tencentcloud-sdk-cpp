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

#ifndef TENCENTCLOUD_MNA_V20210119_MODEL_UPDATEDEVICEREQUEST_H_
#define TENCENTCLOUD_MNA_V20210119_MODEL_UPDATEDEVICEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mna/v20210119/model/UpdateNetInfo.h>


namespace TencentCloud
{
    namespace Mna
    {
        namespace V20210119
        {
            namespace Model
            {
                /**
                * UpdateDevice请求参数结构体
                */
                class UpdateDeviceRequest : public AbstractModel
                {
                public:
                    UpdateDeviceRequest();
                    ~UpdateDeviceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取设备id
                     * @return DeviceId 设备id
                     * 
                     */
                    std::string GetDeviceId() const;

                    /**
                     * 设置设备id
                     * @param _deviceId 设备id
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
                     * 获取设备名称
                     * @return DeviceName 设备名称
                     * 
                     */
                    std::string GetDeviceName() const;

                    /**
                     * 设置设备名称
                     * @param _deviceName 设备名称
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
                     * 获取设备备注
                     * @return Remark 设备备注
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置设备备注
                     * @param _remark 设备备注
                     * 
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     * 
                     */
                    bool RemarkHasBeenSet() const;

                    /**
                     * 获取更新设备网络信息
                     * @return UpdateNetInfo 更新设备网络信息
                     * 
                     */
                    std::vector<UpdateNetInfo> GetUpdateNetInfo() const;

                    /**
                     * 设置更新设备网络信息
                     * @param _updateNetInfo 更新设备网络信息
                     * 
                     */
                    void SetUpdateNetInfo(const std::vector<UpdateNetInfo>& _updateNetInfo);

                    /**
                     * 判断参数 UpdateNetInfo 是否已赋值
                     * @return UpdateNetInfo 是否已赋值
                     * 
                     */
                    bool UpdateNetInfoHasBeenSet() const;

                    /**
                     * 获取设备无流量包处理方式，0: 按量付费，1: 截断加速
                     * @return FlowTrunc 设备无流量包处理方式，0: 按量付费，1: 截断加速
                     * 
                     */
                    int64_t GetFlowTrunc() const;

                    /**
                     * 设置设备无流量包处理方式，0: 按量付费，1: 截断加速
                     * @param _flowTrunc 设备无流量包处理方式，0: 按量付费，1: 截断加速
                     * 
                     */
                    void SetFlowTrunc(const int64_t& _flowTrunc);

                    /**
                     * 判断参数 FlowTrunc 是否已赋值
                     * @return FlowTrunc 是否已赋值
                     * 
                     */
                    bool FlowTruncHasBeenSet() const;

                private:

                    /**
                     * 设备id
                     */
                    std::string m_deviceId;
                    bool m_deviceIdHasBeenSet;

                    /**
                     * 设备名称
                     */
                    std::string m_deviceName;
                    bool m_deviceNameHasBeenSet;

                    /**
                     * 设备备注
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * 更新设备网络信息
                     */
                    std::vector<UpdateNetInfo> m_updateNetInfo;
                    bool m_updateNetInfoHasBeenSet;

                    /**
                     * 设备无流量包处理方式，0: 按量付费，1: 截断加速
                     */
                    int64_t m_flowTrunc;
                    bool m_flowTruncHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MNA_V20210119_MODEL_UPDATEDEVICEREQUEST_H_
