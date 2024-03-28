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

#ifndef TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_TRANSFERCLOUDSTORAGEREQUEST_H_
#define TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_TRANSFERCLOUDSTORAGEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iotexplorer
    {
        namespace V20190423
        {
            namespace Model
            {
                /**
                * TransferCloudStorage请求参数结构体
                */
                class TransferCloudStorageRequest : public AbstractModel
                {
                public:
                    TransferCloudStorageRequest();
                    ~TransferCloudStorageRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取产品ID
                     * @return ProductId 产品ID
                     * 
                     */
                    std::string GetProductId() const;

                    /**
                     * 设置产品ID
                     * @param _productId 产品ID
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
                     * 获取已开通云存的设备名称
                     * @return DeviceName 已开通云存的设备名称
                     * 
                     */
                    std::string GetDeviceName() const;

                    /**
                     * 设置已开通云存的设备名称
                     * @param _deviceName 已开通云存的设备名称
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
                     * 获取未开通云存的设备名称
                     * @return ToDeviceName 未开通云存的设备名称
                     * 
                     */
                    std::string GetToDeviceName() const;

                    /**
                     * 设置未开通云存的设备名称
                     * @param _toDeviceName 未开通云存的设备名称
                     * 
                     */
                    void SetToDeviceName(const std::string& _toDeviceName);

                    /**
                     * 判断参数 ToDeviceName 是否已赋值
                     * @return ToDeviceName 是否已赋值
                     * 
                     */
                    bool ToDeviceNameHasBeenSet() const;

                    /**
                     * 获取未开通云存的设备产品ID
                     * @return ToProductId 未开通云存的设备产品ID
                     * 
                     */
                    std::string GetToProductId() const;

                    /**
                     * 设置未开通云存的设备产品ID
                     * @param _toProductId 未开通云存的设备产品ID
                     * 
                     */
                    void SetToProductId(const std::string& _toProductId);

                    /**
                     * 判断参数 ToProductId 是否已赋值
                     * @return ToProductId 是否已赋值
                     * 
                     */
                    bool ToProductIdHasBeenSet() const;

                private:

                    /**
                     * 产品ID
                     */
                    std::string m_productId;
                    bool m_productIdHasBeenSet;

                    /**
                     * 已开通云存的设备名称
                     */
                    std::string m_deviceName;
                    bool m_deviceNameHasBeenSet;

                    /**
                     * 未开通云存的设备名称
                     */
                    std::string m_toDeviceName;
                    bool m_toDeviceNameHasBeenSet;

                    /**
                     * 未开通云存的设备产品ID
                     */
                    std::string m_toProductId;
                    bool m_toProductIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_TRANSFERCLOUDSTORAGEREQUEST_H_
