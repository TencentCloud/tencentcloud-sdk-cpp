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

#ifndef TENCENTCLOUD_IECP_V20210914_MODEL_CREATEIOTDEVICEREQUEST_H_
#define TENCENTCLOUD_IECP_V20210914_MODEL_CREATEIOTDEVICEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iecp
    {
        namespace V20210914
        {
            namespace Model
            {
                /**
                * CreateIotDevice请求参数结构体
                */
                class CreateIotDeviceRequest : public AbstractModel
                {
                public:
                    CreateIotDeviceRequest();
                    ~CreateIotDeviceRequest() = default;
                    std::string ToJsonString() const;


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
                     * 获取设备所属的产品id
                     * @return ProductId 设备所属的产品id
                     * 
                     */
                    std::string GetProductId() const;

                    /**
                     * 设置设备所属的产品id
                     * @param _productId 设备所属的产品id
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
                     * 获取描述
                     * @return Description 描述
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置描述
                     * @param _description 描述
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取无
                     * @return UnitID 无
                     * 
                     */
                    int64_t GetUnitID() const;

                    /**
                     * 设置无
                     * @param _unitID 无
                     * 
                     */
                    void SetUnitID(const int64_t& _unitID);

                    /**
                     * 判断参数 UnitID 是否已赋值
                     * @return UnitID 是否已赋值
                     * 
                     */
                    bool UnitIDHasBeenSet() const;

                private:

                    /**
                     * 设备名称
                     */
                    std::string m_deviceName;
                    bool m_deviceNameHasBeenSet;

                    /**
                     * 设备所属的产品id
                     */
                    std::string m_productId;
                    bool m_productIdHasBeenSet;

                    /**
                     * 描述
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 无
                     */
                    int64_t m_unitID;
                    bool m_unitIDHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IECP_V20210914_MODEL_CREATEIOTDEVICEREQUEST_H_
