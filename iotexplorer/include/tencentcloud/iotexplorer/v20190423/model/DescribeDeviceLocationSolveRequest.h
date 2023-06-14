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

#ifndef TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_DESCRIBEDEVICELOCATIONSOLVEREQUEST_H_
#define TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_DESCRIBEDEVICELOCATIONSOLVEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/iotexplorer/v20190423/model/WifiInfo.h>


namespace TencentCloud
{
    namespace Iotexplorer
    {
        namespace V20190423
        {
            namespace Model
            {
                /**
                * DescribeDeviceLocationSolve请求参数结构体
                */
                class DescribeDeviceLocationSolveRequest : public AbstractModel
                {
                public:
                    DescribeDeviceLocationSolveRequest();
                    ~DescribeDeviceLocationSolveRequest() = default;
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
                     * 获取定位解析类型，wifi或GNSSNavigation
                     * @return LocationType 定位解析类型，wifi或GNSSNavigation
                     * 
                     */
                    std::string GetLocationType() const;

                    /**
                     * 设置定位解析类型，wifi或GNSSNavigation
                     * @param _locationType 定位解析类型，wifi或GNSSNavigation
                     * 
                     */
                    void SetLocationType(const std::string& _locationType);

                    /**
                     * 判断参数 LocationType 是否已赋值
                     * @return LocationType 是否已赋值
                     * 
                     */
                    bool LocationTypeHasBeenSet() const;

                    /**
                     * 获取LoRaEdge卫星导航电文
                     * @return GNSSNavigation LoRaEdge卫星导航电文
                     * 
                     */
                    std::string GetGNSSNavigation() const;

                    /**
                     * 设置LoRaEdge卫星导航电文
                     * @param _gNSSNavigation LoRaEdge卫星导航电文
                     * 
                     */
                    void SetGNSSNavigation(const std::string& _gNSSNavigation);

                    /**
                     * 判断参数 GNSSNavigation 是否已赋值
                     * @return GNSSNavigation 是否已赋值
                     * 
                     */
                    bool GNSSNavigationHasBeenSet() const;

                    /**
                     * 获取wifi信息
                     * @return WiFiInfo wifi信息
                     * 
                     */
                    std::vector<WifiInfo> GetWiFiInfo() const;

                    /**
                     * 设置wifi信息
                     * @param _wiFiInfo wifi信息
                     * 
                     */
                    void SetWiFiInfo(const std::vector<WifiInfo>& _wiFiInfo);

                    /**
                     * 判断参数 WiFiInfo 是否已赋值
                     * @return WiFiInfo 是否已赋值
                     * 
                     */
                    bool WiFiInfoHasBeenSet() const;

                private:

                    /**
                     * 产品ID
                     */
                    std::string m_productId;
                    bool m_productIdHasBeenSet;

                    /**
                     * 设备名称
                     */
                    std::string m_deviceName;
                    bool m_deviceNameHasBeenSet;

                    /**
                     * 定位解析类型，wifi或GNSSNavigation
                     */
                    std::string m_locationType;
                    bool m_locationTypeHasBeenSet;

                    /**
                     * LoRaEdge卫星导航电文
                     */
                    std::string m_gNSSNavigation;
                    bool m_gNSSNavigationHasBeenSet;

                    /**
                     * wifi信息
                     */
                    std::vector<WifiInfo> m_wiFiInfo;
                    bool m_wiFiInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_DESCRIBEDEVICELOCATIONSOLVEREQUEST_H_
