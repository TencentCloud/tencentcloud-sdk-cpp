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

#ifndef TENCENTCLOUD_IOTCLOUD_V20210408_MODEL_DESCRIBEFIRMWARETASKDEVICESRESPONSE_H_
#define TENCENTCLOUD_IOTCLOUD_V20210408_MODEL_DESCRIBEFIRMWARETASKDEVICESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/iotcloud/v20210408/model/DeviceUpdateStatus.h>


namespace TencentCloud
{
    namespace Iotcloud
    {
        namespace V20210408
        {
            namespace Model
            {
                /**
                * DescribeFirmwareTaskDevices返回参数结构体
                */
                class DescribeFirmwareTaskDevicesResponse : public AbstractModel
                {
                public:
                    DescribeFirmwareTaskDevicesResponse();
                    ~DescribeFirmwareTaskDevicesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取固件升级任务的设备总数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Total 固件升级任务的设备总数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t GetTotal() const;

                    /**
                     * 判断参数 Total 是否已赋值
                     * @return Total 是否已赋值
                     */
                    bool TotalHasBeenSet() const;

                    /**
                     * 获取固件升级任务的设备列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Devices 固件升级任务的设备列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<DeviceUpdateStatus> GetDevices() const;

                    /**
                     * 判断参数 Devices 是否已赋值
                     * @return Devices 是否已赋值
                     */
                    bool DevicesHasBeenSet() const;

                private:

                    /**
                     * 固件升级任务的设备总数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_total;
                    bool m_totalHasBeenSet;

                    /**
                     * 固件升级任务的设备列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<DeviceUpdateStatus> m_devices;
                    bool m_devicesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTCLOUD_V20210408_MODEL_DESCRIBEFIRMWARETASKDEVICESRESPONSE_H_
