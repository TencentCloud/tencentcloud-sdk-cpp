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

#ifndef TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_TRANSFERTWECALLDEVICEREQUEST_H_
#define TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_TRANSFERTWECALLDEVICEREQUEST_H_

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
                * TransferTWeCallDevice请求参数结构体
                */
                class TransferTWeCallDeviceRequest : public AbstractModel
                {
                public:
                    TransferTWeCallDeviceRequest();
                    ~TransferTWeCallDeviceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取sn信息，product_deviceName
                     * @return TransferInDevice sn信息，product_deviceName
                     * 
                     */
                    std::string GetTransferInDevice() const;

                    /**
                     * 设置sn信息，product_deviceName
                     * @param _transferInDevice sn信息，product_deviceName
                     * 
                     */
                    void SetTransferInDevice(const std::string& _transferInDevice);

                    /**
                     * 判断参数 TransferInDevice 是否已赋值
                     * @return TransferInDevice 是否已赋值
                     * 
                     */
                    bool TransferInDeviceHasBeenSet() const;

                    /**
                     * 获取sn信息，product_deviceName
                     * @return TransferOutDevice sn信息，product_deviceName
                     * 
                     */
                    std::string GetTransferOutDevice() const;

                    /**
                     * 设置sn信息，product_deviceName
                     * @param _transferOutDevice sn信息，product_deviceName
                     * 
                     */
                    void SetTransferOutDevice(const std::string& _transferOutDevice);

                    /**
                     * 判断参数 TransferOutDevice 是否已赋值
                     * @return TransferOutDevice 是否已赋值
                     * 
                     */
                    bool TransferOutDeviceHasBeenSet() const;

                private:

                    /**
                     * sn信息，product_deviceName
                     */
                    std::string m_transferInDevice;
                    bool m_transferInDeviceHasBeenSet;

                    /**
                     * sn信息，product_deviceName
                     */
                    std::string m_transferOutDevice;
                    bool m_transferOutDeviceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_TRANSFERTWECALLDEVICEREQUEST_H_
