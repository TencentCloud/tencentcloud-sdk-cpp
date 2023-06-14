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

#ifndef TENCENTCLOUD_IOTCLOUD_V20210408_MODEL_DESCRIBEDEVICESREQUEST_H_
#define TENCENTCLOUD_IOTCLOUD_V20210408_MODEL_DESCRIBEDEVICESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iotcloud
    {
        namespace V20210408
        {
            namespace Model
            {
                /**
                * DescribeDevices请求参数结构体
                */
                class DescribeDevicesRequest : public AbstractModel
                {
                public:
                    DescribeDevicesRequest();
                    ~DescribeDevicesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取需要查看设备列表的产品 ID
                     * @return ProductId 需要查看设备列表的产品 ID
                     * 
                     */
                    std::string GetProductId() const;

                    /**
                     * 设置需要查看设备列表的产品 ID
                     * @param _productId 需要查看设备列表的产品 ID
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
                     * 获取偏移量，Offset从0开始
                     * @return Offset 偏移量，Offset从0开始
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置偏移量，Offset从0开始
                     * @param _offset 偏移量，Offset从0开始
                     * 
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取分页的大小，数值范围 10-250
                     * @return Limit 分页的大小，数值范围 10-250
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置分页的大小，数值范围 10-250
                     * @param _limit 分页的大小，数值范围 10-250
                     * 
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取设备固件版本号，若不带此参数会返回所有固件版本的设备。传"None-FirmwareVersion"查询无版本号的设备
                     * @return FirmwareVersion 设备固件版本号，若不带此参数会返回所有固件版本的设备。传"None-FirmwareVersion"查询无版本号的设备
                     * 
                     */
                    std::string GetFirmwareVersion() const;

                    /**
                     * 设置设备固件版本号，若不带此参数会返回所有固件版本的设备。传"None-FirmwareVersion"查询无版本号的设备
                     * @param _firmwareVersion 设备固件版本号，若不带此参数会返回所有固件版本的设备。传"None-FirmwareVersion"查询无版本号的设备
                     * 
                     */
                    void SetFirmwareVersion(const std::string& _firmwareVersion);

                    /**
                     * 判断参数 FirmwareVersion 是否已赋值
                     * @return FirmwareVersion 是否已赋值
                     * 
                     */
                    bool FirmwareVersionHasBeenSet() const;

                    /**
                     * 获取需要过滤的设备名称
                     * @return DeviceName 需要过滤的设备名称
                     * 
                     */
                    std::string GetDeviceName() const;

                    /**
                     * 设置需要过滤的设备名称
                     * @param _deviceName 需要过滤的设备名称
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
                     * 获取设备是否启用，0禁用状态1启用状态，默认不区分
                     * @return EnableState 设备是否启用，0禁用状态1启用状态，默认不区分
                     * 
                     */
                    uint64_t GetEnableState() const;

                    /**
                     * 设置设备是否启用，0禁用状态1启用状态，默认不区分
                     * @param _enableState 设备是否启用，0禁用状态1启用状态，默认不区分
                     * 
                     */
                    void SetEnableState(const uint64_t& _enableState);

                    /**
                     * 判断参数 EnableState 是否已赋值
                     * @return EnableState 是否已赋值
                     * 
                     */
                    bool EnableStateHasBeenSet() const;

                private:

                    /**
                     * 需要查看设备列表的产品 ID
                     */
                    std::string m_productId;
                    bool m_productIdHasBeenSet;

                    /**
                     * 偏移量，Offset从0开始
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 分页的大小，数值范围 10-250
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 设备固件版本号，若不带此参数会返回所有固件版本的设备。传"None-FirmwareVersion"查询无版本号的设备
                     */
                    std::string m_firmwareVersion;
                    bool m_firmwareVersionHasBeenSet;

                    /**
                     * 需要过滤的设备名称
                     */
                    std::string m_deviceName;
                    bool m_deviceNameHasBeenSet;

                    /**
                     * 设备是否启用，0禁用状态1启用状态，默认不区分
                     */
                    uint64_t m_enableState;
                    bool m_enableStateHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTCLOUD_V20210408_MODEL_DESCRIBEDEVICESREQUEST_H_
