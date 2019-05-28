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

#ifndef TENCENTCLOUD_IOTCLOUD_V20180614_MODEL_DESCRIBEDEVICESREQUEST_H_
#define TENCENTCLOUD_IOTCLOUD_V20180614_MODEL_DESCRIBEDEVICESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iotcloud
    {
        namespace V20180614
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
                     */
                    std::string GetProductId() const;

                    /**
                     * 设置需要查看设备列表的产品 ID
                     * @param ProductId 需要查看设备列表的产品 ID
                     */
                    void SetProductId(const std::string& _productId);

                    /**
                     * 判断参数 ProductId 是否已赋值
                     * @return ProductId 是否已赋值
                     */
                    bool ProductIdHasBeenSet() const;

                    /**
                     * 获取分页偏移
                     * @return Offset 分页偏移
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置分页偏移
                     * @param Offset 分页偏移
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取分页的大小，数值范围 10-100
                     * @return Limit 分页的大小，数值范围 10-100
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置分页的大小，数值范围 10-100
                     * @param Limit 分页的大小，数值范围 10-100
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取设备固件版本号，若不带此参数会返回所有固件版本的设备
                     * @return FirmwareVersion 设备固件版本号，若不带此参数会返回所有固件版本的设备
                     */
                    std::string GetFirmwareVersion() const;

                    /**
                     * 设置设备固件版本号，若不带此参数会返回所有固件版本的设备
                     * @param FirmwareVersion 设备固件版本号，若不带此参数会返回所有固件版本的设备
                     */
                    void SetFirmwareVersion(const std::string& _firmwareVersion);

                    /**
                     * 判断参数 FirmwareVersion 是否已赋值
                     * @return FirmwareVersion 是否已赋值
                     */
                    bool FirmwareVersionHasBeenSet() const;

                private:

                    /**
                     * 需要查看设备列表的产品 ID
                     */
                    std::string m_productId;
                    bool m_productIdHasBeenSet;

                    /**
                     * 分页偏移
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 分页的大小，数值范围 10-100
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 设备固件版本号，若不带此参数会返回所有固件版本的设备
                     */
                    std::string m_firmwareVersion;
                    bool m_firmwareVersionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTCLOUD_V20180614_MODEL_DESCRIBEDEVICESREQUEST_H_
