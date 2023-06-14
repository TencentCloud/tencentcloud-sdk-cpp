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

#ifndef TENCENTCLOUD_IOTCLOUD_V20180614_MODEL_DESCRIBEALLDEVICESRESPONSE_H_
#define TENCENTCLOUD_IOTCLOUD_V20180614_MODEL_DESCRIBEALLDEVICESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/iotcloud/v20180614/model/DeviceProperty.h>


namespace TencentCloud
{
    namespace Iotcloud
    {
        namespace V20180614
        {
            namespace Model
            {
                /**
                * DescribeAllDevices返回参数结构体
                */
                class DescribeAllDevicesResponse : public AbstractModel
                {
                public:
                    DescribeAllDevicesResponse();
                    ~DescribeAllDevicesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取设备总数。
                     * @return TotalCount 设备总数。
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取查询的设备列表信息。
                     * @return Devices 查询的设备列表信息。
                     * 
                     */
                    std::vector<DeviceProperty> GetDevices() const;

                    /**
                     * 判断参数 Devices 是否已赋值
                     * @return Devices 是否已赋值
                     * 
                     */
                    bool DevicesHasBeenSet() const;

                private:

                    /**
                     * 设备总数。
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 查询的设备列表信息。
                     */
                    std::vector<DeviceProperty> m_devices;
                    bool m_devicesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTCLOUD_V20180614_MODEL_DESCRIBEALLDEVICESRESPONSE_H_
