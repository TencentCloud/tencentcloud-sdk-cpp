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

#ifndef TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_DESCRIBEGATEWAYSUBDEVICELISTREQUEST_H_
#define TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_DESCRIBEGATEWAYSUBDEVICELISTREQUEST_H_

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
                * DescribeGatewaySubDeviceList请求参数结构体
                */
                class DescribeGatewaySubDeviceListRequest : public AbstractModel
                {
                public:
                    DescribeGatewaySubDeviceListRequest();
                    ~DescribeGatewaySubDeviceListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取网关产品ID
                     * @return GatewayProductId 网关产品ID
                     * 
                     */
                    std::string GetGatewayProductId() const;

                    /**
                     * 设置网关产品ID
                     * @param _gatewayProductId 网关产品ID
                     * 
                     */
                    void SetGatewayProductId(const std::string& _gatewayProductId);

                    /**
                     * 判断参数 GatewayProductId 是否已赋值
                     * @return GatewayProductId 是否已赋值
                     * 
                     */
                    bool GatewayProductIdHasBeenSet() const;

                    /**
                     * 获取网关设备名称
                     * @return GatewayDeviceName 网关设备名称
                     * 
                     */
                    std::string GetGatewayDeviceName() const;

                    /**
                     * 设置网关设备名称
                     * @param _gatewayDeviceName 网关设备名称
                     * 
                     */
                    void SetGatewayDeviceName(const std::string& _gatewayDeviceName);

                    /**
                     * 判断参数 GatewayDeviceName 是否已赋值
                     * @return GatewayDeviceName 是否已赋值
                     * 
                     */
                    bool GatewayDeviceNameHasBeenSet() const;

                    /**
                     * 获取分页偏移
                     * @return Offset 分页偏移
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置分页偏移
                     * @param _offset 分页偏移
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
                     * 获取分页的大小
                     * @return Limit 分页的大小
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置分页的大小
                     * @param _limit 分页的大小
                     * 
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                private:

                    /**
                     * 网关产品ID
                     */
                    std::string m_gatewayProductId;
                    bool m_gatewayProductIdHasBeenSet;

                    /**
                     * 网关设备名称
                     */
                    std::string m_gatewayDeviceName;
                    bool m_gatewayDeviceNameHasBeenSet;

                    /**
                     * 分页偏移
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 分页的大小
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_DESCRIBEGATEWAYSUBDEVICELISTREQUEST_H_
