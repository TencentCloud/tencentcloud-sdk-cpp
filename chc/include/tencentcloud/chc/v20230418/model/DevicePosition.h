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

#ifndef TENCENTCLOUD_CHC_V20230418_MODEL_DEVICEPOSITION_H_
#define TENCENTCLOUD_CHC_V20230418_MODEL_DEVICEPOSITION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Chc
    {
        namespace V20230418
        {
            namespace Model
            {
                /**
                * 设备及位置信息
                */
                class DevicePosition : public AbstractModel
                {
                public:
                    DevicePosition();
                    ~DevicePosition() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取设备SN
                     * @return Sn 设备SN
                     * 
                     */
                    std::string GetSn() const;

                    /**
                     * 设置设备SN
                     * @param _sn 设备SN
                     * 
                     */
                    void SetSn(const std::string& _sn);

                    /**
                     * 判断参数 Sn 是否已赋值
                     * @return Sn 是否已赋值
                     * 
                     */
                    bool SnHasBeenSet() const;

                    /**
                     * 获取机架名称
                     * @return RackName 机架名称
                     * 
                     */
                    std::string GetRackName() const;

                    /**
                     * 设置机架名称
                     * @param _rackName 机架名称
                     * 
                     */
                    void SetRackName(const std::string& _rackName);

                    /**
                     * 判断参数 RackName 是否已赋值
                     * @return RackName 是否已赋值
                     * 
                     */
                    bool RackNameHasBeenSet() const;

                    /**
                     * 获取机房管理单元ID
                     * @return IdcUnitId 机房管理单元ID
                     * 
                     */
                    uint64_t GetIdcUnitId() const;

                    /**
                     * 设置机房管理单元ID
                     * @param _idcUnitId 机房管理单元ID
                     * 
                     */
                    void SetIdcUnitId(const uint64_t& _idcUnitId);

                    /**
                     * 判断参数 IdcUnitId 是否已赋值
                     * @return IdcUnitId 是否已赋值
                     * 
                     */
                    bool IdcUnitIdHasBeenSet() const;

                    /**
                     * 获取机房名称
                     * @return IdcName 机房名称
                     * 
                     */
                    std::string GetIdcName() const;

                    /**
                     * 设置机房名称
                     * @param _idcName 机房名称
                     * 
                     */
                    void SetIdcName(const std::string& _idcName);

                    /**
                     * 判断参数 IdcName 是否已赋值
                     * @return IdcName 是否已赋值
                     * 
                     */
                    bool IdcNameHasBeenSet() const;

                    /**
                     * 获取机房管理单元名称
                     * @return IdcUnitName 机房管理单元名称
                     * 
                     */
                    std::string GetIdcUnitName() const;

                    /**
                     * 设置机房管理单元名称
                     * @param _idcUnitName 机房管理单元名称
                     * 
                     */
                    void SetIdcUnitName(const std::string& _idcUnitName);

                    /**
                     * 判断参数 IdcUnitName 是否已赋值
                     * @return IdcUnitName 是否已赋值
                     * 
                     */
                    bool IdcUnitNameHasBeenSet() const;

                    /**
                     * 获取设备固资。只有服务器设备才需要这个值
                     * @return AssetId 设备固资。只有服务器设备才需要这个值
                     * 
                     */
                    std::string GetAssetId() const;

                    /**
                     * 设置设备固资。只有服务器设备才需要这个值
                     * @param _assetId 设备固资。只有服务器设备才需要这个值
                     * 
                     */
                    void SetAssetId(const std::string& _assetId);

                    /**
                     * 判断参数 AssetId 是否已赋值
                     * @return AssetId 是否已赋值
                     * 
                     */
                    bool AssetIdHasBeenSet() const;

                    /**
                     * 获取机位编号，只有服务器设备才需要传这个值
                     * @return PositionCode 机位编号，只有服务器设备才需要传这个值
                     * 
                     */
                    uint64_t GetPositionCode() const;

                    /**
                     * 设置机位编号，只有服务器设备才需要传这个值
                     * @param _positionCode 机位编号，只有服务器设备才需要传这个值
                     * 
                     */
                    void SetPositionCode(const uint64_t& _positionCode);

                    /**
                     * 判断参数 PositionCode 是否已赋值
                     * @return PositionCode 是否已赋值
                     * 
                     */
                    bool PositionCodeHasBeenSet() const;

                    /**
                     * 获取server 代表服务器，netDevice 代表网络设备
                     * @return DeviceType server 代表服务器，netDevice 代表网络设备
                     * 
                     */
                    std::string GetDeviceType() const;

                    /**
                     * 设置server 代表服务器，netDevice 代表网络设备
                     * @param _deviceType server 代表服务器，netDevice 代表网络设备
                     * 
                     */
                    void SetDeviceType(const std::string& _deviceType);

                    /**
                     * 判断参数 DeviceType 是否已赋值
                     * @return DeviceType 是否已赋值
                     * 
                     */
                    bool DeviceTypeHasBeenSet() const;

                private:

                    /**
                     * 设备SN
                     */
                    std::string m_sn;
                    bool m_snHasBeenSet;

                    /**
                     * 机架名称
                     */
                    std::string m_rackName;
                    bool m_rackNameHasBeenSet;

                    /**
                     * 机房管理单元ID
                     */
                    uint64_t m_idcUnitId;
                    bool m_idcUnitIdHasBeenSet;

                    /**
                     * 机房名称
                     */
                    std::string m_idcName;
                    bool m_idcNameHasBeenSet;

                    /**
                     * 机房管理单元名称
                     */
                    std::string m_idcUnitName;
                    bool m_idcUnitNameHasBeenSet;

                    /**
                     * 设备固资。只有服务器设备才需要这个值
                     */
                    std::string m_assetId;
                    bool m_assetIdHasBeenSet;

                    /**
                     * 机位编号，只有服务器设备才需要传这个值
                     */
                    uint64_t m_positionCode;
                    bool m_positionCodeHasBeenSet;

                    /**
                     * server 代表服务器，netDevice 代表网络设备
                     */
                    std::string m_deviceType;
                    bool m_deviceTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CHC_V20230418_MODEL_DEVICEPOSITION_H_
