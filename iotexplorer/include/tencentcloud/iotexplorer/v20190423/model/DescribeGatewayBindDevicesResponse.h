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

#ifndef TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_DESCRIBEGATEWAYBINDDEVICESRESPONSE_H_
#define TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_DESCRIBEGATEWAYBINDDEVICESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/iotexplorer/v20190423/model/BindDeviceInfo.h>


namespace TencentCloud
{
    namespace Iotexplorer
    {
        namespace V20190423
        {
            namespace Model
            {
                /**
                * DescribeGatewayBindDevices返回参数结构体
                */
                class DescribeGatewayBindDevicesResponse : public AbstractModel
                {
                public:
                    DescribeGatewayBindDevicesResponse();
                    ~DescribeGatewayBindDevicesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取子设备信息。
                     * @return Devices 子设备信息。
                     * 
                     */
                    std::vector<BindDeviceInfo> GetDevices() const;

                    /**
                     * 判断参数 Devices 是否已赋值
                     * @return Devices 是否已赋值
                     * 
                     */
                    bool DevicesHasBeenSet() const;

                    /**
                     * 获取子设备总数。
                     * @return Total 子设备总数。
                     * 
                     */
                    int64_t GetTotal() const;

                    /**
                     * 判断参数 Total 是否已赋值
                     * @return Total 是否已赋值
                     * 
                     */
                    bool TotalHasBeenSet() const;

                    /**
                     * 获取子设备所属的产品名。
                     * @return ProductName 子设备所属的产品名。
                     * 
                     */
                    std::string GetProductName() const;

                    /**
                     * 判断参数 ProductName 是否已赋值
                     * @return ProductName 是否已赋值
                     * 
                     */
                    bool ProductNameHasBeenSet() const;

                private:

                    /**
                     * 子设备信息。
                     */
                    std::vector<BindDeviceInfo> m_devices;
                    bool m_devicesHasBeenSet;

                    /**
                     * 子设备总数。
                     */
                    int64_t m_total;
                    bool m_totalHasBeenSet;

                    /**
                     * 子设备所属的产品名。
                     */
                    std::string m_productName;
                    bool m_productNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_DESCRIBEGATEWAYBINDDEVICESRESPONSE_H_
