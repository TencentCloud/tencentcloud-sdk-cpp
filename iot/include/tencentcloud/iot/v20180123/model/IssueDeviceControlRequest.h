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

#ifndef TENCENTCLOUD_IOT_V20180123_MODEL_ISSUEDEVICECONTROLREQUEST_H_
#define TENCENTCLOUD_IOT_V20180123_MODEL_ISSUEDEVICECONTROLREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iot
    {
        namespace V20180123
        {
            namespace Model
            {
                /**
                * IssueDeviceControl请求参数结构体
                */
                class IssueDeviceControlRequest : public AbstractModel
                {
                public:
                    IssueDeviceControlRequest();
                    ~IssueDeviceControlRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取产品Id
                     * @return ProductId 产品Id
                     * 
                     */
                    std::string GetProductId() const;

                    /**
                     * 设置产品Id
                     * @param _productId 产品Id
                     * 
                     */
                    void SetProductId(const std::string& _productId);

                    /**
                     * 判断参数 ProductId 是否已赋值
                     * @return ProductId 是否已赋值
                     * 
                     */
                    bool ProductIdHasBeenSet() const;

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
                     * 获取控制数据（json）
                     * @return ControlData 控制数据（json）
                     * 
                     */
                    std::string GetControlData() const;

                    /**
                     * 设置控制数据（json）
                     * @param _controlData 控制数据（json）
                     * 
                     */
                    void SetControlData(const std::string& _controlData);

                    /**
                     * 判断参数 ControlData 是否已赋值
                     * @return ControlData 是否已赋值
                     * 
                     */
                    bool ControlDataHasBeenSet() const;

                    /**
                     * 获取是否发送metadata字段
                     * @return Metadata 是否发送metadata字段
                     * 
                     */
                    bool GetMetadata() const;

                    /**
                     * 设置是否发送metadata字段
                     * @param _metadata 是否发送metadata字段
                     * 
                     */
                    void SetMetadata(const bool& _metadata);

                    /**
                     * 判断参数 Metadata 是否已赋值
                     * @return Metadata 是否已赋值
                     * 
                     */
                    bool MetadataHasBeenSet() const;

                private:

                    /**
                     * 产品Id
                     */
                    std::string m_productId;
                    bool m_productIdHasBeenSet;

                    /**
                     * 设备名称
                     */
                    std::string m_deviceName;
                    bool m_deviceNameHasBeenSet;

                    /**
                     * 控制数据（json）
                     */
                    std::string m_controlData;
                    bool m_controlDataHasBeenSet;

                    /**
                     * 是否发送metadata字段
                     */
                    bool m_metadata;
                    bool m_metadataHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOT_V20180123_MODEL_ISSUEDEVICECONTROLREQUEST_H_
