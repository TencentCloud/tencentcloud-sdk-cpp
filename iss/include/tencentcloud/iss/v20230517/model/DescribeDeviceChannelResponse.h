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

#ifndef TENCENTCLOUD_ISS_V20230517_MODEL_DESCRIBEDEVICECHANNELRESPONSE_H_
#define TENCENTCLOUD_ISS_V20230517_MODEL_DESCRIBEDEVICECHANNELRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iss
    {
        namespace V20230517
        {
            namespace Model
            {
                /**
                * 查询设备通道信息返回结果
                */
                class DescribeDeviceChannelResponse : public AbstractModel
                {
                public:
                    DescribeDeviceChannelResponse();
                    ~DescribeDeviceChannelResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取设备 ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DeviceId 设备 ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDeviceId() const;

                    /**
                     * 判断参数 DeviceId 是否已赋值
                     * @return DeviceId 是否已赋值
                     * 
                     */
                    bool DeviceIdHasBeenSet() const;

                    /**
                     * 获取通道 ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ChannelId 通道 ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetChannelId() const;

                    /**
                     * 判断参数 ChannelId 是否已赋值
                     * @return ChannelId 是否已赋值
                     * 
                     */
                    bool ChannelIdHasBeenSet() const;

                    /**
                     * 获取通道编码
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ChannelCode 通道编码
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetChannelCode() const;

                    /**
                     * 判断参数 ChannelCode 是否已赋值
                     * @return ChannelCode 是否已赋值
                     * 
                     */
                    bool ChannelCodeHasBeenSet() const;

                    /**
                     * 获取通道名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Name 通道名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取流状态（0:未传输,1:传输中）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Status 流状态（0:未传输,1:传输中）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取是否可控 Ptz（0:不可控,1:可控）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PTZType 是否可控 Ptz（0:不可控,1:可控）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetPTZType() const;

                    /**
                     * 判断参数 PTZType 是否已赋值
                     * @return PTZType 是否已赋值
                     * 
                     */
                    bool PTZTypeHasBeenSet() const;

                    /**
                     * 获取通道厂商
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Manufacturer 通道厂商
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetManufacturer() const;

                    /**
                     * 判断参数 Manufacturer 是否已赋值
                     * @return Manufacturer 是否已赋值
                     * 
                     */
                    bool ManufacturerHasBeenSet() const;

                    /**
                     * 获取通道支持分辨率（分辨率列表由‘/’隔开，国标协议样例（6/3），自定义样例（12800960/640480））
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Resolution 通道支持分辨率（分辨率列表由‘/’隔开，国标协议样例（6/3），自定义样例（12800960/640480））
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetResolution() const;

                    /**
                     * 判断参数 Resolution 是否已赋值
                     * @return Resolution 是否已赋值
                     * 
                     */
                    bool ResolutionHasBeenSet() const;

                    /**
                     * 获取通道在离线状态（0:离线,1:在线）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return State 通道在离线状态（0:离线,1:在线）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetState() const;

                    /**
                     * 判断参数 State 是否已赋值
                     * @return State 是否已赋值
                     * 
                     */
                    bool StateHasBeenSet() const;

                    /**
                     * 获取所在地域
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Region 所在地域
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     * 
                     */
                    bool RegionHasBeenSet() const;

                private:

                    /**
                     * 设备 ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_deviceId;
                    bool m_deviceIdHasBeenSet;

                    /**
                     * 通道 ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_channelId;
                    bool m_channelIdHasBeenSet;

                    /**
                     * 通道编码
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_channelCode;
                    bool m_channelCodeHasBeenSet;

                    /**
                     * 通道名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 流状态（0:未传输,1:传输中）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 是否可控 Ptz（0:不可控,1:可控）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_pTZType;
                    bool m_pTZTypeHasBeenSet;

                    /**
                     * 通道厂商
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_manufacturer;
                    bool m_manufacturerHasBeenSet;

                    /**
                     * 通道支持分辨率（分辨率列表由‘/’隔开，国标协议样例（6/3），自定义样例（12800960/640480））
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_resolution;
                    bool m_resolutionHasBeenSet;

                    /**
                     * 通道在离线状态（0:离线,1:在线）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_state;
                    bool m_stateHasBeenSet;

                    /**
                     * 所在地域
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ISS_V20230517_MODEL_DESCRIBEDEVICECHANNELRESPONSE_H_
